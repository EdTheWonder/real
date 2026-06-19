// Lean compiler output
// Module: SpectralFull
// Imports: public import Init public meta import Init public import ArioriFull
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
uint8_t l_List_all___redArg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lp_ariori_VesicaNumber_mk_x27(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_ariori_VesicaNumber_ofInt(lean_object*);
lean_object* lp_ariori_VesicaNumber_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lp_ariori_VesicaNumber_div(lean_object*, lean_object*);
extern lean_object* lp_ariori_VesicaNumber_zero;
uint8_t lp_ariori_VesicaNumber_beq(lean_object*, lean_object*);
extern lean_object* lp_ariori_VesicaNumber_one;
lean_object* lp_ariori_nodePointAtRadius(lean_object*, uint8_t);
lean_object* lp_ariori_Point_distSq(lean_object*, lean_object*);
lean_object* lp_ariori_VesicaNumber_formatExact(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
double log(double);
double lean_float_negate(double);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lp_ariori_IO_println___at___00arioriMain_spec__0(lean_object*);
static lean_once_cell_t lp_ariori_Spectral_floatPi___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_Spectral_floatPi___closed__0;
LEAN_EXPORT double lp_ariori_Spectral_floatPi;
static lean_once_cell_t lp_ariori_Spectral_alphaCrit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_alphaCrit___closed__0;
static lean_once_cell_t lp_ariori_Spectral_alphaCrit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_alphaCrit___closed__1;
static lean_once_cell_t lp_ariori_Spectral_alphaCrit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_alphaCrit___closed__2;
static lean_once_cell_t lp_ariori_Spectral_alphaCrit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_alphaCrit___closed__3;
LEAN_EXPORT lean_object* lp_ariori_Spectral_alphaCrit;
static lean_once_cell_t lp_ariori_Spectral_feWeight___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_feWeight___closed__0;
LEAN_EXPORT lean_object* lp_ariori_Spectral_feWeight;
LEAN_EXPORT lean_object* lp_ariori_Spectral_vesicaScale;
LEAN_EXPORT lean_object* lp_ariori_Spectral_vesicaVolumeAtScale;
LEAN_EXPORT lean_object* lp_ariori_Spectral_arithmeticDensityCoeff;
LEAN_EXPORT lean_object* lp_ariori_Spectral_geometricDensityCoeff;
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00Spectral_divisorsOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00Spectral_divisorsOf_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00Spectral_divisorsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorsOf(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorsOf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorCount(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorCount___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_Spectral_isPrime___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_isPrime___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_Spectral_isPrime(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_isPrime___boxed(lean_object*);
static lean_once_cell_t lp_ariori_Spectral_gAlpha___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_gAlpha___closed__0;
LEAN_EXPORT lean_object* lp_ariori_Spectral_gAlpha(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_gAlpha___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_gZeta(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_gZeta___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_Spectral_primeGAlphaCert(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_primeGAlphaCert___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_Spectral_allPrimeGAlphaUpTo30___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_allPrimeGAlphaUpTo30___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_Spectral_allPrimeGAlphaUpTo30___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__0 = (const lean_object*)&lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__0_value;
static lean_once_cell_t lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__1;
static lean_once_cell_t lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__2;
LEAN_EXPORT uint8_t lp_ariori_Spectral_allPrimeGAlphaUpTo30;
static lean_once_cell_t lp_ariori_Spectral_gAlphaTableOk___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_gAlphaTableOk___closed__0;
LEAN_EXPORT uint8_t lp_ariori_Spectral_gAlphaTableOk(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_gAlphaTableOk___boxed(lean_object*);
static lean_once_cell_t lp_ariori_Spectral_intersectionUniqueLineCert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_intersectionUniqueLineCert___closed__0;
static lean_once_cell_t lp_ariori_Spectral_intersectionUniqueLineCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_intersectionUniqueLineCert___closed__1;
static lean_once_cell_t lp_ariori_Spectral_intersectionUniqueLineCert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_intersectionUniqueLineCert___closed__2;
static lean_once_cell_t lp_ariori_Spectral_intersectionUniqueLineCert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_intersectionUniqueLineCert___closed__3;
LEAN_EXPORT uint8_t lp_ariori_Spectral_intersectionUniqueLineCert;
LEAN_EXPORT double lp_ariori_Spectral_leafLogPosition(double, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_Spectral_leafLogPosition___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_starLeafCount(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_starLeafCount___boxed(lean_object*);
static lean_once_cell_t lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__0;
static lean_once_cell_t lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__1;
LEAN_EXPORT double lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0(lean_object*, lean_object*, double, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_Spectral_dftRowEnergy___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_Spectral_dftRowEnergy___closed__0;
LEAN_EXPORT double lp_ariori_Spectral_dftRowEnergy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftRowEnergy___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0;
static lean_once_cell_t lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__1;
LEAN_EXPORT uint8_t lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_Spectral_dftUnitaryRowsSumSq(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftUnitaryRowsSumSq___boxed(lean_object*);
LEAN_EXPORT double lp_ariori_Spectral_dftTransmissionModulus(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftTransmissionModulus___boxed(lean_object*);
LEAN_EXPORT double lp_ariori_Spectral_arithmeticLpCoeff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_arithmeticLpCoeff___boxed(lean_object*, lean_object*);
LEAN_EXPORT double lp_ariori_Spectral_arithmeticLpAtUnit(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_arithmeticLpAtUnit___boxed(lean_object*);
static lean_once_cell_t lp_ariori_Spectral_vesicaHalfHeight___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_vesicaHalfHeight___closed__0;
LEAN_EXPORT lean_object* lp_ariori_Spectral_vesicaHalfHeight;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_arioriX17VesicaCert___closed__0;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_arioriX17VesicaCert___closed__1;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_arioriX17VesicaCert___closed__2;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_arioriX17VesicaCert___closed__3;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_arioriX17VesicaCert___closed__4;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_arioriX17VesicaCert___closed__5;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_arioriX17VesicaCert___closed__6;
static lean_once_cell_t lp_ariori_Spectral_arioriX17VesicaCert___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_arioriX17VesicaCert___closed__7;
LEAN_EXPORT uint8_t lp_ariori_Spectral_arioriX17VesicaCert;
static lean_once_cell_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__0;
static lean_once_cell_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__1;
static lean_once_cell_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__2;
LEAN_EXPORT uint8_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_Spectral_spectralPaperCertificateOk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_Spectral_spectralPaperCertificateOk___closed__0 = (const lean_object*)&lp_ariori_Spectral_spectralPaperCertificateOk___closed__0_value;
static lean_once_cell_t lp_ariori_Spectral_spectralPaperCertificateOk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_spectralPaperCertificateOk___closed__1;
static lean_once_cell_t lp_ariori_Spectral_spectralPaperCertificateOk___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralPaperCertificateOk___closed__2;
static lean_once_cell_t lp_ariori_Spectral_spectralPaperCertificateOk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_Spectral_spectralPaperCertificateOk___closed__3;
LEAN_EXPORT uint8_t lp_ariori_Spectral_spectralPaperCertificateOk;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 193, .m_capacity = 193, .m_length = 64, .m_data = "╔══════════════════════════════════════════════════════════════╗"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__0 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__0_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 63, .m_data = "║   SPECTRAL PAPER — LEAN 4 FINITE CERTIFICATES               ║"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__1 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__1_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 63, .m_data = "║   (Spectral.pdf: arithmetic ∩ geometry at Re(s) = α)        ║"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__2 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__2_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 193, .m_capacity = 193, .m_length = 64, .m_data = "╚══════════════════════════════════════════════════════════════╝"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__3 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__3_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 52, .m_data = "\n  Scale and critical line (ζ: α = 1/2, r = 2α = 1):"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__4 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__4_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 13, .m_data = "    α_crit = "};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__5 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__5_value;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__6;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__7;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "    r_vesica = "};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__8 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__8_value;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__9;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__10;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 31, .m_data = "    ✓ vesica_scale_is_two_alpha"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__11 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__11_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 53, .m_data = "    ✓ vesica_symmetry_line_is_critical  (x = r/2 = α)"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__12 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__12_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 78, .m_data = "    ✓ spectral_density_coefficients_match  (Vol = 1 ⇒ matched leading density)"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__13 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__13_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 41, .m_data = "\n  Arithmetic signature g_α(n) = 2α/d(n):"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__14 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__14_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 34, .m_data = "    ✓ g_α(p) = α for primes p ≤ 30"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__15 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__15_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 28, .m_data = "    ✓ g_α(n) table n = 1..24"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__16 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__16_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 21, .m_data = "    example g_ζ(6) = "};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__17 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__17_value;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__18;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__19;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__20;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 19, .m_data = "  (6 = 2·3, d(6)=4)"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__21 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__21_value;
static lean_once_cell_t lp_ariori_Spectral_spectralMain___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_Spectral_spectralMain___closed__22;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 42, .m_data = "\n  Theorem 1.2 (three facets → Re(s) = α):"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__23 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__23_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 30, .m_data = "    ✓ intersection_unique_line"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__24 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__24_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "\n  Star graph / DFT vertex (Section 7):"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__25 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__25_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 36, .m_data = "    ✓ dft_unitary_N4, dft_unitary_N8"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__26 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__26_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 48, .m_data = "    ✓ equi-transmission |t| = 1/√N (example N=6)"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__27 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__27_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 49, .m_data = "\n  Arithmetic L_p(z) coefficients (Section 8, ζ):"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__28 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__28_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 32, .m_data = "    ✓ arithmetic_Lp for p = 2, 3"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__29 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__29_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "\n  Bridge to Ariori Gen-1:"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__30 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__30_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 66, .m_data = "    ✓ ariori_x17_matches_vesica_axis  (X17 at √3/2, vesica height)"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__31 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__31_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\n  Combined:"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__32 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__32_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "    spectralPaperCertificateOk = "};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__33 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__33_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 32, .m_data = "    ✓ spectral_paper_certificate"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__34 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__34_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "\n  Not machine-checked here (paper analytic layer):"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__35 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__35_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 60, .m_data = "    • Hilbert–Pólya existence of global spectral realization"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__36 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__36_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "    • Marchenko inverse scattering (Theorem 8.3)"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__37 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__37_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 56, .m_data = "    • Infinite prime limit S ↑ ℕ and distributional ξ(k)"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__38 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__38_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 188, .m_capacity = 188, .m_length = 63, .m_data = "\n══════════════════════════════════════════════════════════════"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__39 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__39_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 51, .m_data = "  Finite spectral certificates MACHINE-VERIFIED.  ∎"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__40 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__40_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 187, .m_capacity = 187, .m_length = 62, .m_data = "══════════════════════════════════════════════════════════════"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__41 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__41_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__42 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__42_value;
static const lean_string_object lp_ariori_Spectral_spectralMain___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_ariori_Spectral_spectralMain___closed__43 = (const lean_object*)&lp_ariori_Spectral_spectralMain___closed__43_value;
LEAN_EXPORT lean_object* lp_ariori_Spectral_spectralMain();
LEAN_EXPORT lean_object* lp_ariori_Spectral_spectralMain___boxed(lean_object*);
static double _init_lp_ariori_Spectral_floatPi___closed__0(void){
_start:
{
lean_object* v___x_1_; uint8_t v___x_2_; lean_object* v___x_3_; double v___x_4_; 
v___x_1_ = lean_unsigned_to_nat(15u);
v___x_2_ = 1;
v___x_3_ = lean_cstr_to_nat("3141592653589793");
v___x_4_ = l_Float_ofScientific(v___x_3_, v___x_2_, v___x_1_);
return v___x_4_;
}
}
static double _init_lp_ariori_Spectral_floatPi(void){
_start:
{
double v___x_5_; 
v___x_5_ = lean_float_once(&lp_ariori_Spectral_floatPi___closed__0, &lp_ariori_Spectral_floatPi___closed__0_once, _init_lp_ariori_Spectral_floatPi___closed__0);
return v___x_5_;
}
}
static lean_object* _init_lp_ariori_Spectral_alphaCrit___closed__0(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_nat_to_int(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_lp_ariori_Spectral_alphaCrit___closed__1(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_nat_to_int(v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_lp_ariori_Spectral_alphaCrit___closed__2(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(2u);
v___x_11_ = lean_nat_to_int(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_lp_ariori_Spectral_alphaCrit___closed__3(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__2, &lp_ariori_Spectral_alphaCrit___closed__2_once, _init_lp_ariori_Spectral_alphaCrit___closed__2);
v___x_13_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__1, &lp_ariori_Spectral_alphaCrit___closed__1_once, _init_lp_ariori_Spectral_alphaCrit___closed__1);
v___x_14_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__0, &lp_ariori_Spectral_alphaCrit___closed__0_once, _init_lp_ariori_Spectral_alphaCrit___closed__0);
v___x_15_ = lp_ariori_VesicaNumber_mk_x27(v___x_14_, v___x_13_, v___x_12_);
return v___x_15_;
}
}
static lean_object* _init_lp_ariori_Spectral_alphaCrit(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__3, &lp_ariori_Spectral_alphaCrit___closed__3_once, _init_lp_ariori_Spectral_alphaCrit___closed__3);
return v___x_16_;
}
}
static lean_object* _init_lp_ariori_Spectral_feWeight___closed__0(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__1, &lp_ariori_Spectral_alphaCrit___closed__1_once, _init_lp_ariori_Spectral_alphaCrit___closed__1);
v___x_18_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__0, &lp_ariori_Spectral_alphaCrit___closed__0_once, _init_lp_ariori_Spectral_alphaCrit___closed__0);
v___x_19_ = lp_ariori_VesicaNumber_mk_x27(v___x_18_, v___x_17_, v___x_18_);
return v___x_19_;
}
}
static lean_object* _init_lp_ariori_Spectral_feWeight(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_obj_once(&lp_ariori_Spectral_feWeight___closed__0, &lp_ariori_Spectral_feWeight___closed__0_once, _init_lp_ariori_Spectral_feWeight___closed__0);
return v___x_20_;
}
}
static lean_object* _init_lp_ariori_Spectral_vesicaScale(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_obj_once(&lp_ariori_Spectral_feWeight___closed__0, &lp_ariori_Spectral_feWeight___closed__0_once, _init_lp_ariori_Spectral_feWeight___closed__0);
return v___x_21_;
}
}
static lean_object* _init_lp_ariori_Spectral_vesicaVolumeAtScale(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lp_ariori_VesicaNumber_one;
return v___x_22_;
}
}
static lean_object* _init_lp_ariori_Spectral_arithmeticDensityCoeff(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lp_ariori_VesicaNumber_one;
return v___x_23_;
}
}
static lean_object* _init_lp_ariori_Spectral_geometricDensityCoeff(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lp_ariori_VesicaNumber_one;
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00Spectral_divisorsOf_spec__0(lean_object* v_a_25_, lean_object* v_a_26_){
_start:
{
if (lean_obj_tag(v_a_25_) == 0)
{
lean_object* v___x_27_; 
v___x_27_ = l_List_reverse___redArg(v_a_26_);
return v___x_27_;
}
else
{
lean_object* v_head_28_; lean_object* v_tail_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_39_; 
v_head_28_ = lean_ctor_get(v_a_25_, 0);
v_tail_29_ = lean_ctor_get(v_a_25_, 1);
v_isSharedCheck_39_ = !lean_is_exclusive(v_a_25_);
if (v_isSharedCheck_39_ == 0)
{
v___x_31_ = v_a_25_;
v_isShared_32_ = v_isSharedCheck_39_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_tail_29_);
lean_inc(v_head_28_);
lean_dec(v_a_25_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_39_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_36_; 
v___x_33_ = lean_unsigned_to_nat(1u);
v___x_34_ = lean_nat_add(v_head_28_, v___x_33_);
lean_dec(v_head_28_);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 1, v_a_26_);
lean_ctor_set(v___x_31_, 0, v___x_34_);
v___x_36_ = v___x_31_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_34_);
lean_ctor_set(v_reuseFailAlloc_38_, 1, v_a_26_);
v___x_36_ = v_reuseFailAlloc_38_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
v_a_25_ = v_tail_29_;
v_a_26_ = v___x_36_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00Spectral_divisorsOf_spec__1(lean_object* v_n_40_, lean_object* v_a_41_, lean_object* v_a_42_){
_start:
{
if (lean_obj_tag(v_a_41_) == 0)
{
lean_object* v___x_43_; 
v___x_43_ = l_List_reverse___redArg(v_a_42_);
return v___x_43_;
}
else
{
lean_object* v_head_44_; lean_object* v_tail_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_59_; 
v_head_44_ = lean_ctor_get(v_a_41_, 0);
v_tail_45_ = lean_ctor_get(v_a_41_, 1);
v_isSharedCheck_59_ = !lean_is_exclusive(v_a_41_);
if (v_isSharedCheck_59_ == 0)
{
v___x_47_ = v_a_41_;
v_isShared_48_ = v_isSharedCheck_59_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_tail_45_);
lean_inc(v_head_44_);
lean_dec(v_a_41_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_59_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_49_ = lean_unsigned_to_nat(1u);
v___x_50_ = lean_nat_add(v_n_40_, v___x_49_);
v___x_51_ = lean_nat_mod(v___x_50_, v_head_44_);
lean_dec(v___x_50_);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_nat_dec_eq(v___x_51_, v___x_52_);
lean_dec(v___x_51_);
if (v___x_53_ == 0)
{
lean_del_object(v___x_47_);
lean_dec(v_head_44_);
v_a_41_ = v_tail_45_;
goto _start;
}
else
{
lean_object* v___x_56_; 
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 1, v_a_42_);
v___x_56_ = v___x_47_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_head_44_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v_a_42_);
v___x_56_ = v_reuseFailAlloc_58_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
v_a_41_ = v_tail_45_;
v_a_42_ = v___x_56_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00Spectral_divisorsOf_spec__1___boxed(lean_object* v_n_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_ariori_List_filterTR_loop___at___00Spectral_divisorsOf_spec__1(v_n_60_, v_a_61_, v_a_62_);
lean_dec(v_n_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorsOf(lean_object* v_n_64_){
_start:
{
lean_object* v_zero_65_; uint8_t v_isZero_66_; 
v_zero_65_ = lean_unsigned_to_nat(0u);
v_isZero_66_ = lean_nat_dec_eq(v_n_64_, v_zero_65_);
if (v_isZero_66_ == 1)
{
lean_object* v___x_67_; 
v___x_67_ = lean_box(0);
return v___x_67_;
}
else
{
lean_object* v_one_68_; lean_object* v_n_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_one_68_ = lean_unsigned_to_nat(1u);
v_n_69_ = lean_nat_sub(v_n_64_, v_one_68_);
v___x_70_ = lean_nat_add(v_n_69_, v_one_68_);
v___x_71_ = l_List_range(v___x_70_);
v___x_72_ = lean_box(0);
v___x_73_ = lp_ariori_List_mapTR_loop___at___00Spectral_divisorsOf_spec__0(v___x_71_, v___x_72_);
v___x_74_ = lp_ariori_List_filterTR_loop___at___00Spectral_divisorsOf_spec__1(v_n_69_, v___x_73_, v___x_72_);
lean_dec(v_n_69_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorsOf___boxed(lean_object* v_n_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_ariori_Spectral_divisorsOf(v_n_75_);
lean_dec(v_n_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorCount(lean_object* v_n_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lp_ariori_Spectral_divisorsOf(v_n_77_);
v___x_79_ = l_List_lengthTR___redArg(v___x_78_);
lean_dec(v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_divisorCount___boxed(lean_object* v_n_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = lp_ariori_Spectral_divisorCount(v_n_80_);
lean_dec(v_n_80_);
return v_res_81_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_isPrime___lam__0(lean_object* v___x_82_, lean_object* v_p_83_, lean_object* v___x_84_, uint8_t v___x_85_, lean_object* v_k_86_){
_start:
{
lean_object* v_d_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_d_87_ = lean_nat_add(v_k_86_, v___x_82_);
v___x_88_ = lean_nat_mod(v_p_83_, v_d_87_);
lean_dec(v_d_87_);
v___x_89_ = lean_nat_dec_eq(v___x_88_, v___x_84_);
lean_dec(v___x_88_);
if (v___x_89_ == 0)
{
uint8_t v___x_90_; 
v___x_90_ = 1;
return v___x_90_;
}
else
{
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_isPrime___lam__0___boxed(lean_object* v___x_91_, lean_object* v_p_92_, lean_object* v___x_93_, lean_object* v___x_94_, lean_object* v_k_95_){
_start:
{
uint8_t v___x_121__boxed_96_; uint8_t v_res_97_; lean_object* v_r_98_; 
v___x_121__boxed_96_ = lean_unbox(v___x_94_);
v_res_97_ = lp_ariori_Spectral_isPrime___lam__0(v___x_91_, v_p_92_, v___x_93_, v___x_121__boxed_96_, v_k_95_);
lean_dec(v_k_95_);
lean_dec(v___x_93_);
lean_dec(v_p_92_);
lean_dec(v___x_91_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_isPrime(lean_object* v_n_99_){
_start:
{
lean_object* v_zero_100_; uint8_t v_isZero_101_; 
v_zero_100_ = lean_unsigned_to_nat(0u);
v_isZero_101_ = lean_nat_dec_eq(v_n_99_, v_zero_100_);
if (v_isZero_101_ == 1)
{
uint8_t v___x_102_; 
v___x_102_ = 0;
return v___x_102_;
}
else
{
lean_object* v_one_103_; lean_object* v_n_104_; uint8_t v_isZero_105_; 
v_one_103_ = lean_unsigned_to_nat(1u);
v_n_104_ = lean_nat_sub(v_n_99_, v_one_103_);
v_isZero_105_ = lean_nat_dec_eq(v_n_104_, v_zero_100_);
if (v_isZero_105_ == 1)
{
lean_dec(v_n_104_);
return v_isZero_101_;
}
else
{
lean_object* v_n_106_; uint8_t v___x_107_; 
v_n_106_ = lean_nat_sub(v_n_104_, v_one_103_);
lean_dec(v_n_104_);
v___x_107_ = lean_nat_dec_eq(v_n_106_, v_zero_100_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; lean_object* v_p_109_; lean_object* v___x_110_; lean_object* v___f_111_; lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_108_ = lean_unsigned_to_nat(2u);
v_p_109_ = lean_nat_add(v_n_106_, v___x_108_);
lean_dec(v_n_106_);
v___x_110_ = lean_box(v___x_107_);
lean_inc(v_p_109_);
v___f_111_ = lean_alloc_closure((void*)(lp_ariori_Spectral_isPrime___lam__0___boxed), 5, 4);
lean_closure_set(v___f_111_, 0, v___x_108_);
lean_closure_set(v___f_111_, 1, v_p_109_);
lean_closure_set(v___f_111_, 2, v_zero_100_);
lean_closure_set(v___f_111_, 3, v___x_110_);
v___x_112_ = lean_nat_sub(v_p_109_, v___x_108_);
lean_dec(v_p_109_);
v___x_113_ = l_List_range(v___x_112_);
v___x_114_ = l_List_all___redArg(v___x_113_, v___f_111_);
return v___x_114_;
}
else
{
lean_dec(v_n_106_);
return v___x_107_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_isPrime___boxed(lean_object* v_n_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = lp_ariori_Spectral_isPrime(v_n_115_);
lean_dec(v_n_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
static lean_object* _init_lp_ariori_Spectral_gAlpha___closed__0(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__2, &lp_ariori_Spectral_alphaCrit___closed__2_once, _init_lp_ariori_Spectral_alphaCrit___closed__2);
v___x_119_ = lp_ariori_VesicaNumber_ofInt(v___x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_gAlpha(lean_object* v_00_u03b1_120_, lean_object* v_n_121_){
_start:
{
lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_nat_dec_eq(v_n_121_, v___x_122_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_124_ = lean_obj_once(&lp_ariori_Spectral_gAlpha___closed__0, &lp_ariori_Spectral_gAlpha___closed__0_once, _init_lp_ariori_Spectral_gAlpha___closed__0);
v___x_125_ = lp_ariori_VesicaNumber_mul(v___x_124_, v_00_u03b1_120_);
v___x_126_ = lp_ariori_Spectral_divisorCount(v_n_121_);
v___x_127_ = lean_nat_to_int(v___x_126_);
v___x_128_ = lp_ariori_VesicaNumber_ofInt(v___x_127_);
v___x_129_ = lp_ariori_VesicaNumber_div(v___x_125_, v___x_128_);
lean_dec_ref(v___x_128_);
lean_dec_ref(v___x_125_);
return v___x_129_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lp_ariori_VesicaNumber_zero;
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_gAlpha___boxed(lean_object* v_00_u03b1_131_, lean_object* v_n_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = lp_ariori_Spectral_gAlpha(v_00_u03b1_131_, v_n_132_);
lean_dec(v_n_132_);
lean_dec_ref(v_00_u03b1_131_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_gZeta(lean_object* v_n_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lp_ariori_Spectral_alphaCrit;
v___x_136_ = lp_ariori_Spectral_gAlpha(v___x_135_, v_n_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_gZeta___boxed(lean_object* v_n_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = lp_ariori_Spectral_gZeta(v_n_137_);
lean_dec(v_n_137_);
return v_res_138_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_primeGAlphaCert(lean_object* v_p_139_){
_start:
{
uint8_t v___y_141_; uint8_t v___x_145_; 
v___x_145_ = lp_ariori_Spectral_isPrime(v_p_139_);
if (v___x_145_ == 0)
{
v___y_141_ = v___x_145_;
goto v___jp_140_;
}
else
{
lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_146_ = lp_ariori_Spectral_divisorCount(v_p_139_);
v___x_147_ = lean_unsigned_to_nat(2u);
v___x_148_ = lean_nat_dec_eq(v___x_146_, v___x_147_);
lean_dec(v___x_146_);
v___y_141_ = v___x_148_;
goto v___jp_140_;
}
v___jp_140_:
{
if (v___y_141_ == 0)
{
return v___y_141_;
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_142_ = lp_ariori_Spectral_alphaCrit;
v___x_143_ = lp_ariori_Spectral_gAlpha(v___x_142_, v_p_139_);
v___x_144_ = lp_ariori_VesicaNumber_beq(v___x_143_, v___x_142_);
lean_dec_ref(v___x_143_);
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_primeGAlphaCert___boxed(lean_object* v_p_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = lp_ariori_Spectral_primeGAlphaCert(v_p_149_);
lean_dec(v_p_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_allPrimeGAlphaUpTo30___lam__0(lean_object* v_i_152_){
_start:
{
lean_object* v___x_153_; lean_object* v_p_154_; uint8_t v___x_155_; 
v___x_153_ = lean_unsigned_to_nat(2u);
v_p_154_ = lean_nat_add(v_i_152_, v___x_153_);
v___x_155_ = lp_ariori_Spectral_isPrime(v_p_154_);
if (v___x_155_ == 0)
{
uint8_t v___x_156_; 
lean_dec(v_p_154_);
v___x_156_ = 1;
return v___x_156_;
}
else
{
uint8_t v___x_157_; 
v___x_157_ = lp_ariori_Spectral_primeGAlphaCert(v_p_154_);
lean_dec(v_p_154_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_allPrimeGAlphaUpTo30___lam__0___boxed(lean_object* v_i_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = lp_ariori_Spectral_allPrimeGAlphaUpTo30___lam__0(v_i_158_);
lean_dec(v_i_158_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
static lean_object* _init_lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__1(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(28u);
v___x_163_ = l_List_range(v___x_162_);
return v___x_163_;
}
}
static uint8_t _init_lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__2(void){
_start:
{
lean_object* v___f_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___f_164_ = ((lean_object*)(lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__0));
v___x_165_ = lean_obj_once(&lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__1, &lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__1_once, _init_lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__1);
v___x_166_ = l_List_all___redArg(v___x_165_, v___f_164_);
return v___x_166_;
}
}
static uint8_t _init_lp_ariori_Spectral_allPrimeGAlphaUpTo30(void){
_start:
{
uint8_t v___x_167_; 
v___x_167_ = lean_uint8_once(&lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__2, &lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__2_once, _init_lp_ariori_Spectral_allPrimeGAlphaUpTo30___closed__2);
return v___x_167_;
}
}
static lean_object* _init_lp_ariori_Spectral_gAlphaTableOk___closed__0(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lp_ariori_Spectral_alphaCrit;
v___x_169_ = lean_obj_once(&lp_ariori_Spectral_gAlpha___closed__0, &lp_ariori_Spectral_gAlpha___closed__0_once, _init_lp_ariori_Spectral_gAlpha___closed__0);
v___x_170_ = lp_ariori_VesicaNumber_mul(v___x_169_, v___x_168_);
return v___x_170_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_gAlphaTableOk(lean_object* v_n_171_){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_172_ = lp_ariori_Spectral_alphaCrit;
v___x_173_ = lp_ariori_Spectral_gAlpha(v___x_172_, v_n_171_);
v___x_174_ = lean_obj_once(&lp_ariori_Spectral_gAlphaTableOk___closed__0, &lp_ariori_Spectral_gAlphaTableOk___closed__0_once, _init_lp_ariori_Spectral_gAlphaTableOk___closed__0);
v___x_175_ = lp_ariori_Spectral_divisorCount(v_n_171_);
v___x_176_ = lean_nat_to_int(v___x_175_);
v___x_177_ = lp_ariori_VesicaNumber_ofInt(v___x_176_);
v___x_178_ = lp_ariori_VesicaNumber_div(v___x_174_, v___x_177_);
lean_dec_ref(v___x_177_);
v___x_179_ = lp_ariori_VesicaNumber_beq(v___x_173_, v___x_178_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_173_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_gAlphaTableOk___boxed(lean_object* v_n_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = lp_ariori_Spectral_gAlphaTableOk(v_n_180_);
lean_dec(v_n_180_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
static lean_object* _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__0(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&lp_ariori_Spectral_gAlpha___closed__0, &lp_ariori_Spectral_gAlpha___closed__0_once, _init_lp_ariori_Spectral_gAlpha___closed__0);
v___x_184_ = lp_ariori_Spectral_feWeight;
v___x_185_ = lp_ariori_VesicaNumber_div(v___x_184_, v___x_183_);
return v___x_185_;
}
}
static uint8_t _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__1(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = lp_ariori_Spectral_alphaCrit;
v___x_187_ = lean_obj_once(&lp_ariori_Spectral_intersectionUniqueLineCert___closed__0, &lp_ariori_Spectral_intersectionUniqueLineCert___closed__0_once, _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__0);
v___x_188_ = lp_ariori_VesicaNumber_beq(v___x_187_, v___x_186_);
return v___x_188_;
}
}
static lean_object* _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__2(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = lean_obj_once(&lp_ariori_Spectral_gAlpha___closed__0, &lp_ariori_Spectral_gAlpha___closed__0_once, _init_lp_ariori_Spectral_gAlpha___closed__0);
v___x_190_ = lp_ariori_Spectral_vesicaScale;
v___x_191_ = lp_ariori_VesicaNumber_div(v___x_190_, v___x_189_);
return v___x_191_;
}
}
static uint8_t _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__3(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_192_ = lp_ariori_Spectral_alphaCrit;
v___x_193_ = lean_obj_once(&lp_ariori_Spectral_intersectionUniqueLineCert___closed__2, &lp_ariori_Spectral_intersectionUniqueLineCert___closed__2_once, _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__2);
v___x_194_ = lp_ariori_VesicaNumber_beq(v___x_193_, v___x_192_);
return v___x_194_;
}
}
static uint8_t _init_lp_ariori_Spectral_intersectionUniqueLineCert(void){
_start:
{
uint8_t v___y_196_; uint8_t v___x_198_; 
v___x_198_ = lean_uint8_once(&lp_ariori_Spectral_intersectionUniqueLineCert___closed__3, &lp_ariori_Spectral_intersectionUniqueLineCert___closed__3_once, _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__3);
if (v___x_198_ == 0)
{
v___y_196_ = v___x_198_;
goto v___jp_195_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = lp_ariori_Spectral_allPrimeGAlphaUpTo30;
v___y_196_ = v___x_199_;
goto v___jp_195_;
}
v___jp_195_:
{
if (v___y_196_ == 0)
{
return v___y_196_;
}
else
{
uint8_t v___x_197_; 
v___x_197_ = lean_uint8_once(&lp_ariori_Spectral_intersectionUniqueLineCert___closed__1, &lp_ariori_Spectral_intersectionUniqueLineCert___closed__1_once, _init_lp_ariori_Spectral_intersectionUniqueLineCert___closed__1);
return v___x_197_;
}
}
}
}
LEAN_EXPORT double lp_ariori_Spectral_leafLogPosition(double v_C_200_, lean_object* v_p_201_, uint8_t v_positive_202_){
_start:
{
double v___x_203_; double v___x_204_; double v_x_205_; 
v___x_203_ = lean_float_of_nat(v_p_201_);
v___x_204_ = log(v___x_203_);
v_x_205_ = lean_float_mul(v_C_200_, v___x_204_);
if (v_positive_202_ == 0)
{
double v___x_206_; 
v___x_206_ = lean_float_negate(v_x_205_);
return v___x_206_;
}
else
{
return v_x_205_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_leafLogPosition___boxed(lean_object* v_C_207_, lean_object* v_p_208_, lean_object* v_positive_209_){
_start:
{
double v_C_boxed_210_; uint8_t v_positive_boxed_211_; double v_res_212_; lean_object* v_r_213_; 
v_C_boxed_210_ = lean_unbox_float(v_C_207_);
lean_dec_ref(v_C_207_);
v_positive_boxed_211_ = lean_unbox(v_positive_209_);
v_res_212_ = lp_ariori_Spectral_leafLogPosition(v_C_boxed_210_, v_p_208_, v_positive_boxed_211_);
v_r_213_ = lean_box_float(v_res_212_);
return v_r_213_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_starLeafCount(lean_object* v_m_214_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(2u);
v___x_216_ = lean_nat_mul(v___x_215_, v_m_214_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_starLeafCount___boxed(lean_object* v_m_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = lp_ariori_Spectral_starLeafCount(v_m_217_);
lean_dec(v_m_217_);
return v_res_218_;
}
}
static double _init_lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__0(void){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; double v___x_222_; 
v___x_219_ = lean_unsigned_to_nat(1u);
v___x_220_ = 1;
v___x_221_ = lean_unsigned_to_nat(20u);
v___x_222_ = l_Float_ofScientific(v___x_221_, v___x_220_, v___x_219_);
return v___x_222_;
}
}
static double _init_lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__1(void){
_start:
{
double v___x_223_; double v___x_224_; double v___x_225_; 
v___x_223_ = lp_ariori_Spectral_floatPi;
v___x_224_ = lean_float_once(&lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__0, &lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__0_once, _init_lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__0);
v___x_225_ = lean_float_mul(v___x_224_, v___x_223_);
return v___x_225_;
}
}
LEAN_EXPORT double lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0(lean_object* v_row_226_, lean_object* v_N_227_, double v_x_228_, lean_object* v_x_229_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_dec(v_N_227_);
return v_x_228_;
}
else
{
lean_object* v_head_230_; lean_object* v_tail_231_; double v___x_232_; lean_object* v___x_233_; double v___x_234_; double v___x_235_; double v___x_236_; double v_angle_237_; double v_scale_238_; double v___x_239_; double v_c_240_; double v___x_241_; double v_s_242_; double v___x_243_; double v___x_244_; double v___x_245_; double v___x_246_; 
v_head_230_ = lean_ctor_get(v_x_229_, 0);
v_tail_231_ = lean_ctor_get(v_x_229_, 1);
v___x_232_ = lean_float_once(&lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__1, &lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__1_once, _init_lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___closed__1);
v___x_233_ = lean_nat_mul(v_row_226_, v_head_230_);
v___x_234_ = lean_float_of_nat(v___x_233_);
v___x_235_ = lean_float_mul(v___x_232_, v___x_234_);
lean_inc(v_N_227_);
v___x_236_ = lean_float_of_nat(v_N_227_);
v_angle_237_ = lean_float_div(v___x_235_, v___x_236_);
v_scale_238_ = sqrt(v___x_236_);
v___x_239_ = cos(v_angle_237_);
v_c_240_ = lean_float_div(v___x_239_, v_scale_238_);
v___x_241_ = sin(v_angle_237_);
v_s_242_ = lean_float_div(v___x_241_, v_scale_238_);
v___x_243_ = lean_float_mul(v_c_240_, v_c_240_);
v___x_244_ = lean_float_add(v_x_228_, v___x_243_);
v___x_245_ = lean_float_mul(v_s_242_, v_s_242_);
v___x_246_ = lean_float_add(v___x_244_, v___x_245_);
v_x_228_ = v___x_246_;
v_x_229_ = v_tail_231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0___boxed(lean_object* v_row_248_, lean_object* v_N_249_, lean_object* v_x_250_, lean_object* v_x_251_){
_start:
{
double v_x_164__boxed_252_; double v_res_253_; lean_object* v_r_254_; 
v_x_164__boxed_252_ = lean_unbox_float(v_x_250_);
lean_dec_ref(v_x_250_);
v_res_253_ = lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0(v_row_248_, v_N_249_, v_x_164__boxed_252_, v_x_251_);
lean_dec(v_x_251_);
lean_dec(v_row_248_);
v_r_254_ = lean_box_float(v_res_253_);
return v_r_254_;
}
}
static double _init_lp_ariori_Spectral_dftRowEnergy___closed__0(void){
_start:
{
lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; double v___x_258_; 
v___x_255_ = lean_unsigned_to_nat(1u);
v___x_256_ = 1;
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = l_Float_ofScientific(v___x_257_, v___x_256_, v___x_255_);
return v___x_258_;
}
}
LEAN_EXPORT double lp_ariori_Spectral_dftRowEnergy(lean_object* v_N_259_, lean_object* v_row_260_){
_start:
{
double v___x_261_; lean_object* v___x_262_; double v___x_263_; 
v___x_261_ = lean_float_once(&lp_ariori_Spectral_dftRowEnergy___closed__0, &lp_ariori_Spectral_dftRowEnergy___closed__0_once, _init_lp_ariori_Spectral_dftRowEnergy___closed__0);
lean_inc(v_N_259_);
v___x_262_ = l_List_range(v_N_259_);
v___x_263_ = lp_ariori_List_foldl___at___00Spectral_dftRowEnergy_spec__0(v_row_260_, v_N_259_, v___x_261_, v___x_262_);
lean_dec(v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftRowEnergy___boxed(lean_object* v_N_264_, lean_object* v_row_265_){
_start:
{
double v_res_266_; lean_object* v_r_267_; 
v_res_266_ = lp_ariori_Spectral_dftRowEnergy(v_N_264_, v_row_265_);
lean_dec(v_row_265_);
v_r_267_ = lean_box_float(v_res_266_);
return v_r_267_;
}
}
static double _init_lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_268_; uint8_t v___x_269_; lean_object* v___x_270_; double v___x_271_; 
v___x_268_ = lean_unsigned_to_nat(1u);
v___x_269_ = 1;
v___x_270_ = lean_unsigned_to_nat(10u);
v___x_271_ = l_Float_ofScientific(v___x_270_, v___x_269_, v___x_268_);
return v___x_271_;
}
}
static double _init_lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_272_; uint8_t v___x_273_; lean_object* v___x_274_; double v___x_275_; 
v___x_272_ = lean_unsigned_to_nat(5u);
v___x_273_ = 1;
v___x_274_ = lean_unsigned_to_nat(1u);
v___x_275_ = l_Float_ofScientific(v___x_274_, v___x_273_, v___x_272_);
return v___x_275_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0(lean_object* v_N_276_, lean_object* v_row_277_){
_start:
{
double v___x_278_; double v___x_279_; double v___x_280_; double v___x_281_; double v___x_282_; uint8_t v___x_283_; 
v___x_278_ = lp_ariori_Spectral_dftRowEnergy(v_N_276_, v_row_277_);
v___x_279_ = lean_float_once(&lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0, &lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0_once, _init_lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0);
v___x_280_ = lean_float_sub(v___x_278_, v___x_279_);
v___x_281_ = fabs(v___x_280_);
v___x_282_ = lean_float_once(&lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__1, &lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__1_once, _init_lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__1);
v___x_283_ = lean_float_decLt(v___x_281_, v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___boxed(lean_object* v_N_284_, lean_object* v_row_285_){
_start:
{
uint8_t v_res_286_; lean_object* v_r_287_; 
v_res_286_ = lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0(v_N_284_, v_row_285_);
lean_dec(v_row_285_);
v_r_287_ = lean_box(v_res_286_);
return v_r_287_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_dftUnitaryRowsSumSq(lean_object* v_N_288_){
_start:
{
lean_object* v___f_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
lean_inc(v_N_288_);
v___f_289_ = lean_alloc_closure((void*)(lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___boxed), 2, 1);
lean_closure_set(v___f_289_, 0, v_N_288_);
v___x_290_ = l_List_range(v_N_288_);
v___x_291_ = l_List_all___redArg(v___x_290_, v___f_289_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftUnitaryRowsSumSq___boxed(lean_object* v_N_292_){
_start:
{
uint8_t v_res_293_; lean_object* v_r_294_; 
v_res_293_ = lp_ariori_Spectral_dftUnitaryRowsSumSq(v_N_292_);
v_r_294_ = lean_box(v_res_293_);
return v_r_294_;
}
}
LEAN_EXPORT double lp_ariori_Spectral_dftTransmissionModulus(lean_object* v_N_295_){
_start:
{
double v___x_296_; double v___x_297_; double v___x_298_; double v___x_299_; 
v___x_296_ = lean_float_once(&lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0, &lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0_once, _init_lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0);
v___x_297_ = lean_float_of_nat(v_N_295_);
v___x_298_ = sqrt(v___x_297_);
v___x_299_ = lean_float_div(v___x_296_, v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_dftTransmissionModulus___boxed(lean_object* v_N_300_){
_start:
{
double v_res_301_; lean_object* v_r_302_; 
v_res_301_ = lp_ariori_Spectral_dftTransmissionModulus(v_N_300_);
v_r_302_ = lean_box_float(v_res_301_);
return v_r_302_;
}
}
LEAN_EXPORT double lp_ariori_Spectral_arithmeticLpCoeff(lean_object* v_p_303_, lean_object* v_m_304_){
_start:
{
lean_object* v___x_305_; uint8_t v___y_309_; uint8_t v___x_317_; 
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_317_ = lean_nat_dec_eq(v_m_304_, v___x_305_);
if (v___x_317_ == 0)
{
uint8_t v___x_318_; 
v___x_318_ = lp_ariori_Spectral_isPrime(v_p_303_);
if (v___x_318_ == 0)
{
lean_dec(v_p_303_);
goto v___jp_306_;
}
else
{
v___y_309_ = v___x_317_;
goto v___jp_308_;
}
}
else
{
v___y_309_ = v___x_317_;
goto v___jp_308_;
}
v___jp_306_:
{
double v___x_307_; 
v___x_307_ = lean_float_once(&lp_ariori_Spectral_dftRowEnergy___closed__0, &lp_ariori_Spectral_dftRowEnergy___closed__0_once, _init_lp_ariori_Spectral_dftRowEnergy___closed__0);
return v___x_307_;
}
v___jp_308_:
{
if (v___y_309_ == 0)
{
double v___x_310_; double v___x_311_; double v___x_312_; lean_object* v___x_313_; double v___x_314_; double v___x_315_; double v___x_316_; 
lean_inc(v_p_303_);
v___x_310_ = lean_float_of_nat(v_p_303_);
v___x_311_ = log(v___x_310_);
v___x_312_ = lean_float_negate(v___x_311_);
v___x_313_ = lean_nat_pow(v_p_303_, v_m_304_);
lean_dec(v_p_303_);
v___x_314_ = lean_float_of_nat(v___x_313_);
v___x_315_ = sqrt(v___x_314_);
v___x_316_ = lean_float_div(v___x_312_, v___x_315_);
return v___x_316_;
}
else
{
lean_dec(v_p_303_);
goto v___jp_306_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_arithmeticLpCoeff___boxed(lean_object* v_p_319_, lean_object* v_m_320_){
_start:
{
double v_res_321_; lean_object* v_r_322_; 
v_res_321_ = lp_ariori_Spectral_arithmeticLpCoeff(v_p_319_, v_m_320_);
lean_dec(v_m_320_);
v_r_322_ = lean_box_float(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT double lp_ariori_Spectral_arithmeticLpAtUnit(lean_object* v_p_323_){
_start:
{
double v___x_324_; double v___x_325_; double v___x_326_; double v_rp_327_; double v_logp_328_; double v___x_329_; double v___x_330_; double v___x_331_; double v___x_332_; 
v___x_324_ = lean_float_once(&lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0, &lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0_once, _init_lp_ariori_Spectral_dftUnitaryRowsSumSq___lam__0___closed__0);
v___x_325_ = lean_float_of_nat(v_p_323_);
v___x_326_ = sqrt(v___x_325_);
v_rp_327_ = lean_float_div(v___x_324_, v___x_326_);
v_logp_328_ = log(v___x_325_);
v___x_329_ = lean_float_negate(v_logp_328_);
v___x_330_ = lean_float_mul(v___x_329_, v_rp_327_);
v___x_331_ = lean_float_sub(v___x_324_, v_rp_327_);
v___x_332_ = lean_float_div(v___x_330_, v___x_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_arithmeticLpAtUnit___boxed(lean_object* v_p_333_){
_start:
{
double v_res_334_; lean_object* v_r_335_; 
v_res_334_ = lp_ariori_Spectral_arithmeticLpAtUnit(v_p_333_);
v_r_335_ = lean_box_float(v_res_334_);
return v_r_335_;
}
}
static lean_object* _init_lp_ariori_Spectral_vesicaHalfHeight___closed__0(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_336_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__2, &lp_ariori_Spectral_alphaCrit___closed__2_once, _init_lp_ariori_Spectral_alphaCrit___closed__2);
v___x_337_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__0, &lp_ariori_Spectral_alphaCrit___closed__0_once, _init_lp_ariori_Spectral_alphaCrit___closed__0);
v___x_338_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__1, &lp_ariori_Spectral_alphaCrit___closed__1_once, _init_lp_ariori_Spectral_alphaCrit___closed__1);
v___x_339_ = lp_ariori_VesicaNumber_mk_x27(v___x_338_, v___x_337_, v___x_336_);
return v___x_339_;
}
}
static lean_object* _init_lp_ariori_Spectral_vesicaHalfHeight(void){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&lp_ariori_Spectral_vesicaHalfHeight___closed__0, &lp_ariori_Spectral_vesicaHalfHeight___closed__0_once, _init_lp_ariori_Spectral_vesicaHalfHeight___closed__0);
return v___x_340_;
}
}
static lean_object* _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__0(void){
_start:
{
uint8_t v___x_341_; lean_object* v___x_342_; lean_object* v_pA_343_; 
v___x_341_ = 0;
v___x_342_ = lp_ariori_VesicaNumber_one;
v_pA_343_ = lp_ariori_nodePointAtRadius(v___x_342_, v___x_341_);
return v_pA_343_;
}
}
static lean_object* _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__1(void){
_start:
{
uint8_t v___x_344_; lean_object* v___x_345_; lean_object* v_pX_346_; 
v___x_344_ = 16;
v___x_345_ = lp_ariori_VesicaNumber_one;
v_pX_346_ = lp_ariori_nodePointAtRadius(v___x_345_, v___x_344_);
return v_pX_346_;
}
}
static lean_object* _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__2(void){
_start:
{
lean_object* v_pX_347_; lean_object* v_pA_348_; lean_object* v___x_349_; 
v_pX_347_ = lean_obj_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__1, &lp_ariori_Spectral_arioriX17VesicaCert___closed__1_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__1);
v_pA_348_ = lean_obj_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__0, &lp_ariori_Spectral_arioriX17VesicaCert___closed__0_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__0);
v___x_349_ = lp_ariori_Point_distSq(v_pA_348_, v_pX_347_);
return v___x_349_;
}
}
static lean_object* _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__3(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(3u);
v___x_351_ = lean_nat_to_int(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__4(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(4u);
v___x_353_ = lean_nat_to_int(v___x_352_);
return v___x_353_;
}
}
static lean_object* _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__5(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_354_ = lean_obj_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__4, &lp_ariori_Spectral_arioriX17VesicaCert___closed__4_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__4);
v___x_355_ = lean_obj_once(&lp_ariori_Spectral_alphaCrit___closed__1, &lp_ariori_Spectral_alphaCrit___closed__1_once, _init_lp_ariori_Spectral_alphaCrit___closed__1);
v___x_356_ = lean_obj_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__3, &lp_ariori_Spectral_arioriX17VesicaCert___closed__3_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__3);
v___x_357_ = lp_ariori_VesicaNumber_mk_x27(v___x_356_, v___x_355_, v___x_354_);
return v___x_357_;
}
}
static uint8_t _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__6(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_358_ = lean_obj_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__5, &lp_ariori_Spectral_arioriX17VesicaCert___closed__5_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__5);
v___x_359_ = lean_obj_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__2, &lp_ariori_Spectral_arioriX17VesicaCert___closed__2_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__2);
v___x_360_ = lp_ariori_VesicaNumber_beq(v___x_359_, v___x_358_);
return v___x_360_;
}
}
static uint8_t _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__7(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_361_ = lean_obj_once(&lp_ariori_Spectral_vesicaHalfHeight___closed__0, &lp_ariori_Spectral_vesicaHalfHeight___closed__0_once, _init_lp_ariori_Spectral_vesicaHalfHeight___closed__0);
v___x_362_ = lp_ariori_Spectral_vesicaHalfHeight;
v___x_363_ = lp_ariori_VesicaNumber_beq(v___x_362_, v___x_361_);
return v___x_363_;
}
}
static uint8_t _init_lp_ariori_Spectral_arioriX17VesicaCert(void){
_start:
{
uint8_t v___x_364_; 
v___x_364_ = lean_uint8_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__6, &lp_ariori_Spectral_arioriX17VesicaCert___closed__6_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__6);
if (v___x_364_ == 0)
{
return v___x_364_;
}
else
{
uint8_t v___x_365_; 
v___x_365_ = lean_uint8_once(&lp_ariori_Spectral_arioriX17VesicaCert___closed__7, &lp_ariori_Spectral_arioriX17VesicaCert___closed__7_once, _init_lp_ariori_Spectral_arioriX17VesicaCert___closed__7);
return v___x_365_;
}
}
}
static uint8_t _init_lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__0(void){
_start:
{
lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_366_ = lean_unsigned_to_nat(8u);
v___x_367_ = lp_ariori_Spectral_dftUnitaryRowsSumSq(v___x_366_);
return v___x_367_;
}
}
static uint8_t _init_lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__1(void){
_start:
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = lean_unsigned_to_nat(2u);
v___x_369_ = lp_ariori_Spectral_primeGAlphaCert(v___x_368_);
return v___x_369_;
}
}
static uint8_t _init_lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__2(void){
_start:
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_unsigned_to_nat(4u);
v___x_371_ = lp_ariori_Spectral_dftUnitaryRowsSumSq(v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Spectral_spectralPaperCertificateOk___lam__0(lean_object* v_i_372_){
_start:
{
uint8_t v___y_374_; lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_nat_add(v_i_372_, v___x_378_);
v___x_380_ = lp_ariori_Spectral_gAlphaTableOk(v___x_379_);
lean_dec(v___x_379_);
if (v___x_380_ == 0)
{
v___y_374_ = v___x_380_;
goto v___jp_373_;
}
else
{
uint8_t v___x_381_; 
v___x_381_ = lean_uint8_once(&lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__2, &lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__2_once, _init_lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__2);
v___y_374_ = v___x_381_;
goto v___jp_373_;
}
v___jp_373_:
{
if (v___y_374_ == 0)
{
return v___y_374_;
}
else
{
uint8_t v___x_375_; 
v___x_375_ = lean_uint8_once(&lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__0, &lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__0_once, _init_lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__0);
if (v___x_375_ == 0)
{
return v___x_375_;
}
else
{
uint8_t v___x_376_; 
v___x_376_ = lean_uint8_once(&lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__1, &lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__1_once, _init_lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___closed__1);
if (v___x_376_ == 0)
{
return v___x_376_;
}
else
{
uint8_t v___x_377_; 
v___x_377_ = lp_ariori_Spectral_arioriX17VesicaCert;
return v___x_377_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_spectralPaperCertificateOk___lam__0___boxed(lean_object* v_i_382_){
_start:
{
uint8_t v_res_383_; lean_object* v_r_384_; 
v_res_383_ = lp_ariori_Spectral_spectralPaperCertificateOk___lam__0(v_i_382_);
lean_dec(v_i_382_);
v_r_384_ = lean_box(v_res_383_);
return v_r_384_;
}
}
static uint8_t _init_lp_ariori_Spectral_spectralPaperCertificateOk___closed__1(void){
_start:
{
lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = lp_ariori_VesicaNumber_one;
v___x_387_ = lp_ariori_VesicaNumber_beq(v___x_386_, v___x_386_);
return v___x_387_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralPaperCertificateOk___closed__2(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = lean_unsigned_to_nat(24u);
v___x_389_ = l_List_range(v___x_388_);
return v___x_389_;
}
}
static uint8_t _init_lp_ariori_Spectral_spectralPaperCertificateOk___closed__3(void){
_start:
{
lean_object* v___f_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v___f_390_ = ((lean_object*)(lp_ariori_Spectral_spectralPaperCertificateOk___closed__0));
v___x_391_ = lean_obj_once(&lp_ariori_Spectral_spectralPaperCertificateOk___closed__2, &lp_ariori_Spectral_spectralPaperCertificateOk___closed__2_once, _init_lp_ariori_Spectral_spectralPaperCertificateOk___closed__2);
v___x_392_ = l_List_all___redArg(v___x_391_, v___f_390_);
return v___x_392_;
}
}
static uint8_t _init_lp_ariori_Spectral_spectralPaperCertificateOk(void){
_start:
{
uint8_t v___y_394_; uint8_t v___x_398_; 
v___x_398_ = lp_ariori_Spectral_intersectionUniqueLineCert;
if (v___x_398_ == 0)
{
v___y_394_ = v___x_398_;
goto v___jp_393_;
}
else
{
uint8_t v___x_399_; 
v___x_399_ = lean_uint8_once(&lp_ariori_Spectral_spectralPaperCertificateOk___closed__1, &lp_ariori_Spectral_spectralPaperCertificateOk___closed__1_once, _init_lp_ariori_Spectral_spectralPaperCertificateOk___closed__1);
v___y_394_ = v___x_399_;
goto v___jp_393_;
}
v___jp_393_:
{
if (v___y_394_ == 0)
{
return v___y_394_;
}
else
{
uint8_t v___x_395_; 
v___x_395_ = lean_uint8_once(&lp_ariori_Spectral_spectralPaperCertificateOk___closed__1, &lp_ariori_Spectral_spectralPaperCertificateOk___closed__1_once, _init_lp_ariori_Spectral_spectralPaperCertificateOk___closed__1);
if (v___x_395_ == 0)
{
return v___x_395_;
}
else
{
uint8_t v___x_396_; 
v___x_396_ = lp_ariori_Spectral_allPrimeGAlphaUpTo30;
if (v___x_396_ == 0)
{
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = lean_uint8_once(&lp_ariori_Spectral_spectralPaperCertificateOk___closed__3, &lp_ariori_Spectral_spectralPaperCertificateOk___closed__3_once, _init_lp_ariori_Spectral_spectralPaperCertificateOk___closed__3);
return v___x_397_;
}
}
}
}
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__6(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lp_ariori_Spectral_alphaCrit;
v___x_407_ = lp_ariori_VesicaNumber_formatExact(v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__7(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_408_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__6, &lp_ariori_Spectral_spectralMain___closed__6_once, _init_lp_ariori_Spectral_spectralMain___closed__6);
v___x_409_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__5));
v___x_410_ = lean_string_append(v___x_409_, v___x_408_);
return v___x_410_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__9(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lp_ariori_Spectral_vesicaScale;
v___x_413_ = lp_ariori_VesicaNumber_formatExact(v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__10(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__9, &lp_ariori_Spectral_spectralMain___closed__9_once, _init_lp_ariori_Spectral_spectralMain___closed__9);
v___x_415_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__8));
v___x_416_ = lean_string_append(v___x_415_, v___x_414_);
return v___x_416_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__18(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_unsigned_to_nat(6u);
v___x_425_ = lp_ariori_Spectral_gZeta(v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__19(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__18, &lp_ariori_Spectral_spectralMain___closed__18_once, _init_lp_ariori_Spectral_spectralMain___closed__18);
v___x_427_ = lp_ariori_VesicaNumber_formatExact(v___x_426_);
return v___x_427_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__20(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__19, &lp_ariori_Spectral_spectralMain___closed__19_once, _init_lp_ariori_Spectral_spectralMain___closed__19);
v___x_429_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__17));
v___x_430_ = lean_string_append(v___x_429_, v___x_428_);
return v___x_430_;
}
}
static lean_object* _init_lp_ariori_Spectral_spectralMain___closed__22(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__21));
v___x_433_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__20, &lp_ariori_Spectral_spectralMain___closed__20_once, _init_lp_ariori_Spectral_spectralMain___closed__20);
v___x_434_ = lean_string_append(v___x_433_, v___x_432_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_spectralMain(){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__0));
v___x_458_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v___x_459_; lean_object* v___x_460_; 
lean_dec_ref(v___x_458_);
v___x_459_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__1));
v___x_460_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec_ref(v___x_460_);
v___x_461_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__2));
v___x_462_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_461_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec_ref(v___x_462_);
v___x_463_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__3));
v___x_464_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_463_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec_ref(v___x_464_);
v___x_465_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__4));
v___x_466_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec_ref(v___x_466_);
v___x_467_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__7, &lp_ariori_Spectral_spectralMain___closed__7_once, _init_lp_ariori_Spectral_spectralMain___closed__7);
v___x_468_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_467_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v___x_469_; lean_object* v___x_470_; 
lean_dec_ref(v___x_468_);
v___x_469_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__10, &lp_ariori_Spectral_spectralMain___closed__10_once, _init_lp_ariori_Spectral_spectralMain___closed__10);
v___x_470_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; 
lean_dec_ref(v___x_470_);
v___x_471_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__11));
v___x_472_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec_ref(v___x_472_);
v___x_473_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__12));
v___x_474_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec_ref(v___x_474_);
v___x_475_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__13));
v___x_476_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; 
lean_dec_ref(v___x_476_);
v___x_477_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__14));
v___x_478_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_477_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec_ref(v___x_478_);
v___x_479_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__15));
v___x_480_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_479_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; 
lean_dec_ref(v___x_480_);
v___x_481_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__16));
v___x_482_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_481_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; 
lean_dec_ref(v___x_482_);
v___x_483_ = lean_obj_once(&lp_ariori_Spectral_spectralMain___closed__22, &lp_ariori_Spectral_spectralMain___closed__22_once, _init_lp_ariori_Spectral_spectralMain___closed__22);
v___x_484_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_483_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec_ref(v___x_484_);
v___x_485_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__23));
v___x_486_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_485_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec_ref(v___x_486_);
v___x_487_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__24));
v___x_488_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_487_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec_ref(v___x_488_);
v___x_489_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__25));
v___x_490_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_489_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
lean_dec_ref(v___x_490_);
v___x_491_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__26));
v___x_492_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_491_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v___x_493_; lean_object* v___x_494_; 
lean_dec_ref(v___x_492_);
v___x_493_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__27));
v___x_494_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_493_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec_ref(v___x_494_);
v___x_495_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__28));
v___x_496_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_495_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec_ref(v___x_496_);
v___x_497_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__29));
v___x_498_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_497_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v___x_499_; lean_object* v___x_500_; 
lean_dec_ref(v___x_498_);
v___x_499_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__30));
v___x_500_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_499_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; 
lean_dec_ref(v___x_500_);
v___x_501_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__31));
v___x_502_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_501_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; 
lean_dec_ref(v___x_502_);
v___x_503_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__32));
v___x_504_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_503_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v___x_505_; lean_object* v___y_507_; uint8_t v___x_526_; 
lean_dec_ref(v___x_504_);
v___x_505_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__33));
v___x_526_ = lp_ariori_Spectral_spectralPaperCertificateOk;
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
v___x_527_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__42));
v___y_507_ = v___x_527_;
goto v___jp_506_;
}
else
{
lean_object* v___x_528_; 
v___x_528_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__43));
v___y_507_ = v___x_528_;
goto v___jp_506_;
}
v___jp_506_:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_string_append(v___x_505_, v___y_507_);
v___x_509_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_508_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec_ref(v___x_509_);
v___x_510_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__34));
v___x_511_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_510_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec_ref(v___x_511_);
v___x_512_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__35));
v___x_513_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_512_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; 
lean_dec_ref(v___x_513_);
v___x_514_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__36));
v___x_515_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_514_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
lean_dec_ref(v___x_515_);
v___x_516_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__37));
v___x_517_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_516_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; 
lean_dec_ref(v___x_517_);
v___x_518_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__38));
v___x_519_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_518_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; 
lean_dec_ref(v___x_519_);
v___x_520_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__39));
v___x_521_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v___x_522_; lean_object* v___x_523_; 
lean_dec_ref(v___x_521_);
v___x_522_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__40));
v___x_523_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_522_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec_ref(v___x_523_);
v___x_524_ = ((lean_object*)(lp_ariori_Spectral_spectralMain___closed__41));
v___x_525_ = lp_ariori_IO_println___at___00arioriMain_spec__0(v___x_524_);
return v___x_525_;
}
else
{
return v___x_523_;
}
}
else
{
return v___x_521_;
}
}
else
{
return v___x_519_;
}
}
else
{
return v___x_517_;
}
}
else
{
return v___x_515_;
}
}
else
{
return v___x_513_;
}
}
else
{
return v___x_511_;
}
}
else
{
return v___x_509_;
}
}
}
else
{
return v___x_504_;
}
}
else
{
return v___x_502_;
}
}
else
{
return v___x_500_;
}
}
else
{
return v___x_498_;
}
}
else
{
return v___x_496_;
}
}
else
{
return v___x_494_;
}
}
else
{
return v___x_492_;
}
}
else
{
return v___x_490_;
}
}
else
{
return v___x_488_;
}
}
else
{
return v___x_486_;
}
}
else
{
return v___x_484_;
}
}
else
{
return v___x_482_;
}
}
else
{
return v___x_480_;
}
}
else
{
return v___x_478_;
}
}
else
{
return v___x_476_;
}
}
else
{
return v___x_474_;
}
}
else
{
return v___x_472_;
}
}
else
{
return v___x_470_;
}
}
else
{
return v___x_468_;
}
}
else
{
return v___x_466_;
}
}
else
{
return v___x_464_;
}
}
else
{
return v___x_462_;
}
}
else
{
return v___x_460_;
}
}
else
{
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Spectral_spectralMain___boxed(lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = lp_ariori_Spectral_spectralMain();
return v_res_530_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ariori_ArioriFull(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ariori_SpectralFull(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ariori_ArioriFull(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_ariori_Spectral_floatPi = _init_lp_ariori_Spectral_floatPi();
lp_ariori_Spectral_alphaCrit = _init_lp_ariori_Spectral_alphaCrit();
lean_mark_persistent(lp_ariori_Spectral_alphaCrit);
lp_ariori_Spectral_feWeight = _init_lp_ariori_Spectral_feWeight();
lean_mark_persistent(lp_ariori_Spectral_feWeight);
lp_ariori_Spectral_vesicaScale = _init_lp_ariori_Spectral_vesicaScale();
lean_mark_persistent(lp_ariori_Spectral_vesicaScale);
lp_ariori_Spectral_vesicaVolumeAtScale = _init_lp_ariori_Spectral_vesicaVolumeAtScale();
lean_mark_persistent(lp_ariori_Spectral_vesicaVolumeAtScale);
lp_ariori_Spectral_arithmeticDensityCoeff = _init_lp_ariori_Spectral_arithmeticDensityCoeff();
lean_mark_persistent(lp_ariori_Spectral_arithmeticDensityCoeff);
lp_ariori_Spectral_geometricDensityCoeff = _init_lp_ariori_Spectral_geometricDensityCoeff();
lean_mark_persistent(lp_ariori_Spectral_geometricDensityCoeff);
lp_ariori_Spectral_allPrimeGAlphaUpTo30 = _init_lp_ariori_Spectral_allPrimeGAlphaUpTo30();
lp_ariori_Spectral_intersectionUniqueLineCert = _init_lp_ariori_Spectral_intersectionUniqueLineCert();
lp_ariori_Spectral_vesicaHalfHeight = _init_lp_ariori_Spectral_vesicaHalfHeight();
lean_mark_persistent(lp_ariori_Spectral_vesicaHalfHeight);
lp_ariori_Spectral_arioriX17VesicaCert = _init_lp_ariori_Spectral_arioriX17VesicaCert();
lp_ariori_Spectral_spectralPaperCertificateOk = _init_lp_ariori_Spectral_spectralPaperCertificateOk();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
