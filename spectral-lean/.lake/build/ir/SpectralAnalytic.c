// Lean compiler output
// Module: SpectralAnalytic
// Imports: public import Init public meta import Init public import Spectral
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
double fabs(double);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
double lean_float_add(double, double);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
double lean_float_negate(double);
double lean_float_of_nat(lean_object*);
double sqrt(double);
double lean_float_div(double, double);
lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lp_spectral_Spectral_isPrime(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
double lp_spectral_Spectral_arithmeticLpAtUnit(lean_object*);
double log(double);
double lean_float_mul(double, double);
extern lean_object* lp_spectral_Spectral_examplePrimeSet;
lean_object* lean_nat_div(lean_object*, lean_object*);
extern double lp_spectral_Spectral_floatPi;
double exp(double);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Float_repr(double, lean_object*);
lean_object* lp_spectral_Spectral_spectralMain();
lean_object* lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
static const lean_string_object lp_spectral_Spectral_Analytic_Assumed_paperConditionalClaim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 155, .m_capacity = 155, .m_length = 154, .m_data = "Assumed: HP + Marchenko + vesica uniqueness => spectral measure = von Mangoldt; zeros on Re(s)=alpha. Only finite combinatorial steps are certified below."};
static const lean_object* lp_spectral_Spectral_Analytic_Assumed_paperConditionalClaim___closed__0 = (const lean_object*)&lp_spectral_Spectral_Analytic_Assumed_paperConditionalClaim___closed__0_value;
LEAN_EXPORT const lean_object* lp_spectral_Spectral_Analytic_Assumed_paperConditionalClaim = (const lean_object*)&lp_spectral_Spectral_Analytic_Assumed_paperConditionalClaim___closed__0_value;
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_stripPrimeFactors_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_stripPrimeFactors_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_stripPrimeFactors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_stripPrimeFactors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_vonMangoldt___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_vonMangoldt___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0;
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_vonMangoldt(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_vonMangoldt___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___closed__0;
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_gaussianTestReal(double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_isSmoothOver___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_isSmoothOver___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_isSmoothOver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_isSmoothOver___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Analytic_Certified_numbersFromPrimes_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_mapTR_loop___at___00Spectral_Analytic_Certified_numbersFromPrimes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_numbersFromPrimes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_numbersFromPrimes___boxed(lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_arithmeticSpectralPairing_spec__0(double, double, double, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_arithmeticSpectralPairing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_arithmeticSpectralPairing(lean_object*, lean_object*, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_arithmeticSpectralPairing___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_finiteSpectralPairing(lean_object*, lean_object*, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_finiteSpectralPairing___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__3;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__4;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__5;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__6;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__8;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert;
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_xiDistributionalCoeff(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_xiDistributionalCoeff___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(double);
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2_value;
static const lean_string_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5_value;
static const lean_string_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7;
static lean_once_cell_t lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__9 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__10 = (const lean_object*)&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__0 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__0_value;
static const lean_string_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sampleK"};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__1 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__1_value;
static const lean_ctor_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__1_value)}};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__2 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__2_value;
static const lean_ctor_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__2_value)}};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__3 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__3_value;
static const lean_string_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__4 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__4_value;
static const lean_ctor_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__4_value)}};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__5 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__5_value;
static const lean_ctor_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__3_value),((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__5_value)}};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__6 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__6_value;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__7;
static const lean_string_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sampleR"};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__8 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__8_value;
static const lean_ctor_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__8_value)}};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__9 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__9_value;
static const lean_string_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__10 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__10_value;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__11;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__12;
static const lean_ctor_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__0_value)}};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__13 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__13_value;
static const lean_ctor_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__10_value)}};
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__14 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__14_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spectral_Spectral_Analytic_Certified_instReprScatteringData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData___closed__0 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData___closed__0_value;
LEAN_EXPORT const lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData___closed__0_value;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___closed__0;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0(double, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK(lean_object*, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___closed__0;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0(double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___boxed(lean_object*);
static const lean_closure_object lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___closed__0 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___closed__0_value;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___boxed(lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus___boxed(lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__4;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10___boxed__const__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_marchenkoSampleScatteringCert(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_marchenkoSampleScatteringCert___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_lpMatchesArithmeticCert(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_lpMatchesArithmeticCert___boxed(lean_object*);
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSample(lean_object*, double, double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSample___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_reflectionSample___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_reflectionSample___closed__0;
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_reflectionSample(double);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_reflectionSample___boxed(lean_object*);
static const lean_closure_object lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spectral_Spectral_Analytic_Certified_reflectionSample___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__0 = (const lean_object*)&lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__0_value;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__2;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__3;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__4;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__5;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__0;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__1;
static lean_once_cell_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__2;
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "\n----------------------------------------------------------------"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__0 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__0_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "  VERIFICATION STATUS (see VERIFICATION_STATUS.md)"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__1 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__1_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "----------------------------------------------------------------"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__2 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__2_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "\n  PROVED (native_decide / finite computation):"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__3 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__3_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "    - vonMangoldt on test values"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__4 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__4_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "    - finite_identity_3_2 (same sum both sides)"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__5 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__5_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "    - finiteSpecArbCert (bounded Gaussian arithmetic sum)"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__6 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__6_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "    - sample scattering symmetry and |R|<1 for p=2,3"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__7 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__7_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "    - L_p closed form at unit for p=2,3"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__8 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__8_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "    - finiteAnalyticCertificateOk = "};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__9 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__9_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "\n  ASSUMED (axioms — paper inputs, NOT proved in Lean):"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__10 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__10_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "    - Assumed.hilbertPolya"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__11 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__11_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "    - Assumed.vesicaStarOperatorUniqueness"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__12 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__12_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "    - Assumed.marchenkoTheorem8_3"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__13 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__13_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "    - Assumed.distributionalXiLimit"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__14 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__14_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "\n  NOT FORMALIZED:"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__15 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__15_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "    - exists self-adjoint H, spec(H) = {gamma_n}"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__16 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__16_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "    - Marchenko existence/uniqueness of q(x)"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__17 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__17_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "    - xi_S -> xi in S'(R)"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__18 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__18_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "    - conditional HP => all zeros on Re(s)=alpha"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__19 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__19_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 182, .m_capacity = 182, .m_length = 181, .m_data = "\n  Paper claim (informal): Assumed: HP + Marchenko + vesica uniqueness => spectral measure = von Mangoldt; zeros on Re(s)=alpha. Only finite combinatorial steps are certified below."};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__20 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__20_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__21 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__21_value;
static const lean_string_object lp_spectral_Spectral_Analytic_printVerificationStatus___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___closed__22 = (const lean_object*)&lp_spectral_Spectral_Analytic_printVerificationStatus___closed__22_value;
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus();
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_spectralMain();
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_spectralMain___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_analyticLayerCertificateOk;
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_stripPrimeFactors_spec__0(lean_object* v_p_3_, lean_object* v_x_4_, lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 0)
{
return v_x_4_;
}
else
{
lean_object* v_tail_6_; lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_tail_6_ = lean_ctor_get(v_x_5_, 1);
v___x_7_ = lean_nat_mod(v_x_4_, v_p_3_);
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_nat_dec_eq(v___x_7_, v___x_8_);
lean_dec(v___x_7_);
if (v___x_9_ == 0)
{
v_x_5_ = v_tail_6_;
goto _start;
}
else
{
lean_object* v___x_11_; 
v___x_11_ = lean_nat_div(v_x_4_, v_p_3_);
lean_dec(v_x_4_);
v_x_4_ = v___x_11_;
v_x_5_ = v_tail_6_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_stripPrimeFactors_spec__0___boxed(lean_object* v_p_13_, lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_stripPrimeFactors_spec__0(v_p_13_, v_x_14_, v_x_15_);
lean_dec(v_x_15_);
lean_dec(v_p_13_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_stripPrimeFactors(lean_object* v_n_17_, lean_object* v_p_18_, lean_object* v_fuel_19_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = l_List_range(v_fuel_19_);
v___x_21_ = lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_stripPrimeFactors_spec__0(v_p_18_, v_n_17_, v___x_20_);
lean_dec(v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_stripPrimeFactors___boxed(lean_object* v_n_22_, lean_object* v_p_23_, lean_object* v_fuel_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lp_spectral_Spectral_Analytic_Certified_stripPrimeFactors(v_n_22_, v_p_23_, v_fuel_24_);
lean_dec(v_p_23_);
return v_res_25_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_vonMangoldt___lam__0(lean_object* v___x_26_, lean_object* v_n_27_, lean_object* v_i_28_){
_start:
{
lean_object* v_p_29_; uint8_t v___y_31_; uint8_t v___x_36_; 
v_p_29_ = lean_nat_add(v_i_28_, v___x_26_);
v___x_36_ = lp_spectral_Spectral_isPrime(v_p_29_);
if (v___x_36_ == 0)
{
v___y_31_ = v___x_36_;
goto v___jp_30_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; uint8_t v___x_39_; 
v___x_37_ = lean_nat_mod(v_n_27_, v_p_29_);
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_nat_dec_eq(v___x_37_, v___x_38_);
lean_dec(v___x_37_);
v___y_31_ = v___x_39_;
goto v___jp_30_;
}
v___jp_30_:
{
if (v___y_31_ == 0)
{
lean_dec(v_p_29_);
lean_dec(v_n_27_);
return v___y_31_;
}
else
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_32_ = lean_unsigned_to_nat(32u);
v___x_33_ = lp_spectral_Spectral_Analytic_Certified_stripPrimeFactors(v_n_27_, v_p_29_, v___x_32_);
lean_dec(v_p_29_);
v___x_34_ = lean_unsigned_to_nat(1u);
v___x_35_ = lean_nat_dec_eq(v___x_33_, v___x_34_);
lean_dec(v___x_33_);
return v___x_35_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_vonMangoldt___lam__0___boxed(lean_object* v___x_40_, lean_object* v_n_41_, lean_object* v_i_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = lp_spectral_Spectral_Analytic_Certified_vonMangoldt___lam__0(v___x_40_, v_n_41_, v_i_42_);
lean_dec(v_i_42_);
lean_dec(v___x_40_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0(void){
_start:
{
lean_object* v___x_45_; uint8_t v___x_46_; lean_object* v___x_47_; double v___x_48_; 
v___x_45_ = lean_unsigned_to_nat(1u);
v___x_46_ = 1;
v___x_47_ = lean_unsigned_to_nat(0u);
v___x_48_ = l_Float_ofScientific(v___x_47_, v___x_46_, v___x_45_);
return v___x_48_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_vonMangoldt(lean_object* v_n_49_){
_start:
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = lean_unsigned_to_nat(2u);
v___x_51_ = lean_nat_dec_lt(v_n_49_, v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___f_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
lean_inc(v_n_49_);
v___f_52_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Analytic_Certified_vonMangoldt___lam__0___boxed), 3, 2);
lean_closure_set(v___f_52_, 0, v___x_50_);
lean_closure_set(v___f_52_, 1, v_n_49_);
v___x_53_ = lean_unsigned_to_nat(1u);
v___x_54_ = lean_nat_sub(v_n_49_, v___x_53_);
lean_dec(v_n_49_);
v___x_55_ = l_List_range(v___x_54_);
v___x_56_ = l_List_find_x3f___redArg(v___f_52_, v___x_55_);
if (lean_obj_tag(v___x_56_) == 0)
{
double v___x_57_; 
v___x_57_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0, &lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0);
return v___x_57_;
}
else
{
lean_object* v_val_58_; lean_object* v___x_59_; double v___x_60_; double v___x_61_; 
v_val_58_ = lean_ctor_get(v___x_56_, 0);
lean_inc(v_val_58_);
lean_dec_ref(v___x_56_);
v___x_59_ = lean_nat_add(v_val_58_, v___x_50_);
lean_dec(v_val_58_);
v___x_60_ = lean_float_of_nat(v___x_59_);
v___x_61_ = log(v___x_60_);
return v___x_61_;
}
}
else
{
lean_object* v___x_62_; lean_object* v___x_63_; double v___x_64_; 
lean_dec(v_n_49_);
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = l_Float_ofScientific(v___x_62_, v___x_51_, v___x_63_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_vonMangoldt___boxed(lean_object* v_n_65_){
_start:
{
double v_res_66_; lean_object* v_r_67_; 
v_res_66_ = lp_spectral_Spectral_Analytic_Certified_vonMangoldt(v_n_65_);
v_r_67_ = lean_box_float(v_res_66_);
return v_r_67_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___closed__0(void){
_start:
{
lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; double v___x_71_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = 1;
v___x_70_ = lean_unsigned_to_nat(40u);
v___x_71_ = l_Float_ofScientific(v___x_70_, v___x_69_, v___x_68_);
return v___x_71_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_gaussianTestReal(double v_a_72_, double v_u_73_){
_start:
{
double v___x_74_; double v___x_75_; double v___x_76_; double v___x_77_; double v___x_78_; double v___x_79_; double v___x_80_; double v___x_81_; double v___x_82_; double v___x_83_; 
v___x_74_ = lp_spectral_Spectral_floatPi;
v___x_75_ = lean_float_div(v___x_74_, v_a_72_);
v___x_76_ = sqrt(v___x_75_);
v___x_77_ = lean_float_mul(v_u_73_, v_u_73_);
v___x_78_ = lean_float_negate(v___x_77_);
v___x_79_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___closed__0, &lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___closed__0);
v___x_80_ = lean_float_mul(v___x_79_, v_a_72_);
v___x_81_ = lean_float_div(v___x_78_, v___x_80_);
v___x_82_ = exp(v___x_81_);
v___x_83_ = lean_float_mul(v___x_76_, v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_gaussianTestReal___boxed(lean_object* v_a_84_, lean_object* v_u_85_){
_start:
{
double v_a_boxed_86_; double v_u_boxed_87_; double v_res_88_; lean_object* v_r_89_; 
v_a_boxed_86_ = lean_unbox_float(v_a_84_);
lean_dec_ref(v_a_84_);
v_u_boxed_87_ = lean_unbox_float(v_u_85_);
lean_dec_ref(v_u_85_);
v_res_88_ = lp_spectral_Spectral_Analytic_Certified_gaussianTestReal(v_a_boxed_86_, v_u_boxed_87_);
v_r_89_ = lean_box_float(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_isSmoothOver___lam__0(lean_object* v___x_90_, lean_object* v_n_91_, lean_object* v_primes_92_, lean_object* v_i_93_){
_start:
{
lean_object* v_p_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_p_94_ = lean_nat_add(v_i_93_, v___x_90_);
v___x_95_ = lean_nat_mod(v_n_91_, v_p_94_);
v___x_96_ = lean_unsigned_to_nat(0u);
v___x_97_ = lean_nat_dec_eq(v___x_95_, v___x_96_);
lean_dec(v___x_95_);
if (v___x_97_ == 0)
{
uint8_t v___x_98_; 
lean_dec(v_p_94_);
v___x_98_ = 1;
return v___x_98_;
}
else
{
uint8_t v___x_99_; 
v___x_99_ = lp_spectral_Spectral_isPrime(v_p_94_);
if (v___x_99_ == 0)
{
lean_dec(v_p_94_);
return v___x_97_;
}
else
{
uint8_t v___x_100_; 
v___x_100_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_p_94_, v_primes_92_);
lean_dec(v_p_94_);
return v___x_100_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_isSmoothOver___lam__0___boxed(lean_object* v___x_101_, lean_object* v_n_102_, lean_object* v_primes_103_, lean_object* v_i_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = lp_spectral_Spectral_Analytic_Certified_isSmoothOver___lam__0(v___x_101_, v_n_102_, v_primes_103_, v_i_104_);
lean_dec(v_i_104_);
lean_dec(v_primes_103_);
lean_dec(v_n_102_);
lean_dec(v___x_101_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_isSmoothOver(lean_object* v_primes_107_, lean_object* v_n_108_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_unsigned_to_nat(2u);
v___x_110_ = lean_nat_dec_lt(v_n_108_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___f_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
lean_inc(v_n_108_);
v___f_111_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Analytic_Certified_isSmoothOver___lam__0___boxed), 4, 3);
lean_closure_set(v___f_111_, 0, v___x_109_);
lean_closure_set(v___f_111_, 1, v_n_108_);
lean_closure_set(v___f_111_, 2, v_primes_107_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_sub(v_n_108_, v___x_112_);
lean_dec(v_n_108_);
v___x_114_ = l_List_range(v___x_113_);
v___x_115_ = l_List_all___redArg(v___x_114_, v___f_111_);
return v___x_115_;
}
else
{
uint8_t v___x_116_; 
lean_dec(v_n_108_);
lean_dec(v_primes_107_);
v___x_116_ = 0;
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_isSmoothOver___boxed(lean_object* v_primes_117_, lean_object* v_n_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = lp_spectral_Spectral_Analytic_Certified_isSmoothOver(v_primes_117_, v_n_118_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_filterTR_loop___at___00Spectral_Analytic_Certified_numbersFromPrimes_spec__1(lean_object* v_primes_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
if (lean_obj_tag(v_a_122_) == 0)
{
lean_object* v___x_124_; 
lean_dec(v_primes_121_);
v___x_124_ = l_List_reverse___redArg(v_a_123_);
return v___x_124_;
}
else
{
lean_object* v_head_125_; lean_object* v_tail_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_136_; 
v_head_125_ = lean_ctor_get(v_a_122_, 0);
v_tail_126_ = lean_ctor_get(v_a_122_, 1);
v_isSharedCheck_136_ = !lean_is_exclusive(v_a_122_);
if (v_isSharedCheck_136_ == 0)
{
v___x_128_ = v_a_122_;
v_isShared_129_ = v_isSharedCheck_136_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_tail_126_);
lean_inc(v_head_125_);
lean_dec(v_a_122_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_136_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
uint8_t v___x_130_; 
lean_inc(v_head_125_);
lean_inc(v_primes_121_);
v___x_130_ = lp_spectral_Spectral_Analytic_Certified_isSmoothOver(v_primes_121_, v_head_125_);
if (v___x_130_ == 0)
{
lean_del_object(v___x_128_);
lean_dec(v_head_125_);
v_a_122_ = v_tail_126_;
goto _start;
}
else
{
lean_object* v___x_133_; 
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 1, v_a_123_);
v___x_133_ = v___x_128_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_head_125_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_a_123_);
v___x_133_ = v_reuseFailAlloc_135_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
v_a_122_ = v_tail_126_;
v_a_123_ = v___x_133_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_mapTR_loop___at___00Spectral_Analytic_Certified_numbersFromPrimes_spec__0(lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
if (lean_obj_tag(v_a_137_) == 0)
{
lean_object* v___x_139_; 
v___x_139_ = l_List_reverse___redArg(v_a_138_);
return v___x_139_;
}
else
{
lean_object* v_head_140_; lean_object* v_tail_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_151_; 
v_head_140_ = lean_ctor_get(v_a_137_, 0);
v_tail_141_ = lean_ctor_get(v_a_137_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v_a_137_);
if (v_isSharedCheck_151_ == 0)
{
v___x_143_ = v_a_137_;
v_isShared_144_ = v_isSharedCheck_151_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_tail_141_);
lean_inc(v_head_140_);
lean_dec(v_a_137_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_151_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_145_ = lean_unsigned_to_nat(2u);
v___x_146_ = lean_nat_add(v_head_140_, v___x_145_);
lean_dec(v_head_140_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 1, v_a_138_);
lean_ctor_set(v___x_143_, 0, v___x_146_);
v___x_148_ = v___x_143_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_146_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_a_138_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
v_a_137_ = v_tail_141_;
v_a_138_ = v___x_148_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_numbersFromPrimes(lean_object* v_primes_152_, lean_object* v_bound_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_154_ = lean_unsigned_to_nat(1u);
v___x_155_ = lean_nat_sub(v_bound_153_, v___x_154_);
v___x_156_ = l_List_range(v___x_155_);
v___x_157_ = lean_box(0);
v___x_158_ = lp_spectral_List_mapTR_loop___at___00Spectral_Analytic_Certified_numbersFromPrimes_spec__0(v___x_156_, v___x_157_);
v___x_159_ = lp_spectral_List_filterTR_loop___at___00Spectral_Analytic_Certified_numbersFromPrimes_spec__1(v_primes_152_, v___x_158_, v___x_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_numbersFromPrimes___boxed(lean_object* v_primes_160_, lean_object* v_bound_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = lp_spectral_Spectral_Analytic_Certified_numbersFromPrimes(v_primes_160_, v_bound_161_);
lean_dec(v_bound_161_);
return v_res_162_;
}
}
LEAN_EXPORT double lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_arithmeticSpectralPairing_spec__0(double v_C_163_, double v_a_164_, double v_x_165_, lean_object* v_x_166_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
return v_x_165_;
}
else
{
lean_object* v_head_167_; lean_object* v_tail_168_; double v___x_169_; double v___x_170_; double v___x_171_; double v___x_172_; double v___x_173_; double v___x_174_; double v___x_175_; double v___x_176_; double v___x_177_; 
v_head_167_ = lean_ctor_get(v_x_166_, 0);
lean_inc_n(v_head_167_, 2);
v_tail_168_ = lean_ctor_get(v_x_166_, 1);
lean_inc(v_tail_168_);
lean_dec_ref(v_x_166_);
v___x_169_ = lp_spectral_Spectral_Analytic_Certified_vonMangoldt(v_head_167_);
v___x_170_ = lean_float_of_nat(v_head_167_);
v___x_171_ = sqrt(v___x_170_);
v___x_172_ = lean_float_div(v___x_169_, v___x_171_);
v___x_173_ = log(v___x_170_);
v___x_174_ = lean_float_mul(v_C_163_, v___x_173_);
v___x_175_ = lp_spectral_Spectral_Analytic_Certified_gaussianTestReal(v_a_164_, v___x_174_);
v___x_176_ = lean_float_mul(v___x_172_, v___x_175_);
v___x_177_ = lean_float_add(v_x_165_, v___x_176_);
v_x_165_ = v___x_177_;
v_x_166_ = v_tail_168_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_arithmeticSpectralPairing_spec__0___boxed(lean_object* v_C_179_, lean_object* v_a_180_, lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
double v_C_boxed_183_; double v_a_boxed_184_; double v_x_105__boxed_185_; double v_res_186_; lean_object* v_r_187_; 
v_C_boxed_183_ = lean_unbox_float(v_C_179_);
lean_dec_ref(v_C_179_);
v_a_boxed_184_ = lean_unbox_float(v_a_180_);
lean_dec_ref(v_a_180_);
v_x_105__boxed_185_ = lean_unbox_float(v_x_181_);
lean_dec_ref(v_x_181_);
v_res_186_ = lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_arithmeticSpectralPairing_spec__0(v_C_boxed_183_, v_a_boxed_184_, v_x_105__boxed_185_, v_x_182_);
v_r_187_ = lean_box_float(v_res_186_);
return v_r_187_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_arithmeticSpectralPairing(lean_object* v_primes_188_, lean_object* v_bound_189_, double v_C_190_, double v_a_191_){
_start:
{
lean_object* v_ns_192_; double v___x_193_; double v_sum_194_; double v___x_195_; 
v_ns_192_ = lp_spectral_Spectral_Analytic_Certified_numbersFromPrimes(v_primes_188_, v_bound_189_);
v___x_193_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0, &lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0);
v_sum_194_ = lp_spectral_List_foldl___at___00Spectral_Analytic_Certified_arithmeticSpectralPairing_spec__0(v_C_190_, v_a_191_, v___x_193_, v_ns_192_);
v___x_195_ = lean_float_sub(v___x_193_, v_sum_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_arithmeticSpectralPairing___boxed(lean_object* v_primes_196_, lean_object* v_bound_197_, lean_object* v_C_198_, lean_object* v_a_199_){
_start:
{
double v_C_boxed_200_; double v_a_boxed_201_; double v_res_202_; lean_object* v_r_203_; 
v_C_boxed_200_ = lean_unbox_float(v_C_198_);
lean_dec_ref(v_C_198_);
v_a_boxed_201_ = lean_unbox_float(v_a_199_);
lean_dec_ref(v_a_199_);
v_res_202_ = lp_spectral_Spectral_Analytic_Certified_arithmeticSpectralPairing(v_primes_196_, v_bound_197_, v_C_boxed_200_, v_a_boxed_201_);
lean_dec(v_bound_197_);
v_r_203_ = lean_box_float(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_finiteSpectralPairing(lean_object* v_primes_204_, lean_object* v_bound_205_, double v_C_206_, double v_a_207_){
_start:
{
double v___x_208_; 
v___x_208_ = lp_spectral_Spectral_Analytic_Certified_arithmeticSpectralPairing(v_primes_204_, v_bound_205_, v_C_206_, v_a_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_finiteSpectralPairing___boxed(lean_object* v_primes_209_, lean_object* v_bound_210_, lean_object* v_C_211_, lean_object* v_a_212_){
_start:
{
double v_C_boxed_213_; double v_a_boxed_214_; double v_res_215_; lean_object* v_r_216_; 
v_C_boxed_213_ = lean_unbox_float(v_C_211_);
lean_dec_ref(v_C_211_);
v_a_boxed_214_ = lean_unbox_float(v_a_212_);
lean_dec_ref(v_a_212_);
v_res_215_ = lp_spectral_Spectral_Analytic_Certified_finiteSpectralPairing(v_primes_209_, v_bound_210_, v_C_boxed_213_, v_a_boxed_214_);
lean_dec(v_bound_210_);
v_r_216_ = lean_box_float(v_res_215_);
return v_r_216_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0(void){
_start:
{
lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; double v___x_220_; 
v___x_217_ = lean_unsigned_to_nat(1u);
v___x_218_ = 1;
v___x_219_ = lean_unsigned_to_nat(10u);
v___x_220_ = l_Float_ofScientific(v___x_219_, v___x_218_, v___x_217_);
return v___x_220_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1(void){
_start:
{
double v___x_221_; lean_object* v_bound_222_; lean_object* v___x_223_; double v_arith_224_; 
v___x_221_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0);
v_bound_222_ = lean_unsigned_to_nat(50u);
v___x_223_ = lp_spectral_Spectral_examplePrimeSet;
v_arith_224_ = lp_spectral_Spectral_Analytic_Certified_arithmeticSpectralPairing(v___x_223_, v_bound_222_, v___x_221_, v___x_221_);
return v_arith_224_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__2(void){
_start:
{
double v_arith_225_; double v___x_226_; 
v_arith_225_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1);
v___x_226_ = fabs(v_arith_225_);
return v___x_226_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__3(void){
_start:
{
lean_object* v___x_227_; uint8_t v___x_228_; lean_object* v___x_229_; double v___x_230_; 
v___x_227_ = lean_unsigned_to_nat(1u);
v___x_228_ = 1;
v___x_229_ = lean_unsigned_to_nat(10000u);
v___x_230_ = l_Float_ofScientific(v___x_229_, v___x_228_, v___x_227_);
return v___x_230_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__4(void){
_start:
{
double v___x_231_; double v___x_232_; uint8_t v___x_233_; 
v___x_231_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__3, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__3_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__3);
v___x_232_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__2, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__2_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__2);
v___x_233_ = lean_float_decLt(v___x_232_, v___x_231_);
return v___x_233_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__5(void){
_start:
{
double v_arith_234_; double v___x_235_; 
v_arith_234_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__1);
v___x_235_ = lean_float_sub(v_arith_234_, v_arith_234_);
return v___x_235_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__6(void){
_start:
{
double v___x_236_; double v___x_237_; 
v___x_236_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__5, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__5_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__5);
v___x_237_ = fabs(v___x_236_);
return v___x_237_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7(void){
_start:
{
lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; double v___x_241_; 
v___x_238_ = lean_unsigned_to_nat(9u);
v___x_239_ = 1;
v___x_240_ = lean_unsigned_to_nat(1u);
v___x_241_ = l_Float_ofScientific(v___x_240_, v___x_239_, v___x_238_);
return v___x_241_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__8(void){
_start:
{
double v___x_242_; double v___x_243_; uint8_t v___x_244_; 
v___x_242_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7);
v___x_243_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__6, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__6_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__6);
v___x_244_ = lean_float_decLt(v___x_243_, v___x_242_);
return v___x_244_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert(void){
_start:
{
uint8_t v___x_245_; 
v___x_245_ = lean_uint8_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__4, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__4_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__4);
if (v___x_245_ == 0)
{
return v___x_245_;
}
else
{
uint8_t v___x_246_; 
v___x_246_ = lean_uint8_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__8, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__8_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__8);
return v___x_246_;
}
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_xiDistributionalCoeff(lean_object* v_n_247_){
_start:
{
double v___x_248_; double v___x_249_; double v___x_250_; double v___x_251_; double v___x_252_; 
lean_inc(v_n_247_);
v___x_248_ = lp_spectral_Spectral_Analytic_Certified_vonMangoldt(v_n_247_);
v___x_249_ = lean_float_of_nat(v_n_247_);
v___x_250_ = sqrt(v___x_249_);
v___x_251_ = lean_float_div(v___x_248_, v___x_250_);
v___x_252_ = lean_float_negate(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_xiDistributionalCoeff___boxed(lean_object* v_n_253_){
_start:
{
double v_res_254_; lean_object* v_r_255_; 
v_res_254_ = lp_spectral_Spectral_Analytic_Certified_xiDistributionalCoeff(v_n_253_);
v_r_255_ = lean_box_float(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_256_, lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_dec(v_x_256_);
return v_x_257_;
}
else
{
lean_object* v_head_259_; lean_object* v_tail_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_272_; 
v_head_259_ = lean_ctor_get(v_x_258_, 0);
v_tail_260_ = lean_ctor_get(v_x_258_, 1);
v_isSharedCheck_272_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_272_ == 0)
{
v___x_262_ = v_x_258_;
v_isShared_263_ = v_isSharedCheck_272_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_tail_260_);
lean_inc(v_head_259_);
lean_dec(v_x_258_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_272_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
lean_inc(v_x_256_);
if (v_isShared_263_ == 0)
{
lean_ctor_set_tag(v___x_262_, 5);
lean_ctor_set(v___x_262_, 1, v_x_256_);
lean_ctor_set(v___x_262_, 0, v_x_257_);
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_x_257_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_x_256_);
v___x_265_ = v_reuseFailAlloc_271_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; double v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = lean_unbox_float(v_head_259_);
lean_dec(v_head_259_);
v___x_268_ = l_Float_repr(v___x_267_, v___x_266_);
v___x_269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_265_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v_x_257_ = v___x_269_;
v_x_258_ = v_tail_260_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1(lean_object* v_x_273_, lean_object* v_x_274_, lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_dec(v_x_273_);
return v_x_274_;
}
else
{
lean_object* v_head_276_; lean_object* v_tail_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_289_; 
v_head_276_ = lean_ctor_get(v_x_275_, 0);
v_tail_277_ = lean_ctor_get(v_x_275_, 1);
v_isSharedCheck_289_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_289_ == 0)
{
v___x_279_ = v_x_275_;
v_isShared_280_ = v_isSharedCheck_289_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_tail_277_);
lean_inc(v_head_276_);
lean_dec(v_x_275_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_289_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
lean_inc(v_x_273_);
if (v_isShared_280_ == 0)
{
lean_ctor_set_tag(v___x_279_, 5);
lean_ctor_set(v___x_279_, 1, v_x_273_);
lean_ctor_set(v___x_279_, 0, v_x_274_);
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_x_274_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_x_273_);
v___x_282_ = v_reuseFailAlloc_288_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_283_; double v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_283_ = lean_unsigned_to_nat(0u);
v___x_284_ = lean_unbox_float(v_head_276_);
lean_dec(v_head_276_);
v___x_285_ = l_Float_repr(v___x_284_, v___x_283_);
v___x_286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_282_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lp_spectral_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1_spec__2(v_x_273_, v___x_286_, v_tail_277_);
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(double v___y_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = l_Float_repr(v___y_290_, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0___boxed(lean_object* v___y_293_){
_start:
{
double v___y_357__boxed_294_; lean_object* v_res_295_; 
v___y_357__boxed_294_ = lean_unbox_float(v___y_293_);
lean_dec_ref(v___y_293_);
v_res_295_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(v___y_357__boxed_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0(lean_object* v_x_296_, lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_296_) == 0)
{
lean_object* v___x_298_; 
lean_dec(v_x_297_);
v___x_298_ = lean_box(0);
return v___x_298_;
}
else
{
lean_object* v_tail_299_; 
v_tail_299_ = lean_ctor_get(v_x_296_, 1);
if (lean_obj_tag(v_tail_299_) == 0)
{
lean_object* v_head_300_; double v___x_301_; lean_object* v___x_302_; 
lean_dec(v_x_297_);
v_head_300_ = lean_ctor_get(v_x_296_, 0);
lean_inc(v_head_300_);
lean_dec_ref(v_x_296_);
v___x_301_ = lean_unbox_float(v_head_300_);
lean_dec(v_head_300_);
v___x_302_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(v___x_301_);
return v___x_302_;
}
else
{
lean_object* v_head_303_; double v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
lean_inc(v_tail_299_);
v_head_303_ = lean_ctor_get(v_x_296_, 0);
lean_inc(v_head_303_);
lean_dec_ref(v_x_296_);
v___x_304_ = lean_unbox_float(v_head_303_);
lean_dec(v_head_303_);
v___x_305_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0___lam__0(v___x_304_);
v___x_306_ = lp_spectral_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0_spec__1(v_x_297_, v___x_305_, v_tail_299_);
return v___x_306_;
}
}
}
}
static lean_object* _init_lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__2));
v___x_319_ = lean_string_length(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_obj_once(&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7, &lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7_once, _init_lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__7);
v___x_321_ = lean_nat_to_int(v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg(lean_object* v_a_326_){
_start:
{
if (lean_obj_tag(v_a_326_) == 0)
{
lean_object* v___x_327_; 
v___x_327_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__1));
return v___x_327_;
}
else
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_328_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__5));
v___x_329_ = lp_spectral_Std_Format_joinSep___at___00List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0_spec__0(v_a_326_, v___x_328_);
v___x_330_ = lean_obj_once(&lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8, &lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8_once, _init_lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__8);
v___x_331_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__9));
v___x_332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v___x_329_);
v___x_333_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__10));
v___x_334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_330_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
v___x_336_ = l_Std_Format_fill(v___x_335_);
return v___x_336_;
}
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(11u);
v___x_351_ = lean_nat_to_int(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__0));
v___x_357_ = lean_string_length(v___x_356_);
return v___x_357_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__11, &lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__11_once, _init_lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__11);
v___x_359_ = lean_nat_to_int(v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg(lean_object* v_x_364_){
_start:
{
lean_object* v_sampleK_365_; lean_object* v_sampleR_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_398_; 
v_sampleK_365_ = lean_ctor_get(v_x_364_, 0);
v_sampleR_366_ = lean_ctor_get(v_x_364_, 1);
v_isSharedCheck_398_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_398_ == 0)
{
v___x_368_ = v_x_364_;
v_isShared_369_ = v_isSharedCheck_398_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_sampleR_366_);
lean_inc(v_sampleK_365_);
lean_dec(v_x_364_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_398_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_370_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__5));
v___x_371_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__6));
v___x_372_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__7, &lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__7_once, _init_lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__7);
v___x_373_ = lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg(v_sampleK_365_);
if (v_isShared_369_ == 0)
{
lean_ctor_set_tag(v___x_368_, 4);
lean_ctor_set(v___x_368_, 1, v___x_373_);
lean_ctor_set(v___x_368_, 0, v___x_372_);
v___x_375_ = v___x_368_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v___x_373_);
v___x_375_ = v_reuseFailAlloc_397_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
uint8_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_376_ = 0;
v___x_377_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set_uint8(v___x_377_, sizeof(void*)*1, v___x_376_);
v___x_378_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_371_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = ((lean_object*)(lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg___closed__4));
v___x_380_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_378_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
v___x_381_ = lean_box(1);
v___x_382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_380_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v___x_383_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__9));
v___x_384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
v___x_385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___x_370_);
v___x_386_ = lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg(v_sampleR_366_);
v___x_387_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_372_);
lean_ctor_set(v___x_387_, 1, v___x_386_);
v___x_388_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_388_, 0, v___x_387_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*1, v___x_376_);
v___x_389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_385_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__12, &lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__12_once, _init_lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__12);
v___x_391_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__13));
v___x_392_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___x_389_);
v___x_393_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg___closed__14));
v___x_394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_392_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_390_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set_uint8(v___x_396_, sizeof(void*)*1, v___x_376_);
return v___x_396_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr(lean_object* v_x_399_, lean_object* v_prec_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___redArg(v_x_399_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr___boxed(lean_object* v_x_402_, lean_object* v_prec_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = lp_spectral_Spectral_Analytic_Certified_instReprScatteringData_repr(v_x_402_, v_prec_403_);
lean_dec(v_prec_403_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0(lean_object* v_a_405_, lean_object* v_n_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___redArg(v_a_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0___boxed(lean_object* v_a_408_, lean_object* v_n_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = lp_spectral_List_repr_x27___at___00Spectral_Analytic_Certified_instReprScatteringData_repr_spec__0(v_a_408_, v_n_409_);
lean_dec(v_n_409_);
return v_res_410_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___closed__0(void){
_start:
{
lean_object* v___x_413_; uint8_t v___x_414_; lean_object* v___x_415_; double v___x_416_; 
v___x_413_ = lean_unsigned_to_nat(6u);
v___x_414_ = 1;
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = l_Float_ofScientific(v___x_415_, v___x_414_, v___x_413_);
return v___x_416_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0(double v_k_417_, lean_object* v_x_418_){
_start:
{
lean_object* v_fst_419_; double v___x_420_; double v___x_421_; double v___x_422_; double v___x_423_; uint8_t v___x_424_; 
v_fst_419_ = lean_ctor_get(v_x_418_, 0);
v___x_420_ = lean_unbox_float(v_fst_419_);
v___x_421_ = lean_float_add(v___x_420_, v_k_417_);
v___x_422_ = fabs(v___x_421_);
v___x_423_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___closed__0, &lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___closed__0);
v___x_424_ = lean_float_decLt(v___x_422_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___boxed(lean_object* v_k_425_, lean_object* v_x_426_){
_start:
{
double v_k_boxed_427_; uint8_t v_res_428_; lean_object* v_r_429_; 
v_k_boxed_427_ = lean_unbox_float(v_k_425_);
lean_dec_ref(v_k_425_);
v_res_428_ = lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0(v_k_boxed_427_, v_x_426_);
lean_dec_ref(v_x_426_);
v_r_429_ = lean_box(v_res_428_);
return v_r_429_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK(lean_object* v_d_430_, double v_k_431_, double v_r_432_){
_start:
{
lean_object* v_sampleK_433_; lean_object* v_sampleR_434_; lean_object* v___x_435_; lean_object* v___f_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_sampleK_433_ = lean_ctor_get(v_d_430_, 0);
lean_inc(v_sampleK_433_);
v_sampleR_434_ = lean_ctor_get(v_d_430_, 1);
lean_inc(v_sampleR_434_);
lean_dec_ref(v_d_430_);
v___x_435_ = lean_box_float(v_k_431_);
v___f_436_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___lam__0___boxed), 2, 1);
lean_closure_set(v___f_436_, 0, v___x_435_);
v___x_437_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_sampleK_433_, v_sampleR_434_);
v___x_438_ = l_List_find_x3f___redArg(v___f_436_, v___x_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
double v___x_439_; 
v___x_439_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0, &lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_vonMangoldt___closed__0);
return v___x_439_;
}
else
{
lean_object* v_val_440_; lean_object* v_snd_441_; double v___x_442_; double v___x_443_; 
v_val_440_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_val_440_);
lean_dec_ref(v___x_438_);
v_snd_441_ = lean_ctor_get(v_val_440_, 1);
lean_inc(v_snd_441_);
lean_dec(v_val_440_);
v___x_442_ = lean_unbox_float(v_snd_441_);
lean_dec(v_snd_441_);
v___x_443_ = lean_float_sub(v_r_432_, v___x_442_);
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK___boxed(lean_object* v_d_444_, lean_object* v_k_445_, lean_object* v_r_446_){
_start:
{
double v_k_boxed_447_; double v_r_boxed_448_; double v_res_449_; lean_object* v_r_450_; 
v_k_boxed_447_ = lean_unbox_float(v_k_445_);
lean_dec_ref(v_k_445_);
v_r_boxed_448_ = lean_unbox_float(v_r_446_);
lean_dec_ref(v_r_446_);
v_res_449_ = lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK(v_d_444_, v_k_boxed_447_, v_r_boxed_448_);
v_r_450_ = lean_box_float(v_res_449_);
return v_r_450_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___lam__0(lean_object* v_d_451_, uint8_t v___x_452_, lean_object* v_x_453_){
_start:
{
lean_object* v_fst_454_; lean_object* v_snd_455_; double v___x_456_; double v___x_457_; double v___x_458_; double v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; double v___x_462_; uint8_t v___x_463_; 
v_fst_454_ = lean_ctor_get(v_x_453_, 0);
v_snd_455_ = lean_ctor_get(v_x_453_, 1);
v___x_456_ = lean_unbox_float(v_fst_454_);
v___x_457_ = lean_unbox_float(v_snd_455_);
v___x_458_ = lp_spectral_Spectral_Analytic_Certified_reflectionAtNegK(v_d_451_, v___x_456_, v___x_457_);
v___x_459_ = fabs(v___x_458_);
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_unsigned_to_nat(6u);
v___x_462_ = l_Float_ofScientific(v___x_460_, v___x_452_, v___x_461_);
v___x_463_ = lean_float_decLt(v___x_459_, v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___lam__0___boxed(lean_object* v_d_464_, lean_object* v___x_465_, lean_object* v_x_466_){
_start:
{
uint8_t v___x_91__boxed_467_; uint8_t v_res_468_; lean_object* v_r_469_; 
v___x_91__boxed_467_ = lean_unbox(v___x_465_);
v_res_468_ = lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___lam__0(v_d_464_, v___x_91__boxed_467_, v_x_466_);
lean_dec_ref(v_x_466_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric(lean_object* v_d_470_){
_start:
{
lean_object* v_sampleK_471_; lean_object* v_sampleR_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v_sampleK_471_ = lean_ctor_get(v_d_470_, 0);
lean_inc(v_sampleK_471_);
v_sampleR_472_ = lean_ctor_get(v_d_470_, 1);
lean_inc(v_sampleR_472_);
v___x_473_ = l_List_lengthTR___redArg(v_sampleK_471_);
v___x_474_ = l_List_lengthTR___redArg(v_sampleR_472_);
v___x_475_ = lean_nat_dec_eq(v___x_473_, v___x_474_);
lean_dec(v___x_474_);
lean_dec(v___x_473_);
if (v___x_475_ == 0)
{
lean_dec(v_sampleR_472_);
lean_dec(v_sampleK_471_);
lean_dec_ref(v_d_470_);
return v___x_475_;
}
else
{
lean_object* v___x_476_; lean_object* v___f_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_476_ = lean_box(v___x_475_);
v___f_477_ = lean_alloc_closure((void*)(lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___lam__0___boxed), 3, 2);
lean_closure_set(v___f_477_, 0, v_d_470_);
lean_closure_set(v___f_477_, 1, v___x_476_);
v___x_478_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_sampleK_471_, v_sampleR_472_);
v___x_479_ = l_List_all___redArg(v___x_478_, v___f_477_);
return v___x_479_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric___boxed(lean_object* v_d_480_){
_start:
{
uint8_t v_res_481_; lean_object* v_r_482_; 
v_res_481_ = lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric(v_d_480_);
v_r_482_ = lean_box(v_res_481_);
return v_r_482_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___closed__0(void){
_start:
{
double v___x_483_; double v___x_484_; double v___x_485_; 
v___x_483_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7);
v___x_484_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0);
v___x_485_ = lean_float_sub(v___x_484_, v___x_483_);
return v___x_485_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0(double v_r_486_){
_start:
{
double v___x_487_; double v___x_488_; uint8_t v___x_489_; 
v___x_487_ = fabs(v_r_486_);
v___x_488_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___closed__0, &lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___closed__0);
v___x_489_ = lean_float_decLt(v___x_487_, v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0___boxed(lean_object* v_r_490_){
_start:
{
double v_r_boxed_491_; uint8_t v_res_492_; lean_object* v_r_493_; 
v_r_boxed_491_ = lean_unbox_float(v_r_490_);
lean_dec_ref(v_r_490_);
v_res_492_ = lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___lam__0(v_r_boxed_491_);
v_r_493_ = lean_box(v_res_492_);
return v_r_493_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus(lean_object* v_d_495_){
_start:
{
lean_object* v_sampleR_496_; lean_object* v___f_497_; uint8_t v___x_498_; 
v_sampleR_496_ = lean_ctor_get(v_d_495_, 1);
lean_inc(v_sampleR_496_);
lean_dec_ref(v_d_495_);
v___f_497_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___closed__0));
v___x_498_ = l_List_all___redArg(v_sampleR_496_, v___f_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus___boxed(lean_object* v_d_499_){
_start:
{
uint8_t v_res_500_; lean_object* v_r_501_; 
v_res_500_ = lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus(v_d_499_);
v_r_501_ = lean_box(v_res_500_);
return v_r_501_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus(lean_object* v_p_502_){
_start:
{
double v___x_503_; double v___x_504_; double v___x_505_; double v___x_506_; 
v___x_503_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0);
v___x_504_ = lean_float_of_nat(v_p_502_);
v___x_505_ = sqrt(v___x_504_);
v___x_506_ = lean_float_div(v___x_503_, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus___boxed(lean_object* v_p_507_){
_start:
{
double v_res_508_; lean_object* v_r_509_; 
v_res_508_ = lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus(v_p_507_);
v_r_509_ = lean_box_float(v_res_508_);
return v_r_509_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0(void){
_start:
{
lean_object* v___x_510_; uint8_t v___x_511_; lean_object* v___x_512_; double v___x_513_; 
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = 1;
v___x_512_ = lean_unsigned_to_nat(5u);
v___x_513_ = l_Float_ofScientific(v___x_512_, v___x_511_, v___x_510_);
return v___x_513_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1(void){
_start:
{
double v___x_514_; double v___x_515_; 
v___x_514_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0);
v___x_515_ = lean_float_negate(v___x_514_);
return v___x_515_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__2(void){
_start:
{
double v___x_516_; double v___x_517_; 
v___x_516_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0);
v___x_517_ = lean_float_negate(v___x_516_);
return v___x_517_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3(void){
_start:
{
lean_object* v___x_518_; uint8_t v___x_519_; lean_object* v___x_520_; double v___x_521_; 
v___x_518_ = lean_unsigned_to_nat(1u);
v___x_519_ = 1;
v___x_520_ = lean_unsigned_to_nat(20u);
v___x_521_ = l_Float_ofScientific(v___x_520_, v___x_519_, v___x_518_);
return v___x_521_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__4(void){
_start:
{
double v___x_522_; double v___x_523_; 
v___x_522_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3);
v___x_523_ = lean_float_negate(v___x_522_);
return v___x_523_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5___boxed__const__1(void){
_start:
{
double v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__4, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__4_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__4);
v___x_525_ = lean_box_float(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_526_ = lean_box(0);
v___x_527_ = lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5___boxed__const__1;
v___x_528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v___x_526_);
return v___x_528_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6___boxed__const__1(void){
_start:
{
double v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__3);
v___x_530_ = lean_box_float(v___x_529_);
return v___x_530_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_531_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5);
v___x_532_ = lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6___boxed__const__1;
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v___x_531_);
return v___x_533_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7___boxed__const__1(void){
_start:
{
double v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__2, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__2_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__2);
v___x_535_ = lean_box_float(v___x_534_);
return v___x_535_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_536_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6);
v___x_537_ = lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7___boxed__const__1;
v___x_538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v___x_536_);
return v___x_538_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8___boxed__const__1(void){
_start:
{
double v___x_539_; lean_object* v___x_540_; 
v___x_539_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0);
v___x_540_ = lean_box_float(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_541_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7);
v___x_542_ = lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8___boxed__const__1;
v___x_543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___x_541_);
return v___x_543_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9___boxed__const__1(void){
_start:
{
double v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1);
v___x_545_ = lean_box_float(v___x_544_);
return v___x_545_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_546_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8);
v___x_547_ = lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9___boxed__const__1;
v___x_548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v___x_546_);
return v___x_548_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10___boxed__const__1(void){
_start:
{
double v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0);
v___x_550_ = lean_box_float(v___x_549_);
return v___x_550_;
}
}
static lean_object* _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_551_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9);
v___x_552_ = lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10___boxed__const__1;
v___x_553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
lean_ctor_set(v___x_553_, 1, v___x_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_sampleScatteringData(lean_object* v_p_554_){
_start:
{
double v_r_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v_r_555_ = lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus(v_p_554_);
v___x_556_ = lean_box(0);
v___x_557_ = lean_obj_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10);
v___x_558_ = lean_box_float(v_r_555_);
v___x_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
lean_ctor_set(v___x_559_, 1, v___x_556_);
v___x_560_ = lean_box_float(v_r_555_);
v___x_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v___x_559_);
v___x_562_ = lean_box_float(v_r_555_);
v___x_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
lean_ctor_set(v___x_563_, 1, v___x_561_);
v___x_564_ = lean_box_float(v_r_555_);
v___x_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set(v___x_565_, 1, v___x_563_);
v___x_566_ = lean_box_float(v_r_555_);
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v___x_565_);
v___x_568_ = lean_box_float(v_r_555_);
v___x_569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v___x_567_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_557_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
return v___x_570_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_marchenkoSampleScatteringCert(lean_object* v_p_571_){
_start:
{
uint8_t v___y_573_; lean_object* v_d_579_; uint8_t v___x_580_; 
lean_inc(v_p_571_);
v_d_579_ = lp_spectral_Spectral_Analytic_Certified_sampleScatteringData(v_p_571_);
lean_inc_ref(v_d_579_);
v___x_580_ = lp_spectral_Spectral_Analytic_Certified_scatteringSymmetric(v_d_579_);
if (v___x_580_ == 0)
{
lean_dec_ref(v_d_579_);
v___y_573_ = v___x_580_;
goto v___jp_572_;
}
else
{
uint8_t v___x_581_; 
v___x_581_ = lp_spectral_Spectral_Analytic_Certified_scatteringUnitModulus(v_d_579_);
v___y_573_ = v___x_581_;
goto v___jp_572_;
}
v___jp_572_:
{
if (v___y_573_ == 0)
{
lean_dec(v_p_571_);
return v___y_573_;
}
else
{
double v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; double v___x_577_; uint8_t v___x_578_; 
v___x_574_ = lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus(v_p_571_);
v___x_575_ = lean_unsigned_to_nat(10u);
v___x_576_ = lean_unsigned_to_nat(1u);
v___x_577_ = l_Float_ofScientific(v___x_575_, v___y_573_, v___x_576_);
v___x_578_ = lean_float_decLt(v___x_574_, v___x_577_);
return v___x_578_;
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_marchenkoSampleScatteringCert___boxed(lean_object* v_p_582_){
_start:
{
uint8_t v_res_583_; lean_object* v_r_584_; 
v_res_583_ = lp_spectral_Spectral_Analytic_Certified_marchenkoSampleScatteringCert(v_p_582_);
v_r_584_ = lean_box(v_res_583_);
return v_r_584_;
}
}
LEAN_EXPORT uint8_t lp_spectral_Spectral_Analytic_Certified_lpMatchesArithmeticCert(lean_object* v_p_585_){
_start:
{
uint8_t v___x_586_; 
v___x_586_ = lp_spectral_Spectral_isPrime(v_p_585_);
if (v___x_586_ == 0)
{
lean_dec(v_p_585_);
return v___x_586_;
}
else
{
double v___x_587_; double v___x_588_; double v___x_589_; double v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; double v___x_593_; double v___x_594_; double v___x_595_; double v___x_596_; double v___x_597_; double v___x_598_; double v___x_599_; double v___x_600_; lean_object* v___x_601_; double v___x_602_; uint8_t v___x_603_; 
lean_inc(v_p_585_);
v___x_587_ = lp_spectral_Spectral_arithmeticLpAtUnit(v_p_585_);
v___x_588_ = lean_float_of_nat(v_p_585_);
v___x_589_ = log(v___x_588_);
v___x_590_ = lean_float_negate(v___x_589_);
v___x_591_ = lean_unsigned_to_nat(10u);
v___x_592_ = lean_unsigned_to_nat(1u);
v___x_593_ = l_Float_ofScientific(v___x_591_, v___x_586_, v___x_592_);
v___x_594_ = sqrt(v___x_588_);
v___x_595_ = lean_float_div(v___x_593_, v___x_594_);
v___x_596_ = lean_float_mul(v___x_590_, v___x_595_);
v___x_597_ = lean_float_sub(v___x_593_, v___x_595_);
v___x_598_ = lean_float_div(v___x_596_, v___x_597_);
v___x_599_ = lean_float_sub(v___x_587_, v___x_598_);
v___x_600_ = fabs(v___x_599_);
v___x_601_ = lean_unsigned_to_nat(6u);
v___x_602_ = l_Float_ofScientific(v___x_592_, v___x_586_, v___x_601_);
v___x_603_ = lean_float_decLt(v___x_600_, v___x_602_);
return v___x_603_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_lpMatchesArithmeticCert___boxed(lean_object* v_p_604_){
_start:
{
uint8_t v_res_605_; lean_object* v_r_606_; 
v_res_605_ = lp_spectral_Spectral_Analytic_Certified_lpMatchesArithmeticCert(v_p_604_);
v_r_606_ = lean_box(v_res_605_);
return v_r_606_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSample(lean_object* v_R_607_, double v_x_608_, double v_t_609_){
_start:
{
double v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; double v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; double v___x_616_; double v___x_617_; double v___x_618_; 
v___x_610_ = lean_float_add(v_x_608_, v_t_609_);
v___x_611_ = lean_box_float(v___x_610_);
lean_inc_ref(v_R_607_);
v___x_612_ = lean_apply_1(v_R_607_, v___x_611_);
v___x_613_ = lean_float_sub(v_x_608_, v_t_609_);
v___x_614_ = lean_box_float(v___x_613_);
v___x_615_ = lean_apply_1(v_R_607_, v___x_614_);
v___x_616_ = lean_unbox_float(v___x_612_);
lean_dec_ref(v___x_612_);
v___x_617_ = lean_unbox_float(v___x_615_);
lean_dec_ref(v___x_615_);
v___x_618_ = lean_float_add(v___x_616_, v___x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSample___boxed(lean_object* v_R_619_, lean_object* v_x_620_, lean_object* v_t_621_){
_start:
{
double v_x_boxed_622_; double v_t_boxed_623_; double v_res_624_; lean_object* v_r_625_; 
v_x_boxed_622_ = lean_unbox_float(v_x_620_);
lean_dec_ref(v_x_620_);
v_t_boxed_623_ = lean_unbox_float(v_t_621_);
lean_dec_ref(v_t_621_);
v_res_624_ = lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSample(v_R_619_, v_x_boxed_622_, v_t_boxed_623_);
v_r_625_ = lean_box_float(v_res_624_);
return v_r_625_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_reflectionSample___closed__0(void){
_start:
{
lean_object* v___x_626_; double v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(2u);
v___x_627_ = lp_spectral_Spectral_Analytic_Certified_leadingReflectionModulus(v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT double lp_spectral_Spectral_Analytic_Certified_reflectionSample(double v___k_628_){
_start:
{
double v___x_629_; 
v___x_629_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_reflectionSample___closed__0, &lp_spectral_Spectral_Analytic_Certified_reflectionSample___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_reflectionSample___closed__0);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_Certified_reflectionSample___boxed(lean_object* v___k_630_){
_start:
{
double v___k_boxed_631_; double v_res_632_; lean_object* v_r_633_; 
v___k_boxed_631_ = lean_unbox_float(v___k_630_);
lean_dec_ref(v___k_630_);
v_res_632_ = lp_spectral_Spectral_Analytic_Certified_reflectionSample(v___k_boxed_631_);
v_r_633_ = lean_box_float(v_res_632_);
return v_r_633_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__1(void){
_start:
{
double v___x_635_; double v___x_636_; lean_object* v___x_637_; double v___x_638_; 
v___x_635_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__0);
v___x_636_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0);
v___x_637_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__0));
v___x_638_ = lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSample(v___x_637_, v___x_636_, v___x_635_);
return v___x_638_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__2(void){
_start:
{
double v___x_639_; double v___x_640_; lean_object* v___x_641_; double v___x_642_; 
v___x_639_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1, &lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1_once, _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__1);
v___x_640_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__0);
v___x_641_ = ((lean_object*)(lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__0));
v___x_642_ = lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSample(v___x_641_, v___x_640_, v___x_639_);
return v___x_642_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__3(void){
_start:
{
double v___x_643_; double v___x_644_; double v___x_645_; 
v___x_643_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__2, &lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__2_once, _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__2);
v___x_644_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__1, &lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__1_once, _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__1);
v___x_645_ = lean_float_sub(v___x_644_, v___x_643_);
return v___x_645_;
}
}
static double _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__4(void){
_start:
{
double v___x_646_; double v___x_647_; 
v___x_646_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__3, &lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__3_once, _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__3);
v___x_647_ = fabs(v___x_646_);
return v___x_647_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__5(void){
_start:
{
double v___x_648_; double v___x_649_; uint8_t v___x_650_; 
v___x_648_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7, &lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert___closed__7);
v___x_649_ = lean_float_once(&lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__4, &lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__4_once, _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__4);
v___x_650_ = lean_float_decLt(v___x_649_, v___x_648_);
return v___x_650_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert(void){
_start:
{
uint8_t v___x_651_; 
v___x_651_ = lean_uint8_once(&lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__5, &lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__5_once, _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert___closed__5);
return v___x_651_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__0(void){
_start:
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = lean_unsigned_to_nat(2u);
v___x_653_ = lp_spectral_Spectral_Analytic_Certified_lpMatchesArithmeticCert(v___x_652_);
return v___x_653_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__1(void){
_start:
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = lean_unsigned_to_nat(3u);
v___x_655_ = lp_spectral_Spectral_Analytic_Certified_lpMatchesArithmeticCert(v___x_654_);
return v___x_655_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__2(void){
_start:
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = lean_unsigned_to_nat(2u);
v___x_657_ = lp_spectral_Spectral_Analytic_Certified_marchenkoSampleScatteringCert(v___x_656_);
return v___x_657_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk(void){
_start:
{
uint8_t v___y_659_; uint8_t v___x_663_; 
v___x_663_ = lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert;
if (v___x_663_ == 0)
{
v___y_659_ = v___x_663_;
goto v___jp_658_;
}
else
{
uint8_t v___x_664_; 
v___x_664_ = lean_uint8_once(&lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__2, &lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__2_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__2);
v___y_659_ = v___x_664_;
goto v___jp_658_;
}
v___jp_658_:
{
if (v___y_659_ == 0)
{
return v___y_659_;
}
else
{
uint8_t v___x_660_; 
v___x_660_ = lean_uint8_once(&lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__0, &lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__0_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__0);
if (v___x_660_ == 0)
{
return v___x_660_;
}
else
{
uint8_t v___x_661_; 
v___x_661_ = lean_uint8_once(&lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__1, &lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__1_once, _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk___closed__1);
if (v___x_661_ == 0)
{
return v___x_661_;
}
else
{
uint8_t v___x_662_; 
v___x_662_ = lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert;
return v___x_662_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus(){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__0));
v___x_690_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_689_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec_ref(v___x_690_);
v___x_691_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__1));
v___x_692_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_691_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; 
lean_dec_ref(v___x_692_);
v___x_693_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__2));
v___x_694_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_693_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v___x_695_; lean_object* v___x_696_; 
lean_dec_ref(v___x_694_);
v___x_695_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__3));
v___x_696_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_695_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec_ref(v___x_696_);
v___x_697_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__4));
v___x_698_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_697_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; 
lean_dec_ref(v___x_698_);
v___x_699_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__5));
v___x_700_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_699_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v___x_701_; lean_object* v___x_702_; 
lean_dec_ref(v___x_700_);
v___x_701_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__6));
v___x_702_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_701_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v___x_703_; lean_object* v___x_704_; 
lean_dec_ref(v___x_702_);
v___x_703_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__7));
v___x_704_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_703_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec_ref(v___x_704_);
v___x_705_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__8));
v___x_706_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_705_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v___x_707_; lean_object* v___y_709_; uint8_t v___x_734_; 
lean_dec_ref(v___x_706_);
v___x_707_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__9));
v___x_734_ = lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk;
if (v___x_734_ == 0)
{
lean_object* v___x_735_; 
v___x_735_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__21));
v___y_709_ = v___x_735_;
goto v___jp_708_;
}
else
{
lean_object* v___x_736_; 
v___x_736_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__22));
v___y_709_ = v___x_736_;
goto v___jp_708_;
}
v___jp_708_:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = lean_string_append(v___x_707_, v___y_709_);
v___x_711_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_710_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec_ref(v___x_711_);
v___x_712_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__10));
v___x_713_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_712_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec_ref(v___x_713_);
v___x_714_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__11));
v___x_715_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_714_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
lean_dec_ref(v___x_715_);
v___x_716_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__12));
v___x_717_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_716_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; 
lean_dec_ref(v___x_717_);
v___x_718_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__13));
v___x_719_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_718_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec_ref(v___x_719_);
v___x_720_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__14));
v___x_721_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec_ref(v___x_721_);
v___x_722_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__15));
v___x_723_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_722_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v___x_724_; lean_object* v___x_725_; 
lean_dec_ref(v___x_723_);
v___x_724_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__16));
v___x_725_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_724_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec_ref(v___x_725_);
v___x_726_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__17));
v___x_727_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_726_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref(v___x_727_);
v___x_728_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__18));
v___x_729_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_728_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; 
lean_dec_ref(v___x_729_);
v___x_730_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__19));
v___x_731_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_730_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec_ref(v___x_731_);
v___x_732_ = ((lean_object*)(lp_spectral_Spectral_Analytic_printVerificationStatus___closed__20));
v___x_733_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_732_);
return v___x_733_;
}
else
{
return v___x_731_;
}
}
else
{
return v___x_729_;
}
}
else
{
return v___x_727_;
}
}
else
{
return v___x_725_;
}
}
else
{
return v___x_723_;
}
}
else
{
return v___x_721_;
}
}
else
{
return v___x_719_;
}
}
else
{
return v___x_717_;
}
}
else
{
return v___x_715_;
}
}
else
{
return v___x_713_;
}
}
else
{
return v___x_711_;
}
}
}
else
{
return v___x_706_;
}
}
else
{
return v___x_704_;
}
}
else
{
return v___x_702_;
}
}
else
{
return v___x_700_;
}
}
else
{
return v___x_698_;
}
}
else
{
return v___x_696_;
}
}
else
{
return v___x_694_;
}
}
else
{
return v___x_692_;
}
}
else
{
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_printVerificationStatus___boxed(lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = lp_spectral_Spectral_Analytic_printVerificationStatus();
return v_res_738_;
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_spectralMain(){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = lp_spectral_Spectral_spectralMain();
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v___x_741_; 
lean_dec_ref(v___x_740_);
v___x_741_ = lp_spectral_Spectral_Analytic_printVerificationStatus();
return v___x_741_;
}
else
{
return v___x_740_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_Spectral_Analytic_spectralMain___boxed(lean_object* v_a_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = lp_spectral_Spectral_Analytic_spectralMain();
return v_res_743_;
}
}
static uint8_t _init_lp_spectral_Spectral_Analytic_analyticLayerCertificateOk(void){
_start:
{
uint8_t v___x_744_; 
v___x_744_ = lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk;
return v___x_744_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_spectral_Spectral(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_spectral_SpectralAnalytic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_spectral_Spectral(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert = _init_lp_spectral_Spectral_Analytic_Certified_finiteSpecArbCert();
lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5___boxed__const__1 = _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__5___boxed__const__1);
lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6___boxed__const__1 = _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__6___boxed__const__1);
lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7___boxed__const__1 = _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__7___boxed__const__1);
lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8___boxed__const__1 = _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__8___boxed__const__1);
lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9___boxed__const__1 = _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__9___boxed__const__1);
lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10___boxed__const__1 = _init_lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10___boxed__const__1();
lean_mark_persistent(lp_spectral_Spectral_Analytic_Certified_sampleScatteringData___closed__10___boxed__const__1);
lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert = _init_lp_spectral_Spectral_Analytic_Certified_marchenkoKernelSymmetricCert();
lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk = _init_lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk();
lp_spectral_Spectral_Analytic_analyticLayerCertificateOk = _init_lp_spectral_Spectral_Analytic_analyticLayerCertificateOk();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
