// Lean compiler output
// Module: Spectral
// Imports: public import Init public meta import Init public import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
lean_object* l_List_range(lean_object*);
double lean_float_mul(double, double);
lean_object* lean_nat_mul(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
double sqrt(double);
double cos(double);
double sin(double);
double lean_float_add(double, double);
double lean_float_sub(double, double);
double fabs(double);
uint8_t lean_float_decLt(double, double);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
double log(double);
double lean_float_negate(double);
double exp(double);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_gcd(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Float_repr(double, lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
static const lean_string_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__0_value;
static const lean_string_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__1 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__1_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__1_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__2 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__2_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__2_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__3 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__3_value;
static const lean_string_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__4 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__4_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__4_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__5 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__5_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__3_value),((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__5_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__6 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__6_value;
static lean_once_cell_t lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__7;
static const lean_string_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__8 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__8_value;
static lean_once_cell_t lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__9;
static lean_once_cell_t lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__0_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__11 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__11_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__8_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__12 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__12_value;
static const lean_string_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__13 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__13_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__13_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__14 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__14_value;
static const lean_string_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "den"};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__15 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__15_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__15_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__16 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__16_value;
static lean_once_cell_t lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spectral_Spectral_Certified_instReprQRat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Certified_instReprQRat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Certified_instReprQRat___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat___closed__0_value;
LEAN_EXPORT const lean_object* lp_spectral_Spectral_Certified_instReprQRat = (const lean_object*)&lp_spectral_Spectral_Certified_instReprQRat___closed__0_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_normalize(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_q(lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_qZero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_qZero___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_qZero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_qZero___closed__1;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_qZero;
static lean_once_cell_t lp_spectral_Spectral_Certified_qOne___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_qOne___closed__0;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_qOne;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_QRat_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spectral_Spectral_Certified_instBEqQRat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Certified_QRat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Certified_instBEqQRat___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_instBEqQRat___closed__0_value;
LEAN_EXPORT const lean_object* lp_spectral_Spectral_Certified_instBEqQRat = (const lean_object*)&lp_spectral_Spectral_Certified_instBEqQRat___closed__0_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_div___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_neg(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_sub___boxed(lean_object*, lean_object*);
static const lean_string_object lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instToStringQRat___lam__0(lean_object*);
static const lean_closure_object lp_spectral_Spectral_Certified_instToStringQRat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Certified_instToStringQRat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Certified_instToStringQRat___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_instToStringQRat___closed__0_value;
LEAN_EXPORT const lean_object* lp_spectral_Spectral_Certified_instToStringQRat = (const lean_object*)&lp_spectral_Spectral_Certified_instToStringQRat___closed__0_value;
static lean_once_cell_t lp_spectral_Spectral_Certified_floatPi___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_floatPi___closed__0;
LEAN_EXPORT double lp_spectral_Spectral_Certified_floatPi;
static lean_once_cell_t lp_spectral_Spectral_Certified_alphaCrit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_alphaCrit___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_alphaCrit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_alphaCrit___closed__1;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_alphaCrit;
static lean_once_cell_t lp_spectral_Spectral_Certified_feWeight___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_feWeight___closed__0;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_feWeight;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vesicaScale;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vesicaVolume;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_geomDensityCoeff;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_arithDensityCoeff;
static lean_once_cell_t lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__1;
LEAN_EXPORT double lp_spectral_Spectral_Certified_vesicaHeightOverWidth;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vesicaReflection(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vesicaReflection___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_phiRe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_phiRe___closed__0;
LEAN_EXPORT double lp_spectral_Spectral_Certified_phiRe(double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiRe___boxed(lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_phiIm(double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiIm___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_phiInvolutionCert(double, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiInvolutionCert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_phiFixesCriticalCert(double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiFixesCriticalCert___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Certified_divisorsOf_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Certified_divisorsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_mapTR_loop___at___00Spectral_Certified_divisorsOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorsOf(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorsOf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorCount(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorCount___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isPrime___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isPrime___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isPrime(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isPrime___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_gAlpha___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_gAlpha___closed__0;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gAlpha(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gAlpha___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gZeta(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gZeta___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_primeGAlphaOk(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_primeGAlphaOk___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___lam__0___boxed(lean_object*);
static const lean_closure_object lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___closed__0_value;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_gAlphaTableOk___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_gAlphaTableOk___closed__0;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_gAlphaTableOk(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gAlphaTableOk___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_wrongScalePrimeValue(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_wrongScalePrimeValue___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__3;
static lean_once_cell_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_intersectionUniqueLineCert;
static const lean_ctor_object lp_spectral_Spectral_Certified_examplePrimeSet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_spectral_Spectral_Certified_examplePrimeSet___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_examplePrimeSet___closed__0_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_examplePrimeSet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_spectral_Spectral_Certified_examplePrimeSet___closed__0_value)}};
static const lean_object* lp_spectral_Spectral_Certified_examplePrimeSet___closed__1 = (const lean_object*)&lp_spectral_Spectral_Certified_examplePrimeSet___closed__1_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_examplePrimeSet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_spectral_Spectral_Certified_examplePrimeSet___closed__1_value)}};
static const lean_object* lp_spectral_Spectral_Certified_examplePrimeSet___closed__2 = (const lean_object*)&lp_spectral_Spectral_Certified_examplePrimeSet___closed__2_value;
LEAN_EXPORT const lean_object* lp_spectral_Spectral_Certified_examplePrimeSet = (const lean_object*)&lp_spectral_Spectral_Certified_examplePrimeSet___closed__2_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_starLeafCount(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_starLeafCount___boxed(lean_object*);
static lean_once_cell_t lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___closed__0;
LEAN_EXPORT double lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0(lean_object*, lean_object*, double, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_dftRowEnergy___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_dftRowEnergy___closed__0;
LEAN_EXPORT double lp_spectral_Spectral_Certified_dftRowEnergy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftRowEnergy___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__1;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_dftUnitary___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftUnitary___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_dftUnitary(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftUnitary___boxed(lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_dftTransmission(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftTransmission___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_finiteLeafCount(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_finiteLeafCount___boxed(lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_arithmeticLpCoeff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_arithmeticLpCoeff___boxed(lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_arithmeticLpAtUnit(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_arithmeticLpAtUnit___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_stripPrimeFactors_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_stripPrimeFactors_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_stripPrimeFactors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_stripPrimeFactors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_vonMangoldt___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vonMangoldt___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_vonMangoldt(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vonMangoldt___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_gaussianTestReal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_gaussianTestReal___closed__0;
LEAN_EXPORT double lp_spectral_Spectral_Certified_gaussianTestReal(double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gaussianTestReal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isSmoothOver___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isSmoothOver___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isSmoothOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isSmoothOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Certified_numbersFromPrimes_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_mapTR_loop___at___00Spectral_Certified_numbersFromPrimes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_numbersFromPrimes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_numbersFromPrimes___boxed(lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_List_foldl___at___00Spectral_Certified_arithmeticSpectralPairing_spec__0(double, double, double, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_arithmeticSpectralPairing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_arithmeticSpectralPairing(lean_object*, lean_object*, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_arithmeticSpectralPairing___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_finiteSpectralPairing(lean_object*, lean_object*, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_finiteSpectralPairing___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__3;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__4;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__5;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__6;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_finiteSpecArbCert;
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(double);
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sampleK"};
static const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__0_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__0_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__1 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__1_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__1_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__2 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__2_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__2_value),((lean_object*)&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__5_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__3 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__3_value;
static lean_once_cell_t lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__4;
static const lean_string_object lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sampleR"};
static const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__5 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__5_value;
static const lean_ctor_object lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__5_value)}};
static const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__6 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spectral_Spectral_Certified_instReprScatteringData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Certified_instReprScatteringData_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData___closed__0_value;
LEAN_EXPORT const lean_object* lp_spectral_Spectral_Certified_instReprScatteringData = (const lean_object*)&lp_spectral_Spectral_Certified_instReprScatteringData___closed__0_value;
static lean_once_cell_t lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___closed__0;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0(double, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_reflectionAtNegK(lean_object*, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_reflectionAtNegK___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringSymmetric___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringSymmetric___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringSymmetric(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringSymmetric___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___closed__0;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0(double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___boxed(lean_object*);
static const lean_closure_object lp_spectral_Spectral_Certified_scatteringUnitModulus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Certified_scatteringUnitModulus___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_scatteringUnitModulus___closed__0_value;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringUnitModulus(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringUnitModulus___boxed(lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Certified_leadingReflectionModulus(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_leadingReflectionModulus___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_sampleScatteringData___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_sampleScatteringData___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_sampleScatteringData___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Certified_sampleScatteringData___closed__3;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__4___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__4;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__5___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__5;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__6___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__6;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__7___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__7;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__8___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__8;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__9___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_sampleScatteringData___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_sampleScatteringData___closed__9;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_marchenkoSampleScatteringCert(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_marchenkoSampleScatteringCert___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_lpMatchesArithmeticCert(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_lpMatchesArithmeticCert___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__3;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__4;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___boxed(lean_object*);
static const lean_closure_object lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__0 = (const lean_object*)&lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__0_value;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__3;
static lean_once_cell_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__4;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__2;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_fullCertificateOk;
LEAN_EXPORT uint8_t lp_spectral_Spectral_combinatorialCertificateOk;
LEAN_EXPORT uint8_t lp_spectral_Spectral_finiteAnalyticCertificateOk;
LEAN_EXPORT uint8_t lp_spectral_Spectral_spectralPaperCertificateOk;
LEAN_EXPORT lean_object* lp_spectral_IO_print___at___00IO_println___at___00Spectral_printVerificationStatus_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_IO_print___at___00IO_println___at___00Spectral_printVerificationStatus_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 62, .m_data = "\n  ASSUMED (paper-level axioms — not in skeleton proof chain):"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__0 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__0_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "    Assumed.hilbertPolya, vesicaStarOperatorUniqueness"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__1 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__1_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "    Assumed.marchenkoTheorem8_3, distributionalXiLimit"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__2 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__2_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 62, .m_data = "\n  RIGIDITY (axiomatic logical skeleton — implication PROVED):"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__3 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__3_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "    [OK] Rigidity.finite_structural_fulcrum (Thm 1.2 certificate)"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__4 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__4_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 56, .m_data = "    [OK] Rigidity.structural_rigidity (zeros on Re(s)=α)"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__5 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__5_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "    [OK] Rigidity.zeros_on_critical_line (unconditional corollary)"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__6 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__6_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "    Analytic axioms: spectral_theorem, hp_realization,"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__7 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__7_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "      certified_seeds_imply_self_adjoint, operator_exists"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__8 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__8_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "\n  See VERIFICATION_STATUS.md"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__9 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__9_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "    fullCertificateOk = "};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__10 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__10_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__11 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__11_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__12 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__12_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "    finiteAnalyticCertificateOk = "};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__13 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__13_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "    [OK] intersection_unique_line (Thm 1.2 fulcrum)"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__14 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__14_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "    [OK] g_alpha(p)=alpha, DFT unitarity, L_p samples"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__15 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__15_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "    [OK] vonMangoldt, finite identity (3.2), finiteSpecArbCert"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__16 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__16_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "    combinatorialCertificateOk = "};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__17 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__17_value;
static lean_once_cell_t lp_spectral_Spectral_printVerificationStatus___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_printVerificationStatus___closed__18;
static lean_once_cell_t lp_spectral_Spectral_printVerificationStatus___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_printVerificationStatus___closed__19;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ", g_zeta(6)="};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__20 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__20_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "================================================================"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__21 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__21_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "  SPECTRAL.PDF — UNIFIED LEAN VERIFICATION"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__22 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__22_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "  The Structural Intersection of Arithmetic and Geometry"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__23 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__23_value;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 58, .m_data = "\n  CERTIFIED (native_decide — finite structural rigidity):"};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__24 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__24_value;
static lean_once_cell_t lp_spectral_Spectral_printVerificationStatus___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_printVerificationStatus___closed__25;
static lean_once_cell_t lp_spectral_Spectral_printVerificationStatus___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_printVerificationStatus___closed__26;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "    g_zeta(1)="};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__27 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__27_value;
static lean_once_cell_t lp_spectral_Spectral_printVerificationStatus___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_printVerificationStatus___closed__28;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", Vol = "};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__29 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__29_value;
static lean_once_cell_t lp_spectral_Spectral_printVerificationStatus___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_printVerificationStatus___closed__30;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "    alpha = "};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__31 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__31_value;
static lean_once_cell_t lp_spectral_Spectral_printVerificationStatus___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_printVerificationStatus___closed__32;
static const lean_string_object lp_spectral_Spectral_printVerificationStatus___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", r = "};
static const lean_object* lp_spectral_Spectral_printVerificationStatus___closed__33 = (const lean_object*)&lp_spectral_Spectral_printVerificationStatus___closed__33_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_printVerificationStatus();
LEAN_EXPORT lean_object* lp_spectral_Spectral_printVerificationStatus___boxed(lean_object*);
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_spectral_main___boxed(lean_object*);
static lean_object* _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(7u);
v___x_15_ = lean_nat_to_int(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__0));
v___x_18_ = lean_string_length(v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__9, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__9_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__9);
v___x_20_ = lean_nat_to_int(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = lean_nat_to_int(v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___redArg(lean_object* v_x_33_){
_start:
{
lean_object* v_num_34_; lean_object* v_den_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_87_; 
v_num_34_ = lean_ctor_get(v_x_33_, 0);
v_den_35_ = lean_ctor_get(v_x_33_, 1);
v_isSharedCheck_87_ = !lean_is_exclusive(v_x_33_);
if (v_isSharedCheck_87_ == 0)
{
v___x_37_ = v_x_33_;
v_isShared_38_ = v_isSharedCheck_87_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_den_35_);
lean_inc(v_num_34_);
lean_dec(v_x_33_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_87_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___y_43_; uint8_t v___y_44_; lean_object* v___y_45_; lean_object* v___y_59_; lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_39_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__5));
v___x_40_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__6));
v___x_41_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__7, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__7_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__7);
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17);
v___x_81_ = lean_int_dec_lt(v_num_34_, v___x_80_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = l_Int_repr(v_num_34_);
lean_dec(v_num_34_);
v___x_83_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
v___y_59_ = v___x_83_;
goto v___jp_58_;
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = l_Int_repr(v_num_34_);
lean_dec(v_num_34_);
v___x_85_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
v___x_86_ = l_Repr_addAppParen(v___x_85_, v___x_79_);
v___y_59_ = v___x_86_;
goto v___jp_58_;
}
v___jp_42_:
{
lean_object* v___x_47_; 
if (v_isShared_38_ == 0)
{
lean_ctor_set_tag(v___x_37_, 4);
lean_ctor_set(v___x_37_, 1, v___y_45_);
lean_ctor_set(v___x_37_, 0, v___x_41_);
v___x_47_ = v___x_37_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_57_, 1, v___y_45_);
v___x_47_ = v_reuseFailAlloc_57_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_48_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*1, v___y_44_);
v___x_49_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_49_, 0, v___y_43_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10);
v___x_51_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__11));
v___x_52_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v___x_49_);
v___x_53_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__12));
v___x_54_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_52_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
v___x_55_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_50_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
v___x_56_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*1, v___y_44_);
return v___x_56_;
}
}
v___jp_58_:
{
lean_object* v___x_60_; uint8_t v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_60_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_41_);
lean_ctor_set(v___x_60_, 1, v___y_59_);
v___x_61_ = 0;
v___x_62_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set_uint8(v___x_62_, sizeof(void*)*1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_40_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__14));
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = lean_box(1);
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__16));
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_39_);
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17);
v___x_73_ = lean_int_dec_lt(v_den_35_, v___x_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = l_Int_repr(v_den_35_);
lean_dec(v_den_35_);
v___x_75_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
v___y_43_ = v___x_70_;
v___y_44_ = v___x_61_;
v___y_45_ = v___x_75_;
goto v___jp_42_;
}
else
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = l_Int_repr(v_den_35_);
lean_dec(v_den_35_);
v___x_77_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
v___x_78_ = l_Repr_addAppParen(v___x_77_, v___x_71_);
v___y_43_ = v___x_70_;
v___y_44_ = v___x_61_;
v___y_45_ = v___x_78_;
goto v___jp_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lp_spectral_Spectral_Certified_instReprQRat_repr___redArg(v_x_88_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprQRat_repr___boxed(lean_object* v_x_91_, lean_object* v_prec_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_spectral_Spectral_Certified_instReprQRat_repr(v_x_91_, v_prec_92_);
lean_dec(v_prec_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_normalize(lean_object* v_q_96_){
_start:
{
lean_object* v_num_97_; lean_object* v_den_98_; lean_object* v___x_99_; lean_object* v___y_101_; lean_object* v___y_102_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_num_97_ = lean_ctor_get(v_q_96_, 0);
v_den_98_ = lean_ctor_get(v_q_96_, 1);
v___x_99_ = lean_unsigned_to_nat(0u);
v___x_112_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17);
v___x_113_ = lean_int_dec_eq(v_den_98_, v___x_112_);
if (v___x_113_ == 0)
{
uint8_t v___x_114_; lean_object* v___y_116_; 
lean_inc(v_den_98_);
lean_inc(v_num_97_);
lean_dec_ref(v_q_96_);
v___x_114_ = lean_int_dec_lt(v_den_98_, v___x_112_);
if (v___x_114_ == 0)
{
v___y_116_ = v_num_97_;
goto v___jp_115_;
}
else
{
lean_object* v___x_118_; 
v___x_118_ = lean_int_neg(v_num_97_);
lean_dec(v_num_97_);
v___y_116_ = v___x_118_;
goto v___jp_115_;
}
v___jp_115_:
{
if (v___x_114_ == 0)
{
v___y_101_ = v___y_116_;
v___y_102_ = v_den_98_;
goto v___jp_100_;
}
else
{
lean_object* v___x_117_; 
v___x_117_ = lean_int_neg(v_den_98_);
lean_dec(v_den_98_);
v___y_101_ = v___y_116_;
v___y_102_ = v___x_117_;
goto v___jp_100_;
}
}
}
else
{
return v_q_96_;
}
v___jp_100_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v_g_105_; uint8_t v___x_106_; 
v___x_103_ = lean_nat_abs(v___y_101_);
v___x_104_ = lean_nat_abs(v___y_102_);
v_g_105_ = lean_nat_gcd(v___x_103_, v___x_104_);
lean_dec(v___x_104_);
lean_dec(v___x_103_);
v___x_106_ = lean_nat_dec_eq(v_g_105_, v___x_99_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_nat_to_int(v_g_105_);
v___x_108_ = lean_int_ediv(v___y_101_, v___x_107_);
lean_dec(v___y_101_);
v___x_109_ = lean_int_ediv(v___y_102_, v___x_107_);
lean_dec(v___x_107_);
lean_dec(v___y_102_);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
return v___x_110_;
}
else
{
lean_object* v___x_111_; 
lean_dec(v_g_105_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___y_101_);
lean_ctor_set(v___x_111_, 1, v___y_102_);
return v___x_111_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_q(lean_object* v_a_119_, lean_object* v_d_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_a_119_);
lean_ctor_set(v___x_121_, 1, v_d_120_);
v___x_122_ = lp_spectral_Spectral_Certified_QRat_normalize(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_qZero___closed__0(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(1u);
v___x_124_ = lean_nat_to_int(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_qZero___closed__1(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_126_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__17);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_qZero(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__1, &lp_spectral_Spectral_Certified_qZero___closed__1_once, _init_lp_spectral_Spectral_Certified_qZero___closed__1);
return v___x_128_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_qOne___closed__0(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_qOne(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&lp_spectral_Spectral_Certified_qOne___closed__0, &lp_spectral_Spectral_Certified_qOne___closed__0_once, _init_lp_spectral_Spectral_Certified_qOne___closed__0);
return v___x_131_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_QRat_beq(lean_object* v_x_132_, lean_object* v_y_133_){
_start:
{
lean_object* v_a_134_; lean_object* v_num_135_; lean_object* v_den_136_; lean_object* v_b_137_; lean_object* v_num_138_; lean_object* v_den_139_; uint8_t v___x_140_; 
v_a_134_ = lp_spectral_Spectral_Certified_QRat_normalize(v_x_132_);
v_num_135_ = lean_ctor_get(v_a_134_, 0);
lean_inc(v_num_135_);
v_den_136_ = lean_ctor_get(v_a_134_, 1);
lean_inc(v_den_136_);
lean_dec_ref(v_a_134_);
v_b_137_ = lp_spectral_Spectral_Certified_QRat_normalize(v_y_133_);
v_num_138_ = lean_ctor_get(v_b_137_, 0);
lean_inc(v_num_138_);
v_den_139_ = lean_ctor_get(v_b_137_, 1);
lean_inc(v_den_139_);
lean_dec_ref(v_b_137_);
v___x_140_ = lean_int_dec_eq(v_num_135_, v_num_138_);
lean_dec(v_num_138_);
lean_dec(v_num_135_);
if (v___x_140_ == 0)
{
lean_dec(v_den_139_);
lean_dec(v_den_136_);
return v___x_140_;
}
else
{
uint8_t v___x_141_; 
v___x_141_ = lean_int_dec_eq(v_den_136_, v_den_139_);
lean_dec(v_den_139_);
lean_dec(v_den_136_);
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_beq___boxed(lean_object* v_x_142_, lean_object* v_y_143_){
_start:
{
uint8_t v_res_144_; lean_object* v_r_145_; 
v_res_144_ = lp_spectral_Spectral_Certified_QRat_beq(v_x_142_, v_y_143_);
v_r_145_ = lean_box(v_res_144_);
return v_r_145_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_add(lean_object* v_x_148_, lean_object* v_y_149_){
_start:
{
lean_object* v_num_150_; lean_object* v_den_151_; lean_object* v_num_152_; lean_object* v_den_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_num_150_ = lean_ctor_get(v_x_148_, 0);
v_den_151_ = lean_ctor_get(v_x_148_, 1);
v_num_152_ = lean_ctor_get(v_y_149_, 0);
v_den_153_ = lean_ctor_get(v_y_149_, 1);
v___x_154_ = lean_int_mul(v_num_150_, v_den_153_);
v___x_155_ = lean_int_mul(v_num_152_, v_den_151_);
v___x_156_ = lean_int_add(v___x_154_, v___x_155_);
lean_dec(v___x_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_int_mul(v_den_151_, v_den_153_);
v___x_158_ = lp_spectral_Spectral_Certified_q(v___x_156_, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_add___boxed(lean_object* v_x_159_, lean_object* v_y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = lp_spectral_Spectral_Certified_QRat_add(v_x_159_, v_y_160_);
lean_dec_ref(v_y_160_);
lean_dec_ref(v_x_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_mul(lean_object* v_x_162_, lean_object* v_y_163_){
_start:
{
lean_object* v_num_164_; lean_object* v_den_165_; lean_object* v_num_166_; lean_object* v_den_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_num_164_ = lean_ctor_get(v_x_162_, 0);
v_den_165_ = lean_ctor_get(v_x_162_, 1);
v_num_166_ = lean_ctor_get(v_y_163_, 0);
v_den_167_ = lean_ctor_get(v_y_163_, 1);
v___x_168_ = lean_int_mul(v_num_164_, v_num_166_);
v___x_169_ = lean_int_mul(v_den_165_, v_den_167_);
v___x_170_ = lp_spectral_Spectral_Certified_q(v___x_168_, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_mul___boxed(lean_object* v_x_171_, lean_object* v_y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = lp_spectral_Spectral_Certified_QRat_mul(v_x_171_, v_y_172_);
lean_dec_ref(v_y_172_);
lean_dec_ref(v_x_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_div(lean_object* v_x_174_, lean_object* v_y_175_){
_start:
{
lean_object* v_num_176_; lean_object* v_den_177_; lean_object* v_num_178_; lean_object* v_den_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_num_176_ = lean_ctor_get(v_x_174_, 0);
v_den_177_ = lean_ctor_get(v_x_174_, 1);
v_num_178_ = lean_ctor_get(v_y_175_, 0);
v_den_179_ = lean_ctor_get(v_y_175_, 1);
v___x_180_ = lean_int_mul(v_num_176_, v_den_179_);
v___x_181_ = lean_int_mul(v_den_177_, v_num_178_);
v___x_182_ = lp_spectral_Spectral_Certified_q(v___x_180_, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_div___boxed(lean_object* v_x_183_, lean_object* v_y_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = lp_spectral_Spectral_Certified_QRat_div(v_x_183_, v_y_184_);
lean_dec_ref(v_y_184_);
lean_dec_ref(v_x_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_neg(lean_object* v_x_186_){
_start:
{
lean_object* v_num_187_; lean_object* v_den_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v_num_187_ = lean_ctor_get(v_x_186_, 0);
lean_inc(v_num_187_);
v_den_188_ = lean_ctor_get(v_x_186_, 1);
lean_inc(v_den_188_);
lean_dec_ref(v_x_186_);
v___x_189_ = lean_int_neg(v_num_187_);
lean_dec(v_num_187_);
v___x_190_ = lp_spectral_Spectral_Certified_q(v___x_189_, v_den_188_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_sub(lean_object* v_x_191_, lean_object* v_y_192_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lp_spectral_Spectral_Certified_QRat_neg(v_y_192_);
v___x_194_ = lp_spectral_Spectral_Certified_QRat_add(v_x_191_, v___x_193_);
lean_dec_ref(v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_QRat_sub___boxed(lean_object* v_x_195_, lean_object* v_y_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = lp_spectral_Spectral_Certified_QRat_sub(v_x_195_, v_y_196_);
lean_dec_ref(v_x_195_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instToStringQRat___lam__0(lean_object* v_v_199_){
_start:
{
lean_object* v_n_200_; lean_object* v_num_201_; lean_object* v_den_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v_n_200_ = lp_spectral_Spectral_Certified_QRat_normalize(v_v_199_);
v_num_201_ = lean_ctor_get(v_n_200_, 0);
lean_inc(v_num_201_);
v_den_202_ = lean_ctor_get(v_n_200_, 1);
lean_inc(v_den_202_);
lean_dec_ref(v_n_200_);
v___x_203_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_204_ = lean_int_dec_eq(v_den_202_, v___x_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_205_ = l_Int_repr(v_num_201_);
lean_dec(v_num_201_);
v___x_206_ = ((lean_object*)(lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0));
v___x_207_ = lean_string_append(v___x_205_, v___x_206_);
v___x_208_ = l_Int_repr(v_den_202_);
lean_dec(v_den_202_);
v___x_209_ = lean_string_append(v___x_207_, v___x_208_);
lean_dec_ref(v___x_208_);
return v___x_209_;
}
else
{
lean_object* v___x_210_; 
lean_dec(v_den_202_);
v___x_210_ = l_Int_repr(v_num_201_);
lean_dec(v_num_201_);
return v___x_210_;
}
}
}
static double _init_lp_spectral_Spectral_Certified_floatPi___closed__0(void){
_start:
{
lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; double v___x_216_; 
v___x_213_ = lean_unsigned_to_nat(15u);
v___x_214_ = 1;
v___x_215_ = lean_cstr_to_nat("3141592653589793");
v___x_216_ = l_Float_ofScientific(v___x_215_, v___x_214_, v___x_213_);
return v___x_216_;
}
}
static double _init_lp_spectral_Spectral_Certified_floatPi(void){
_start:
{
double v___x_217_; 
v___x_217_ = lean_float_once(&lp_spectral_Spectral_Certified_floatPi___closed__0, &lp_spectral_Spectral_Certified_floatPi___closed__0_once, _init_lp_spectral_Spectral_Certified_floatPi___closed__0);
return v___x_217_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_alphaCrit___closed__0(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_unsigned_to_nat(2u);
v___x_219_ = lean_nat_to_int(v___x_218_);
return v___x_219_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_alphaCrit___closed__1(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = lean_obj_once(&lp_spectral_Spectral_Certified_alphaCrit___closed__0, &lp_spectral_Spectral_Certified_alphaCrit___closed__0_once, _init_lp_spectral_Spectral_Certified_alphaCrit___closed__0);
v___x_221_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_222_ = lp_spectral_Spectral_Certified_q(v___x_221_, v___x_220_);
return v___x_222_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_alphaCrit(void){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&lp_spectral_Spectral_Certified_alphaCrit___closed__1, &lp_spectral_Spectral_Certified_alphaCrit___closed__1_once, _init_lp_spectral_Spectral_Certified_alphaCrit___closed__1);
return v___x_223_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_feWeight___closed__0(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_225_ = lp_spectral_Spectral_Certified_q(v___x_224_, v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_feWeight(void){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_obj_once(&lp_spectral_Spectral_Certified_feWeight___closed__0, &lp_spectral_Spectral_Certified_feWeight___closed__0_once, _init_lp_spectral_Spectral_Certified_feWeight___closed__0);
return v___x_226_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_vesicaScale(void){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&lp_spectral_Spectral_Certified_feWeight___closed__0, &lp_spectral_Spectral_Certified_feWeight___closed__0_once, _init_lp_spectral_Spectral_Certified_feWeight___closed__0);
return v___x_227_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_vesicaVolume(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_obj_once(&lp_spectral_Spectral_Certified_feWeight___closed__0, &lp_spectral_Spectral_Certified_feWeight___closed__0_once, _init_lp_spectral_Spectral_Certified_feWeight___closed__0);
return v___x_228_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_geomDensityCoeff(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_obj_once(&lp_spectral_Spectral_Certified_feWeight___closed__0, &lp_spectral_Spectral_Certified_feWeight___closed__0_once, _init_lp_spectral_Spectral_Certified_feWeight___closed__0);
return v___x_229_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_arithDensityCoeff(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_obj_once(&lp_spectral_Spectral_Certified_feWeight___closed__0, &lp_spectral_Spectral_Certified_feWeight___closed__0_once, _init_lp_spectral_Spectral_Certified_feWeight___closed__0);
return v___x_230_;
}
}
static double _init_lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__0(void){
_start:
{
lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; double v___x_234_; 
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = 1;
v___x_233_ = lean_unsigned_to_nat(30u);
v___x_234_ = l_Float_ofScientific(v___x_233_, v___x_232_, v___x_231_);
return v___x_234_;
}
}
static double _init_lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__1(void){
_start:
{
double v___x_235_; double v___x_236_; 
v___x_235_ = lean_float_once(&lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__0, &lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__0_once, _init_lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__0);
v___x_236_ = sqrt(v___x_235_);
return v___x_236_;
}
}
static double _init_lp_spectral_Spectral_Certified_vesicaHeightOverWidth(void){
_start:
{
double v___x_237_; 
v___x_237_ = lean_float_once(&lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__1, &lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__1_once, _init_lp_spectral_Spectral_Certified_vesicaHeightOverWidth___closed__1);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vesicaReflection(lean_object* v_r_238_, lean_object* v_x_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lp_spectral_Spectral_Certified_QRat_sub(v_r_238_, v_x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vesicaReflection___boxed(lean_object* v_r_241_, lean_object* v_x_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = lp_spectral_Spectral_Certified_vesicaReflection(v_r_241_, v_x_242_);
lean_dec_ref(v_r_241_);
return v_res_243_;
}
}
static double _init_lp_spectral_Spectral_Certified_phiRe___closed__0(void){
_start:
{
lean_object* v___x_244_; uint8_t v___x_245_; lean_object* v___x_246_; double v___x_247_; 
v___x_244_ = lean_unsigned_to_nat(1u);
v___x_245_ = 1;
v___x_246_ = lean_unsigned_to_nat(20u);
v___x_247_ = l_Float_ofScientific(v___x_246_, v___x_245_, v___x_244_);
return v___x_247_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_phiRe(double v_alpha_248_, double v_re_249_){
_start:
{
double v___x_250_; double v___x_251_; double v___x_252_; 
v___x_250_ = lean_float_once(&lp_spectral_Spectral_Certified_phiRe___closed__0, &lp_spectral_Spectral_Certified_phiRe___closed__0_once, _init_lp_spectral_Spectral_Certified_phiRe___closed__0);
v___x_251_ = lean_float_mul(v___x_250_, v_alpha_248_);
v___x_252_ = lean_float_sub(v___x_251_, v_re_249_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiRe___boxed(lean_object* v_alpha_253_, lean_object* v_re_254_){
_start:
{
double v_alpha_boxed_255_; double v_re_boxed_256_; double v_res_257_; lean_object* v_r_258_; 
v_alpha_boxed_255_ = lean_unbox_float(v_alpha_253_);
lean_dec_ref(v_alpha_253_);
v_re_boxed_256_ = lean_unbox_float(v_re_254_);
lean_dec_ref(v_re_254_);
v_res_257_ = lp_spectral_Spectral_Certified_phiRe(v_alpha_boxed_255_, v_re_boxed_256_);
v_r_258_ = lean_box_float(v_res_257_);
return v_r_258_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_phiIm(double v_im_259_){
_start:
{
return v_im_259_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiIm___boxed(lean_object* v_im_260_){
_start:
{
double v_im_boxed_261_; double v_res_262_; lean_object* v_r_263_; 
v_im_boxed_261_ = lean_unbox_float(v_im_260_);
lean_dec_ref(v_im_260_);
v_res_262_ = lp_spectral_Spectral_Certified_phiIm(v_im_boxed_261_);
v_r_263_ = lean_box_float(v_res_262_);
return v_r_263_;
}
}
static double _init_lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0(void){
_start:
{
lean_object* v___x_264_; uint8_t v___x_265_; lean_object* v___x_266_; double v___x_267_; 
v___x_264_ = lean_unsigned_to_nat(9u);
v___x_265_ = 1;
v___x_266_ = lean_unsigned_to_nat(1u);
v___x_267_ = l_Float_ofScientific(v___x_266_, v___x_265_, v___x_264_);
return v___x_267_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_phiInvolutionCert(double v_re_268_, double v_im_269_, double v_alpha_270_){
_start:
{
double v___x_271_; double v___x_272_; double v___x_273_; double v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; double v___x_277_; uint8_t v___x_278_; 
v___x_271_ = lp_spectral_Spectral_Certified_phiRe(v_alpha_270_, v_re_268_);
v___x_272_ = lp_spectral_Spectral_Certified_phiRe(v_alpha_270_, v___x_271_);
v___x_273_ = lean_float_sub(v___x_272_, v_re_268_);
v___x_274_ = fabs(v___x_273_);
v___x_275_ = lean_unsigned_to_nat(1u);
v___x_276_ = lean_unsigned_to_nat(9u);
v___x_277_ = lean_float_once(&lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0, &lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0_once, _init_lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0);
v___x_278_ = lean_float_decLt(v___x_274_, v___x_277_);
if (v___x_278_ == 0)
{
return v___x_278_;
}
else
{
double v___x_279_; double v___x_280_; double v___x_281_; uint8_t v___x_282_; 
v___x_279_ = lean_float_sub(v_im_269_, v_im_269_);
v___x_280_ = fabs(v___x_279_);
v___x_281_ = l_Float_ofScientific(v___x_275_, v___x_278_, v___x_276_);
v___x_282_ = lean_float_decLt(v___x_280_, v___x_281_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiInvolutionCert___boxed(lean_object* v_re_283_, lean_object* v_im_284_, lean_object* v_alpha_285_){
_start:
{
double v_re_boxed_286_; double v_im_boxed_287_; double v_alpha_boxed_288_; uint8_t v_res_289_; lean_object* v_r_290_; 
v_re_boxed_286_ = lean_unbox_float(v_re_283_);
lean_dec_ref(v_re_283_);
v_im_boxed_287_ = lean_unbox_float(v_im_284_);
lean_dec_ref(v_im_284_);
v_alpha_boxed_288_ = lean_unbox_float(v_alpha_285_);
lean_dec_ref(v_alpha_285_);
v_res_289_ = lp_spectral_Spectral_Certified_phiInvolutionCert(v_re_boxed_286_, v_im_boxed_287_, v_alpha_boxed_288_);
v_r_290_ = lean_box(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_phiFixesCriticalCert(double v_alpha_291_){
_start:
{
double v___x_292_; double v___x_293_; double v___x_294_; double v___x_295_; uint8_t v___x_296_; 
v___x_292_ = lp_spectral_Spectral_Certified_phiRe(v_alpha_291_, v_alpha_291_);
v___x_293_ = lean_float_sub(v___x_292_, v_alpha_291_);
v___x_294_ = fabs(v___x_293_);
v___x_295_ = lean_float_once(&lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0, &lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0_once, _init_lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0);
v___x_296_ = lean_float_decLt(v___x_294_, v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_phiFixesCriticalCert___boxed(lean_object* v_alpha_297_){
_start:
{
double v_alpha_boxed_298_; uint8_t v_res_299_; lean_object* v_r_300_; 
v_alpha_boxed_298_ = lean_unbox_float(v_alpha_297_);
lean_dec_ref(v_alpha_297_);
v_res_299_ = lp_spectral_Spectral_Certified_phiFixesCriticalCert(v_alpha_boxed_298_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Certified_divisorsOf_spec__1(lean_object* v_n_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
if (lean_obj_tag(v_a_302_) == 0)
{
lean_object* v___x_304_; 
v___x_304_ = l_List_reverse___redArg(v_a_303_);
return v___x_304_;
}
else
{
lean_object* v_head_305_; lean_object* v_tail_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_320_; 
v_head_305_ = lean_ctor_get(v_a_302_, 0);
v_tail_306_ = lean_ctor_get(v_a_302_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v_a_302_);
if (v_isSharedCheck_320_ == 0)
{
v___x_308_ = v_a_302_;
v_isShared_309_ = v_isSharedCheck_320_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_tail_306_);
lean_inc(v_head_305_);
lean_dec(v_a_302_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_320_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_310_ = lean_unsigned_to_nat(1u);
v___x_311_ = lean_nat_add(v_n_301_, v___x_310_);
v___x_312_ = lean_nat_mod(v___x_311_, v_head_305_);
lean_dec(v___x_311_);
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = lean_nat_dec_eq(v___x_312_, v___x_313_);
lean_dec(v___x_312_);
if (v___x_314_ == 0)
{
lean_del_object(v___x_308_);
lean_dec(v_head_305_);
v_a_302_ = v_tail_306_;
goto _start;
}
else
{
lean_object* v___x_317_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 1, v_a_303_);
v___x_317_ = v___x_308_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_head_305_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_a_303_);
v___x_317_ = v_reuseFailAlloc_319_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
v_a_302_ = v_tail_306_;
v_a_303_ = v___x_317_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Certified_divisorsOf_spec__1___boxed(lean_object* v_n_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = lp_spectral_List_filterTR_loop___at___00Spectral_Certified_divisorsOf_spec__1(v_n_321_, v_a_322_, v_a_323_);
lean_dec(v_n_321_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_mapTR_loop___at___00Spectral_Certified_divisorsOf_spec__0(lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
if (lean_obj_tag(v_a_325_) == 0)
{
lean_object* v___x_327_; 
v___x_327_ = l_List_reverse___redArg(v_a_326_);
return v___x_327_;
}
else
{
lean_object* v_head_328_; lean_object* v_tail_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_339_; 
v_head_328_ = lean_ctor_get(v_a_325_, 0);
v_tail_329_ = lean_ctor_get(v_a_325_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v_a_325_);
if (v_isSharedCheck_339_ == 0)
{
v___x_331_ = v_a_325_;
v_isShared_332_ = v_isSharedCheck_339_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_tail_329_);
lean_inc(v_head_328_);
lean_dec(v_a_325_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_339_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_333_ = lean_unsigned_to_nat(1u);
v___x_334_ = lean_nat_add(v_head_328_, v___x_333_);
lean_dec(v_head_328_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 1, v_a_326_);
lean_ctor_set(v___x_331_, 0, v___x_334_);
v___x_336_ = v___x_331_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_a_326_);
v___x_336_ = v_reuseFailAlloc_338_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
v_a_325_ = v_tail_329_;
v_a_326_ = v___x_336_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorsOf(lean_object* v_n_340_){
_start:
{
lean_object* v_zero_341_; uint8_t v_isZero_342_; 
v_zero_341_ = lean_unsigned_to_nat(0u);
v_isZero_342_ = lean_nat_dec_eq(v_n_340_, v_zero_341_);
if (v_isZero_342_ == 1)
{
lean_object* v___x_343_; 
v___x_343_ = lean_box(0);
return v___x_343_;
}
else
{
lean_object* v_one_344_; lean_object* v_n_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_one_344_ = lean_unsigned_to_nat(1u);
v_n_345_ = lean_nat_sub(v_n_340_, v_one_344_);
v___x_346_ = lean_nat_add(v_n_345_, v_one_344_);
v___x_347_ = l_List_range(v___x_346_);
v___x_348_ = lean_box(0);
v___x_349_ = lp_spectral_List_mapTR_loop___at___00Spectral_Certified_divisorsOf_spec__0(v___x_347_, v___x_348_);
v___x_350_ = lp_spectral_List_filterTR_loop___at___00Spectral_Certified_divisorsOf_spec__1(v_n_345_, v___x_349_, v___x_348_);
lean_dec(v_n_345_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorsOf___boxed(lean_object* v_n_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = lp_spectral_Spectral_Certified_divisorsOf(v_n_351_);
lean_dec(v_n_351_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorCount(lean_object* v_n_353_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lp_spectral_Spectral_Certified_divisorsOf(v_n_353_);
v___x_355_ = l_List_lengthTR___redArg(v___x_354_);
lean_dec(v___x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_divisorCount___boxed(lean_object* v_n_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = lp_spectral_Spectral_Certified_divisorCount(v_n_356_);
lean_dec(v_n_356_);
return v_res_357_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isPrime___lam__0(lean_object* v___x_358_, lean_object* v_p_359_, lean_object* v___x_360_, uint8_t v___x_361_, lean_object* v_k_362_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = lean_nat_add(v_k_362_, v___x_358_);
v___x_364_ = lean_nat_mod(v_p_359_, v___x_363_);
lean_dec(v___x_363_);
v___x_365_ = lean_nat_dec_eq(v___x_364_, v___x_360_);
lean_dec(v___x_364_);
if (v___x_365_ == 0)
{
uint8_t v___x_366_; 
v___x_366_ = 1;
return v___x_366_;
}
else
{
return v___x_361_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isPrime___lam__0___boxed(lean_object* v___x_367_, lean_object* v_p_368_, lean_object* v___x_369_, lean_object* v___x_370_, lean_object* v_k_371_){
_start:
{
uint8_t v___x_123__boxed_372_; uint8_t v_res_373_; lean_object* v_r_374_; 
v___x_123__boxed_372_ = lean_unbox(v___x_370_);
v_res_373_ = lp_spectral_Spectral_Certified_isPrime___lam__0(v___x_367_, v_p_368_, v___x_369_, v___x_123__boxed_372_, v_k_371_);
lean_dec(v_k_371_);
lean_dec(v___x_369_);
lean_dec(v_p_368_);
lean_dec(v___x_367_);
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isPrime(lean_object* v_n_375_){
_start:
{
lean_object* v_zero_376_; uint8_t v_isZero_377_; 
v_zero_376_ = lean_unsigned_to_nat(0u);
v_isZero_377_ = lean_nat_dec_eq(v_n_375_, v_zero_376_);
if (v_isZero_377_ == 1)
{
uint8_t v___x_378_; 
v___x_378_ = 0;
return v___x_378_;
}
else
{
lean_object* v_one_379_; lean_object* v_n_380_; uint8_t v_isZero_381_; 
v_one_379_ = lean_unsigned_to_nat(1u);
v_n_380_ = lean_nat_sub(v_n_375_, v_one_379_);
v_isZero_381_ = lean_nat_dec_eq(v_n_380_, v_zero_376_);
if (v_isZero_381_ == 1)
{
lean_dec(v_n_380_);
return v_isZero_377_;
}
else
{
lean_object* v_n_382_; uint8_t v___x_383_; 
v_n_382_ = lean_nat_sub(v_n_380_, v_one_379_);
lean_dec(v_n_380_);
v___x_383_ = lean_nat_dec_eq(v_n_382_, v_zero_376_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; lean_object* v_p_385_; lean_object* v___x_386_; lean_object* v___f_387_; lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_384_ = lean_unsigned_to_nat(2u);
v_p_385_ = lean_nat_add(v_n_382_, v___x_384_);
lean_dec(v_n_382_);
v___x_386_ = lean_box(v___x_383_);
lean_inc(v_p_385_);
v___f_387_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Certified_isPrime___lam__0___boxed), 5, 4);
lean_closure_set(v___f_387_, 0, v___x_384_);
lean_closure_set(v___f_387_, 1, v_p_385_);
lean_closure_set(v___f_387_, 2, v_zero_376_);
lean_closure_set(v___f_387_, 3, v___x_386_);
v___x_388_ = lean_nat_sub(v_p_385_, v___x_384_);
lean_dec(v_p_385_);
v___x_389_ = l_List_range(v___x_388_);
v___x_390_ = l_List_all___redArg(v___x_389_, v___f_387_);
return v___x_390_;
}
else
{
lean_dec(v_n_382_);
return v___x_383_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isPrime___boxed(lean_object* v_n_391_){
_start:
{
uint8_t v_res_392_; lean_object* v_r_393_; 
v_res_392_ = lp_spectral_Spectral_Certified_isPrime(v_n_391_);
lean_dec(v_n_391_);
v_r_393_ = lean_box(v_res_392_);
return v_r_393_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_gAlpha___closed__0(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_394_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_395_ = lean_obj_once(&lp_spectral_Spectral_Certified_alphaCrit___closed__0, &lp_spectral_Spectral_Certified_alphaCrit___closed__0_once, _init_lp_spectral_Spectral_Certified_alphaCrit___closed__0);
v___x_396_ = lp_spectral_Spectral_Certified_q(v___x_395_, v___x_394_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gAlpha(lean_object* v_alpha_397_, lean_object* v_n_398_){
_start:
{
lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_399_ = lean_unsigned_to_nat(0u);
v___x_400_ = lean_nat_dec_eq(v_n_398_, v___x_399_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_401_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_402_ = lean_obj_once(&lp_spectral_Spectral_Certified_gAlpha___closed__0, &lp_spectral_Spectral_Certified_gAlpha___closed__0_once, _init_lp_spectral_Spectral_Certified_gAlpha___closed__0);
v___x_403_ = lp_spectral_Spectral_Certified_QRat_mul(v___x_402_, v_alpha_397_);
v___x_404_ = lp_spectral_Spectral_Certified_divisorCount(v_n_398_);
v___x_405_ = lean_nat_to_int(v___x_404_);
v___x_406_ = lp_spectral_Spectral_Certified_q(v___x_405_, v___x_401_);
v___x_407_ = lp_spectral_Spectral_Certified_QRat_div(v___x_403_, v___x_406_);
lean_dec_ref(v___x_406_);
lean_dec_ref(v___x_403_);
return v___x_407_;
}
else
{
lean_object* v___x_408_; 
v___x_408_ = lp_spectral_Spectral_Certified_qZero;
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gAlpha___boxed(lean_object* v_alpha_409_, lean_object* v_n_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = lp_spectral_Spectral_Certified_gAlpha(v_alpha_409_, v_n_410_);
lean_dec(v_n_410_);
lean_dec_ref(v_alpha_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gZeta(lean_object* v_n_412_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lp_spectral_Spectral_Certified_alphaCrit;
v___x_414_ = lp_spectral_Spectral_Certified_gAlpha(v___x_413_, v_n_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gZeta___boxed(lean_object* v_n_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = lp_spectral_Spectral_Certified_gZeta(v_n_415_);
lean_dec(v_n_415_);
return v_res_416_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_primeGAlphaOk(lean_object* v_p_417_){
_start:
{
uint8_t v___y_419_; uint8_t v___x_423_; 
v___x_423_ = lp_spectral_Spectral_Certified_isPrime(v_p_417_);
if (v___x_423_ == 0)
{
v___y_419_ = v___x_423_;
goto v___jp_418_;
}
else
{
lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_424_ = lp_spectral_Spectral_Certified_divisorCount(v_p_417_);
v___x_425_ = lean_unsigned_to_nat(2u);
v___x_426_ = lean_nat_dec_eq(v___x_424_, v___x_425_);
lean_dec(v___x_424_);
v___y_419_ = v___x_426_;
goto v___jp_418_;
}
v___jp_418_:
{
if (v___y_419_ == 0)
{
return v___y_419_;
}
else
{
lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_420_ = lp_spectral_Spectral_Certified_alphaCrit;
v___x_421_ = lp_spectral_Spectral_Certified_gAlpha(v___x_420_, v_p_417_);
v___x_422_ = lp_spectral_Spectral_Certified_QRat_beq(v___x_421_, v___x_420_);
return v___x_422_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_primeGAlphaOk___boxed(lean_object* v_p_427_){
_start:
{
uint8_t v_res_428_; lean_object* v_r_429_; 
v_res_428_ = lp_spectral_Spectral_Certified_primeGAlphaOk(v_p_427_);
lean_dec(v_p_427_);
v_r_429_ = lean_box(v_res_428_);
return v_r_429_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___lam__0(lean_object* v_i_430_){
_start:
{
lean_object* v___x_431_; lean_object* v_p_432_; uint8_t v___x_433_; 
v___x_431_ = lean_unsigned_to_nat(2u);
v_p_432_ = lean_nat_add(v_i_430_, v___x_431_);
v___x_433_ = lp_spectral_Spectral_Certified_isPrime(v_p_432_);
if (v___x_433_ == 0)
{
uint8_t v___x_434_; 
lean_dec(v_p_432_);
v___x_434_ = 1;
return v___x_434_;
}
else
{
uint8_t v___x_435_; 
v___x_435_ = lp_spectral_Spectral_Certified_primeGAlphaOk(v_p_432_);
lean_dec(v_p_432_);
return v___x_435_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___lam__0___boxed(lean_object* v_i_436_){
_start:
{
uint8_t v_res_437_; lean_object* v_r_438_; 
v_res_437_ = lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___lam__0(v_i_436_);
lean_dec(v_i_436_);
v_r_438_ = lean_box(v_res_437_);
return v_r_438_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo(lean_object* v_bound_440_){
_start:
{
lean_object* v___f_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
v___f_441_ = ((lean_object*)(lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___closed__0));
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = lean_nat_sub(v_bound_440_, v___x_442_);
v___x_444_ = l_List_range(v___x_443_);
v___x_445_ = l_List_all___redArg(v___x_444_, v___f_441_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo___boxed(lean_object* v_bound_446_){
_start:
{
uint8_t v_res_447_; lean_object* v_r_448_; 
v_res_447_ = lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo(v_bound_446_);
lean_dec(v_bound_446_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_gAlphaTableOk___closed__0(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lp_spectral_Spectral_Certified_alphaCrit;
v___x_450_ = lean_obj_once(&lp_spectral_Spectral_Certified_gAlpha___closed__0, &lp_spectral_Spectral_Certified_gAlpha___closed__0_once, _init_lp_spectral_Spectral_Certified_gAlpha___closed__0);
v___x_451_ = lp_spectral_Spectral_Certified_QRat_mul(v___x_450_, v___x_449_);
return v___x_451_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_gAlphaTableOk(lean_object* v_n_452_){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_453_ = lp_spectral_Spectral_Certified_alphaCrit;
v___x_454_ = lp_spectral_Spectral_Certified_gAlpha(v___x_453_, v_n_452_);
v___x_455_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_456_ = lean_obj_once(&lp_spectral_Spectral_Certified_gAlphaTableOk___closed__0, &lp_spectral_Spectral_Certified_gAlphaTableOk___closed__0_once, _init_lp_spectral_Spectral_Certified_gAlphaTableOk___closed__0);
v___x_457_ = lp_spectral_Spectral_Certified_divisorCount(v_n_452_);
v___x_458_ = lean_nat_to_int(v___x_457_);
v___x_459_ = lp_spectral_Spectral_Certified_q(v___x_458_, v___x_455_);
v___x_460_ = lp_spectral_Spectral_Certified_QRat_div(v___x_456_, v___x_459_);
lean_dec_ref(v___x_459_);
v___x_461_ = lp_spectral_Spectral_Certified_QRat_beq(v___x_454_, v___x_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gAlphaTableOk___boxed(lean_object* v_n_462_){
_start:
{
uint8_t v_res_463_; lean_object* v_r_464_; 
v_res_463_ = lp_spectral_Spectral_Certified_gAlphaTableOk(v_n_462_);
lean_dec(v_n_462_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_wrongScalePrimeValue(lean_object* v_c_465_){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = lean_obj_once(&lp_spectral_Spectral_Certified_gAlpha___closed__0, &lp_spectral_Spectral_Certified_gAlpha___closed__0_once, _init_lp_spectral_Spectral_Certified_gAlpha___closed__0);
v___x_467_ = lp_spectral_Spectral_Certified_QRat_div(v_c_465_, v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_wrongScalePrimeValue___boxed(lean_object* v_c_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = lp_spectral_Spectral_Certified_wrongScalePrimeValue(v_c_468_);
lean_dec_ref(v_c_468_);
return v_res_469_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__0(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_obj_once(&lp_spectral_Spectral_Certified_gAlpha___closed__0, &lp_spectral_Spectral_Certified_gAlpha___closed__0_once, _init_lp_spectral_Spectral_Certified_gAlpha___closed__0);
v___x_471_ = lp_spectral_Spectral_Certified_feWeight;
v___x_472_ = lp_spectral_Spectral_Certified_QRat_div(v___x_471_, v___x_470_);
return v___x_472_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__1(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_473_ = lp_spectral_Spectral_Certified_alphaCrit;
v___x_474_ = lean_obj_once(&lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__0, &lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__0_once, _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__0);
v___x_475_ = lp_spectral_Spectral_Certified_QRat_beq(v___x_474_, v___x_473_);
return v___x_475_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__2(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_obj_once(&lp_spectral_Spectral_Certified_gAlpha___closed__0, &lp_spectral_Spectral_Certified_gAlpha___closed__0_once, _init_lp_spectral_Spectral_Certified_gAlpha___closed__0);
v___x_477_ = lp_spectral_Spectral_Certified_vesicaScale;
v___x_478_ = lp_spectral_Spectral_Certified_QRat_div(v___x_477_, v___x_476_);
return v___x_478_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__3(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_479_ = lp_spectral_Spectral_Certified_alphaCrit;
v___x_480_ = lean_obj_once(&lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__2, &lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__2_once, _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__2);
v___x_481_ = lp_spectral_Spectral_Certified_QRat_beq(v___x_480_, v___x_479_);
return v___x_481_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4(void){
_start:
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(30u);
v___x_483_ = lp_spectral_Spectral_Certified_allPrimeGAlphaUpTo(v___x_482_);
return v___x_483_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert(void){
_start:
{
uint8_t v___y_485_; uint8_t v___x_487_; 
v___x_487_ = lean_uint8_once(&lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__3, &lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__3_once, _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__3);
if (v___x_487_ == 0)
{
v___y_485_ = v___x_487_;
goto v___jp_484_;
}
else
{
uint8_t v___x_488_; 
v___x_488_ = lean_uint8_once(&lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4, &lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4_once, _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4);
v___y_485_ = v___x_488_;
goto v___jp_484_;
}
v___jp_484_:
{
if (v___y_485_ == 0)
{
return v___y_485_;
}
else
{
uint8_t v___x_486_; 
v___x_486_ = lean_uint8_once(&lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__1, &lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__1_once, _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__1);
return v___x_486_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_starLeafCount(lean_object* v_m_499_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_unsigned_to_nat(2u);
v___x_501_ = lean_nat_mul(v___x_500_, v_m_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_starLeafCount___boxed(lean_object* v_m_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = lp_spectral_Spectral_Certified_starLeafCount(v_m_502_);
lean_dec(v_m_502_);
return v_res_503_;
}
}
static double _init_lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___closed__0(void){
_start:
{
double v___x_504_; double v___x_505_; double v___x_506_; 
v___x_504_ = lp_spectral_Spectral_Certified_floatPi;
v___x_505_ = lean_float_once(&lp_spectral_Spectral_Certified_phiRe___closed__0, &lp_spectral_Spectral_Certified_phiRe___closed__0_once, _init_lp_spectral_Spectral_Certified_phiRe___closed__0);
v___x_506_ = lean_float_mul(v___x_505_, v___x_504_);
return v___x_506_;
}
}
LEAN_EXPORT double lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0(lean_object* v_row_507_, lean_object* v_N_508_, double v_x_509_, lean_object* v_x_510_){
_start:
{
if (lean_obj_tag(v_x_510_) == 0)
{
lean_dec(v_N_508_);
return v_x_509_;
}
else
{
lean_object* v_head_511_; lean_object* v_tail_512_; double v___x_513_; lean_object* v___x_514_; double v___x_515_; double v___x_516_; double v___x_517_; double v_angle_518_; double v_scale_519_; double v___x_520_; double v_c_521_; double v___x_522_; double v_s_523_; double v___x_524_; double v___x_525_; double v___x_526_; double v___x_527_; 
v_head_511_ = lean_ctor_get(v_x_510_, 0);
v_tail_512_ = lean_ctor_get(v_x_510_, 1);
v___x_513_ = lean_float_once(&lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___closed__0, &lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___closed__0_once, _init_lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___closed__0);
v___x_514_ = lean_nat_mul(v_row_507_, v_head_511_);
v___x_515_ = lean_float_of_nat(v___x_514_);
v___x_516_ = lean_float_mul(v___x_513_, v___x_515_);
lean_inc(v_N_508_);
v___x_517_ = lean_float_of_nat(v_N_508_);
v_angle_518_ = lean_float_div(v___x_516_, v___x_517_);
v_scale_519_ = sqrt(v___x_517_);
v___x_520_ = cos(v_angle_518_);
v_c_521_ = lean_float_div(v___x_520_, v_scale_519_);
v___x_522_ = sin(v_angle_518_);
v_s_523_ = lean_float_div(v___x_522_, v_scale_519_);
v___x_524_ = lean_float_mul(v_c_521_, v_c_521_);
v___x_525_ = lean_float_add(v_x_509_, v___x_524_);
v___x_526_ = lean_float_mul(v_s_523_, v_s_523_);
v___x_527_ = lean_float_add(v___x_525_, v___x_526_);
v_x_509_ = v___x_527_;
v_x_510_ = v_tail_512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0___boxed(lean_object* v_row_529_, lean_object* v_N_530_, lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
double v_x_160__boxed_533_; double v_res_534_; lean_object* v_r_535_; 
v_x_160__boxed_533_ = lean_unbox_float(v_x_531_);
lean_dec_ref(v_x_531_);
v_res_534_ = lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0(v_row_529_, v_N_530_, v_x_160__boxed_533_, v_x_532_);
lean_dec(v_x_532_);
lean_dec(v_row_529_);
v_r_535_ = lean_box_float(v_res_534_);
return v_r_535_;
}
}
static double _init_lp_spectral_Spectral_Certified_dftRowEnergy___closed__0(void){
_start:
{
lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; double v___x_539_; 
v___x_536_ = lean_unsigned_to_nat(1u);
v___x_537_ = 1;
v___x_538_ = lean_unsigned_to_nat(0u);
v___x_539_ = l_Float_ofScientific(v___x_538_, v___x_537_, v___x_536_);
return v___x_539_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_dftRowEnergy(lean_object* v_N_540_, lean_object* v_row_541_){
_start:
{
double v___x_542_; lean_object* v___x_543_; double v___x_544_; 
v___x_542_ = lean_float_once(&lp_spectral_Spectral_Certified_dftRowEnergy___closed__0, &lp_spectral_Spectral_Certified_dftRowEnergy___closed__0_once, _init_lp_spectral_Spectral_Certified_dftRowEnergy___closed__0);
lean_inc(v_N_540_);
v___x_543_ = l_List_range(v_N_540_);
v___x_544_ = lp_spectral_List_foldl___at___00Spectral_Certified_dftRowEnergy_spec__0(v_row_541_, v_N_540_, v___x_542_, v___x_543_);
lean_dec(v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftRowEnergy___boxed(lean_object* v_N_545_, lean_object* v_row_546_){
_start:
{
double v_res_547_; lean_object* v_r_548_; 
v_res_547_ = lp_spectral_Spectral_Certified_dftRowEnergy(v_N_545_, v_row_546_);
lean_dec(v_row_546_);
v_r_548_ = lean_box_float(v_res_547_);
return v_r_548_;
}
}
static double _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0(void){
_start:
{
lean_object* v___x_549_; uint8_t v___x_550_; lean_object* v___x_551_; double v___x_552_; 
v___x_549_ = lean_unsigned_to_nat(1u);
v___x_550_ = 1;
v___x_551_ = lean_unsigned_to_nat(10u);
v___x_552_ = l_Float_ofScientific(v___x_551_, v___x_550_, v___x_549_);
return v___x_552_;
}
}
static double _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__1(void){
_start:
{
lean_object* v___x_553_; uint8_t v___x_554_; lean_object* v___x_555_; double v___x_556_; 
v___x_553_ = lean_unsigned_to_nat(5u);
v___x_554_ = 1;
v___x_555_ = lean_unsigned_to_nat(1u);
v___x_556_ = l_Float_ofScientific(v___x_555_, v___x_554_, v___x_553_);
return v___x_556_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_dftUnitary___lam__0(lean_object* v_N_557_, lean_object* v_row_558_){
_start:
{
double v___x_559_; double v___x_560_; double v___x_561_; double v___x_562_; double v___x_563_; uint8_t v___x_564_; 
v___x_559_ = lp_spectral_Spectral_Certified_dftRowEnergy(v_N_557_, v_row_558_);
v___x_560_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v___x_561_ = lean_float_sub(v___x_559_, v___x_560_);
v___x_562_ = fabs(v___x_561_);
v___x_563_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__1, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__1_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__1);
v___x_564_ = lean_float_decLt(v___x_562_, v___x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftUnitary___lam__0___boxed(lean_object* v_N_565_, lean_object* v_row_566_){
_start:
{
uint8_t v_res_567_; lean_object* v_r_568_; 
v_res_567_ = lp_spectral_Spectral_Certified_dftUnitary___lam__0(v_N_565_, v_row_566_);
lean_dec(v_row_566_);
v_r_568_ = lean_box(v_res_567_);
return v_r_568_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_dftUnitary(lean_object* v_N_569_){
_start:
{
lean_object* v___f_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
lean_inc(v_N_569_);
v___f_570_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Certified_dftUnitary___lam__0___boxed), 2, 1);
lean_closure_set(v___f_570_, 0, v_N_569_);
v___x_571_ = l_List_range(v_N_569_);
v___x_572_ = l_List_all___redArg(v___x_571_, v___f_570_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftUnitary___boxed(lean_object* v_N_573_){
_start:
{
uint8_t v_res_574_; lean_object* v_r_575_; 
v_res_574_ = lp_spectral_Spectral_Certified_dftUnitary(v_N_573_);
v_r_575_ = lean_box(v_res_574_);
return v_r_575_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_dftTransmission(lean_object* v_N_576_){
_start:
{
double v___x_577_; double v___x_578_; double v___x_579_; double v___x_580_; 
v___x_577_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v___x_578_ = lean_float_of_nat(v_N_576_);
v___x_579_ = sqrt(v___x_578_);
v___x_580_ = lean_float_div(v___x_577_, v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_dftTransmission___boxed(lean_object* v_N_581_){
_start:
{
double v_res_582_; lean_object* v_r_583_; 
v_res_582_ = lp_spectral_Spectral_Certified_dftTransmission(v_N_581_);
v_r_583_ = lean_box_float(v_res_582_);
return v_r_583_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_finiteLeafCount(lean_object* v_primes_584_){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_585_ = lean_unsigned_to_nat(2u);
v___x_586_ = l_List_lengthTR___redArg(v_primes_584_);
v___x_587_ = lean_nat_mul(v___x_585_, v___x_586_);
lean_dec(v___x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_finiteLeafCount___boxed(lean_object* v_primes_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = lp_spectral_Spectral_Certified_finiteLeafCount(v_primes_588_);
lean_dec(v_primes_588_);
return v_res_589_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_arithmeticLpCoeff(lean_object* v_p_590_, lean_object* v_m_591_){
_start:
{
lean_object* v___x_592_; uint8_t v___y_596_; uint8_t v___x_604_; 
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_604_ = lean_nat_dec_eq(v_m_591_, v___x_592_);
if (v___x_604_ == 0)
{
uint8_t v___x_605_; 
v___x_605_ = lp_spectral_Spectral_Certified_isPrime(v_p_590_);
if (v___x_605_ == 0)
{
lean_dec(v_p_590_);
goto v___jp_593_;
}
else
{
v___y_596_ = v___x_604_;
goto v___jp_595_;
}
}
else
{
v___y_596_ = v___x_604_;
goto v___jp_595_;
}
v___jp_593_:
{
double v___x_594_; 
v___x_594_ = lean_float_once(&lp_spectral_Spectral_Certified_dftRowEnergy___closed__0, &lp_spectral_Spectral_Certified_dftRowEnergy___closed__0_once, _init_lp_spectral_Spectral_Certified_dftRowEnergy___closed__0);
return v___x_594_;
}
v___jp_595_:
{
if (v___y_596_ == 0)
{
double v___x_597_; double v___x_598_; double v___x_599_; lean_object* v___x_600_; double v___x_601_; double v___x_602_; double v___x_603_; 
lean_inc(v_p_590_);
v___x_597_ = lean_float_of_nat(v_p_590_);
v___x_598_ = log(v___x_597_);
v___x_599_ = lean_float_negate(v___x_598_);
v___x_600_ = lean_nat_pow(v_p_590_, v_m_591_);
lean_dec(v_p_590_);
v___x_601_ = lean_float_of_nat(v___x_600_);
v___x_602_ = sqrt(v___x_601_);
v___x_603_ = lean_float_div(v___x_599_, v___x_602_);
return v___x_603_;
}
else
{
lean_dec(v_p_590_);
goto v___jp_593_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_arithmeticLpCoeff___boxed(lean_object* v_p_606_, lean_object* v_m_607_){
_start:
{
double v_res_608_; lean_object* v_r_609_; 
v_res_608_ = lp_spectral_Spectral_Certified_arithmeticLpCoeff(v_p_606_, v_m_607_);
lean_dec(v_m_607_);
v_r_609_ = lean_box_float(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_arithmeticLpAtUnit(lean_object* v_p_610_){
_start:
{
double v___x_611_; double v___x_612_; double v___x_613_; double v_rp_614_; double v_logp_615_; double v___x_616_; double v___x_617_; double v___x_618_; double v___x_619_; 
v___x_611_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v___x_612_ = lean_float_of_nat(v_p_610_);
v___x_613_ = sqrt(v___x_612_);
v_rp_614_ = lean_float_div(v___x_611_, v___x_613_);
v_logp_615_ = log(v___x_612_);
v___x_616_ = lean_float_negate(v_logp_615_);
v___x_617_ = lean_float_mul(v___x_616_, v_rp_614_);
v___x_618_ = lean_float_sub(v___x_611_, v_rp_614_);
v___x_619_ = lean_float_div(v___x_617_, v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_arithmeticLpAtUnit___boxed(lean_object* v_p_620_){
_start:
{
double v_res_621_; lean_object* v_r_622_; 
v_res_621_ = lp_spectral_Spectral_Certified_arithmeticLpAtUnit(v_p_620_);
v_r_622_ = lean_box_float(v_res_621_);
return v_r_622_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_stripPrimeFactors_spec__0(lean_object* v_p_623_, lean_object* v_x_624_, lean_object* v_x_625_){
_start:
{
if (lean_obj_tag(v_x_625_) == 0)
{
return v_x_624_;
}
else
{
lean_object* v_tail_626_; lean_object* v___x_627_; lean_object* v___x_628_; uint8_t v___x_629_; 
v_tail_626_ = lean_ctor_get(v_x_625_, 1);
v___x_627_ = lean_nat_mod(v_x_624_, v_p_623_);
v___x_628_ = lean_unsigned_to_nat(0u);
v___x_629_ = lean_nat_dec_eq(v___x_627_, v___x_628_);
lean_dec(v___x_627_);
if (v___x_629_ == 0)
{
v_x_625_ = v_tail_626_;
goto _start;
}
else
{
lean_object* v___x_631_; 
v___x_631_ = lean_nat_div(v_x_624_, v_p_623_);
lean_dec(v_x_624_);
v_x_624_ = v___x_631_;
v_x_625_ = v_tail_626_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_stripPrimeFactors_spec__0___boxed(lean_object* v_p_633_, lean_object* v_x_634_, lean_object* v_x_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = lp_spectral_List_foldl___at___00Spectral_Certified_stripPrimeFactors_spec__0(v_p_633_, v_x_634_, v_x_635_);
lean_dec(v_x_635_);
lean_dec(v_p_633_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_stripPrimeFactors(lean_object* v_n_637_, lean_object* v_p_638_, lean_object* v_fuel_639_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = l_List_range(v_fuel_639_);
v___x_641_ = lp_spectral_List_foldl___at___00Spectral_Certified_stripPrimeFactors_spec__0(v_p_638_, v_n_637_, v___x_640_);
lean_dec(v___x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_stripPrimeFactors___boxed(lean_object* v_n_642_, lean_object* v_p_643_, lean_object* v_fuel_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = lp_spectral_Spectral_Certified_stripPrimeFactors(v_n_642_, v_p_643_, v_fuel_644_);
lean_dec(v_p_643_);
return v_res_645_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_vonMangoldt___lam__0(lean_object* v___x_646_, lean_object* v_n_647_, lean_object* v_i_648_){
_start:
{
lean_object* v_p_649_; uint8_t v___y_651_; uint8_t v___x_656_; 
v_p_649_ = lean_nat_add(v_i_648_, v___x_646_);
v___x_656_ = lp_spectral_Spectral_Certified_isPrime(v_p_649_);
if (v___x_656_ == 0)
{
v___y_651_ = v___x_656_;
goto v___jp_650_;
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_657_ = lean_nat_mod(v_n_647_, v_p_649_);
v___x_658_ = lean_unsigned_to_nat(0u);
v___x_659_ = lean_nat_dec_eq(v___x_657_, v___x_658_);
lean_dec(v___x_657_);
v___y_651_ = v___x_659_;
goto v___jp_650_;
}
v___jp_650_:
{
if (v___y_651_ == 0)
{
lean_dec(v_p_649_);
lean_dec(v_n_647_);
return v___y_651_;
}
else
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_652_ = lean_unsigned_to_nat(32u);
v___x_653_ = lp_spectral_Spectral_Certified_stripPrimeFactors(v_n_647_, v_p_649_, v___x_652_);
lean_dec(v_p_649_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_655_ = lean_nat_dec_eq(v___x_653_, v___x_654_);
lean_dec(v___x_653_);
return v___x_655_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vonMangoldt___lam__0___boxed(lean_object* v___x_660_, lean_object* v_n_661_, lean_object* v_i_662_){
_start:
{
uint8_t v_res_663_; lean_object* v_r_664_; 
v_res_663_ = lp_spectral_Spectral_Certified_vonMangoldt___lam__0(v___x_660_, v_n_661_, v_i_662_);
lean_dec(v_i_662_);
lean_dec(v___x_660_);
v_r_664_ = lean_box(v_res_663_);
return v_r_664_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_vonMangoldt(lean_object* v_n_665_){
_start:
{
lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_666_ = lean_unsigned_to_nat(2u);
v___x_667_ = lean_nat_dec_lt(v_n_665_, v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___f_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
lean_inc(v_n_665_);
v___f_668_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Certified_vonMangoldt___lam__0___boxed), 3, 2);
lean_closure_set(v___f_668_, 0, v___x_666_);
lean_closure_set(v___f_668_, 1, v_n_665_);
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_nat_sub(v_n_665_, v___x_669_);
lean_dec(v_n_665_);
v___x_671_ = l_List_range(v___x_670_);
v___x_672_ = l_List_find_x3f___redArg(v___f_668_, v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
double v___x_673_; 
v___x_673_ = lean_float_once(&lp_spectral_Spectral_Certified_dftRowEnergy___closed__0, &lp_spectral_Spectral_Certified_dftRowEnergy___closed__0_once, _init_lp_spectral_Spectral_Certified_dftRowEnergy___closed__0);
return v___x_673_;
}
else
{
lean_object* v_val_674_; lean_object* v___x_675_; double v___x_676_; double v___x_677_; 
v_val_674_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_val_674_);
lean_dec_ref(v___x_672_);
v___x_675_ = lean_nat_add(v_val_674_, v___x_666_);
lean_dec(v_val_674_);
v___x_676_ = lean_float_of_nat(v___x_675_);
v___x_677_ = log(v___x_676_);
return v___x_677_;
}
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; double v___x_680_; 
lean_dec(v_n_665_);
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = lean_unsigned_to_nat(1u);
v___x_680_ = l_Float_ofScientific(v___x_678_, v___x_667_, v___x_679_);
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_vonMangoldt___boxed(lean_object* v_n_681_){
_start:
{
double v_res_682_; lean_object* v_r_683_; 
v_res_682_ = lp_spectral_Spectral_Certified_vonMangoldt(v_n_681_);
v_r_683_ = lean_box_float(v_res_682_);
return v_r_683_;
}
}
static double _init_lp_spectral_Spectral_Certified_gaussianTestReal___closed__0(void){
_start:
{
lean_object* v___x_684_; uint8_t v___x_685_; lean_object* v___x_686_; double v___x_687_; 
v___x_684_ = lean_unsigned_to_nat(1u);
v___x_685_ = 1;
v___x_686_ = lean_unsigned_to_nat(40u);
v___x_687_ = l_Float_ofScientific(v___x_686_, v___x_685_, v___x_684_);
return v___x_687_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_gaussianTestReal(double v_a_688_, double v_u_689_){
_start:
{
double v___x_690_; double v___x_691_; double v___x_692_; double v___x_693_; double v___x_694_; double v___x_695_; double v___x_696_; double v___x_697_; double v___x_698_; double v___x_699_; 
v___x_690_ = lp_spectral_Spectral_Certified_floatPi;
v___x_691_ = lean_float_div(v___x_690_, v_a_688_);
v___x_692_ = sqrt(v___x_691_);
v___x_693_ = lean_float_mul(v_u_689_, v_u_689_);
v___x_694_ = lean_float_negate(v___x_693_);
v___x_695_ = lean_float_once(&lp_spectral_Spectral_Certified_gaussianTestReal___closed__0, &lp_spectral_Spectral_Certified_gaussianTestReal___closed__0_once, _init_lp_spectral_Spectral_Certified_gaussianTestReal___closed__0);
v___x_696_ = lean_float_mul(v___x_695_, v_a_688_);
v___x_697_ = lean_float_div(v___x_694_, v___x_696_);
v___x_698_ = exp(v___x_697_);
v___x_699_ = lean_float_mul(v___x_692_, v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_gaussianTestReal___boxed(lean_object* v_a_700_, lean_object* v_u_701_){
_start:
{
double v_a_boxed_702_; double v_u_boxed_703_; double v_res_704_; lean_object* v_r_705_; 
v_a_boxed_702_ = lean_unbox_float(v_a_700_);
lean_dec_ref(v_a_700_);
v_u_boxed_703_ = lean_unbox_float(v_u_701_);
lean_dec_ref(v_u_701_);
v_res_704_ = lp_spectral_Spectral_Certified_gaussianTestReal(v_a_boxed_702_, v_u_boxed_703_);
v_r_705_ = lean_box_float(v_res_704_);
return v_r_705_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isSmoothOver___lam__0(lean_object* v___x_706_, lean_object* v_n_707_, lean_object* v_primes_708_, lean_object* v_i_709_){
_start:
{
lean_object* v_p_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v_p_710_ = lean_nat_add(v_i_709_, v___x_706_);
v___x_711_ = lean_nat_mod(v_n_707_, v_p_710_);
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = lean_nat_dec_eq(v___x_711_, v___x_712_);
lean_dec(v___x_711_);
if (v___x_713_ == 0)
{
uint8_t v___x_714_; 
lean_dec(v_p_710_);
v___x_714_ = 1;
return v___x_714_;
}
else
{
uint8_t v___x_715_; 
v___x_715_ = lp_spectral_Spectral_Certified_isPrime(v_p_710_);
if (v___x_715_ == 0)
{
lean_dec(v_p_710_);
return v___x_713_;
}
else
{
uint8_t v___x_716_; 
v___x_716_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_p_710_, v_primes_708_);
lean_dec(v_p_710_);
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isSmoothOver___lam__0___boxed(lean_object* v___x_717_, lean_object* v_n_718_, lean_object* v_primes_719_, lean_object* v_i_720_){
_start:
{
uint8_t v_res_721_; lean_object* v_r_722_; 
v_res_721_ = lp_spectral_Spectral_Certified_isSmoothOver___lam__0(v___x_717_, v_n_718_, v_primes_719_, v_i_720_);
lean_dec(v_i_720_);
lean_dec(v_primes_719_);
lean_dec(v_n_718_);
lean_dec(v___x_717_);
v_r_722_ = lean_box(v_res_721_);
return v_r_722_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_isSmoothOver(lean_object* v_primes_723_, lean_object* v_n_724_){
_start:
{
lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_725_ = lean_unsigned_to_nat(2u);
v___x_726_ = lean_nat_dec_lt(v_n_724_, v___x_725_);
if (v___x_726_ == 0)
{
lean_object* v___f_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
lean_inc(v_n_724_);
v___f_727_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Certified_isSmoothOver___lam__0___boxed), 4, 3);
lean_closure_set(v___f_727_, 0, v___x_725_);
lean_closure_set(v___f_727_, 1, v_n_724_);
lean_closure_set(v___f_727_, 2, v_primes_723_);
v___x_728_ = lean_unsigned_to_nat(1u);
v___x_729_ = lean_nat_sub(v_n_724_, v___x_728_);
lean_dec(v_n_724_);
v___x_730_ = l_List_range(v___x_729_);
v___x_731_ = l_List_all___redArg(v___x_730_, v___f_727_);
return v___x_731_;
}
else
{
uint8_t v___x_732_; 
lean_dec(v_n_724_);
lean_dec(v_primes_723_);
v___x_732_ = 0;
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_isSmoothOver___boxed(lean_object* v_primes_733_, lean_object* v_n_734_){
_start:
{
uint8_t v_res_735_; lean_object* v_r_736_; 
v_res_735_ = lp_spectral_Spectral_Certified_isSmoothOver(v_primes_733_, v_n_734_);
v_r_736_ = lean_box(v_res_735_);
return v_r_736_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Certified_numbersFromPrimes_spec__1(lean_object* v_primes_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
if (lean_obj_tag(v_a_738_) == 0)
{
lean_object* v___x_740_; 
lean_dec(v_primes_737_);
v___x_740_ = l_List_reverse___redArg(v_a_739_);
return v___x_740_;
}
else
{
lean_object* v_head_741_; lean_object* v_tail_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_752_; 
v_head_741_ = lean_ctor_get(v_a_738_, 0);
v_tail_742_ = lean_ctor_get(v_a_738_, 1);
v_isSharedCheck_752_ = !lean_is_exclusive(v_a_738_);
if (v_isSharedCheck_752_ == 0)
{
v___x_744_ = v_a_738_;
v_isShared_745_ = v_isSharedCheck_752_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_tail_742_);
lean_inc(v_head_741_);
lean_dec(v_a_738_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_752_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
uint8_t v___x_746_; 
lean_inc(v_head_741_);
lean_inc(v_primes_737_);
v___x_746_ = lp_spectral_Spectral_Certified_isSmoothOver(v_primes_737_, v_head_741_);
if (v___x_746_ == 0)
{
lean_del_object(v___x_744_);
lean_dec(v_head_741_);
v_a_738_ = v_tail_742_;
goto _start;
}
else
{
lean_object* v___x_749_; 
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v_a_739_);
v___x_749_ = v___x_744_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_head_741_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v_a_739_);
v___x_749_ = v_reuseFailAlloc_751_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
v_a_738_ = v_tail_742_;
v_a_739_ = v___x_749_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_mapTR_loop___at___00Spectral_Certified_numbersFromPrimes_spec__0(lean_object* v_a_753_, lean_object* v_a_754_){
_start:
{
if (lean_obj_tag(v_a_753_) == 0)
{
lean_object* v___x_755_; 
v___x_755_ = l_List_reverse___redArg(v_a_754_);
return v___x_755_;
}
else
{
lean_object* v_head_756_; lean_object* v_tail_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_767_; 
v_head_756_ = lean_ctor_get(v_a_753_, 0);
v_tail_757_ = lean_ctor_get(v_a_753_, 1);
v_isSharedCheck_767_ = !lean_is_exclusive(v_a_753_);
if (v_isSharedCheck_767_ == 0)
{
v___x_759_ = v_a_753_;
v_isShared_760_ = v_isSharedCheck_767_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_tail_757_);
lean_inc(v_head_756_);
lean_dec(v_a_753_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_767_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_764_; 
v___x_761_ = lean_unsigned_to_nat(2u);
v___x_762_ = lean_nat_add(v_head_756_, v___x_761_);
lean_dec(v_head_756_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 1, v_a_754_);
lean_ctor_set(v___x_759_, 0, v___x_762_);
v___x_764_ = v___x_759_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v_a_754_);
v___x_764_ = v_reuseFailAlloc_766_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
v_a_753_ = v_tail_757_;
v_a_754_ = v___x_764_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_numbersFromPrimes(lean_object* v_primes_768_, lean_object* v_bound_769_){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_770_ = lean_unsigned_to_nat(1u);
v___x_771_ = lean_nat_sub(v_bound_769_, v___x_770_);
v___x_772_ = l_List_range(v___x_771_);
v___x_773_ = lean_box(0);
v___x_774_ = lp_spectral_List_mapTR_loop___at___00Spectral_Certified_numbersFromPrimes_spec__0(v___x_772_, v___x_773_);
v___x_775_ = lp_spectral_List_filterTR_loop___at___00Spectral_Certified_numbersFromPrimes_spec__1(v_primes_768_, v___x_774_, v___x_773_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_numbersFromPrimes___boxed(lean_object* v_primes_776_, lean_object* v_bound_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = lp_spectral_Spectral_Certified_numbersFromPrimes(v_primes_776_, v_bound_777_);
lean_dec(v_bound_777_);
return v_res_778_;
}
}
LEAN_EXPORT double lp_spectral_List_foldl___at___00Spectral_Certified_arithmeticSpectralPairing_spec__0(double v_C_779_, double v_a_780_, double v_x_781_, lean_object* v_x_782_){
_start:
{
if (lean_obj_tag(v_x_782_) == 0)
{
return v_x_781_;
}
else
{
lean_object* v_head_783_; lean_object* v_tail_784_; double v___x_785_; double v___x_786_; double v___x_787_; double v___x_788_; double v___x_789_; double v___x_790_; double v___x_791_; double v___x_792_; double v___x_793_; 
v_head_783_ = lean_ctor_get(v_x_782_, 0);
lean_inc_n(v_head_783_, 2);
v_tail_784_ = lean_ctor_get(v_x_782_, 1);
lean_inc(v_tail_784_);
lean_dec_ref(v_x_782_);
v___x_785_ = lp_spectral_Spectral_Certified_vonMangoldt(v_head_783_);
v___x_786_ = lean_float_of_nat(v_head_783_);
v___x_787_ = sqrt(v___x_786_);
v___x_788_ = lean_float_div(v___x_785_, v___x_787_);
v___x_789_ = log(v___x_786_);
v___x_790_ = lean_float_mul(v_C_779_, v___x_789_);
v___x_791_ = lp_spectral_Spectral_Certified_gaussianTestReal(v_a_780_, v___x_790_);
v___x_792_ = lean_float_mul(v___x_788_, v___x_791_);
v___x_793_ = lean_float_add(v_x_781_, v___x_792_);
v_x_781_ = v___x_793_;
v_x_782_ = v_tail_784_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Certified_arithmeticSpectralPairing_spec__0___boxed(lean_object* v_C_795_, lean_object* v_a_796_, lean_object* v_x_797_, lean_object* v_x_798_){
_start:
{
double v_C_boxed_799_; double v_a_boxed_800_; double v_x_105__boxed_801_; double v_res_802_; lean_object* v_r_803_; 
v_C_boxed_799_ = lean_unbox_float(v_C_795_);
lean_dec_ref(v_C_795_);
v_a_boxed_800_ = lean_unbox_float(v_a_796_);
lean_dec_ref(v_a_796_);
v_x_105__boxed_801_ = lean_unbox_float(v_x_797_);
lean_dec_ref(v_x_797_);
v_res_802_ = lp_spectral_List_foldl___at___00Spectral_Certified_arithmeticSpectralPairing_spec__0(v_C_boxed_799_, v_a_boxed_800_, v_x_105__boxed_801_, v_x_798_);
v_r_803_ = lean_box_float(v_res_802_);
return v_r_803_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_arithmeticSpectralPairing(lean_object* v_primes_804_, lean_object* v_bound_805_, double v_C_806_, double v_a_807_){
_start:
{
lean_object* v_ns_808_; double v___x_809_; double v_sum_810_; double v___x_811_; 
v_ns_808_ = lp_spectral_Spectral_Certified_numbersFromPrimes(v_primes_804_, v_bound_805_);
v___x_809_ = lean_float_once(&lp_spectral_Spectral_Certified_dftRowEnergy___closed__0, &lp_spectral_Spectral_Certified_dftRowEnergy___closed__0_once, _init_lp_spectral_Spectral_Certified_dftRowEnergy___closed__0);
v_sum_810_ = lp_spectral_List_foldl___at___00Spectral_Certified_arithmeticSpectralPairing_spec__0(v_C_806_, v_a_807_, v___x_809_, v_ns_808_);
v___x_811_ = lean_float_sub(v___x_809_, v_sum_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_arithmeticSpectralPairing___boxed(lean_object* v_primes_812_, lean_object* v_bound_813_, lean_object* v_C_814_, lean_object* v_a_815_){
_start:
{
double v_C_boxed_816_; double v_a_boxed_817_; double v_res_818_; lean_object* v_r_819_; 
v_C_boxed_816_ = lean_unbox_float(v_C_814_);
lean_dec_ref(v_C_814_);
v_a_boxed_817_ = lean_unbox_float(v_a_815_);
lean_dec_ref(v_a_815_);
v_res_818_ = lp_spectral_Spectral_Certified_arithmeticSpectralPairing(v_primes_812_, v_bound_813_, v_C_boxed_816_, v_a_boxed_817_);
lean_dec(v_bound_813_);
v_r_819_ = lean_box_float(v_res_818_);
return v_r_819_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_finiteSpectralPairing(lean_object* v_primes_820_, lean_object* v_bound_821_, double v_C_822_, double v_a_823_){
_start:
{
double v___x_824_; 
v___x_824_ = lp_spectral_Spectral_Certified_arithmeticSpectralPairing(v_primes_820_, v_bound_821_, v_C_822_, v_a_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_finiteSpectralPairing___boxed(lean_object* v_primes_825_, lean_object* v_bound_826_, lean_object* v_C_827_, lean_object* v_a_828_){
_start:
{
double v_C_boxed_829_; double v_a_boxed_830_; double v_res_831_; lean_object* v_r_832_; 
v_C_boxed_829_ = lean_unbox_float(v_C_827_);
lean_dec_ref(v_C_827_);
v_a_boxed_830_ = lean_unbox_float(v_a_828_);
lean_dec_ref(v_a_828_);
v_res_831_ = lp_spectral_Spectral_Certified_finiteSpectralPairing(v_primes_825_, v_bound_826_, v_C_boxed_829_, v_a_boxed_830_);
lean_dec(v_bound_826_);
v_r_832_ = lean_box_float(v_res_831_);
return v_r_832_;
}
}
static double _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0(void){
_start:
{
double v___x_833_; lean_object* v_bound_834_; lean_object* v___x_835_; double v_arith_836_; 
v___x_833_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v_bound_834_ = lean_unsigned_to_nat(50u);
v___x_835_ = ((lean_object*)(lp_spectral_Spectral_Certified_examplePrimeSet));
v_arith_836_ = lp_spectral_Spectral_Certified_arithmeticSpectralPairing(v___x_835_, v_bound_834_, v___x_833_, v___x_833_);
return v_arith_836_;
}
}
static double _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__1(void){
_start:
{
double v_arith_837_; double v___x_838_; 
v_arith_837_ = lean_float_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0);
v___x_838_ = fabs(v_arith_837_);
return v___x_838_;
}
}
static double _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__2(void){
_start:
{
lean_object* v___x_839_; uint8_t v___x_840_; lean_object* v___x_841_; double v___x_842_; 
v___x_839_ = lean_unsigned_to_nat(1u);
v___x_840_ = 1;
v___x_841_ = lean_unsigned_to_nat(10000u);
v___x_842_ = l_Float_ofScientific(v___x_841_, v___x_840_, v___x_839_);
return v___x_842_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__3(void){
_start:
{
double v___x_843_; double v___x_844_; uint8_t v___x_845_; 
v___x_843_ = lean_float_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__2, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__2_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__2);
v___x_844_ = lean_float_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__1, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__1_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__1);
v___x_845_ = lean_float_decLt(v___x_844_, v___x_843_);
return v___x_845_;
}
}
static double _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__4(void){
_start:
{
double v_arith_846_; double v___x_847_; 
v_arith_846_ = lean_float_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__0);
v___x_847_ = lean_float_sub(v_arith_846_, v_arith_846_);
return v___x_847_;
}
}
static double _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__5(void){
_start:
{
double v___x_848_; double v___x_849_; 
v___x_848_ = lean_float_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__4, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__4_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__4);
v___x_849_ = fabs(v___x_848_);
return v___x_849_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__6(void){
_start:
{
double v___x_850_; double v___x_851_; uint8_t v___x_852_; 
v___x_850_ = lean_float_once(&lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0, &lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0_once, _init_lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0);
v___x_851_ = lean_float_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__5, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__5_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__5);
v___x_852_ = lean_float_decLt(v___x_851_, v___x_850_);
return v___x_852_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_finiteSpecArbCert(void){
_start:
{
uint8_t v___x_853_; 
v___x_853_ = lean_uint8_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__3, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__3_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__3);
if (v___x_853_ == 0)
{
return v___x_853_;
}
else
{
uint8_t v___x_854_; 
v___x_854_ = lean_uint8_once(&lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__6, &lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__6_once, _init_lp_spectral_Spectral_Certified_finiteSpecArbCert___closed__6);
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_855_, lean_object* v_x_856_, lean_object* v_x_857_){
_start:
{
if (lean_obj_tag(v_x_857_) == 0)
{
lean_dec(v_x_855_);
return v_x_856_;
}
else
{
lean_object* v_head_858_; lean_object* v_tail_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_871_; 
v_head_858_ = lean_ctor_get(v_x_857_, 0);
v_tail_859_ = lean_ctor_get(v_x_857_, 1);
v_isSharedCheck_871_ = !lean_is_exclusive(v_x_857_);
if (v_isSharedCheck_871_ == 0)
{
v___x_861_ = v_x_857_;
v_isShared_862_ = v_isSharedCheck_871_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_tail_859_);
lean_inc(v_head_858_);
lean_dec(v_x_857_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_871_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
lean_inc(v_x_855_);
if (v_isShared_862_ == 0)
{
lean_ctor_set_tag(v___x_861_, 5);
lean_ctor_set(v___x_861_, 1, v_x_855_);
lean_ctor_set(v___x_861_, 0, v_x_856_);
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_x_856_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_x_855_);
v___x_864_ = v_reuseFailAlloc_870_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v___x_865_; double v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_865_ = lean_unsigned_to_nat(0u);
v___x_866_ = lean_unbox_float(v_head_858_);
lean_dec(v_head_858_);
v___x_867_ = l_Float_repr(v___x_866_, v___x_865_);
v___x_868_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_864_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v_x_856_ = v___x_868_;
v_x_857_ = v_tail_859_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1(lean_object* v_x_872_, lean_object* v_x_873_, lean_object* v_x_874_){
_start:
{
if (lean_obj_tag(v_x_874_) == 0)
{
lean_dec(v_x_872_);
return v_x_873_;
}
else
{
lean_object* v_head_875_; lean_object* v_tail_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_888_; 
v_head_875_ = lean_ctor_get(v_x_874_, 0);
v_tail_876_ = lean_ctor_get(v_x_874_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_x_874_);
if (v_isSharedCheck_888_ == 0)
{
v___x_878_ = v_x_874_;
v_isShared_879_ = v_isSharedCheck_888_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_tail_876_);
lean_inc(v_head_875_);
lean_dec(v_x_874_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_888_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
lean_inc(v_x_872_);
if (v_isShared_879_ == 0)
{
lean_ctor_set_tag(v___x_878_, 5);
lean_ctor_set(v___x_878_, 1, v_x_872_);
lean_ctor_set(v___x_878_, 0, v_x_873_);
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_x_873_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_x_872_);
v___x_881_ = v_reuseFailAlloc_887_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; double v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_882_ = lean_unsigned_to_nat(0u);
v___x_883_ = lean_unbox_float(v_head_875_);
lean_dec(v_head_875_);
v___x_884_ = l_Float_repr(v___x_883_, v___x_882_);
v___x_885_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_881_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = lp_spectral_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1_spec__2(v_x_872_, v___x_885_, v_tail_876_);
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(double v___y_889_){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = l_Float_repr(v___y_889_, v___x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_892_){
_start:
{
double v___y_357__boxed_893_; lean_object* v_res_894_; 
v___y_357__boxed_893_ = lean_unbox_float(v___y_892_);
lean_dec_ref(v___y_892_);
v_res_894_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(v___y_357__boxed_893_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0(lean_object* v_x_895_, lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_895_) == 0)
{
lean_object* v___x_897_; 
lean_dec(v_x_896_);
v___x_897_ = lean_box(0);
return v___x_897_;
}
else
{
lean_object* v_tail_898_; 
v_tail_898_ = lean_ctor_get(v_x_895_, 1);
if (lean_obj_tag(v_tail_898_) == 0)
{
lean_object* v_head_899_; double v___x_900_; lean_object* v___x_901_; 
lean_dec(v_x_896_);
v_head_899_ = lean_ctor_get(v_x_895_, 0);
lean_inc(v_head_899_);
lean_dec_ref(v_x_895_);
v___x_900_ = lean_unbox_float(v_head_899_);
lean_dec(v_head_899_);
v___x_901_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(v___x_900_);
return v___x_901_;
}
else
{
lean_object* v_head_902_; double v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
lean_inc(v_tail_898_);
v_head_902_ = lean_ctor_get(v_x_895_, 0);
lean_inc(v_head_902_);
lean_dec_ref(v_x_895_);
v___x_903_ = lean_unbox_float(v_head_902_);
lean_dec(v_head_902_);
v___x_904_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(v___x_903_);
v___x_905_ = lp_spectral_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1(v_x_896_, v___x_904_, v_tail_898_);
return v___x_905_;
}
}
}
}
static lean_object* _init_lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2));
v___x_915_ = lean_string_length(v___x_914_);
return v___x_915_;
}
}
static lean_object* _init_lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = lean_obj_once(&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5, &lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5_once, _init_lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5);
v___x_917_ = lean_nat_to_int(v___x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg(lean_object* v_a_922_){
_start:
{
if (lean_obj_tag(v_a_922_) == 0)
{
lean_object* v___x_923_; 
v___x_923_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1));
return v___x_923_;
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_924_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3));
v___x_925_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0_spec__0(v_a_922_, v___x_924_);
v___x_926_ = lean_obj_once(&lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6, &lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6_once, _init_lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6);
v___x_927_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7));
v___x_928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
lean_ctor_set(v___x_928_, 1, v___x_925_);
v___x_929_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8));
v___x_930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_926_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = l_Std_Format_fill(v___x_931_);
return v___x_932_;
}
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_unsigned_to_nat(11u);
v___x_943_ = lean_nat_to_int(v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg(lean_object* v_x_947_){
_start:
{
lean_object* v_sampleK_948_; lean_object* v_sampleR_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_981_; 
v_sampleK_948_ = lean_ctor_get(v_x_947_, 0);
v_sampleR_949_ = lean_ctor_get(v_x_947_, 1);
v_isSharedCheck_981_ = !lean_is_exclusive(v_x_947_);
if (v_isSharedCheck_981_ == 0)
{
v___x_951_ = v_x_947_;
v_isShared_952_ = v_isSharedCheck_981_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_sampleR_949_);
lean_inc(v_sampleK_948_);
lean_dec(v_x_947_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_981_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_953_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__5));
v___x_954_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__3));
v___x_955_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__4, &lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__4_once, _init_lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__4);
v___x_956_ = lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg(v_sampleK_948_);
if (v_isShared_952_ == 0)
{
lean_ctor_set_tag(v___x_951_, 4);
lean_ctor_set(v___x_951_, 1, v___x_956_);
lean_ctor_set(v___x_951_, 0, v___x_955_);
v___x_958_ = v___x_951_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_955_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v___x_956_);
v___x_958_ = v_reuseFailAlloc_980_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
uint8_t v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_959_ = 0;
v___x_960_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_960_, 0, v___x_958_);
lean_ctor_set_uint8(v___x_960_, sizeof(void*)*1, v___x_959_);
v___x_961_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_954_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__14));
v___x_963_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_961_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = lean_box(1);
v___x_965_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg___closed__6));
v___x_967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_965_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
lean_ctor_set(v___x_968_, 1, v___x_953_);
v___x_969_ = lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg(v_sampleR_949_);
v___x_970_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_955_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_971_, 0, v___x_970_);
lean_ctor_set_uint8(v___x_971_, sizeof(void*)*1, v___x_959_);
v___x_972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_968_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = lean_obj_once(&lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10, &lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10_once, _init_lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__10);
v___x_974_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__11));
v___x_975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
lean_ctor_set(v___x_975_, 1, v___x_972_);
v___x_976_ = ((lean_object*)(lp_spectral_Spectral_Certified_instReprQRat_repr___redArg___closed__12));
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_973_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_979_, 0, v___x_978_);
lean_ctor_set_uint8(v___x_979_, sizeof(void*)*1, v___x_959_);
return v___x_979_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr(lean_object* v_x_982_, lean_object* v_prec_983_){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = lp_spectral_Spectral_Certified_instReprScatteringData_repr___redArg(v_x_982_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_instReprScatteringData_repr___boxed(lean_object* v_x_985_, lean_object* v_prec_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = lp_spectral_Spectral_Certified_instReprScatteringData_repr(v_x_985_, v_prec_986_);
lean_dec(v_prec_986_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0(lean_object* v_a_988_, lean_object* v_n_989_){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___redArg(v_a_988_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0___boxed(lean_object* v_a_991_, lean_object* v_n_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = lp_spectral_List_repr_x27___at___00Spectral_Certified_instReprScatteringData_repr_spec__0(v_a_991_, v_n_992_);
lean_dec(v_n_992_);
return v_res_993_;
}
}
static double _init_lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___closed__0(void){
_start:
{
lean_object* v___x_996_; uint8_t v___x_997_; lean_object* v___x_998_; double v___x_999_; 
v___x_996_ = lean_unsigned_to_nat(6u);
v___x_997_ = 1;
v___x_998_ = lean_unsigned_to_nat(1u);
v___x_999_ = l_Float_ofScientific(v___x_998_, v___x_997_, v___x_996_);
return v___x_999_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0(double v_k_1000_, lean_object* v_x_1001_){
_start:
{
lean_object* v_fst_1002_; double v___x_1003_; double v___x_1004_; double v___x_1005_; double v___x_1006_; uint8_t v___x_1007_; 
v_fst_1002_ = lean_ctor_get(v_x_1001_, 0);
v___x_1003_ = lean_unbox_float(v_fst_1002_);
v___x_1004_ = lean_float_add(v___x_1003_, v_k_1000_);
v___x_1005_ = fabs(v___x_1004_);
v___x_1006_ = lean_float_once(&lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___closed__0, &lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___closed__0);
v___x_1007_ = lean_float_decLt(v___x_1005_, v___x_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___boxed(lean_object* v_k_1008_, lean_object* v_x_1009_){
_start:
{
double v_k_boxed_1010_; uint8_t v_res_1011_; lean_object* v_r_1012_; 
v_k_boxed_1010_ = lean_unbox_float(v_k_1008_);
lean_dec_ref(v_k_1008_);
v_res_1011_ = lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0(v_k_boxed_1010_, v_x_1009_);
lean_dec_ref(v_x_1009_);
v_r_1012_ = lean_box(v_res_1011_);
return v_r_1012_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_reflectionAtNegK(lean_object* v_d_1013_, double v_k_1014_, double v_r_1015_){
_start:
{
lean_object* v_sampleK_1016_; lean_object* v_sampleR_1017_; lean_object* v___x_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_sampleK_1016_ = lean_ctor_get(v_d_1013_, 0);
lean_inc(v_sampleK_1016_);
v_sampleR_1017_ = lean_ctor_get(v_d_1013_, 1);
lean_inc(v_sampleR_1017_);
lean_dec_ref(v_d_1013_);
v___x_1018_ = lean_box_float(v_k_1014_);
v___f_1019_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Certified_reflectionAtNegK___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1019_, 0, v___x_1018_);
v___x_1020_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_sampleK_1016_, v_sampleR_1017_);
v___x_1021_ = l_List_find_x3f___redArg(v___f_1019_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
double v___x_1022_; 
v___x_1022_ = lean_float_once(&lp_spectral_Spectral_Certified_dftRowEnergy___closed__0, &lp_spectral_Spectral_Certified_dftRowEnergy___closed__0_once, _init_lp_spectral_Spectral_Certified_dftRowEnergy___closed__0);
return v___x_1022_;
}
else
{
lean_object* v_val_1023_; lean_object* v_snd_1024_; double v___x_1025_; double v___x_1026_; 
v_val_1023_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_val_1023_);
lean_dec_ref(v___x_1021_);
v_snd_1024_ = lean_ctor_get(v_val_1023_, 1);
lean_inc(v_snd_1024_);
lean_dec(v_val_1023_);
v___x_1025_ = lean_unbox_float(v_snd_1024_);
lean_dec(v_snd_1024_);
v___x_1026_ = lean_float_sub(v_r_1015_, v___x_1025_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_reflectionAtNegK___boxed(lean_object* v_d_1027_, lean_object* v_k_1028_, lean_object* v_r_1029_){
_start:
{
double v_k_boxed_1030_; double v_r_boxed_1031_; double v_res_1032_; lean_object* v_r_1033_; 
v_k_boxed_1030_ = lean_unbox_float(v_k_1028_);
lean_dec_ref(v_k_1028_);
v_r_boxed_1031_ = lean_unbox_float(v_r_1029_);
lean_dec_ref(v_r_1029_);
v_res_1032_ = lp_spectral_Spectral_Certified_reflectionAtNegK(v_d_1027_, v_k_boxed_1030_, v_r_boxed_1031_);
v_r_1033_ = lean_box_float(v_res_1032_);
return v_r_1033_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringSymmetric___lam__0(lean_object* v_d_1034_, uint8_t v___x_1035_, lean_object* v_x_1036_){
_start:
{
lean_object* v_fst_1037_; lean_object* v_snd_1038_; double v___x_1039_; double v___x_1040_; double v___x_1041_; double v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; double v___x_1045_; uint8_t v___x_1046_; 
v_fst_1037_ = lean_ctor_get(v_x_1036_, 0);
v_snd_1038_ = lean_ctor_get(v_x_1036_, 1);
v___x_1039_ = lean_unbox_float(v_fst_1037_);
v___x_1040_ = lean_unbox_float(v_snd_1038_);
v___x_1041_ = lp_spectral_Spectral_Certified_reflectionAtNegK(v_d_1034_, v___x_1039_, v___x_1040_);
v___x_1042_ = fabs(v___x_1041_);
v___x_1043_ = lean_unsigned_to_nat(1u);
v___x_1044_ = lean_unsigned_to_nat(6u);
v___x_1045_ = l_Float_ofScientific(v___x_1043_, v___x_1035_, v___x_1044_);
v___x_1046_ = lean_float_decLt(v___x_1042_, v___x_1045_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringSymmetric___lam__0___boxed(lean_object* v_d_1047_, lean_object* v___x_1048_, lean_object* v_x_1049_){
_start:
{
uint8_t v___x_91__boxed_1050_; uint8_t v_res_1051_; lean_object* v_r_1052_; 
v___x_91__boxed_1050_ = lean_unbox(v___x_1048_);
v_res_1051_ = lp_spectral_Spectral_Certified_scatteringSymmetric___lam__0(v_d_1047_, v___x_91__boxed_1050_, v_x_1049_);
lean_dec_ref(v_x_1049_);
v_r_1052_ = lean_box(v_res_1051_);
return v_r_1052_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringSymmetric(lean_object* v_d_1053_){
_start:
{
lean_object* v_sampleK_1054_; lean_object* v_sampleR_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_sampleK_1054_ = lean_ctor_get(v_d_1053_, 0);
lean_inc(v_sampleK_1054_);
v_sampleR_1055_ = lean_ctor_get(v_d_1053_, 1);
lean_inc(v_sampleR_1055_);
v___x_1056_ = l_List_lengthTR___redArg(v_sampleK_1054_);
v___x_1057_ = l_List_lengthTR___redArg(v_sampleR_1055_);
v___x_1058_ = lean_nat_dec_eq(v___x_1056_, v___x_1057_);
lean_dec(v___x_1057_);
lean_dec(v___x_1056_);
if (v___x_1058_ == 0)
{
lean_dec(v_sampleR_1055_);
lean_dec(v_sampleK_1054_);
lean_dec_ref(v_d_1053_);
return v___x_1058_;
}
else
{
lean_object* v___x_1059_; lean_object* v___f_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1059_ = lean_box(v___x_1058_);
v___f_1060_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Certified_scatteringSymmetric___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1060_, 0, v_d_1053_);
lean_closure_set(v___f_1060_, 1, v___x_1059_);
v___x_1061_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_sampleK_1054_, v_sampleR_1055_);
v___x_1062_ = l_List_all___redArg(v___x_1061_, v___f_1060_);
return v___x_1062_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringSymmetric___boxed(lean_object* v_d_1063_){
_start:
{
uint8_t v_res_1064_; lean_object* v_r_1065_; 
v_res_1064_ = lp_spectral_Spectral_Certified_scatteringSymmetric(v_d_1063_);
v_r_1065_ = lean_box(v_res_1064_);
return v_r_1065_;
}
}
static double _init_lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___closed__0(void){
_start:
{
double v___x_1066_; double v___x_1067_; double v___x_1068_; 
v___x_1066_ = lean_float_once(&lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0, &lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0_once, _init_lp_spectral_Spectral_Certified_phiInvolutionCert___closed__0);
v___x_1067_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v___x_1068_ = lean_float_sub(v___x_1067_, v___x_1066_);
return v___x_1068_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0(double v_r_1069_){
_start:
{
double v___x_1070_; double v___x_1071_; uint8_t v___x_1072_; 
v___x_1070_ = fabs(v_r_1069_);
v___x_1071_ = lean_float_once(&lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___closed__0, &lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___closed__0);
v___x_1072_ = lean_float_decLt(v___x_1070_, v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0___boxed(lean_object* v_r_1073_){
_start:
{
double v_r_boxed_1074_; uint8_t v_res_1075_; lean_object* v_r_1076_; 
v_r_boxed_1074_ = lean_unbox_float(v_r_1073_);
lean_dec_ref(v_r_1073_);
v_res_1075_ = lp_spectral_Spectral_Certified_scatteringUnitModulus___lam__0(v_r_boxed_1074_);
v_r_1076_ = lean_box(v_res_1075_);
return v_r_1076_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_scatteringUnitModulus(lean_object* v_d_1078_){
_start:
{
lean_object* v_sampleR_1079_; lean_object* v___f_1080_; uint8_t v___x_1081_; 
v_sampleR_1079_ = lean_ctor_get(v_d_1078_, 1);
lean_inc(v_sampleR_1079_);
lean_dec_ref(v_d_1078_);
v___f_1080_ = ((lean_object*)(lp_spectral_Spectral_Certified_scatteringUnitModulus___closed__0));
v___x_1081_ = l_List_all___redArg(v_sampleR_1079_, v___f_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_scatteringUnitModulus___boxed(lean_object* v_d_1082_){
_start:
{
uint8_t v_res_1083_; lean_object* v_r_1084_; 
v_res_1083_ = lp_spectral_Spectral_Certified_scatteringUnitModulus(v_d_1082_);
v_r_1084_ = lean_box(v_res_1083_);
return v_r_1084_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Certified_leadingReflectionModulus(lean_object* v_p_1085_){
_start:
{
double v___x_1086_; double v___x_1087_; double v___x_1088_; double v___x_1089_; 
v___x_1086_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v___x_1087_ = lean_float_of_nat(v_p_1085_);
v___x_1088_ = sqrt(v___x_1087_);
v___x_1089_ = lean_float_div(v___x_1086_, v___x_1088_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_leadingReflectionModulus___boxed(lean_object* v_p_1090_){
_start:
{
double v_res_1091_; lean_object* v_r_1092_; 
v_res_1091_ = lp_spectral_Spectral_Certified_leadingReflectionModulus(v_p_1090_);
v_r_1092_ = lean_box_float(v_res_1091_);
return v_r_1092_;
}
}
static double _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__0(void){
_start:
{
lean_object* v___x_1093_; uint8_t v___x_1094_; lean_object* v___x_1095_; double v___x_1096_; 
v___x_1093_ = lean_unsigned_to_nat(1u);
v___x_1094_ = 1;
v___x_1095_ = lean_unsigned_to_nat(5u);
v___x_1096_ = l_Float_ofScientific(v___x_1095_, v___x_1094_, v___x_1093_);
return v___x_1096_;
}
}
static double _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__1(void){
_start:
{
double v___x_1097_; double v___x_1098_; 
v___x_1097_ = lean_float_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__0, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__0_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__0);
v___x_1098_ = lean_float_negate(v___x_1097_);
return v___x_1098_;
}
}
static double _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__2(void){
_start:
{
double v___x_1099_; double v___x_1100_; 
v___x_1099_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v___x_1100_ = lean_float_negate(v___x_1099_);
return v___x_1100_;
}
}
static double _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__3(void){
_start:
{
double v___x_1101_; double v___x_1102_; 
v___x_1101_ = lean_float_once(&lp_spectral_Spectral_Certified_phiRe___closed__0, &lp_spectral_Spectral_Certified_phiRe___closed__0_once, _init_lp_spectral_Spectral_Certified_phiRe___closed__0);
v___x_1102_ = lean_float_negate(v___x_1101_);
return v___x_1102_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__4___boxed__const__1(void){
_start:
{
double v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_float_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__3, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__3_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__3);
v___x_1104_ = lean_box_float(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__4(void){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1105_ = lean_box(0);
v___x_1106_ = lp_spectral_Spectral_Certified_sampleScatteringData___closed__4___boxed__const__1;
v___x_1107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v___x_1105_);
return v___x_1107_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__5___boxed__const__1(void){
_start:
{
double v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = lean_float_once(&lp_spectral_Spectral_Certified_phiRe___closed__0, &lp_spectral_Spectral_Certified_phiRe___closed__0_once, _init_lp_spectral_Spectral_Certified_phiRe___closed__0);
v___x_1109_ = lean_box_float(v___x_1108_);
return v___x_1109_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__5(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1110_ = lean_obj_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__4, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__4_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__4);
v___x_1111_ = lp_spectral_Spectral_Certified_sampleScatteringData___closed__5___boxed__const__1;
v___x_1112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
lean_ctor_set(v___x_1112_, 1, v___x_1110_);
return v___x_1112_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__6___boxed__const__1(void){
_start:
{
double v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_float_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__2, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__2_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__2);
v___x_1114_ = lean_box_float(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__6(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1115_ = lean_obj_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__5, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__5_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__5);
v___x_1116_ = lp_spectral_Spectral_Certified_sampleScatteringData___closed__6___boxed__const__1;
v___x_1117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
lean_ctor_set(v___x_1117_, 1, v___x_1115_);
return v___x_1117_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__7___boxed__const__1(void){
_start:
{
double v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = lean_float_once(&lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0, &lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_dftUnitary___lam__0___closed__0);
v___x_1119_ = lean_box_float(v___x_1118_);
return v___x_1119_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__7(void){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1120_ = lean_obj_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__6, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__6_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__6);
v___x_1121_ = lp_spectral_Spectral_Certified_sampleScatteringData___closed__7___boxed__const__1;
v___x_1122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
lean_ctor_set(v___x_1122_, 1, v___x_1120_);
return v___x_1122_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__8___boxed__const__1(void){
_start:
{
double v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = lean_float_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__1, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__1_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__1);
v___x_1124_ = lean_box_float(v___x_1123_);
return v___x_1124_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__8(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_obj_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__7, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__7_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__7);
v___x_1126_ = lp_spectral_Spectral_Certified_sampleScatteringData___closed__8___boxed__const__1;
v___x_1127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v___x_1125_);
return v___x_1127_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__9___boxed__const__1(void){
_start:
{
double v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = lean_float_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__0, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__0_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__0);
v___x_1129_ = lean_box_float(v___x_1128_);
return v___x_1129_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__9(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_obj_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__8, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__8_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__8);
v___x_1131_ = lp_spectral_Spectral_Certified_sampleScatteringData___closed__9___boxed__const__1;
v___x_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v___x_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_sampleScatteringData(lean_object* v_p_1133_){
_start:
{
double v_r_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v_r_1134_ = lp_spectral_Spectral_Certified_leadingReflectionModulus(v_p_1133_);
v___x_1135_ = lean_box(0);
v___x_1136_ = lean_obj_once(&lp_spectral_Spectral_Certified_sampleScatteringData___closed__9, &lp_spectral_Spectral_Certified_sampleScatteringData___closed__9_once, _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__9);
v___x_1137_ = lean_box_float(v_r_1134_);
v___x_1138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___x_1135_);
v___x_1139_ = lean_box_float(v_r_1134_);
v___x_1140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1139_);
lean_ctor_set(v___x_1140_, 1, v___x_1138_);
v___x_1141_ = lean_box_float(v_r_1134_);
v___x_1142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
lean_ctor_set(v___x_1142_, 1, v___x_1140_);
v___x_1143_ = lean_box_float(v_r_1134_);
v___x_1144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
lean_ctor_set(v___x_1144_, 1, v___x_1142_);
v___x_1145_ = lean_box_float(v_r_1134_);
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v___x_1144_);
v___x_1147_ = lean_box_float(v_r_1134_);
v___x_1148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
lean_ctor_set(v___x_1148_, 1, v___x_1146_);
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1136_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_marchenkoSampleScatteringCert(lean_object* v_p_1150_){
_start:
{
uint8_t v___y_1152_; lean_object* v_d_1158_; uint8_t v___x_1159_; 
lean_inc(v_p_1150_);
v_d_1158_ = lp_spectral_Spectral_Certified_sampleScatteringData(v_p_1150_);
lean_inc_ref(v_d_1158_);
v___x_1159_ = lp_spectral_Spectral_Certified_scatteringSymmetric(v_d_1158_);
if (v___x_1159_ == 0)
{
lean_dec_ref(v_d_1158_);
v___y_1152_ = v___x_1159_;
goto v___jp_1151_;
}
else
{
uint8_t v___x_1160_; 
v___x_1160_ = lp_spectral_Spectral_Certified_scatteringUnitModulus(v_d_1158_);
v___y_1152_ = v___x_1160_;
goto v___jp_1151_;
}
v___jp_1151_:
{
if (v___y_1152_ == 0)
{
lean_dec(v_p_1150_);
return v___y_1152_;
}
else
{
double v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; double v___x_1156_; uint8_t v___x_1157_; 
v___x_1153_ = lp_spectral_Spectral_Certified_leadingReflectionModulus(v_p_1150_);
v___x_1154_ = lean_unsigned_to_nat(10u);
v___x_1155_ = lean_unsigned_to_nat(1u);
v___x_1156_ = l_Float_ofScientific(v___x_1154_, v___y_1152_, v___x_1155_);
v___x_1157_ = lean_float_decLt(v___x_1153_, v___x_1156_);
return v___x_1157_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_marchenkoSampleScatteringCert___boxed(lean_object* v_p_1161_){
_start:
{
uint8_t v_res_1162_; lean_object* v_r_1163_; 
v_res_1162_ = lp_spectral_Spectral_Certified_marchenkoSampleScatteringCert(v_p_1161_);
v_r_1163_ = lean_box(v_res_1162_);
return v_r_1163_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_lpMatchesArithmeticCert(lean_object* v_p_1164_){
_start:
{
uint8_t v___x_1165_; 
v___x_1165_ = lp_spectral_Spectral_Certified_isPrime(v_p_1164_);
if (v___x_1165_ == 0)
{
lean_dec(v_p_1164_);
return v___x_1165_;
}
else
{
double v___x_1166_; double v___x_1167_; double v___x_1168_; double v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; double v___x_1172_; double v___x_1173_; double v___x_1174_; double v___x_1175_; double v___x_1176_; double v___x_1177_; double v___x_1178_; double v___x_1179_; lean_object* v___x_1180_; double v___x_1181_; uint8_t v___x_1182_; 
lean_inc(v_p_1164_);
v___x_1166_ = lp_spectral_Spectral_Certified_arithmeticLpAtUnit(v_p_1164_);
v___x_1167_ = lean_float_of_nat(v_p_1164_);
v___x_1168_ = log(v___x_1167_);
v___x_1169_ = lean_float_negate(v___x_1168_);
v___x_1170_ = lean_unsigned_to_nat(10u);
v___x_1171_ = lean_unsigned_to_nat(1u);
v___x_1172_ = l_Float_ofScientific(v___x_1170_, v___x_1165_, v___x_1171_);
v___x_1173_ = sqrt(v___x_1167_);
v___x_1174_ = lean_float_div(v___x_1172_, v___x_1173_);
v___x_1175_ = lean_float_mul(v___x_1169_, v___x_1174_);
v___x_1176_ = lean_float_sub(v___x_1172_, v___x_1174_);
v___x_1177_ = lean_float_div(v___x_1175_, v___x_1176_);
v___x_1178_ = lean_float_sub(v___x_1166_, v___x_1177_);
v___x_1179_ = fabs(v___x_1178_);
v___x_1180_ = lean_unsigned_to_nat(6u);
v___x_1181_ = l_Float_ofScientific(v___x_1171_, v___x_1165_, v___x_1180_);
v___x_1182_ = lean_float_decLt(v___x_1179_, v___x_1181_);
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_lpMatchesArithmeticCert___boxed(lean_object* v_p_1183_){
_start:
{
uint8_t v_res_1184_; lean_object* v_r_1185_; 
v_res_1184_ = lp_spectral_Spectral_Certified_lpMatchesArithmeticCert(v_p_1183_);
v_r_1185_ = lean_box(v_res_1184_);
return v_r_1185_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1186_ = lean_unsigned_to_nat(8u);
v___x_1187_ = lp_spectral_Spectral_Certified_dftUnitary(v___x_1186_);
return v___x_1187_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1188_ = lean_unsigned_to_nat(2u);
v___x_1189_ = lp_spectral_Spectral_Certified_primeGAlphaOk(v___x_1188_);
return v___x_1189_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = ((lean_object*)(lp_spectral_Spectral_Certified_examplePrimeSet));
v___x_1191_ = lp_spectral_Spectral_Certified_finiteLeafCount(v___x_1190_);
return v___x_1191_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; 
v___x_1192_ = lean_unsigned_to_nat(6u);
v___x_1193_ = lean_obj_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__2, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__2_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__2);
v___x_1194_ = lean_nat_dec_eq(v___x_1193_, v___x_1192_);
return v___x_1194_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1195_; uint8_t v___x_1196_; 
v___x_1195_ = lean_unsigned_to_nat(4u);
v___x_1196_ = lp_spectral_Spectral_Certified_dftUnitary(v___x_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0(lean_object* v_i_1197_){
_start:
{
uint8_t v___y_1199_; lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v___x_1203_ = lean_unsigned_to_nat(1u);
v___x_1204_ = lean_nat_add(v_i_1197_, v___x_1203_);
v___x_1205_ = lp_spectral_Spectral_Certified_gAlphaTableOk(v___x_1204_);
lean_dec(v___x_1204_);
if (v___x_1205_ == 0)
{
v___y_1199_ = v___x_1205_;
goto v___jp_1198_;
}
else
{
uint8_t v___x_1206_; 
v___x_1206_ = lean_uint8_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__4, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__4_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__4);
v___y_1199_ = v___x_1206_;
goto v___jp_1198_;
}
v___jp_1198_:
{
if (v___y_1199_ == 0)
{
return v___y_1199_;
}
else
{
uint8_t v___x_1200_; 
v___x_1200_ = lean_uint8_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__0, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__0_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__0);
if (v___x_1200_ == 0)
{
return v___x_1200_;
}
else
{
uint8_t v___x_1201_; 
v___x_1201_ = lean_uint8_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__1, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__1_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__1);
if (v___x_1201_ == 0)
{
return v___x_1201_;
}
else
{
uint8_t v___x_1202_; 
v___x_1202_ = lean_uint8_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__3, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__3_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___closed__3);
return v___x_1202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0___boxed(lean_object* v_i_1207_){
_start:
{
uint8_t v_res_1208_; lean_object* v_r_1209_; 
v_res_1208_ = lp_spectral_Spectral_Certified_combinatorialCertificateOk___lam__0(v_i_1207_);
lean_dec(v_i_1207_);
v_r_1209_ = lean_box(v_res_1208_);
return v_r_1209_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__1(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1211_ = lp_spectral_Spectral_Certified_arithDensityCoeff;
v___x_1212_ = lp_spectral_Spectral_Certified_geomDensityCoeff;
v___x_1213_ = lp_spectral_Spectral_Certified_QRat_beq(v___x_1212_, v___x_1211_);
return v___x_1213_;
}
}
static lean_object* _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__2(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = lean_unsigned_to_nat(24u);
v___x_1215_ = l_List_range(v___x_1214_);
return v___x_1215_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__3(void){
_start:
{
lean_object* v___f_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___f_1216_ = ((lean_object*)(lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__0));
v___x_1217_ = lean_obj_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__2, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__2_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__2);
v___x_1218_ = l_List_all___redArg(v___x_1217_, v___f_1216_);
return v___x_1218_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__4(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v___x_1219_ = lp_spectral_Spectral_Certified_qOne;
v___x_1220_ = lp_spectral_Spectral_Certified_vesicaVolume;
v___x_1221_ = lp_spectral_Spectral_Certified_QRat_beq(v___x_1220_, v___x_1219_);
return v___x_1221_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk(void){
_start:
{
uint8_t v___y_1223_; uint8_t v___x_1227_; 
v___x_1227_ = lp_spectral_Spectral_Certified_intersectionUniqueLineCert;
if (v___x_1227_ == 0)
{
v___y_1223_ = v___x_1227_;
goto v___jp_1222_;
}
else
{
uint8_t v___x_1228_; 
v___x_1228_ = lean_uint8_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__4, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__4_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__4);
v___y_1223_ = v___x_1228_;
goto v___jp_1222_;
}
v___jp_1222_:
{
if (v___y_1223_ == 0)
{
return v___y_1223_;
}
else
{
uint8_t v___x_1224_; 
v___x_1224_ = lean_uint8_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__1, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__1_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__1);
if (v___x_1224_ == 0)
{
return v___x_1224_;
}
else
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_uint8_once(&lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4, &lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4_once, _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert___closed__4);
if (v___x_1225_ == 0)
{
return v___x_1225_;
}
else
{
uint8_t v___x_1226_; 
v___x_1226_ = lean_uint8_once(&lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__3, &lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__3_once, _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk___closed__3);
return v___x_1226_;
}
}
}
}
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__0(void){
_start:
{
lean_object* v___x_1229_; uint8_t v___x_1230_; 
v___x_1229_ = lean_unsigned_to_nat(2u);
v___x_1230_ = lp_spectral_Spectral_Certified_lpMatchesArithmeticCert(v___x_1229_);
return v___x_1230_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__1(void){
_start:
{
lean_object* v___x_1231_; uint8_t v___x_1232_; 
v___x_1231_ = lean_unsigned_to_nat(3u);
v___x_1232_ = lp_spectral_Spectral_Certified_lpMatchesArithmeticCert(v___x_1231_);
return v___x_1232_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__2(void){
_start:
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = lean_unsigned_to_nat(2u);
v___x_1234_ = lp_spectral_Spectral_Certified_marchenkoSampleScatteringCert(v___x_1233_);
return v___x_1234_;
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk(void){
_start:
{
uint8_t v___y_1236_; uint8_t v___x_1239_; 
v___x_1239_ = lp_spectral_Spectral_Certified_finiteSpecArbCert;
if (v___x_1239_ == 0)
{
v___y_1236_ = v___x_1239_;
goto v___jp_1235_;
}
else
{
uint8_t v___x_1240_; 
v___x_1240_ = lean_uint8_once(&lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__2, &lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__2_once, _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__2);
v___y_1236_ = v___x_1240_;
goto v___jp_1235_;
}
v___jp_1235_:
{
if (v___y_1236_ == 0)
{
return v___y_1236_;
}
else
{
uint8_t v___x_1237_; 
v___x_1237_ = lean_uint8_once(&lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__0, &lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__0_once, _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__0);
if (v___x_1237_ == 0)
{
return v___x_1237_;
}
else
{
uint8_t v___x_1238_; 
v___x_1238_ = lean_uint8_once(&lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__1, &lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__1_once, _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk___closed__1);
return v___x_1238_;
}
}
}
}
}
static uint8_t _init_lp_spectral_Spectral_Certified_fullCertificateOk(void){
_start:
{
uint8_t v___x_1241_; 
v___x_1241_ = lp_spectral_Spectral_Certified_combinatorialCertificateOk;
if (v___x_1241_ == 0)
{
return v___x_1241_;
}
else
{
uint8_t v___x_1242_; 
v___x_1242_ = lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk;
return v___x_1242_;
}
}
}
static uint8_t _init_lp_spectral_Spectral_combinatorialCertificateOk(void){
_start:
{
uint8_t v___x_1243_; 
v___x_1243_ = lp_spectral_Spectral_Certified_combinatorialCertificateOk;
return v___x_1243_;
}
}
static uint8_t _init_lp_spectral_Spectral_finiteAnalyticCertificateOk(void){
_start:
{
uint8_t v___x_1244_; 
v___x_1244_ = lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk;
return v___x_1244_;
}
}
static uint8_t _init_lp_spectral_Spectral_spectralPaperCertificateOk(void){
_start:
{
uint8_t v___x_1245_; 
v___x_1245_ = lp_spectral_Spectral_Certified_fullCertificateOk;
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* lp_spectral_IO_print___at___00IO_println___at___00Spectral_printVerificationStatus_spec__0_spec__0(lean_object* v_s_1246_){
_start:
{
lean_object* v___x_1248_; lean_object* v_putStr_1249_; lean_object* v___x_1250_; 
v___x_1248_ = lean_get_stdout();
v_putStr_1249_ = lean_ctor_get(v___x_1248_, 4);
lean_inc_ref(v_putStr_1249_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = lean_apply_2(v_putStr_1249_, v_s_1246_, lean_box(0));
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* lp_spectral_IO_print___at___00IO_println___at___00Spectral_printVerificationStatus_spec__0_spec__0___boxed(lean_object* v_s_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = lp_spectral_IO_print___at___00IO_println___at___00Spectral_printVerificationStatus_spec__0_spec__0(v_s_1251_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(lean_object* v_s_1254_){
_start:
{
uint32_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1256_ = 10;
v___x_1257_ = lean_string_push(v_s_1254_, v___x_1256_);
v___x_1258_ = lp_spectral_IO_print___at___00IO_println___at___00Spectral_printVerificationStatus_spec__0_spec__0(v___x_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0___boxed(lean_object* v_s_1259_, lean_object* v_a_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v_s_1259_);
return v_res_1261_;
}
}
static lean_object* _init_lp_spectral_Spectral_printVerificationStatus___closed__18(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = lean_unsigned_to_nat(6u);
v___x_1281_ = lp_spectral_Spectral_Certified_gZeta(v___x_1280_);
return v___x_1281_;
}
}
static lean_object* _init_lp_spectral_Spectral_printVerificationStatus___closed__19(void){
_start:
{
lean_object* v___x_1282_; lean_object* v_n_1283_; 
v___x_1282_ = lean_obj_once(&lp_spectral_Spectral_printVerificationStatus___closed__18, &lp_spectral_Spectral_printVerificationStatus___closed__18_once, _init_lp_spectral_Spectral_printVerificationStatus___closed__18);
v_n_1283_ = lp_spectral_Spectral_Certified_QRat_normalize(v___x_1282_);
return v_n_1283_;
}
}
static lean_object* _init_lp_spectral_Spectral_printVerificationStatus___closed__25(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_unsigned_to_nat(1u);
v___x_1290_ = lp_spectral_Spectral_Certified_gZeta(v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_lp_spectral_Spectral_printVerificationStatus___closed__26(void){
_start:
{
lean_object* v___x_1291_; lean_object* v_n_1292_; 
v___x_1291_ = lean_obj_once(&lp_spectral_Spectral_printVerificationStatus___closed__25, &lp_spectral_Spectral_printVerificationStatus___closed__25_once, _init_lp_spectral_Spectral_printVerificationStatus___closed__25);
v_n_1292_ = lp_spectral_Spectral_Certified_QRat_normalize(v___x_1291_);
return v_n_1292_;
}
}
static lean_object* _init_lp_spectral_Spectral_printVerificationStatus___closed__28(void){
_start:
{
lean_object* v___x_1294_; lean_object* v_n_1295_; 
v___x_1294_ = lp_spectral_Spectral_Certified_vesicaVolume;
v_n_1295_ = lp_spectral_Spectral_Certified_QRat_normalize(v___x_1294_);
return v_n_1295_;
}
}
static lean_object* _init_lp_spectral_Spectral_printVerificationStatus___closed__30(void){
_start:
{
lean_object* v___x_1297_; lean_object* v_n_1298_; 
v___x_1297_ = lp_spectral_Spectral_Certified_alphaCrit;
v_n_1298_ = lp_spectral_Spectral_Certified_QRat_normalize(v___x_1297_);
return v_n_1298_;
}
}
static lean_object* _init_lp_spectral_Spectral_printVerificationStatus___closed__32(void){
_start:
{
lean_object* v___x_1300_; lean_object* v_n_1301_; 
v___x_1300_ = lp_spectral_Spectral_Certified_vesicaScale;
v_n_1301_ = lp_spectral_Spectral_Certified_QRat_normalize(v___x_1300_);
return v_n_1301_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_printVerificationStatus(){
_start:
{
lean_object* v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__21));
v___x_1380_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1379_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
lean_dec_ref(v___x_1380_);
v___x_1381_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__22));
v___x_1382_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1381_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
lean_dec_ref(v___x_1382_);
v___x_1383_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__23));
v___x_1384_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1383_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v___x_1385_; 
lean_dec_ref(v___x_1384_);
v___x_1385_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1379_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
lean_dec_ref(v___x_1385_);
v___x_1386_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__24));
v___x_1387_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1386_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v_n_1422_; lean_object* v_num_1423_; lean_object* v_den_1424_; lean_object* v___x_1425_; lean_object* v___y_1427_; lean_object* v___x_1442_; uint8_t v___x_1443_; 
lean_dec_ref(v___x_1387_);
v_n_1422_ = lean_obj_once(&lp_spectral_Spectral_printVerificationStatus___closed__30, &lp_spectral_Spectral_printVerificationStatus___closed__30_once, _init_lp_spectral_Spectral_printVerificationStatus___closed__30);
v_num_1423_ = lean_ctor_get(v_n_1422_, 0);
v_den_1424_ = lean_ctor_get(v_n_1422_, 1);
v___x_1425_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__31));
v___x_1442_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_1443_ = lean_int_dec_eq(v_den_1424_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1444_ = l_Int_repr(v_num_1423_);
v___x_1445_ = ((lean_object*)(lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0));
v___x_1446_ = lean_string_append(v___x_1444_, v___x_1445_);
v___x_1447_ = l_Int_repr(v_den_1424_);
v___x_1448_ = lean_string_append(v___x_1446_, v___x_1447_);
lean_dec_ref(v___x_1447_);
v___y_1427_ = v___x_1448_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Int_repr(v_num_1423_);
v___y_1427_ = v___x_1449_;
goto v___jp_1426_;
}
v___jp_1388_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1391_ = lean_string_append(v___y_1389_, v___y_1390_);
lean_dec_ref(v___y_1390_);
v___x_1392_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1391_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_n_1393_; lean_object* v_num_1394_; lean_object* v_den_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; uint8_t v___x_1398_; 
lean_dec_ref(v___x_1392_);
v_n_1393_ = lean_obj_once(&lp_spectral_Spectral_printVerificationStatus___closed__26, &lp_spectral_Spectral_printVerificationStatus___closed__26_once, _init_lp_spectral_Spectral_printVerificationStatus___closed__26);
v_num_1394_ = lean_ctor_get(v_n_1393_, 0);
v_den_1395_ = lean_ctor_get(v_n_1393_, 1);
v___x_1396_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__27));
v___x_1397_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_1398_ = lean_int_dec_eq(v_den_1395_, v___x_1397_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1399_ = l_Int_repr(v_num_1394_);
v___x_1400_ = ((lean_object*)(lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0));
v___x_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
v___x_1402_ = l_Int_repr(v_den_1395_);
v___x_1403_ = lean_string_append(v___x_1401_, v___x_1402_);
lean_dec_ref(v___x_1402_);
v___y_1363_ = v___x_1396_;
v___y_1364_ = v___x_1403_;
goto v___jp_1362_;
}
else
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Int_repr(v_num_1394_);
v___y_1363_ = v___x_1396_;
v___y_1364_ = v___x_1404_;
goto v___jp_1362_;
}
}
else
{
return v___x_1392_;
}
}
v___jp_1405_:
{
lean_object* v_n_1408_; lean_object* v_num_1409_; lean_object* v_den_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; 
v_n_1408_ = lean_obj_once(&lp_spectral_Spectral_printVerificationStatus___closed__28, &lp_spectral_Spectral_printVerificationStatus___closed__28_once, _init_lp_spectral_Spectral_printVerificationStatus___closed__28);
v_num_1409_ = lean_ctor_get(v_n_1408_, 0);
v_den_1410_ = lean_ctor_get(v_n_1408_, 1);
v___x_1411_ = lean_string_append(v___y_1406_, v___y_1407_);
lean_dec_ref(v___y_1407_);
v___x_1412_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__29));
v___x_1413_ = lean_string_append(v___x_1411_, v___x_1412_);
v___x_1414_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_1415_ = lean_int_dec_eq(v_den_1410_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1416_ = l_Int_repr(v_num_1409_);
v___x_1417_ = ((lean_object*)(lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0));
v___x_1418_ = lean_string_append(v___x_1416_, v___x_1417_);
v___x_1419_ = l_Int_repr(v_den_1410_);
v___x_1420_ = lean_string_append(v___x_1418_, v___x_1419_);
lean_dec_ref(v___x_1419_);
v___y_1389_ = v___x_1413_;
v___y_1390_ = v___x_1420_;
goto v___jp_1388_;
}
else
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Int_repr(v_num_1409_);
v___y_1389_ = v___x_1413_;
v___y_1390_ = v___x_1421_;
goto v___jp_1388_;
}
}
v___jp_1426_:
{
lean_object* v_n_1428_; lean_object* v_num_1429_; lean_object* v_den_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v_n_1428_ = lean_obj_once(&lp_spectral_Spectral_printVerificationStatus___closed__32, &lp_spectral_Spectral_printVerificationStatus___closed__32_once, _init_lp_spectral_Spectral_printVerificationStatus___closed__32);
v_num_1429_ = lean_ctor_get(v_n_1428_, 0);
v_den_1430_ = lean_ctor_get(v_n_1428_, 1);
v___x_1431_ = lean_string_append(v___x_1425_, v___y_1427_);
lean_dec_ref(v___y_1427_);
v___x_1432_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__33));
v___x_1433_ = lean_string_append(v___x_1431_, v___x_1432_);
v___x_1434_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_1435_ = lean_int_dec_eq(v_den_1430_, v___x_1434_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1436_ = l_Int_repr(v_num_1429_);
v___x_1437_ = ((lean_object*)(lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0));
v___x_1438_ = lean_string_append(v___x_1436_, v___x_1437_);
v___x_1439_ = l_Int_repr(v_den_1430_);
v___x_1440_ = lean_string_append(v___x_1438_, v___x_1439_);
lean_dec_ref(v___x_1439_);
v___y_1406_ = v___x_1433_;
v___y_1407_ = v___x_1440_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1441_; 
v___x_1441_ = l_Int_repr(v_num_1429_);
v___y_1406_ = v___x_1433_;
v___y_1407_ = v___x_1441_;
goto v___jp_1405_;
}
}
}
else
{
return v___x_1387_;
}
}
else
{
return v___x_1385_;
}
}
else
{
return v___x_1384_;
}
}
else
{
return v___x_1382_;
}
}
else
{
return v___x_1380_;
}
v___jp_1304_:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
lean_inc_ref(v___y_1305_);
v___x_1307_ = lean_string_append(v___y_1305_, v___y_1306_);
v___x_1308_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1307_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec_ref(v___x_1308_);
v___x_1309_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__0));
v___x_1310_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1309_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
lean_dec_ref(v___x_1310_);
v___x_1311_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__1));
v___x_1312_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1311_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
lean_dec_ref(v___x_1312_);
v___x_1313_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__2));
v___x_1314_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1313_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
lean_dec_ref(v___x_1314_);
v___x_1315_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__3));
v___x_1316_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1315_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_dec_ref(v___x_1316_);
v___x_1317_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__4));
v___x_1318_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1317_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
lean_dec_ref(v___x_1318_);
v___x_1319_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__5));
v___x_1320_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1319_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec_ref(v___x_1320_);
v___x_1321_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__6));
v___x_1322_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1321_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
lean_dec_ref(v___x_1322_);
v___x_1323_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__7));
v___x_1324_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1323_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_dec_ref(v___x_1324_);
v___x_1325_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__8));
v___x_1326_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1325_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec_ref(v___x_1326_);
v___x_1327_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__9));
v___x_1328_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1327_);
return v___x_1328_;
}
else
{
return v___x_1326_;
}
}
else
{
return v___x_1324_;
}
}
else
{
return v___x_1322_;
}
}
else
{
return v___x_1320_;
}
}
else
{
return v___x_1318_;
}
}
else
{
return v___x_1316_;
}
}
else
{
return v___x_1314_;
}
}
else
{
return v___x_1312_;
}
}
else
{
return v___x_1310_;
}
}
else
{
return v___x_1308_;
}
}
v___jp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
lean_inc_ref(v___y_1330_);
v___x_1332_ = lean_string_append(v___y_1330_, v___y_1331_);
v___x_1333_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1332_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v___x_1334_; uint8_t v___x_1335_; 
lean_dec_ref(v___x_1333_);
v___x_1334_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__10));
v___x_1335_ = lp_spectral_Spectral_Certified_fullCertificateOk;
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; 
v___x_1336_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__11));
v___y_1305_ = v___x_1334_;
v___y_1306_ = v___x_1336_;
goto v___jp_1304_;
}
else
{
lean_object* v___x_1337_; 
v___x_1337_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__12));
v___y_1305_ = v___x_1334_;
v___y_1306_ = v___x_1337_;
goto v___jp_1304_;
}
}
else
{
return v___x_1333_;
}
}
v___jp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_inc_ref(v___y_1339_);
v___x_1341_ = lean_string_append(v___y_1339_, v___y_1340_);
v___x_1342_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1341_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v___x_1343_; uint8_t v___x_1344_; 
lean_dec_ref(v___x_1342_);
v___x_1343_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__13));
v___x_1344_ = lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk;
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; 
v___x_1345_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__11));
v___y_1330_ = v___x_1343_;
v___y_1331_ = v___x_1345_;
goto v___jp_1329_;
}
else
{
lean_object* v___x_1346_; 
v___x_1346_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__12));
v___y_1330_ = v___x_1343_;
v___y_1331_ = v___x_1346_;
goto v___jp_1329_;
}
}
else
{
return v___x_1342_;
}
}
v___jp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = lean_string_append(v___y_1348_, v___y_1349_);
lean_dec_ref(v___y_1349_);
v___x_1351_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1350_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
lean_dec_ref(v___x_1351_);
v___x_1352_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__14));
v___x_1353_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1352_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_dec_ref(v___x_1353_);
v___x_1354_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__15));
v___x_1355_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1354_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_dec_ref(v___x_1355_);
v___x_1356_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__16));
v___x_1357_ = lp_spectral_IO_println___at___00Spectral_printVerificationStatus_spec__0(v___x_1356_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
lean_dec_ref(v___x_1357_);
v___x_1358_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__17));
v___x_1359_ = lp_spectral_Spectral_Certified_combinatorialCertificateOk;
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; 
v___x_1360_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__11));
v___y_1339_ = v___x_1358_;
v___y_1340_ = v___x_1360_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1361_; 
v___x_1361_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__12));
v___y_1339_ = v___x_1358_;
v___y_1340_ = v___x_1361_;
goto v___jp_1338_;
}
}
else
{
return v___x_1357_;
}
}
else
{
return v___x_1355_;
}
}
else
{
return v___x_1353_;
}
}
else
{
return v___x_1351_;
}
}
v___jp_1362_:
{
lean_object* v_n_1365_; lean_object* v_num_1366_; lean_object* v_den_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
v_n_1365_ = lean_obj_once(&lp_spectral_Spectral_printVerificationStatus___closed__19, &lp_spectral_Spectral_printVerificationStatus___closed__19_once, _init_lp_spectral_Spectral_printVerificationStatus___closed__19);
v_num_1366_ = lean_ctor_get(v_n_1365_, 0);
v_den_1367_ = lean_ctor_get(v_n_1365_, 1);
lean_inc_ref(v___y_1363_);
v___x_1368_ = lean_string_append(v___y_1363_, v___y_1364_);
lean_dec_ref(v___y_1364_);
v___x_1369_ = ((lean_object*)(lp_spectral_Spectral_printVerificationStatus___closed__20));
v___x_1370_ = lean_string_append(v___x_1368_, v___x_1369_);
v___x_1371_ = lean_obj_once(&lp_spectral_Spectral_Certified_qZero___closed__0, &lp_spectral_Spectral_Certified_qZero___closed__0_once, _init_lp_spectral_Spectral_Certified_qZero___closed__0);
v___x_1372_ = lean_int_dec_eq(v_den_1367_, v___x_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1373_ = l_Int_repr(v_num_1366_);
v___x_1374_ = ((lean_object*)(lp_spectral_Spectral_Certified_instToStringQRat___lam__0___closed__0));
v___x_1375_ = lean_string_append(v___x_1373_, v___x_1374_);
v___x_1376_ = l_Int_repr(v_den_1367_);
v___x_1377_ = lean_string_append(v___x_1375_, v___x_1376_);
lean_dec_ref(v___x_1376_);
v___y_1348_ = v___x_1370_;
v___y_1349_ = v___x_1377_;
goto v___jp_1347_;
}
else
{
lean_object* v___x_1378_; 
v___x_1378_ = l_Int_repr(v_num_1366_);
v___y_1348_ = v___x_1370_;
v___y_1349_ = v___x_1378_;
goto v___jp_1347_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_printVerificationStatus___boxed(lean_object* v_a_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = lp_spectral_Spectral_printVerificationStatus();
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = lp_spectral_Spectral_printVerificationStatus();
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* lp_spectral_main___boxed(lean_object* v_a_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = _lean_main();
return v_res_1455_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_spectral_Spectral(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_spectral_Spectral_Certified_qZero = _init_lp_spectral_Spectral_Certified_qZero();
lean_mark_persistent(lp_spectral_Spectral_Certified_qZero);
lp_spectral_Spectral_Certified_qOne = _init_lp_spectral_Spectral_Certified_qOne();
lean_mark_persistent(lp_spectral_Spectral_Certified_qOne);
lp_spectral_Spectral_Certified_floatPi = _init_lp_spectral_Spectral_Certified_floatPi();
lp_spectral_Spectral_Certified_alphaCrit = _init_lp_spectral_Spectral_Certified_alphaCrit();
lean_mark_persistent(lp_spectral_Spectral_Certified_alphaCrit);
lp_spectral_Spectral_Certified_feWeight = _init_lp_spectral_Spectral_Certified_feWeight();
lean_mark_persistent(lp_spectral_Spectral_Certified_feWeight);
lp_spectral_Spectral_Certified_vesicaScale = _init_lp_spectral_Spectral_Certified_vesicaScale();
lean_mark_persistent(lp_spectral_Spectral_Certified_vesicaScale);
lp_spectral_Spectral_Certified_vesicaVolume = _init_lp_spectral_Spectral_Certified_vesicaVolume();
lean_mark_persistent(lp_spectral_Spectral_Certified_vesicaVolume);
lp_spectral_Spectral_Certified_geomDensityCoeff = _init_lp_spectral_Spectral_Certified_geomDensityCoeff();
lean_mark_persistent(lp_spectral_Spectral_Certified_geomDensityCoeff);
lp_spectral_Spectral_Certified_arithDensityCoeff = _init_lp_spectral_Spectral_Certified_arithDensityCoeff();
lean_mark_persistent(lp_spectral_Spectral_Certified_arithDensityCoeff);
lp_spectral_Spectral_Certified_vesicaHeightOverWidth = _init_lp_spectral_Spectral_Certified_vesicaHeightOverWidth();
lp_spectral_Spectral_Certified_intersectionUniqueLineCert = _init_lp_spectral_Spectral_Certified_intersectionUniqueLineCert();
lp_spectral_Spectral_Certified_finiteSpecArbCert = _init_lp_spectral_Spectral_Certified_finiteSpecArbCert();
lp_spectral_Spectral_Certified_sampleScatteringData___closed__4___boxed__const__1 = _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__4___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Certified_sampleScatteringData___closed__4___boxed__const__1);
lp_spectral_Spectral_Certified_sampleScatteringData___closed__5___boxed__const__1 = _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__5___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Certified_sampleScatteringData___closed__5___boxed__const__1);
lp_spectral_Spectral_Certified_sampleScatteringData___closed__6___boxed__const__1 = _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__6___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Certified_sampleScatteringData___closed__6___boxed__const__1);
lp_spectral_Spectral_Certified_sampleScatteringData___closed__7___boxed__const__1 = _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__7___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Certified_sampleScatteringData___closed__7___boxed__const__1);
lp_spectral_Spectral_Certified_sampleScatteringData___closed__8___boxed__const__1 = _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__8___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Certified_sampleScatteringData___closed__8___boxed__const__1);
lp_spectral_Spectral_Certified_sampleScatteringData___closed__9___boxed__const__1 = _init_lp_spectral_Spectral_Certified_sampleScatteringData___closed__9___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Certified_sampleScatteringData___closed__9___boxed__const__1);
lp_spectral_Spectral_Certified_combinatorialCertificateOk = _init_lp_spectral_Spectral_Certified_combinatorialCertificateOk();
lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk = _init_lp_spectral_Spectral_Certified_finiteAnalyticCertificateOk();
lp_spectral_Spectral_Certified_fullCertificateOk = _init_lp_spectral_Spectral_Certified_fullCertificateOk();
lp_spectral_Spectral_combinatorialCertificateOk = _init_lp_spectral_Spectral_combinatorialCertificateOk();
lp_spectral_Spectral_finiteAnalyticCertificateOk = _init_lp_spectral_Spectral_finiteAnalyticCertificateOk();
lp_spectral_Spectral_spectralPaperCertificateOk = _init_lp_spectral_Spectral_spectralPaperCertificateOk();
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
void lean_initialize_runtime_module();
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    return _lean_main();
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  lean_initialize_runtime_module();
  res = initialize_spectral_Spectral(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = 0;
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
