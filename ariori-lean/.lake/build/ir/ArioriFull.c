// Lean compiler output
// Module: ArioriFull
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_gcd(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double sqrt(double);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t l_instDecidableEqOrdering(uint8_t, uint8_t);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_findIdx_x3f___redArg(lean_object*, lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_beq(double, double);
double lean_float_mul(double, double);
uint8_t lean_float_decLt(double, double);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
double lean_float_div(double, double);
double lean_float_sub(double, double);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* l_Nat_reprFast(lean_object*);
double l_Float_ofInt(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double lean_float_add(double, double);
LEAN_EXPORT lean_object* lp_ariori_natSqrt_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_natSqrt_loop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_natSqrt(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Int_gcdNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Int_gcdNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Int_gcdInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Int_gcdInt___boxed(lean_object*, lean_object*);
static const lean_string_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__0 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__0_value;
static const lean_string_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__1 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__1_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__1_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__2 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__2_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__2_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__3 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__3_value;
static const lean_string_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__4 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__4_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__4_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__5 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__5_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__3_value),((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__5_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__6 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__6_value;
static lean_once_cell_t lp_ariori_instReprVesicaNumber_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__7;
static const lean_string_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__8 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__8_value;
static lean_once_cell_t lp_ariori_instReprVesicaNumber_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__9;
static lean_once_cell_t lp_ariori_instReprVesicaNumber_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__10;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__0_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__11 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__11_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__8_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__12 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__12_value;
static const lean_string_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__13 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__13_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__13_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__14 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__14_value;
static lean_once_cell_t lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__15;
static const lean_string_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__16 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__16_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__16_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__17 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__17_value;
static const lean_string_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__18 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__18_value;
static const lean_ctor_object lp_ariori_instReprVesicaNumber_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__18_value)}};
static const lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___closed__19 = (const lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instReprVesicaNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instReprVesicaNumber_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instReprVesicaNumber___closed__0 = (const lean_object*)&lp_ariori_instReprVesicaNumber___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instReprVesicaNumber = (const lean_object*)&lp_ariori_instReprVesicaNumber___closed__0_value;
static lean_once_cell_t lp_ariori_VesicaNumber_normalize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_VesicaNumber_normalize___closed__0;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_normalize(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_mk_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_ofInt(lean_object*);
static lean_once_cell_t lp_ariori_VesicaNumber_zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_VesicaNumber_zero___closed__0;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_zero;
static lean_once_cell_t lp_ariori_VesicaNumber_one___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_VesicaNumber_one___closed__0;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_one;
static lean_once_cell_t lp_ariori_VesicaNumber_sqrt3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_VesicaNumber_sqrt3___closed__0;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sqrt3;
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_isZero(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_isZero___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_neg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sub___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_VesicaNumber_mul___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_VesicaNumber_mul___closed__0;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_div___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_VesicaNumber_sq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_VesicaNumber_sq___closed__0;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sq(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sq___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_isNeg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_isNeg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_abs(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_compare___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_vesicaSqrt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_vesicaSqrt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_vesicaSqrt(lean_object*);
static lean_once_cell_t lp_ariori_VesicaNumber_toFloat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_VesicaNumber_toFloat___closed__0;
static lean_once_cell_t lp_ariori_VesicaNumber_toFloat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_VesicaNumber_toFloat___closed__1;
LEAN_EXPORT double lp_ariori_VesicaNumber_toFloat(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_toFloat___boxed(lean_object*);
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__0_value;
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__1 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__1_value;
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ")/"};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__2 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__2_value;
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__3 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__3_value;
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__4 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__4_value;
static lean_once_cell_t lp_ariori_VesicaNumber_formatExact___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_VesicaNumber_formatExact___closed__5;
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "*sqrt(3)"};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__6 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__6_value;
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "-sqrt(3)"};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__7 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__7_value;
static const lean_string_object lp_ariori_VesicaNumber_formatExact___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sqrt(3)"};
static const lean_object* lp_ariori_VesicaNumber_formatExact___closed__8 = (const lean_object*)&lp_ariori_VesicaNumber_formatExact___closed__8_value;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_formatExact(lean_object*);
static const lean_closure_object lp_ariori_VesicaNumber_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_formatExact, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instToString___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instToString___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instToString = (const lean_object*)&lp_ariori_VesicaNumber_instToString___closed__0_value;
static const lean_closure_object lp_ariori_VesicaNumber_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instBEq___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instBEq = (const lean_object*)&lp_ariori_VesicaNumber_instBEq___closed__0_value;
static const lean_closure_object lp_ariori_VesicaNumber_instAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instAdd___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instAdd___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instAdd = (const lean_object*)&lp_ariori_VesicaNumber_instAdd___closed__0_value;
static const lean_closure_object lp_ariori_VesicaNumber_instSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instSub___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instSub___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instSub = (const lean_object*)&lp_ariori_VesicaNumber_instSub___closed__0_value;
static const lean_closure_object lp_ariori_VesicaNumber_instMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instMul___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instMul___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instMul = (const lean_object*)&lp_ariori_VesicaNumber_instMul___closed__0_value;
static const lean_closure_object lp_ariori_VesicaNumber_instDiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_div___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instDiv___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instDiv___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instDiv = (const lean_object*)&lp_ariori_VesicaNumber_instDiv___closed__0_value;
static const lean_closure_object lp_ariori_VesicaNumber_instNeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_neg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instNeg___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instNeg___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instNeg = (const lean_object*)&lp_ariori_VesicaNumber_instNeg___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_instOfNatOfNatNat;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_instOfNatOfNatNat__1;
static const lean_closure_object lp_ariori_VesicaNumber_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instOrd___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instOrd = (const lean_object*)&lp_ariori_VesicaNumber_instOrd___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_instInhabited;
LEAN_EXPORT uint64_t lp_ariori_VesicaNumber_instHashable___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_instHashable___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_VesicaNumber_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_VesicaNumber_instHashable___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_VesicaNumber_instHashable___closed__0 = (const lean_object*)&lp_ariori_VesicaNumber_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_VesicaNumber_instHashable = (const lean_object*)&lp_ariori_VesicaNumber_instHashable___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_vLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_vGe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vGe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_vLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_vGt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vGt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vMin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vMin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_vMax___boxed(lean_object*, lean_object*);
static const lean_string_object lp_ariori_instReprPoint_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_ariori_instReprPoint_repr___redArg___closed__0 = (const lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__0_value;
static const lean_ctor_object lp_ariori_instReprPoint_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__0_value)}};
static const lean_object* lp_ariori_instReprPoint_repr___redArg___closed__1 = (const lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__1_value;
static const lean_ctor_object lp_ariori_instReprPoint_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__1_value)}};
static const lean_object* lp_ariori_instReprPoint_repr___redArg___closed__2 = (const lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__2_value;
static const lean_ctor_object lp_ariori_instReprPoint_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__2_value),((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__5_value)}};
static const lean_object* lp_ariori_instReprPoint_repr___redArg___closed__3 = (const lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__3_value;
static const lean_string_object lp_ariori_instReprPoint_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* lp_ariori_instReprPoint_repr___redArg___closed__4 = (const lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__4_value;
static const lean_ctor_object lp_ariori_instReprPoint_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__4_value)}};
static const lean_object* lp_ariori_instReprPoint_repr___redArg___closed__5 = (const lean_object*)&lp_ariori_instReprPoint_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_ariori_instReprPoint_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprPoint_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprPoint_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instReprPoint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instReprPoint_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instReprPoint___closed__0 = (const lean_object*)&lp_ariori_instReprPoint___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instReprPoint = (const lean_object*)&lp_ariori_instReprPoint___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_instBEqPoint_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instBEqPoint_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instBEqPoint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instBEqPoint_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instBEqPoint___closed__0 = (const lean_object*)&lp_ariori_instBEqPoint___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instBEqPoint = (const lean_object*)&lp_ariori_instBEqPoint___closed__0_value;
static lean_once_cell_t lp_ariori_instInhabitedPoint_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instInhabitedPoint_default___closed__0;
LEAN_EXPORT lean_object* lp_ariori_instInhabitedPoint_default;
LEAN_EXPORT lean_object* lp_ariori_instInhabitedPoint;
LEAN_EXPORT lean_object* lp_ariori_Point_distSq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Point_distSq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_Point_onInfiniteLine(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Point_onInfiniteLine___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_Point_onSegment(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Point_onSegment___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ariori_instReprSegment_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "p1"};
static const lean_object* lp_ariori_instReprSegment_repr___redArg___closed__0 = (const lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__0_value;
static const lean_ctor_object lp_ariori_instReprSegment_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__0_value)}};
static const lean_object* lp_ariori_instReprSegment_repr___redArg___closed__1 = (const lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__1_value;
static const lean_ctor_object lp_ariori_instReprSegment_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__1_value)}};
static const lean_object* lp_ariori_instReprSegment_repr___redArg___closed__2 = (const lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__2_value;
static const lean_ctor_object lp_ariori_instReprSegment_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__2_value),((lean_object*)&lp_ariori_instReprVesicaNumber_repr___redArg___closed__5_value)}};
static const lean_object* lp_ariori_instReprSegment_repr___redArg___closed__3 = (const lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__3_value;
static lean_once_cell_t lp_ariori_instReprSegment_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instReprSegment_repr___redArg___closed__4;
static const lean_string_object lp_ariori_instReprSegment_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "p2"};
static const lean_object* lp_ariori_instReprSegment_repr___redArg___closed__5 = (const lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__5_value;
static const lean_ctor_object lp_ariori_instReprSegment_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__5_value)}};
static const lean_object* lp_ariori_instReprSegment_repr___redArg___closed__6 = (const lean_object*)&lp_ariori_instReprSegment_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* lp_ariori_instReprSegment_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprSegment_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprSegment_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instReprSegment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instReprSegment_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instReprSegment___closed__0 = (const lean_object*)&lp_ariori_instReprSegment___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instReprSegment = (const lean_object*)&lp_ariori_instReprSegment___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_instBEqSegment_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instBEqSegment_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instBEqSegment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instBEqSegment_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instBEqSegment___closed__0 = (const lean_object*)&lp_ariori_instBEqSegment___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instBEqSegment = (const lean_object*)&lp_ariori_instBEqSegment___closed__0_value;
static lean_once_cell_t lp_ariori_instInhabitedSegment_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instInhabitedSegment_default___closed__0;
LEAN_EXPORT lean_object* lp_ariori_instInhabitedSegment_default;
LEAN_EXPORT lean_object* lp_ariori_instInhabitedSegment;
LEAN_EXPORT lean_object* lp_ariori_Segment_intersect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Segment_intersect___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_circleCircleIntersect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_circleCircleIntersect___closed__0;
LEAN_EXPORT lean_object* lp_ariori_circleCircleIntersect(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_circleCircleIntersect___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_lineCircleIntersect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_lineCircleIntersect___closed__0;
static lean_once_cell_t lp_ariori_lineCircleIntersect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_lineCircleIntersect___closed__1;
LEAN_EXPORT lean_object* lp_ariori_lineCircleIntersect(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_lineCircleIntersect___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_fartherFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_fartherFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_lineIntersect(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "p3"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__0 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__0_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__0_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__1 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__1_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "p4"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__2 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__2_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__2_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__3 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__3_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "p5"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__4 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__4_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__4_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__5 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__5_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "p6"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__6 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__6_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__6_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__7 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__7_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "c1"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__8 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__8_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__8_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__9 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__9_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "c2"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__10 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__10_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__10_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__11 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__11_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "c3"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__12 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__12_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__12_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__13 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__13_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "c4"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__14 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__14_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__14_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__15 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__15_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__16 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__16_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__16_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__17 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__17_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__18 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__18_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__18_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__19 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__19_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__20 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__20_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__20_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__21 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__21_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__22 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__22_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__22_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__23 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__23_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__24 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__24_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__24_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__25 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__25_value;
static const lean_string_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "radius"};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__26 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__26_value;
static const lean_ctor_object lp_ariori_instReprSquareConstruction_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__26_value)}};
static const lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__27 = (const lean_object*)&lp_ariori_instReprSquareConstruction_repr___redArg___closed__27_value;
static lean_once_cell_t lp_ariori_instReprSquareConstruction_repr___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instReprSquareConstruction_repr___redArg___closed__28;
LEAN_EXPORT lean_object* lp_ariori_instReprSquareConstruction_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprSquareConstruction_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprSquareConstruction_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instReprSquareConstruction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instReprSquareConstruction_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instReprSquareConstruction___closed__0 = (const lean_object*)&lp_ariori_instReprSquareConstruction___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instReprSquareConstruction = (const lean_object*)&lp_ariori_instReprSquareConstruction___closed__0_value;
static lean_once_cell_t lp_ariori_instInhabitedSquareConstruction_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_instInhabitedSquareConstruction_default___closed__0;
LEAN_EXPORT lean_object* lp_ariori_instInhabitedSquareConstruction_default;
LEAN_EXPORT lean_object* lp_ariori_instInhabitedSquareConstruction;
LEAN_EXPORT lean_object* lp_ariori_deriveSquare(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_gen1Foundation___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_gen1Foundation___closed__0;
static lean_once_cell_t lp_ariori_gen1Foundation___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_gen1Foundation___closed__1;
static lean_once_cell_t lp_ariori_gen1Foundation___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_gen1Foundation___closed__2;
LEAN_EXPORT lean_object* lp_ariori_gen1Foundation(lean_object*);
LEAN_EXPORT uint8_t lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_sortPointsOnSegment(lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_splitSegment_makePairs(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00splitSegment_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00splitSegment_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_splitSegment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_splitSegment___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_List_elem___at___00atomicSpectrum_dedup_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_elem___at___00atomicSpectrum_dedup_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum_dedup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum_insertFreq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00atomicSpectrum_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___closed__0 = (const lean_object*)&lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00atomicSpectrum_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00atomicSpectrum_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00atomicSpectrum_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00atomicSpectrum_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00atomicSpectrum_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_ariori_atomicSpectrum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ariori_atomicSpectrum___closed__0 = (const lean_object*)&lp_ariori_atomicSpectrum___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_mapPointToSegmentAxis(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_mapPointToSegmentAxis___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_liftChildToAxis(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_liftChildToAxis___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_SpawnChildWitness_child(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object lp_ariori_spawnChildren___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ariori_spawnChildren___closed__0 = (const lean_object*)&lp_ariori_spawnChildren___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_spawnChildren(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_spawnChildren___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__spawnOneChild_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__spawnOneChild_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_filterMap_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_filterMap_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_processSeed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_generationAtomicSegments_dedup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00generationAtomicSegments_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00generationAtomicSegments_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_generationAtomicSegments(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00mergeGenerationData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00mergeGenerationData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_mergeGenerationData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_mergeGenerationData___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_recursionStep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_recursionStep___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_recursionLoop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_recursionLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_processGenerations(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "NodeLabel.A"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__0 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__0_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__0_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__1 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__1_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "NodeLabel.B"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__2 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__2_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__2_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__3 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__3_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "NodeLabel.Top"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__4 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__4_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__4_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__5 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__5_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "NodeLabel.Bot"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__6 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__6_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__6_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__7 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__7_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.P3"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__8 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__8_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__8_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__9 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__9_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.P4"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__10 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__10_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__10_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__11 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__11_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.P5"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__12 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__12_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__12_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__13 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__13_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.P6"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__14 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__14_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__14_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__15 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__15_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.C1"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__16 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__16_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__16_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__17 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__17_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.C2"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__18 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__18_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__18_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__19 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__19_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.C3"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__20 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__20_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__20_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__21 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__21_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NodeLabel.C4"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__22 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__22_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__22_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__23 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__23_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "NodeLabel.K"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__24 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__24_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__24_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__25 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__25_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "NodeLabel.L"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__26 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__26_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__26_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__27 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__27_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "NodeLabel.M"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__28 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__28_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__28_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__29 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__29_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "NodeLabel.N"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__30 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__30_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__30_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__31 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__31_value;
static const lean_string_object lp_ariori_instReprNodeLabel_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "NodeLabel.X17"};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__32 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__32_value;
static const lean_ctor_object lp_ariori_instReprNodeLabel_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__32_value)}};
static const lean_object* lp_ariori_instReprNodeLabel_repr___closed__33 = (const lean_object*)&lp_ariori_instReprNodeLabel_repr___closed__33_value;
LEAN_EXPORT lean_object* lp_ariori_instReprNodeLabel_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprNodeLabel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instReprNodeLabel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instReprNodeLabel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instReprNodeLabel___closed__0 = (const lean_object*)&lp_ariori_instReprNodeLabel___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instReprNodeLabel = (const lean_object*)&lp_ariori_instReprNodeLabel___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_instBEqNodeLabel_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_instBEqNodeLabel_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instBEqNodeLabel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instBEqNodeLabel_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instBEqNodeLabel___closed__0 = (const lean_object*)&lp_ariori_instBEqNodeLabel___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instBEqNodeLabel = (const lean_object*)&lp_ariori_instBEqNodeLabel___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_instInhabitedNodeLabel_default;
LEAN_EXPORT uint8_t lp_ariori_instInhabitedNodeLabel;
LEAN_EXPORT uint8_t lp_ariori_instDecidableEqNodeLabel(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_instDecidableEqNodeLabel___boxed(lean_object*, lean_object*);
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "A"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__0 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__0_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__1 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__1_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Top"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__2 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__2_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Bot"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__3 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__3_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "P3"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__4 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__4_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "P4"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__5 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__5_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "P5"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__6 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__6_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "P6"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__7 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__7_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "C1"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__8 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__8_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "C2"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__9 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__9_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "C3"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__10 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__10_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "C4"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__11 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__11_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "K"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__12 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__12_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "L"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__13 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__13_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "M"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__14 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__14_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "N"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__15 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__15_value;
static const lean_string_object lp_ariori_instToStringNodeLabel___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "X17"};
static const lean_object* lp_ariori_instToStringNodeLabel___lam__0___closed__16 = (const lean_object*)&lp_ariori_instToStringNodeLabel___lam__0___closed__16_value;
LEAN_EXPORT lean_object* lp_ariori_instToStringNodeLabel___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_instToStringNodeLabel___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_instToStringNodeLabel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instToStringNodeLabel___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instToStringNodeLabel___closed__0 = (const lean_object*)&lp_ariori_instToStringNodeLabel___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instToStringNodeLabel = (const lean_object*)&lp_ariori_instToStringNodeLabel___closed__0_value;
static const lean_ctor_object lp_ariori_allNodes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ariori_allNodes___closed__0 = (const lean_object*)&lp_ariori_allNodes___closed__0_value;
static const lean_ctor_object lp_ariori_allNodes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__0_value)}};
static const lean_object* lp_ariori_allNodes___closed__1 = (const lean_object*)&lp_ariori_allNodes___closed__1_value;
static const lean_ctor_object lp_ariori_allNodes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__1_value)}};
static const lean_object* lp_ariori_allNodes___closed__2 = (const lean_object*)&lp_ariori_allNodes___closed__2_value;
static const lean_ctor_object lp_ariori_allNodes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__2_value)}};
static const lean_object* lp_ariori_allNodes___closed__3 = (const lean_object*)&lp_ariori_allNodes___closed__3_value;
static const lean_ctor_object lp_ariori_allNodes___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__3_value)}};
static const lean_object* lp_ariori_allNodes___closed__4 = (const lean_object*)&lp_ariori_allNodes___closed__4_value;
static const lean_ctor_object lp_ariori_allNodes___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__4_value)}};
static const lean_object* lp_ariori_allNodes___closed__5 = (const lean_object*)&lp_ariori_allNodes___closed__5_value;
static const lean_ctor_object lp_ariori_allNodes___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__5_value)}};
static const lean_object* lp_ariori_allNodes___closed__6 = (const lean_object*)&lp_ariori_allNodes___closed__6_value;
static const lean_ctor_object lp_ariori_allNodes___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__6_value)}};
static const lean_object* lp_ariori_allNodes___closed__7 = (const lean_object*)&lp_ariori_allNodes___closed__7_value;
static const lean_ctor_object lp_ariori_allNodes___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__7_value)}};
static const lean_object* lp_ariori_allNodes___closed__8 = (const lean_object*)&lp_ariori_allNodes___closed__8_value;
static const lean_ctor_object lp_ariori_allNodes___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__8_value)}};
static const lean_object* lp_ariori_allNodes___closed__9 = (const lean_object*)&lp_ariori_allNodes___closed__9_value;
static const lean_ctor_object lp_ariori_allNodes___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__9_value)}};
static const lean_object* lp_ariori_allNodes___closed__10 = (const lean_object*)&lp_ariori_allNodes___closed__10_value;
static const lean_ctor_object lp_ariori_allNodes___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__10_value)}};
static const lean_object* lp_ariori_allNodes___closed__11 = (const lean_object*)&lp_ariori_allNodes___closed__11_value;
static const lean_ctor_object lp_ariori_allNodes___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__11_value)}};
static const lean_object* lp_ariori_allNodes___closed__12 = (const lean_object*)&lp_ariori_allNodes___closed__12_value;
static const lean_ctor_object lp_ariori_allNodes___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__12_value)}};
static const lean_object* lp_ariori_allNodes___closed__13 = (const lean_object*)&lp_ariori_allNodes___closed__13_value;
static const lean_ctor_object lp_ariori_allNodes___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__13_value)}};
static const lean_object* lp_ariori_allNodes___closed__14 = (const lean_object*)&lp_ariori_allNodes___closed__14_value;
static const lean_ctor_object lp_ariori_allNodes___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__14_value)}};
static const lean_object* lp_ariori_allNodes___closed__15 = (const lean_object*)&lp_ariori_allNodes___closed__15_value;
static const lean_ctor_object lp_ariori_allNodes___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ariori_allNodes___closed__15_value)}};
static const lean_object* lp_ariori_allNodes___closed__16 = (const lean_object*)&lp_ariori_allNodes___closed__16_value;
LEAN_EXPORT const lean_object* lp_ariori_allNodes = (const lean_object*)&lp_ariori_allNodes___closed__16_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__0 = (const lean_object*)&lp_ariori_gen1Edges___closed__0_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__1 = (const lean_object*)&lp_ariori_gen1Edges___closed__1_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__2 = (const lean_object*)&lp_ariori_gen1Edges___closed__2_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__3 = (const lean_object*)&lp_ariori_gen1Edges___closed__3_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__4 = (const lean_object*)&lp_ariori_gen1Edges___closed__4_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__5 = (const lean_object*)&lp_ariori_gen1Edges___closed__5_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__6 = (const lean_object*)&lp_ariori_gen1Edges___closed__6_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__7 = (const lean_object*)&lp_ariori_gen1Edges___closed__7_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__8 = (const lean_object*)&lp_ariori_gen1Edges___closed__8_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__9 = (const lean_object*)&lp_ariori_gen1Edges___closed__9_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__10 = (const lean_object*)&lp_ariori_gen1Edges___closed__10_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__11 = (const lean_object*)&lp_ariori_gen1Edges___closed__11_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__12 = (const lean_object*)&lp_ariori_gen1Edges___closed__12_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__13 = (const lean_object*)&lp_ariori_gen1Edges___closed__13_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__14 = (const lean_object*)&lp_ariori_gen1Edges___closed__14_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__15 = (const lean_object*)&lp_ariori_gen1Edges___closed__15_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__16 = (const lean_object*)&lp_ariori_gen1Edges___closed__16_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__17 = (const lean_object*)&lp_ariori_gen1Edges___closed__17_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__18 = (const lean_object*)&lp_ariori_gen1Edges___closed__18_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__19 = (const lean_object*)&lp_ariori_gen1Edges___closed__19_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__20 = (const lean_object*)&lp_ariori_gen1Edges___closed__20_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ariori_gen1Edges___closed__21 = (const lean_object*)&lp_ariori_gen1Edges___closed__21_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__19_value),((lean_object*)&lp_ariori_gen1Edges___closed__21_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__22 = (const lean_object*)&lp_ariori_gen1Edges___closed__22_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__18_value),((lean_object*)&lp_ariori_gen1Edges___closed__22_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__23 = (const lean_object*)&lp_ariori_gen1Edges___closed__23_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__17_value),((lean_object*)&lp_ariori_gen1Edges___closed__23_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__24 = (const lean_object*)&lp_ariori_gen1Edges___closed__24_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__16_value),((lean_object*)&lp_ariori_gen1Edges___closed__24_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__25 = (const lean_object*)&lp_ariori_gen1Edges___closed__25_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__15_value),((lean_object*)&lp_ariori_gen1Edges___closed__25_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__26 = (const lean_object*)&lp_ariori_gen1Edges___closed__26_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__14_value),((lean_object*)&lp_ariori_gen1Edges___closed__26_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__27 = (const lean_object*)&lp_ariori_gen1Edges___closed__27_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__13_value),((lean_object*)&lp_ariori_gen1Edges___closed__27_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__28 = (const lean_object*)&lp_ariori_gen1Edges___closed__28_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__12_value),((lean_object*)&lp_ariori_gen1Edges___closed__28_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__29 = (const lean_object*)&lp_ariori_gen1Edges___closed__29_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__11_value),((lean_object*)&lp_ariori_gen1Edges___closed__29_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__30 = (const lean_object*)&lp_ariori_gen1Edges___closed__30_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__10_value),((lean_object*)&lp_ariori_gen1Edges___closed__30_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__31 = (const lean_object*)&lp_ariori_gen1Edges___closed__31_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__9_value),((lean_object*)&lp_ariori_gen1Edges___closed__31_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__32 = (const lean_object*)&lp_ariori_gen1Edges___closed__32_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__8_value),((lean_object*)&lp_ariori_gen1Edges___closed__32_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__33 = (const lean_object*)&lp_ariori_gen1Edges___closed__33_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__7_value),((lean_object*)&lp_ariori_gen1Edges___closed__33_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__34 = (const lean_object*)&lp_ariori_gen1Edges___closed__34_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__6_value),((lean_object*)&lp_ariori_gen1Edges___closed__34_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__35 = (const lean_object*)&lp_ariori_gen1Edges___closed__35_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__5_value),((lean_object*)&lp_ariori_gen1Edges___closed__35_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__36 = (const lean_object*)&lp_ariori_gen1Edges___closed__36_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__4_value),((lean_object*)&lp_ariori_gen1Edges___closed__36_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__37 = (const lean_object*)&lp_ariori_gen1Edges___closed__37_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__3_value),((lean_object*)&lp_ariori_gen1Edges___closed__37_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__38 = (const lean_object*)&lp_ariori_gen1Edges___closed__38_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__2_value),((lean_object*)&lp_ariori_gen1Edges___closed__38_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__39 = (const lean_object*)&lp_ariori_gen1Edges___closed__39_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__1_value),((lean_object*)&lp_ariori_gen1Edges___closed__39_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__40 = (const lean_object*)&lp_ariori_gen1Edges___closed__40_value;
static const lean_ctor_object lp_ariori_gen1Edges___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_ariori_gen1Edges___closed__0_value),((lean_object*)&lp_ariori_gen1Edges___closed__40_value)}};
static const lean_object* lp_ariori_gen1Edges___closed__41 = (const lean_object*)&lp_ariori_gen1Edges___closed__41_value;
LEAN_EXPORT const lean_object* lp_ariori_gen1Edges = (const lean_object*)&lp_ariori_gen1Edges___closed__41_value;
LEAN_EXPORT uint8_t lp_ariori_hasEdge___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_hasEdge___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_hasEdge(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_hasEdge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00degree_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00degree_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_degree(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_degree___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00neighbors_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00neighbors_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_ariori_neighbors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ariori_neighbors___closed__0 = (const lean_object*)&lp_ariori_neighbors___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_neighbors(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_neighbors___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00neighborMultisetCount_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00neighborMultisetCount_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_neighborMultisetCount(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_neighborMultisetCount___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_countTriangles_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_countTriangles_go___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_countTriangles___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_countTriangles___closed__0;
LEAN_EXPORT lean_object* lp_ariori_countTriangles;
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go3(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go2(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go1(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_findTriangles___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_findTriangles___closed__0;
static lean_once_cell_t lp_ariori_findTriangles___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_findTriangles___closed__1;
LEAN_EXPORT lean_object* lp_ariori_findTriangles;
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00handshakingSum_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00handshakingSum_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_handshakingSum___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_handshakingSum___closed__0;
LEAN_EXPORT lean_object* lp_ariori_handshakingSum;
LEAN_EXPORT uint8_t lp_ariori_degreeMatchesNeighbors___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_degreeMatchesNeighbors___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_degreeMatchesNeighbors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_degreeMatchesNeighbors___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_degreeMatchesNeighbors___closed__0 = (const lean_object*)&lp_ariori_degreeMatchesNeighbors___closed__0_value;
static lean_once_cell_t lp_ariori_degreeMatchesNeighbors___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_degreeMatchesNeighbors___closed__1;
LEAN_EXPORT uint8_t lp_ariori_degreeMatchesNeighbors;
LEAN_EXPORT uint8_t lp_ariori_laplacianRowSumsZero___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_laplacianRowSumsZero___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_laplacianRowSumsZero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_laplacianRowSumsZero___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_laplacianRowSumsZero___closed__0 = (const lean_object*)&lp_ariori_laplacianRowSumsZero___closed__0_value;
static lean_once_cell_t lp_ariori_laplacianRowSumsZero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_laplacianRowSumsZero___closed__1;
LEAN_EXPORT uint8_t lp_ariori_laplacianRowSumsZero;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_any_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_any_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_List_elem___at___00insertIfNew_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_elem___at___00insertIfNew_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_insertIfNew(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_insertIfNew___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_expandReachable(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00reachableFromStart_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00reachableFromStart_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_reachableFromStart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_reachableFromStart___closed__0;
LEAN_EXPORT lean_object* lp_ariori_reachableFromStart(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_reachableFromStart___boxed(lean_object*);
static lean_once_cell_t lp_ariori_gen1Connected___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_gen1Connected___lam__0___closed__0;
LEAN_EXPORT uint8_t lp_ariori_gen1Connected___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_gen1Connected___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_gen1Connected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_gen1Connected___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_gen1Connected___closed__0 = (const lean_object*)&lp_ariori_gen1Connected___closed__0_value;
static lean_once_cell_t lp_ariori_gen1Connected___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_gen1Connected___closed__1;
LEAN_EXPORT uint8_t lp_ariori_gen1Connected;
LEAN_EXPORT uint8_t lp_ariori_isGraphAutomorphism___lam__0(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_isGraphAutomorphism___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_isGraphAutomorphism___lam__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_isGraphAutomorphism___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_isGraphAutomorphism(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_isGraphAutomorphism___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_idNode(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_idNode___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_swapTopBot(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_swapTopBot___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_swapC2C4(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_swapC2C4___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_mirrorAutomorphism(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_mirrorAutomorphism___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ariori_instReprGen1Auto_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Gen1Auto.id"};
static const lean_object* lp_ariori_instReprGen1Auto_repr___closed__0 = (const lean_object*)&lp_ariori_instReprGen1Auto_repr___closed__0_value;
static const lean_ctor_object lp_ariori_instReprGen1Auto_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprGen1Auto_repr___closed__0_value)}};
static const lean_object* lp_ariori_instReprGen1Auto_repr___closed__1 = (const lean_object*)&lp_ariori_instReprGen1Auto_repr___closed__1_value;
static const lean_string_object lp_ariori_instReprGen1Auto_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Gen1Auto.mirror"};
static const lean_object* lp_ariori_instReprGen1Auto_repr___closed__2 = (const lean_object*)&lp_ariori_instReprGen1Auto_repr___closed__2_value;
static const lean_ctor_object lp_ariori_instReprGen1Auto_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ariori_instReprGen1Auto_repr___closed__2_value)}};
static const lean_object* lp_ariori_instReprGen1Auto_repr___closed__3 = (const lean_object*)&lp_ariori_instReprGen1Auto_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_ariori_instReprGen1Auto_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_instReprGen1Auto_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instReprGen1Auto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instReprGen1Auto_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instReprGen1Auto___closed__0 = (const lean_object*)&lp_ariori_instReprGen1Auto___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instReprGen1Auto = (const lean_object*)&lp_ariori_instReprGen1Auto___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_instBEqGen1Auto_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_instBEqGen1Auto_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_instBEqGen1Auto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_instBEqGen1Auto_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_instBEqGen1Auto___closed__0 = (const lean_object*)&lp_ariori_instBEqGen1Auto___closed__0_value;
LEAN_EXPORT const lean_object* lp_ariori_instBEqGen1Auto = (const lean_object*)&lp_ariori_instBEqGen1Auto___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_Gen1Auto_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_instDecidableEqGen1Auto(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_instDecidableEqGen1Auto___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_graphAutomorphismInjective___lam__0(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_graphAutomorphismInjective___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_graphAutomorphismInjective___lam__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_graphAutomorphismInjective___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_graphAutomorphismInjective(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_graphAutomorphismInjective___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_neighborsHasEdgeAgree(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_neighborsHasEdgeAgree___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_neighborsHasEdgeAgreeAll___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_neighborsHasEdgeAgreeAll___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_neighborsHasEdgeAgreeAll___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_neighborsHasEdgeAgreeAll___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_neighborsHasEdgeAgreeAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_neighborsHasEdgeAgreeAll___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_ariori_allNodes___closed__16_value)} };
static const lean_object* lp_ariori_neighborsHasEdgeAgreeAll___closed__0 = (const lean_object*)&lp_ariori_neighborsHasEdgeAgreeAll___closed__0_value;
static lean_once_cell_t lp_ariori_neighborsHasEdgeAgreeAll___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_neighborsHasEdgeAgreeAll___closed__1;
LEAN_EXPORT uint8_t lp_ariori_neighborsHasEdgeAgreeAll;
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesDegree___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesDegree___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesDegree(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesDegree___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesNeighbors___lam__0(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesNeighbors___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesNeighbors___lam__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesNeighbors___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesNeighbors(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesNeighbors___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_relabelField(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_relabelField___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0;
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_laplacianMatrix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_laplacianMatrix___closed__0;
LEAN_EXPORT lean_object* lp_ariori_laplacianMatrix;
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsFloat_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsFloat_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_ariori_swapRowsFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ariori_swapRowsFloat___closed__0 = (const lean_object*)&lp_ariori_swapRowsFloat___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_swapRowsFloat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixFloat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixFloat_spec__1(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_laplacianMatrixFloat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_laplacianMatrixFloat___closed__0;
LEAN_EXPORT lean_object* lp_ariori_laplacianMatrixFloat;
static lean_once_cell_t lp_ariori_floatAt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_floatAt___closed__0;
LEAN_EXPORT lean_object* lp_ariori_floatAt___boxed__const__1;
LEAN_EXPORT double lp_ariori_floatAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_floatAt___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_floatNearZero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_ariori_floatNearZero___closed__0;
LEAN_EXPORT uint8_t lp_ariori_floatNearZero(double);
LEAN_EXPORT lean_object* lp_ariori_floatNearZero___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_matrixRankFloat___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_matrixRankFloat___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___lam__0(double, double, double);
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___closed__0 = (const lean_object*)&lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0(lean_object*, lean_object*, double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_matrixRankFloat(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_matrixRank(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_intMod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_intMod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixMod_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixMod_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_laplacianMatrixMod(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsMod_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsMod_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_ariori_swapRowsMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ariori_swapRowsMod___closed__0 = (const lean_object*)&lp_ariori_swapRowsMod___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_swapRowsMod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_subMod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_subMod___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_addRowMultipleMod___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_addRowMultipleMod___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_ariori_addRowMultipleMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_ariori_addRowMultipleMod___closed__0 = (const lean_object*)&lp_ariori_addRowMultipleMod___closed__0_value;
LEAN_EXPORT lean_object* lp_ariori_addRowMultipleMod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_natInvMod97___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_natInvMod97___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_natInvMod97___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_natInvMod97___closed__0;
LEAN_EXPORT lean_object* lp_ariori_natInvMod97(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_matrixRankMod97Aux___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_matrixRankMod97Aux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankMod97Aux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankMod97Aux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_matrixRankMod97Aux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_matrixRankMod97(lean_object*);
LEAN_EXPORT const lean_object* lp_ariori_searchOrder = (const lean_object*)&lp_ariori_allNodes___closed__16_value;
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00nodesOfDegree_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00nodesOfDegree_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_nodesOfDegree(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_nodesOfDegree___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_sigmaFromAssignment___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_sigmaFromAssignment___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_sigmaFromAssignment___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_sigmaFromAssignment___closed__0;
LEAN_EXPORT uint8_t lp_ariori_sigmaFromAssignment(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_sigmaFromAssignment___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_eraseDups___at___00partialAssignmentInjective_spec__0(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_partialAssignmentInjective(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_partialAssignmentInjective___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_sigmaFromPartial___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_sigmaFromPartial___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_sigmaFromPartial(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_sigmaFromPartial___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_partialAutomorphismOk___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_partialAutomorphismOk___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_partialAutomorphismOk___lam__1(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_partialAutomorphismOk___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_partialAutomorphismOk(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_partialAutomorphismOk___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countGraphAutos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_countGraphAutos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_countGraphAutos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countGraphAutos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_collectGraphAutos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00collectGraphAutos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00collectGraphAutos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_collectGraphAutos___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_gen1AutomorphismCount___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_gen1AutomorphismCount___closed__0;
LEAN_EXPORT lean_object* lp_ariori_gen1AutomorphismCount;
static lean_once_cell_t lp_ariori_gen1AutomorphismAssignments___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_gen1AutomorphismAssignments___closed__0;
LEAN_EXPORT lean_object* lp_ariori_gen1AutomorphismAssignments;
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00mirrorAssignment_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_mirrorAssignment___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_mirrorAssignment___closed__0;
LEAN_EXPORT lean_object* lp_ariori_mirrorAssignment;
LEAN_EXPORT uint8_t lp_ariori_List_beq___at___00assignmentInCollect_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_beq___at___00assignmentInCollect_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_assignmentInCollect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_assignmentInCollect___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_assignmentInCollect(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_assignmentInCollect___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_assignmentMatchesSigma___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_assignmentMatchesSigma___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_assignmentMatchesSigma(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_assignmentMatchesSigma___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_ariori_classifyGen1Automorphism___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ariori_classifyGen1Automorphism___closed__0 = (const lean_object*)&lp_ariori_classifyGen1Automorphism___closed__0_value;
static const lean_ctor_object lp_ariori_classifyGen1Automorphism___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ariori_classifyGen1Automorphism___closed__1 = (const lean_object*)&lp_ariori_classifyGen1Automorphism___closed__1_value;
LEAN_EXPORT lean_object* lp_ariori_classifyGen1Automorphism(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00sigmaAsAssignment_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_sigmaAsAssignment(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_sigmaAssignmentInCollect(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_sigmaAssignmentInCollect___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_graphAutoAssignmentIsIdOrMirror(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_graphAutoAssignmentIsIdOrMirror___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__r;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__half___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__half___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__half;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__negHalf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__negHalf___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__negHalf;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__halfSqrt3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__halfSqrt3___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__halfSqrt3;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__negHalfSqrt3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__negHalfSqrt3___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__negHalfSqrt3;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__threeHalves___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__threeHalves___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__threeHalves;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptA___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptA___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptA;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptB___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptB___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptB;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptTop___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptTop___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptTop;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptBot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptBot___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptBot;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptP3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptP3___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptP3;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptP4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptP4___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptP4;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptP5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptP5___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptP5;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptP6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptP6___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptP6;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptC1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptC1___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptC1;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptC2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptC2___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptC2;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptC3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptC3___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptC3;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptC4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptC4___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptC4;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptK___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptK___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptK;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptL___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptL___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptL;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptM___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptM;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptN___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptN___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptN;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptX17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptX17___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptX17;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__0;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__1;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__2;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__3;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__4;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__5;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__6;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__7;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__8;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__9;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__10;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__11;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__12;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__13;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__14;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__15;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__gen1Points___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__gen1Points___closed__16;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__gen1Points;
LEAN_EXPORT uint8_t lp_ariori___private_ArioriFull_0__allDistinct_check___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__allDistinct_check___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori___private_ArioriFull_0__allDistinct_check(lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__allDistinct_check___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori___private_ArioriFull_0__allDistinct(lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__allDistinct___boxed(lean_object*);
static lean_once_cell_t lp_ariori___private_ArioriFull_0__ptX17mirror___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__ptX17mirror___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__ptX17mirror;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__d__C1C2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__d__C1C2___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__d__C1C2;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__d__C1C3;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__d__C1C4;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__d__C2C3;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__d__C2C4;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__d__C3C4;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__lam0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__lam0___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__lam0;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__lam1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__lam1___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__lam1;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__lam2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__lam2___closed__0;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__lam2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__lam2___closed__1;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__lam2;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__lam3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__lam3___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__lam3;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__det4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__det4___closed__0;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__det4(lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__det4___boxed(lean_object*);
static lean_once_cell_t lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__0;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__1;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__2;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__3;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__4;
static lean_once_cell_t lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__5;
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda(lean_object*);
static lean_once_cell_t lp_ariori_nodePointAtRadius___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_nodePointAtRadius___closed__0;
LEAN_EXPORT lean_object* lp_ariori_nodePointAtRadius(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_nodePointAtRadius___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_interactionTriangles;
LEAN_EXPORT lean_object* lp_ariori_distSqOverRSq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_distSqOverRSq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00centralityPotentialSq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00centralityPotentialSq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_centralityPotentialSq(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_centralityPotentialSq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00centralityPotentialsExact_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_centralityPotentialsExact(lean_object*);
static lean_once_cell_t lp_ariori_extractLagrangian___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_extractLagrangian___closed__0;
static lean_once_cell_t lp_ariori_extractLagrangian___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_extractLagrangian___closed__1;
static lean_once_cell_t lp_ariori_extractLagrangian___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_extractLagrangian___closed__2;
LEAN_EXPORT lean_object* lp_ariori_extractLagrangian(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_constField(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_constField___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_zeroField(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_zeroField___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00laplacianApply_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_laplacianApply(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_laplacianApply___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_laplacianApplyConstZero___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_laplacianApplyConstZero___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_laplacianApplyConstZero___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_laplacianApplyConstZero___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_laplacianApplyConstZero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_laplacianApplyConstZero___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_laplacianApplyConstZero___closed__0 = (const lean_object*)&lp_ariori_laplacianApplyConstZero___closed__0_value;
static const lean_closure_object lp_ariori_laplacianApplyConstZero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_laplacianApplyConstZero___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_ariori_laplacianApplyConstZero___closed__0_value)} };
static const lean_object* lp_ariori_laplacianApplyConstZero___closed__1 = (const lean_object*)&lp_ariori_laplacianApplyConstZero___closed__1_value;
static lean_once_cell_t lp_ariori_laplacianApplyConstZero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_laplacianApplyConstZero___closed__2;
LEAN_EXPORT uint8_t lp_ariori_laplacianApplyConstZero;
LEAN_EXPORT uint8_t lp_ariori_neighborCountMatchesDegree___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_neighborCountMatchesDegree___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_neighborCountMatchesDegree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_neighborCountMatchesDegree___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_neighborCountMatchesDegree___closed__0 = (const lean_object*)&lp_ariori_neighborCountMatchesDegree___closed__0_value;
static lean_once_cell_t lp_ariori_neighborCountMatchesDegree___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_neighborCountMatchesDegree___closed__1;
LEAN_EXPORT uint8_t lp_ariori_neighborCountMatchesDegree;
LEAN_EXPORT uint8_t lp_ariori_constKernelFromDegreeMatchAll___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_constKernelFromDegreeMatchAll___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ariori_constKernelFromDegreeMatchAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_constKernelFromDegreeMatchAll___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_ariori_laplacianApplyConstZero___closed__0_value)} };
static const lean_object* lp_ariori_constKernelFromDegreeMatchAll___closed__0 = (const lean_object*)&lp_ariori_constKernelFromDegreeMatchAll___closed__0_value;
static lean_once_cell_t lp_ariori_constKernelFromDegreeMatchAll___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_constKernelFromDegreeMatchAll___closed__1;
LEAN_EXPORT uint8_t lp_ariori_constKernelFromDegreeMatchAll;
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00kineticTerm_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_kineticTerm(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00massTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_massTerm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00triangleCubic_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_triangleCubic(lean_object*);
static lean_once_cell_t lp_ariori_discreteAction___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_discreteAction___closed__0;
static lean_once_cell_t lp_ariori_discreteAction___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_discreteAction___closed__1;
LEAN_EXPORT lean_object* lp_ariori_discreteAction(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_discreteAction___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_testField___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__0;
static lean_once_cell_t lp_ariori_testField___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__1;
static lean_once_cell_t lp_ariori_testField___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__2;
static lean_once_cell_t lp_ariori_testField___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__3;
static lean_once_cell_t lp_ariori_testField___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__4;
static lean_once_cell_t lp_ariori_testField___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__5;
static lean_once_cell_t lp_ariori_testField___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__6;
static lean_once_cell_t lp_ariori_testField___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__7;
static lean_once_cell_t lp_ariori_testField___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__8;
static lean_once_cell_t lp_ariori_testField___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__9;
static lean_once_cell_t lp_ariori_testField___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__10;
static lean_once_cell_t lp_ariori_testField___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__11;
static lean_once_cell_t lp_ariori_testField___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__12;
static lean_once_cell_t lp_ariori_testField___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__13;
static lean_once_cell_t lp_ariori_testField___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__14;
static lean_once_cell_t lp_ariori_testField___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__15;
static lean_once_cell_t lp_ariori_testField___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__16;
static lean_once_cell_t lp_ariori_testField___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__17;
static lean_once_cell_t lp_ariori_testField___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__18;
static lean_once_cell_t lp_ariori_testField___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__19;
static lean_once_cell_t lp_ariori_testField___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__20;
static lean_once_cell_t lp_ariori_testField___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__21;
static lean_once_cell_t lp_ariori_testField___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__22;
static lean_once_cell_t lp_ariori_testField___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_testField___closed__23;
LEAN_EXPORT lean_object* lp_ariori_testField(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_testField___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_kineticTermInvariantUnder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_kineticTermInvariantUnder___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_massTermInvariantUnder(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_massTermInvariantUnder___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_centralityInvariantUnderMirror___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_centralityInvariantUnderMirror___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_centralityInvariantUnderMirror___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_centralityInvariantUnderMirror___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_centralityInvariantUnderMirror___closed__0 = (const lean_object*)&lp_ariori_centralityInvariantUnderMirror___closed__0_value;
static lean_once_cell_t lp_ariori_centralityInvariantUnderMirror___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_centralityInvariantUnderMirror___closed__1;
LEAN_EXPORT uint8_t lp_ariori_centralityInvariantUnderMirror;
LEAN_EXPORT uint8_t lp_ariori_triangleCubicInvariantUnder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_triangleCubicInvariantUnder___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_discreteActionInvariantUnder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_discreteActionInvariantUnder___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_gen1AutomorphismGroupOk___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_gen1AutomorphismGroupOk___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_gen1AutomorphismGroupOk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_gen1AutomorphismGroupOk___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_gen1AutomorphismGroupOk___closed__0 = (const lean_object*)&lp_ariori_gen1AutomorphismGroupOk___closed__0_value;
static lean_once_cell_t lp_ariori_gen1AutomorphismGroupOk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_gen1AutomorphismGroupOk___closed__1;
static const lean_closure_object lp_ariori_gen1AutomorphismGroupOk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_mirrorAutomorphism___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_gen1AutomorphismGroupOk___closed__2 = (const lean_object*)&lp_ariori_gen1AutomorphismGroupOk___closed__2_value;
static lean_once_cell_t lp_ariori_gen1AutomorphismGroupOk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_gen1AutomorphismGroupOk___closed__3;
static const lean_closure_object lp_ariori_gen1AutomorphismGroupOk___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_swapTopBot___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_gen1AutomorphismGroupOk___closed__4 = (const lean_object*)&lp_ariori_gen1AutomorphismGroupOk___closed__4_value;
static lean_once_cell_t lp_ariori_gen1AutomorphismGroupOk___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_gen1AutomorphismGroupOk___closed__5;
static lean_once_cell_t lp_ariori_gen1AutomorphismGroupOk___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_gen1AutomorphismGroupOk___closed__6;
LEAN_EXPORT uint8_t lp_ariori_gen1AutomorphismGroupOk;
LEAN_EXPORT uint8_t lp_ariori_applyGen1Auto(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_applyGen1Auto___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_mirrorInvolutiveOk___lam__0(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_mirrorInvolutiveOk___lam__0___boxed(lean_object*);
static const lean_closure_object lp_ariori_mirrorInvolutiveOk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_mirrorInvolutiveOk___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_mirrorInvolutiveOk___closed__0 = (const lean_object*)&lp_ariori_mirrorInvolutiveOk___closed__0_value;
static lean_once_cell_t lp_ariori_mirrorInvolutiveOk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_mirrorInvolutiveOk___closed__1;
LEAN_EXPORT uint8_t lp_ariori_mirrorInvolutiveOk;
static const lean_closure_object lp_ariori_discreteActionInvariantGen1Auto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ariori_testField___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ariori_discreteActionInvariantGen1Auto___closed__0 = (const lean_object*)&lp_ariori_discreteActionInvariantGen1Auto___closed__0_value;
LEAN_EXPORT uint8_t lp_ariori_discreteActionInvariantGen1Auto(uint8_t);
LEAN_EXPORT lean_object* lp_ariori_discreteActionInvariantGen1Auto___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_discreteActionInvariantSigma(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_discreteActionInvariantSigma___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00boundaryLeaves_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_boundaryLeaves___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_boundaryLeaves___closed__0;
LEAN_EXPORT lean_object* lp_ariori_boundaryLeaves;
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00boundaryConfined_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_boundaryConfined___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_boundaryConfined___closed__0;
LEAN_EXPORT lean_object* lp_ariori_boundaryConfined;
LEAN_EXPORT lean_object* lp_ariori_C2__simplices;
static lean_once_cell_t lp_ariori_C1__X17__distSq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_C1__X17__distSq___closed__0;
LEAN_EXPORT lean_object* lp_ariori_C1__X17__distSq;
static lean_once_cell_t lp_ariori_C2__X17__distSq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_C2__X17__distSq___closed__0;
LEAN_EXPORT lean_object* lp_ariori_C2__X17__distSq;
static lean_once_cell_t lp_ariori_C3__X17__distSq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_C3__X17__distSq___closed__0;
LEAN_EXPORT lean_object* lp_ariori_C3__X17__distSq;
static lean_once_cell_t lp_ariori_C4__X17__distSq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_C4__X17__distSq___closed__0;
LEAN_EXPORT lean_object* lp_ariori_C4__X17__distSq;
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00trianglesContainingEdge_spec__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00trianglesContainingEdge_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_trianglesContainingEdge(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_trianglesContainingEdge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_formanRicci(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_formanRicci___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00discreteEinsteinHilbertAction_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00discreteEinsteinHilbertAction_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_discreteEinsteinHilbertAction___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_discreteEinsteinHilbertAction___closed__0;
LEAN_EXPORT lean_object* lp_ariori_discreteEinsteinHilbertAction;
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00parityTrace_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00parityTrace_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_parityTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_parityTrace___closed__0;
LEAN_EXPORT lean_object* lp_ariori_parityTrace;
LEAN_EXPORT uint8_t lp_ariori_edgeIndex___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_edgeIndex___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_edgeIndex___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_edgeIndex___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_edgeIndex(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00triangleAsEdgeVector_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00triangleAsEdgeVector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_triangleAsEdgeVector___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_triangleAsEdgeVector___closed__0;
LEAN_EXPORT lean_object* lp_ariori_triangleAsEdgeVector(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_ariori_trianglesIndependent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ariori_trianglesIndependent___closed__0 = (const lean_object*)&lp_ariori_trianglesIndependent___closed__0_value;
static const lean_ctor_object lp_ariori_trianglesIndependent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ariori_trianglesIndependent___closed__0_value)}};
static const lean_object* lp_ariori_trianglesIndependent___closed__1 = (const lean_object*)&lp_ariori_trianglesIndependent___closed__1_value;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__2;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__3;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__4;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__5;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__6;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__7;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__8;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__9;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__10;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__11;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__12;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__13;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_trianglesIndependent___closed__14;
static lean_once_cell_t lp_ariori_trianglesIndependent___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_ariori_trianglesIndependent___closed__15;
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent;
LEAN_EXPORT lean_object* lp_ariori_recursionScale(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_recursionScale___boxed(lean_object*);
static lean_once_cell_t lp_ariori_recursionInverse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_recursionInverse___closed__0;
LEAN_EXPORT lean_object* lp_ariori_recursionInverse(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_recursionInverse___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_expansionCount(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_expansionCount___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ariori_isPositiveLength(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_isPositiveLength___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_B1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ariori_B1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_B2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_B2___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_ariori_B2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__0;
static lean_once_cell_t lp_ariori_B2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__1;
static lean_once_cell_t lp_ariori_B2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__2;
static lean_once_cell_t lp_ariori_B2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__3;
static lean_once_cell_t lp_ariori_B2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__4;
static lean_once_cell_t lp_ariori_B2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__5;
static lean_once_cell_t lp_ariori_B2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__6;
static lean_once_cell_t lp_ariori_B2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__7;
static lean_once_cell_t lp_ariori_B2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__8;
static lean_once_cell_t lp_ariori_B2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__9;
static lean_once_cell_t lp_ariori_B2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__10;
static lean_once_cell_t lp_ariori_B2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__11;
static lean_once_cell_t lp_ariori_B2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__12;
static lean_once_cell_t lp_ariori_B2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__13;
static lean_once_cell_t lp_ariori_B2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__14;
static lean_once_cell_t lp_ariori_B2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_B2___closed__15;
LEAN_EXPORT lean_object* lp_ariori_B2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_B2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00boundary__of__boundary_spec__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00boundary__of__boundary_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_boundary__of__boundary(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_boundary__of__boundary___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00HodgeLaplacian2_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00HodgeLaplacian2_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_HodgeLaplacian2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_HodgeLaplacian2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ariori_isUniqueSimpleLieAlgebraDimension(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_isUniqueSimpleLieAlgebraDimension___boxed(lean_object*);
static lean_once_cell_t lp_ariori_galoisTraceAmplitude___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_galoisTraceAmplitude___closed__0;
LEAN_EXPORT lean_object* lp_ariori_galoisTraceAmplitude(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ariori_IO_println___at___00main_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_IO_println___at___00main_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_ariori_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Forman-Ricci discrete action = "};
static const lean_object* lp_ariori_main___closed__0 = (const lean_object*)&lp_ariori_main___closed__0_value;
static lean_once_cell_t lp_ariori_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_main___closed__1;
static lean_once_cell_t lp_ariori_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_main___closed__2;
static const lean_string_object lp_ariori_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "All structural theorems verified at compile time (native_decide)."};
static const lean_object* lp_ariori_main___closed__3 = (const lean_object*)&lp_ariori_main___closed__3_value;
static const lean_string_object lp_ariori_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "================================================================"};
static const lean_object* lp_ariori_main___closed__4 = (const lean_object*)&lp_ariori_main___closed__4_value;
static const lean_string_object lp_ariori_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "  ARIORI PROTOCOL - LEAN 4 FORMAL VERIFICATION"};
static const lean_object* lp_ariori_main___closed__5 = (const lean_object*)&lp_ariori_main___closed__5_value;
static lean_once_cell_t lp_ariori_main___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_main___closed__6;
static lean_once_cell_t lp_ariori_main___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_main___closed__7;
static const lean_string_object lp_ariori_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Base radius r = "};
static const lean_object* lp_ariori_main___closed__8 = (const lean_object*)&lp_ariori_main___closed__8_value;
static lean_once_cell_t lp_ariori_main___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_main___closed__9;
static lean_once_cell_t lp_ariori_main___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_main___closed__10;
static lean_once_cell_t lp_ariori_main___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ariori_main___closed__11;
static const lean_string_object lp_ariori_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ERROR: seed failed"};
static const lean_object* lp_ariori_main___closed__12 = (const lean_object*)&lp_ariori_main___closed__12_value;
static const lean_string_object lp_ariori_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Gen 1: "};
static const lean_object* lp_ariori_main___closed__13 = (const lean_object*)&lp_ariori_main___closed__13_value;
static const lean_string_object lp_ariori_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " points, "};
static const lean_object* lp_ariori_main___closed__14 = (const lean_object*)&lp_ariori_main___closed__14_value;
static const lean_string_object lp_ariori_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " edges"};
static const lean_object* lp_ariori_main___closed__15 = (const lean_object*)&lp_ariori_main___closed__15_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_ariori_main___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ariori_natSqrt_loop(lean_object* v_n_1_, lean_object* v_guess_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v_next_6_; uint8_t v___x_7_; 
v___x_3_ = lean_nat_div(v_n_1_, v_guess_2_);
v___x_4_ = lean_nat_add(v_guess_2_, v___x_3_);
lean_dec(v___x_3_);
v___x_5_ = lean_unsigned_to_nat(1u);
v_next_6_ = lean_nat_shiftr(v___x_4_, v___x_5_);
lean_dec(v___x_4_);
v___x_7_ = lean_nat_dec_le(v_guess_2_, v_next_6_);
if (v___x_7_ == 0)
{
lean_dec(v_guess_2_);
v_guess_2_ = v_next_6_;
goto _start;
}
else
{
lean_dec(v_next_6_);
return v_guess_2_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_natSqrt_loop___boxed(lean_object* v_n_9_, lean_object* v_guess_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_ariori_natSqrt_loop(v_n_9_, v_guess_10_);
lean_dec(v_n_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_ariori_natSqrt(lean_object* v_n_12_){
_start:
{
lean_object* v___x_13_; uint8_t v___x_14_; 
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_nat_dec_eq(v_n_12_, v___x_13_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; 
lean_inc(v_n_12_);
v___x_15_ = lp_ariori_natSqrt_loop(v_n_12_, v_n_12_);
lean_dec(v_n_12_);
return v___x_15_;
}
else
{
lean_dec(v_n_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Int_gcdNat(lean_object* v_a_16_, lean_object* v_b_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = lean_nat_abs(v_a_16_);
v___x_19_ = lean_nat_abs(v_b_17_);
v___x_20_ = lean_nat_gcd(v___x_18_, v___x_19_);
lean_dec(v___x_19_);
lean_dec(v___x_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Int_gcdNat___boxed(lean_object* v_a_21_, lean_object* v_b_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = lp_ariori_Int_gcdNat(v_a_21_, v_b_22_);
lean_dec(v_b_22_);
lean_dec(v_a_21_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Int_gcdInt(lean_object* v_a_24_, lean_object* v_b_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lp_ariori_Int_gcdNat(v_a_24_, v_b_25_);
v___x_27_ = lean_nat_to_int(v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Int_gcdInt___boxed(lean_object* v_a_28_, lean_object* v_b_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lp_ariori_Int_gcdInt(v_a_28_, v_b_29_);
lean_dec(v_b_29_);
lean_dec(v_a_28_);
return v_res_30_;
}
}
static lean_object* _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_unsigned_to_nat(5u);
v___x_45_ = lean_nat_to_int(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__0));
v___x_48_ = lean_string_length(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__9, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__9_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__9);
v___x_50_ = lean_nat_to_int(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = lean_nat_to_int(v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr___redArg(lean_object* v_x_66_){
_start:
{
lean_object* v_a_67_; lean_object* v_b_68_; lean_object* v_d_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___y_74_; uint8_t v___y_75_; lean_object* v___y_76_; uint8_t v___y_88_; lean_object* v___y_89_; lean_object* v___y_90_; lean_object* v___y_91_; lean_object* v___y_92_; lean_object* v___y_110_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v_a_67_ = lean_ctor_get(v_x_66_, 0);
v_b_68_ = lean_ctor_get(v_x_66_, 1);
v_d_69_ = lean_ctor_get(v_x_66_, 2);
v___x_70_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__5));
v___x_71_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__6));
v___x_72_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__7, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__7_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__7);
v___x_130_ = lean_unsigned_to_nat(0u);
v___x_131_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_132_ = lean_int_dec_lt(v_a_67_, v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = l_Int_repr(v_a_67_);
v___x_134_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
v___y_110_ = v___x_134_;
goto v___jp_109_;
}
else
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = l_Int_repr(v_a_67_);
v___x_136_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
v___x_137_ = l_Repr_addAppParen(v___x_136_, v___x_130_);
v___y_110_ = v___x_137_;
goto v___jp_109_;
}
v___jp_73_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_77_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_72_);
lean_ctor_set(v___x_77_, 1, v___y_76_);
v___x_78_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_78_, sizeof(void*)*1, v___y_75_);
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___y_74_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__10, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__10_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__10);
v___x_81_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__11));
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_79_);
v___x_83_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__12));
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_80_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_86_, sizeof(void*)*1, v___y_75_);
return v___x_86_;
}
v___jp_87_:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_72_);
lean_ctor_set(v___x_93_, 1, v___y_92_);
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___y_88_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___y_91_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
lean_inc(v___y_89_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___y_89_);
lean_inc(v___y_90_);
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___y_90_);
v___x_98_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__14));
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_70_);
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_103_ = lean_int_dec_lt(v_d_69_, v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = l_Int_repr(v_d_69_);
v___x_105_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
v___y_74_ = v___x_100_;
v___y_75_ = v___y_88_;
v___y_76_ = v___x_105_;
goto v___jp_73_;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = l_Int_repr(v_d_69_);
v___x_107_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
v___x_108_ = l_Repr_addAppParen(v___x_107_, v___x_101_);
v___y_74_ = v___x_100_;
v___y_75_ = v___y_88_;
v___y_76_ = v___x_108_;
goto v___jp_73_;
}
}
v___jp_109_:
{
lean_object* v___x_111_; uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_111_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_72_);
lean_ctor_set(v___x_111_, 1, v___y_110_);
v___x_112_ = 0;
v___x_113_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set_uint8(v___x_113_, sizeof(void*)*1, v___x_112_);
v___x_114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_71_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__17));
v___x_116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_114_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_box(1);
v___x_118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__19));
v___x_120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_118_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_70_);
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_124_ = lean_int_dec_lt(v_b_68_, v___x_123_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = l_Int_repr(v_b_68_);
v___x_126_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
v___y_88_ = v___x_112_;
v___y_89_ = v___x_115_;
v___y_90_ = v___x_117_;
v___y_91_ = v___x_121_;
v___y_92_ = v___x_126_;
goto v___jp_87_;
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = l_Int_repr(v_b_68_);
v___x_128_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
v___x_129_ = l_Repr_addAppParen(v___x_128_, v___x_122_);
v___y_88_ = v___x_112_;
v___y_89_ = v___x_115_;
v___y_90_ = v___x_117_;
v___y_91_ = v___x_121_;
v___y_92_ = v___x_129_;
goto v___jp_87_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr___redArg___boxed(lean_object* v_x_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_ariori_instReprVesicaNumber_repr___redArg(v_x_138_);
lean_dec_ref(v_x_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr(lean_object* v_x_140_, lean_object* v_prec_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lp_ariori_instReprVesicaNumber_repr___redArg(v_x_140_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprVesicaNumber_repr___boxed(lean_object* v_x_143_, lean_object* v_prec_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = lp_ariori_instReprVesicaNumber_repr(v_x_143_, v_prec_144_);
lean_dec(v_prec_144_);
lean_dec_ref(v_x_143_);
return v_res_145_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_normalize___closed__0(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_unsigned_to_nat(1u);
v___x_149_ = lean_nat_to_int(v___x_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_normalize(lean_object* v_v_150_){
_start:
{
lean_object* v_a_151_; lean_object* v_b_152_; lean_object* v_d_153_; lean_object* v___x_154_; lean_object* v___y_156_; lean_object* v___y_157_; lean_object* v___y_158_; uint8_t v___x_170_; 
v_a_151_ = lean_ctor_get(v_v_150_, 0);
v_b_152_ = lean_ctor_get(v_v_150_, 1);
v_d_153_ = lean_ctor_get(v_v_150_, 2);
v___x_154_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_170_ = lean_int_dec_eq(v_d_153_, v___x_154_);
if (v___x_170_ == 0)
{
uint8_t v___x_171_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___y_177_; 
lean_inc(v_d_153_);
lean_inc(v_b_152_);
lean_inc(v_a_151_);
lean_dec_ref(v_v_150_);
v___x_171_ = lean_int_dec_lt(v_d_153_, v___x_154_);
if (v___x_171_ == 0)
{
v___y_177_ = v_a_151_;
goto v___jp_176_;
}
else
{
lean_object* v___x_179_; 
v___x_179_ = lean_int_neg(v_a_151_);
lean_dec(v_a_151_);
v___y_177_ = v___x_179_;
goto v___jp_176_;
}
v___jp_172_:
{
if (v___x_171_ == 0)
{
v___y_156_ = v___y_173_;
v___y_157_ = v___y_174_;
v___y_158_ = v_d_153_;
goto v___jp_155_;
}
else
{
lean_object* v___x_175_; 
v___x_175_ = lean_int_neg(v_d_153_);
lean_dec(v_d_153_);
v___y_156_ = v___y_173_;
v___y_157_ = v___y_174_;
v___y_158_ = v___x_175_;
goto v___jp_155_;
}
}
v___jp_176_:
{
if (v___x_171_ == 0)
{
v___y_173_ = v___y_177_;
v___y_174_ = v_b_152_;
goto v___jp_172_;
}
else
{
lean_object* v___x_178_; 
v___x_178_ = lean_int_neg(v_b_152_);
lean_dec(v_b_152_);
v___y_173_ = v___y_177_;
v___y_174_ = v___x_178_;
goto v___jp_172_;
}
}
}
else
{
return v_v_150_;
}
v___jp_155_:
{
lean_object* v___x_159_; lean_object* v_g_160_; uint8_t v___x_161_; 
v___x_159_ = lp_ariori_Int_gcdInt(v___y_156_, v___y_157_);
v_g_160_ = lp_ariori_Int_gcdInt(v___x_159_, v___y_158_);
lean_dec(v___x_159_);
v___x_161_ = lean_int_dec_eq(v_g_160_, v___x_154_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_163_ = lean_int_dec_eq(v_g_160_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_164_ = lean_int_ediv(v___y_156_, v_g_160_);
lean_dec(v___y_156_);
v___x_165_ = lean_int_ediv(v___y_157_, v_g_160_);
lean_dec(v___y_157_);
v___x_166_ = lean_int_ediv(v___y_158_, v_g_160_);
lean_dec(v_g_160_);
lean_dec(v___y_158_);
v___x_167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_167_, 0, v___x_164_);
lean_ctor_set(v___x_167_, 1, v___x_165_);
lean_ctor_set(v___x_167_, 2, v___x_166_);
return v___x_167_;
}
else
{
lean_object* v___x_168_; 
lean_dec(v_g_160_);
v___x_168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_168_, 0, v___y_156_);
lean_ctor_set(v___x_168_, 1, v___y_157_);
lean_ctor_set(v___x_168_, 2, v___y_158_);
return v___x_168_;
}
}
else
{
lean_object* v___x_169_; 
lean_dec(v_g_160_);
v___x_169_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_169_, 0, v___y_156_);
lean_ctor_set(v___x_169_, 1, v___y_157_);
lean_ctor_set(v___x_169_, 2, v___y_158_);
return v___x_169_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_mk_x27(lean_object* v_a_180_, lean_object* v_b_181_, lean_object* v_d_182_){
_start:
{
lean_object* v___x_183_; uint8_t v___y_185_; uint8_t v___x_190_; 
v___x_183_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_190_ = lean_int_dec_eq(v_b_181_, v___x_183_);
if (v___x_190_ == 0)
{
v___y_185_ = v___x_190_;
goto v___jp_184_;
}
else
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_192_ = lean_int_dec_eq(v_d_182_, v___x_191_);
v___y_185_ = v___x_192_;
goto v___jp_184_;
}
v___jp_184_:
{
if (v___y_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_186_, 0, v_a_180_);
lean_ctor_set(v___x_186_, 1, v_b_181_);
lean_ctor_set(v___x_186_, 2, v_d_182_);
v___x_187_ = lp_ariori_VesicaNumber_normalize(v___x_186_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; 
lean_dec(v_d_182_);
lean_dec(v_b_181_);
v___x_188_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_189_, 0, v_a_180_);
lean_ctor_set(v___x_189_, 1, v___x_183_);
lean_ctor_set(v___x_189_, 2, v___x_188_);
return v___x_189_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_ofInt(lean_object* v_n_193_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_195_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_196_, 0, v_n_193_);
lean_ctor_set(v___x_196_, 1, v___x_194_);
lean_ctor_set(v___x_196_, 2, v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_zero___closed__0(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_198_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
lean_ctor_set(v___x_199_, 2, v___x_197_);
return v___x_199_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_zero(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&lp_ariori_VesicaNumber_zero___closed__0, &lp_ariori_VesicaNumber_zero___closed__0_once, _init_lp_ariori_VesicaNumber_zero___closed__0);
return v___x_200_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_one___closed__0(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_202_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_201_);
lean_ctor_set(v___x_203_, 2, v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_one(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&lp_ariori_VesicaNumber_one___closed__0, &lp_ariori_VesicaNumber_one___closed__0_once, _init_lp_ariori_VesicaNumber_one___closed__0);
return v___x_204_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_sqrt3___closed__0(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_206_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_205_);
lean_ctor_set(v___x_207_, 2, v___x_205_);
return v___x_207_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_sqrt3(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&lp_ariori_VesicaNumber_sqrt3___closed__0, &lp_ariori_VesicaNumber_sqrt3___closed__0_once, _init_lp_ariori_VesicaNumber_sqrt3___closed__0);
return v___x_208_;
}
}
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_isZero(lean_object* v_v_209_){
_start:
{
lean_object* v_a_210_; lean_object* v_b_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v_a_210_ = lean_ctor_get(v_v_209_, 0);
v_b_211_ = lean_ctor_get(v_v_209_, 1);
v___x_212_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_213_ = lean_int_dec_eq(v_a_210_, v___x_212_);
if (v___x_213_ == 0)
{
return v___x_213_;
}
else
{
uint8_t v___x_214_; 
v___x_214_ = lean_int_dec_eq(v_b_211_, v___x_212_);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_isZero___boxed(lean_object* v_v_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = lp_ariori_VesicaNumber_isZero(v_v_215_);
lean_dec_ref(v_v_215_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_neg(lean_object* v_v_218_){
_start:
{
lean_object* v_a_219_; lean_object* v_b_220_; lean_object* v_d_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_a_219_ = lean_ctor_get(v_v_218_, 0);
lean_inc(v_a_219_);
v_b_220_ = lean_ctor_get(v_v_218_, 1);
lean_inc(v_b_220_);
v_d_221_ = lean_ctor_get(v_v_218_, 2);
lean_inc(v_d_221_);
lean_dec_ref(v_v_218_);
v___x_222_ = lean_int_neg(v_a_219_);
lean_dec(v_a_219_);
v___x_223_ = lean_int_neg(v_b_220_);
lean_dec(v_b_220_);
v___x_224_ = lp_ariori_VesicaNumber_mk_x27(v___x_222_, v___x_223_, v_d_221_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_add(lean_object* v_x_225_, lean_object* v_y_226_){
_start:
{
lean_object* v_a_227_; lean_object* v_b_228_; lean_object* v_d_229_; lean_object* v_a_230_; lean_object* v_b_231_; lean_object* v_d_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_a_227_ = lean_ctor_get(v_x_225_, 0);
v_b_228_ = lean_ctor_get(v_x_225_, 1);
v_d_229_ = lean_ctor_get(v_x_225_, 2);
v_a_230_ = lean_ctor_get(v_y_226_, 0);
v_b_231_ = lean_ctor_get(v_y_226_, 1);
v_d_232_ = lean_ctor_get(v_y_226_, 2);
v___x_233_ = lean_int_mul(v_a_227_, v_d_232_);
v___x_234_ = lean_int_mul(v_a_230_, v_d_229_);
v___x_235_ = lean_int_add(v___x_233_, v___x_234_);
lean_dec(v___x_234_);
lean_dec(v___x_233_);
v___x_236_ = lean_int_mul(v_b_228_, v_d_232_);
v___x_237_ = lean_int_mul(v_b_231_, v_d_229_);
v___x_238_ = lean_int_add(v___x_236_, v___x_237_);
lean_dec(v___x_237_);
lean_dec(v___x_236_);
v___x_239_ = lean_int_mul(v_d_229_, v_d_232_);
v___x_240_ = lp_ariori_VesicaNumber_mk_x27(v___x_235_, v___x_238_, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_add___boxed(lean_object* v_x_241_, lean_object* v_y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = lp_ariori_VesicaNumber_add(v_x_241_, v_y_242_);
lean_dec_ref(v_y_242_);
lean_dec_ref(v_x_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sub(lean_object* v_x_244_, lean_object* v_y_245_){
_start:
{
lean_object* v_a_246_; lean_object* v_b_247_; lean_object* v_d_248_; lean_object* v_a_249_; lean_object* v_b_250_; lean_object* v_d_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_a_246_ = lean_ctor_get(v_x_244_, 0);
v_b_247_ = lean_ctor_get(v_x_244_, 1);
v_d_248_ = lean_ctor_get(v_x_244_, 2);
v_a_249_ = lean_ctor_get(v_y_245_, 0);
v_b_250_ = lean_ctor_get(v_y_245_, 1);
v_d_251_ = lean_ctor_get(v_y_245_, 2);
v___x_252_ = lean_int_mul(v_a_246_, v_d_251_);
v___x_253_ = lean_int_mul(v_a_249_, v_d_248_);
v___x_254_ = lean_int_sub(v___x_252_, v___x_253_);
lean_dec(v___x_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_int_mul(v_b_247_, v_d_251_);
v___x_256_ = lean_int_mul(v_b_250_, v_d_248_);
v___x_257_ = lean_int_sub(v___x_255_, v___x_256_);
lean_dec(v___x_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_int_mul(v_d_248_, v_d_251_);
v___x_259_ = lp_ariori_VesicaNumber_mk_x27(v___x_254_, v___x_257_, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sub___boxed(lean_object* v_x_260_, lean_object* v_y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = lp_ariori_VesicaNumber_sub(v_x_260_, v_y_261_);
lean_dec_ref(v_y_261_);
lean_dec_ref(v_x_260_);
return v_res_262_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_mul___closed__0(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(3u);
v___x_264_ = lean_nat_to_int(v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_mul(lean_object* v_x_265_, lean_object* v_y_266_){
_start:
{
lean_object* v_a_267_; lean_object* v_b_268_; lean_object* v_d_269_; lean_object* v_a_270_; lean_object* v_b_271_; lean_object* v_d_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_a_267_ = lean_ctor_get(v_x_265_, 0);
v_b_268_ = lean_ctor_get(v_x_265_, 1);
v_d_269_ = lean_ctor_get(v_x_265_, 2);
v_a_270_ = lean_ctor_get(v_y_266_, 0);
v_b_271_ = lean_ctor_get(v_y_266_, 1);
v_d_272_ = lean_ctor_get(v_y_266_, 2);
v___x_273_ = lean_int_mul(v_a_267_, v_a_270_);
v___x_274_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_275_ = lean_int_mul(v___x_274_, v_b_268_);
v___x_276_ = lean_int_mul(v___x_275_, v_b_271_);
lean_dec(v___x_275_);
v___x_277_ = lean_int_add(v___x_273_, v___x_276_);
lean_dec(v___x_276_);
lean_dec(v___x_273_);
v___x_278_ = lean_int_mul(v_a_267_, v_b_271_);
v___x_279_ = lean_int_mul(v_b_268_, v_a_270_);
v___x_280_ = lean_int_add(v___x_278_, v___x_279_);
lean_dec(v___x_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_int_mul(v_d_269_, v_d_272_);
v___x_282_ = lp_ariori_VesicaNumber_mk_x27(v___x_277_, v___x_280_, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_mul___boxed(lean_object* v_x_283_, lean_object* v_y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = lp_ariori_VesicaNumber_mul(v_x_283_, v_y_284_);
lean_dec_ref(v_y_284_);
lean_dec_ref(v_x_283_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_div(lean_object* v_x_286_, lean_object* v_y_287_){
_start:
{
lean_object* v_a_288_; lean_object* v_b_289_; lean_object* v_d_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v_a_288_ = lean_ctor_get(v_y_287_, 0);
v_b_289_ = lean_ctor_get(v_y_287_, 1);
v_d_290_ = lean_ctor_get(v_y_287_, 2);
v___x_291_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_292_ = lean_int_dec_eq(v_b_289_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v_a_293_; lean_object* v_b_294_; lean_object* v_d_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v_denomPart_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_numA_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v_numB_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_a_293_ = lean_ctor_get(v_x_286_, 0);
v_b_294_ = lean_ctor_get(v_x_286_, 1);
v_d_295_ = lean_ctor_get(v_x_286_, 2);
v___x_296_ = lean_int_mul(v_a_288_, v_a_288_);
v___x_297_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_298_ = lean_int_mul(v___x_297_, v_b_289_);
v___x_299_ = lean_int_mul(v___x_298_, v_b_289_);
lean_dec(v___x_298_);
v_denomPart_300_ = lean_int_sub(v___x_296_, v___x_299_);
lean_dec(v___x_299_);
lean_dec(v___x_296_);
v___x_301_ = lean_int_mul(v_a_293_, v_a_288_);
v___x_302_ = lean_int_mul(v___x_297_, v_b_294_);
v___x_303_ = lean_int_mul(v___x_302_, v_b_289_);
lean_dec(v___x_302_);
v_numA_304_ = lean_int_sub(v___x_301_, v___x_303_);
lean_dec(v___x_303_);
lean_dec(v___x_301_);
v___x_305_ = lean_int_mul(v_b_294_, v_a_288_);
v___x_306_ = lean_int_mul(v_a_293_, v_b_289_);
v_numB_307_ = lean_int_sub(v___x_305_, v___x_306_);
lean_dec(v___x_306_);
lean_dec(v___x_305_);
v___x_308_ = lean_int_mul(v_numA_304_, v_d_290_);
lean_dec(v_numA_304_);
v___x_309_ = lean_int_mul(v_numB_307_, v_d_290_);
lean_dec(v_numB_307_);
v___x_310_ = lean_int_mul(v_d_295_, v_denomPart_300_);
lean_dec(v_denomPart_300_);
v___x_311_ = lp_ariori_VesicaNumber_mk_x27(v___x_308_, v___x_309_, v___x_310_);
return v___x_311_;
}
else
{
lean_object* v_a_312_; lean_object* v_b_313_; lean_object* v_d_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_a_312_ = lean_ctor_get(v_x_286_, 0);
v_b_313_ = lean_ctor_get(v_x_286_, 1);
v_d_314_ = lean_ctor_get(v_x_286_, 2);
v___x_315_ = lean_int_mul(v_a_312_, v_d_290_);
v___x_316_ = lean_int_mul(v_b_313_, v_d_290_);
v___x_317_ = lean_int_mul(v_d_314_, v_a_288_);
v___x_318_ = lp_ariori_VesicaNumber_mk_x27(v___x_315_, v___x_316_, v___x_317_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_div___boxed(lean_object* v_x_319_, lean_object* v_y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = lp_ariori_VesicaNumber_div(v_x_319_, v_y_320_);
lean_dec_ref(v_y_320_);
lean_dec_ref(v_x_319_);
return v_res_321_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_sq___closed__0(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_unsigned_to_nat(2u);
v___x_323_ = lean_nat_to_int(v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sq(lean_object* v_v_324_){
_start:
{
lean_object* v_a_325_; lean_object* v_b_326_; lean_object* v_d_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_a_325_ = lean_ctor_get(v_v_324_, 0);
v_b_326_ = lean_ctor_get(v_v_324_, 1);
v_d_327_ = lean_ctor_get(v_v_324_, 2);
v___x_328_ = lean_int_mul(v_a_325_, v_a_325_);
v___x_329_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_330_ = lean_int_mul(v___x_329_, v_b_326_);
v___x_331_ = lean_int_mul(v___x_330_, v_b_326_);
lean_dec(v___x_330_);
v___x_332_ = lean_int_add(v___x_328_, v___x_331_);
lean_dec(v___x_331_);
lean_dec(v___x_328_);
v___x_333_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_334_ = lean_int_mul(v___x_333_, v_a_325_);
v___x_335_ = lean_int_mul(v___x_334_, v_b_326_);
lean_dec(v___x_334_);
v___x_336_ = lean_int_mul(v_d_327_, v_d_327_);
v___x_337_ = lp_ariori_VesicaNumber_mk_x27(v___x_332_, v___x_335_, v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_sq___boxed(lean_object* v_v_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = lp_ariori_VesicaNumber_sq(v_v_338_);
lean_dec_ref(v_v_338_);
return v_res_339_;
}
}
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_isNeg(lean_object* v_v_340_){
_start:
{
lean_object* v_vn_341_; lean_object* v_a_342_; lean_object* v_b_343_; lean_object* v_d_344_; uint8_t v___y_346_; lean_object* v___x_357_; uint8_t v___x_358_; 
v_vn_341_ = lp_ariori_VesicaNumber_normalize(v_v_340_);
v_a_342_ = lean_ctor_get(v_vn_341_, 0);
lean_inc(v_a_342_);
v_b_343_ = lean_ctor_get(v_vn_341_, 1);
lean_inc(v_b_343_);
v_d_344_ = lean_ctor_get(v_vn_341_, 2);
lean_inc(v_d_344_);
lean_dec_ref(v_vn_341_);
v___x_357_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_358_ = lean_int_dec_le(v_d_344_, v___x_357_);
lean_dec(v_d_344_);
if (v___x_358_ == 0)
{
uint8_t v___x_359_; 
v___x_359_ = lean_int_dec_eq(v_b_343_, v___x_357_);
if (v___x_359_ == 0)
{
uint8_t v___x_360_; 
v___x_360_ = lean_int_dec_eq(v_a_342_, v___x_357_);
if (v___x_360_ == 0)
{
uint8_t v___x_361_; uint8_t v___x_362_; uint8_t v___y_364_; uint8_t v___y_365_; uint8_t v___y_368_; 
v___x_361_ = 1;
v___x_362_ = lean_int_dec_lt(v_a_342_, v___x_357_);
if (v___x_362_ == 0)
{
v___y_368_ = v___x_362_;
goto v___jp_367_;
}
else
{
uint8_t v___x_371_; 
v___x_371_ = lean_int_dec_lt(v_b_343_, v___x_357_);
v___y_368_ = v___x_371_;
goto v___jp_367_;
}
v___jp_363_:
{
if (v___y_365_ == 0)
{
if (v___x_362_ == 0)
{
v___y_346_ = v___x_362_;
goto v___jp_345_;
}
else
{
uint8_t v___x_366_; 
v___x_366_ = lean_int_dec_lt(v___x_357_, v_b_343_);
v___y_346_ = v___x_366_;
goto v___jp_345_;
}
}
else
{
lean_dec(v_b_343_);
lean_dec(v_a_342_);
return v___y_364_;
}
}
v___jp_367_:
{
if (v___y_368_ == 0)
{
uint8_t v___x_369_; 
v___x_369_ = lean_int_dec_lt(v___x_357_, v_a_342_);
if (v___x_369_ == 0)
{
v___y_364_ = v___y_368_;
v___y_365_ = v___x_369_;
goto v___jp_363_;
}
else
{
uint8_t v___x_370_; 
v___x_370_ = lean_int_dec_lt(v___x_357_, v_b_343_);
v___y_364_ = v___y_368_;
v___y_365_ = v___x_370_;
goto v___jp_363_;
}
}
else
{
lean_dec(v_b_343_);
lean_dec(v_a_342_);
return v___x_361_;
}
}
}
else
{
uint8_t v___x_372_; 
lean_dec(v_a_342_);
v___x_372_ = lean_int_dec_lt(v_b_343_, v___x_357_);
lean_dec(v_b_343_);
return v___x_372_;
}
}
else
{
uint8_t v___x_373_; 
lean_dec(v_b_343_);
v___x_373_ = lean_int_dec_lt(v_a_342_, v___x_357_);
lean_dec(v_a_342_);
return v___x_373_;
}
}
else
{
uint8_t v___x_374_; 
lean_dec(v_b_343_);
lean_dec(v_a_342_);
v___x_374_ = 0;
return v___x_374_;
}
v___jp_345_:
{
if (v___y_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_347_ = lean_int_mul(v_a_342_, v_a_342_);
lean_dec(v_a_342_);
v___x_348_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_349_ = lean_int_mul(v___x_348_, v_b_343_);
v___x_350_ = lean_int_mul(v___x_349_, v_b_343_);
lean_dec(v_b_343_);
lean_dec(v___x_349_);
v___x_351_ = lean_int_dec_lt(v___x_347_, v___x_350_);
lean_dec(v___x_350_);
lean_dec(v___x_347_);
return v___x_351_;
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_352_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_353_ = lean_int_mul(v___x_352_, v_b_343_);
v___x_354_ = lean_int_mul(v___x_353_, v_b_343_);
lean_dec(v_b_343_);
lean_dec(v___x_353_);
v___x_355_ = lean_int_mul(v_a_342_, v_a_342_);
lean_dec(v_a_342_);
v___x_356_ = lean_int_dec_lt(v___x_354_, v___x_355_);
lean_dec(v___x_355_);
lean_dec(v___x_354_);
return v___x_356_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_isNeg___boxed(lean_object* v_v_375_){
_start:
{
uint8_t v_res_376_; lean_object* v_r_377_; 
v_res_376_ = lp_ariori_VesicaNumber_isNeg(v_v_375_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_abs(lean_object* v_v_378_){
_start:
{
uint8_t v___x_379_; 
lean_inc_ref(v_v_378_);
v___x_379_ = lp_ariori_VesicaNumber_isNeg(v_v_378_);
if (v___x_379_ == 0)
{
return v_v_378_;
}
else
{
lean_object* v___x_380_; 
v___x_380_ = lp_ariori_VesicaNumber_neg(v_v_378_);
return v___x_380_;
}
}
}
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_compare(lean_object* v_x_381_, lean_object* v_y_382_){
_start:
{
lean_object* v_diff_383_; uint8_t v___x_384_; 
v_diff_383_ = lp_ariori_VesicaNumber_sub(v_x_381_, v_y_382_);
v___x_384_ = lp_ariori_VesicaNumber_isZero(v_diff_383_);
if (v___x_384_ == 0)
{
uint8_t v___x_385_; 
v___x_385_ = lp_ariori_VesicaNumber_isNeg(v_diff_383_);
if (v___x_385_ == 0)
{
uint8_t v___x_386_; 
v___x_386_ = 2;
return v___x_386_;
}
else
{
uint8_t v___x_387_; 
v___x_387_ = 0;
return v___x_387_;
}
}
else
{
uint8_t v___x_388_; 
lean_dec_ref(v_diff_383_);
v___x_388_ = 1;
return v___x_388_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_compare___boxed(lean_object* v_x_389_, lean_object* v_y_390_){
_start:
{
uint8_t v_res_391_; lean_object* v_r_392_; 
v_res_391_ = lp_ariori_VesicaNumber_compare(v_x_389_, v_y_390_);
lean_dec_ref(v_y_390_);
lean_dec_ref(v_x_389_);
v_r_392_ = lean_box(v_res_391_);
return v_r_392_;
}
}
LEAN_EXPORT uint8_t lp_ariori_VesicaNumber_beq(lean_object* v_x_393_, lean_object* v_y_394_){
_start:
{
lean_object* v___x_395_; lean_object* v_diff_396_; lean_object* v_a_397_; lean_object* v_b_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_395_ = lp_ariori_VesicaNumber_sub(v_x_393_, v_y_394_);
v_diff_396_ = lp_ariori_VesicaNumber_normalize(v___x_395_);
v_a_397_ = lean_ctor_get(v_diff_396_, 0);
lean_inc(v_a_397_);
v_b_398_ = lean_ctor_get(v_diff_396_, 1);
lean_inc(v_b_398_);
lean_dec_ref(v_diff_396_);
v___x_399_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_400_ = lean_int_dec_eq(v_a_397_, v___x_399_);
lean_dec(v_a_397_);
if (v___x_400_ == 0)
{
lean_dec(v_b_398_);
return v___x_400_;
}
else
{
uint8_t v___x_401_; 
v___x_401_ = lean_int_dec_eq(v_b_398_, v___x_399_);
lean_dec(v_b_398_);
return v___x_401_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_beq___boxed(lean_object* v_x_402_, lean_object* v_y_403_){
_start:
{
uint8_t v_res_404_; lean_object* v_r_405_; 
v_res_404_ = lp_ariori_VesicaNumber_beq(v_x_402_, v_y_403_);
lean_dec_ref(v_y_403_);
lean_dec_ref(v_x_402_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_vesicaSqrt___lam__0(lean_object* v___x_406_, lean_object* v_bigB_407_, lean_object* v_d_408_, lean_object* v_val_409_){
_start:
{
uint8_t v___x_410_; 
v___x_410_ = lean_int_dec_lt(v_val_409_, v___x_406_);
if (v___x_410_ == 0)
{
lean_object* v_xDen_411_; lean_object* v_target_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v_xNum_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v_xDen_411_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v_target_412_ = lean_int_mul(v_xDen_411_, v_val_409_);
v___x_413_ = lean_nat_abs(v_target_412_);
v___x_414_ = lp_ariori_natSqrt(v___x_413_);
v_xNum_415_ = lean_nat_to_int(v___x_414_);
v___x_416_ = lean_int_mul(v_xNum_415_, v_xNum_415_);
v___x_417_ = lean_int_dec_eq(v___x_416_, v_target_412_);
lean_dec(v_target_412_);
lean_dec(v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; 
lean_dec(v_xNum_415_);
v___x_418_ = lean_box(0);
return v___x_418_;
}
else
{
uint8_t v___x_419_; 
v___x_419_ = lean_int_dec_eq(v_xNum_415_, v___x_406_);
if (v___x_419_ == 0)
{
lean_object* v_yNum_420_; lean_object* v_yDen_421_; lean_object* v_resA_422_; lean_object* v_resB_423_; lean_object* v___x_424_; lean_object* v_resD_425_; lean_object* v_res_426_; uint8_t v___x_427_; 
v_yNum_420_ = lean_int_mul(v_bigB_407_, v_xDen_411_);
v_yDen_421_ = lean_int_mul(v_xNum_415_, v_xDen_411_);
v_resA_422_ = lean_int_mul(v_xNum_415_, v_yDen_421_);
lean_dec(v_xNum_415_);
v_resB_423_ = lean_int_mul(v_yNum_420_, v_xDen_411_);
lean_dec(v_yNum_420_);
v___x_424_ = lean_int_mul(v_xDen_411_, v_yDen_421_);
lean_dec(v_yDen_421_);
v_resD_425_ = lean_int_mul(v___x_424_, v_d_408_);
lean_dec(v___x_424_);
v_res_426_ = lp_ariori_VesicaNumber_mk_x27(v_resA_422_, v_resB_423_, v_resD_425_);
lean_inc_ref(v_res_426_);
v___x_427_ = lp_ariori_VesicaNumber_isNeg(v_res_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_428_, 0, v_res_426_);
return v___x_428_;
}
else
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lp_ariori_VesicaNumber_neg(v_res_426_);
v___x_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
return v___x_430_;
}
}
else
{
lean_object* v___x_431_; 
lean_dec(v_xNum_415_);
v___x_431_ = lean_box(0);
return v___x_431_;
}
}
}
else
{
lean_object* v___x_432_; 
v___x_432_ = lean_box(0);
return v___x_432_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_vesicaSqrt___lam__0___boxed(lean_object* v___x_433_, lean_object* v_bigB_434_, lean_object* v_d_435_, lean_object* v_val_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = lp_ariori_VesicaNumber_vesicaSqrt___lam__0(v___x_433_, v_bigB_434_, v_d_435_, v_val_436_);
lean_dec(v_val_436_);
lean_dec(v_d_435_);
lean_dec(v_bigB_434_);
lean_dec(v___x_433_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_vesicaSqrt(lean_object* v_v_438_){
_start:
{
lean_object* v_a_439_; lean_object* v_b_440_; lean_object* v_d_441_; lean_object* v_bigA_442_; lean_object* v_bigB_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
v_a_439_ = lean_ctor_get(v_v_438_, 0);
lean_inc(v_a_439_);
v_b_440_ = lean_ctor_get(v_v_438_, 1);
lean_inc(v_b_440_);
v_d_441_ = lean_ctor_get(v_v_438_, 2);
lean_inc(v_d_441_);
lean_dec_ref(v_v_438_);
v_bigA_442_ = lean_int_mul(v_a_439_, v_d_441_);
lean_dec(v_a_439_);
v_bigB_443_ = lean_int_mul(v_b_440_, v_d_441_);
lean_dec(v_b_440_);
v___x_444_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_445_ = lean_int_dec_eq(v_bigB_443_, v___x_444_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v_kSq_450_; uint8_t v___x_451_; 
v___x_446_ = lean_int_mul(v_bigA_442_, v_bigA_442_);
v___x_447_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_448_ = lean_int_mul(v___x_447_, v_bigB_443_);
v___x_449_ = lean_int_mul(v___x_448_, v_bigB_443_);
lean_dec(v___x_448_);
v_kSq_450_ = lean_int_sub(v___x_446_, v___x_449_);
lean_dec(v___x_449_);
lean_dec(v___x_446_);
v___x_451_ = lean_int_dec_lt(v_kSq_450_, v___x_444_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v_k_454_; lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_452_ = lean_nat_abs(v_kSq_450_);
v___x_453_ = lp_ariori_natSqrt(v___x_452_);
v_k_454_ = lean_nat_to_int(v___x_453_);
v___x_455_ = lean_int_mul(v_k_454_, v_k_454_);
v___x_456_ = lean_int_dec_eq(v___x_455_, v_kSq_450_);
lean_dec(v_kSq_450_);
lean_dec(v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; 
lean_dec(v_k_454_);
lean_dec(v_bigB_443_);
lean_dec(v_bigA_442_);
lean_dec(v_d_441_);
v___x_457_ = lean_box(0);
return v___x_457_;
}
else
{
if (v___x_445_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_int_add(v_bigA_442_, v_k_454_);
v___x_459_ = lp_ariori_VesicaNumber_vesicaSqrt___lam__0(v___x_444_, v_bigB_443_, v_d_441_, v___x_458_);
lean_dec(v___x_458_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_int_sub(v_bigA_442_, v_k_454_);
lean_dec(v_k_454_);
lean_dec(v_bigA_442_);
v___x_461_ = lp_ariori_VesicaNumber_vesicaSqrt___lam__0(v___x_444_, v_bigB_443_, v_d_441_, v___x_460_);
lean_dec(v___x_460_);
lean_dec(v_d_441_);
lean_dec(v_bigB_443_);
return v___x_461_;
}
else
{
lean_dec(v_k_454_);
lean_dec(v_bigB_443_);
lean_dec(v_bigA_442_);
lean_dec(v_d_441_);
return v___x_459_;
}
}
else
{
lean_object* v___x_462_; 
lean_dec(v_k_454_);
lean_dec(v_bigB_443_);
lean_dec(v_bigA_442_);
lean_dec(v_d_441_);
v___x_462_ = lean_box(0);
return v___x_462_;
}
}
}
else
{
lean_object* v___x_463_; 
lean_dec(v_kSq_450_);
lean_dec(v_bigB_443_);
lean_dec(v_bigA_442_);
lean_dec(v_d_441_);
v___x_463_ = lean_box(0);
return v___x_463_;
}
}
else
{
uint8_t v___x_464_; 
lean_dec(v_bigB_443_);
v___x_464_ = lean_int_dec_lt(v_bigA_442_, v___x_444_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_root_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_465_ = lean_nat_abs(v_bigA_442_);
v___x_466_ = lp_ariori_natSqrt(v___x_465_);
v_root_467_ = lean_nat_to_int(v___x_466_);
v___x_468_ = lean_int_mul(v_root_467_, v_root_467_);
v___x_469_ = lean_int_dec_eq(v___x_468_, v_bigA_442_);
lean_dec(v___x_468_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
lean_dec(v_root_467_);
v___x_470_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_471_ = lean_int_emod(v_bigA_442_, v___x_470_);
v___x_472_ = lean_int_dec_eq(v___x_471_, v___x_444_);
lean_dec(v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; 
lean_dec(v_bigA_442_);
lean_dec(v_d_441_);
v___x_473_ = lean_box(0);
return v___x_473_;
}
else
{
lean_object* v_div3_474_; uint8_t v___x_475_; 
v_div3_474_ = lean_int_ediv(v_bigA_442_, v___x_470_);
lean_dec(v_bigA_442_);
v___x_475_ = lean_int_dec_le(v___x_444_, v_div3_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
lean_dec(v_div3_474_);
lean_dec(v_d_441_);
v___x_476_ = lean_box(0);
return v___x_476_;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v_rootDiv3_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_477_ = lean_nat_abs(v_div3_474_);
v___x_478_ = lp_ariori_natSqrt(v___x_477_);
v_rootDiv3_479_ = lean_nat_to_int(v___x_478_);
v___x_480_ = lean_int_mul(v_rootDiv3_479_, v_rootDiv3_479_);
v___x_481_ = lean_int_dec_eq(v___x_480_, v_div3_474_);
lean_dec(v_div3_474_);
lean_dec(v___x_480_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; 
lean_dec(v_rootDiv3_479_);
lean_dec(v_d_441_);
v___x_482_ = lean_box(0);
return v___x_482_;
}
else
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lp_ariori_VesicaNumber_mk_x27(v___x_444_, v_rootDiv3_479_, v_d_441_);
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
return v___x_484_;
}
}
}
}
else
{
lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec(v_bigA_442_);
v___x_485_ = lp_ariori_VesicaNumber_mk_x27(v_root_467_, v___x_444_, v_d_441_);
v___x_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
return v___x_486_;
}
}
else
{
lean_object* v___x_487_; 
lean_dec(v_bigA_442_);
lean_dec(v_d_441_);
v___x_487_ = lean_box(0);
return v___x_487_;
}
}
}
}
static double _init_lp_ariori_VesicaNumber_toFloat___closed__0(void){
_start:
{
lean_object* v___x_488_; uint8_t v___x_489_; lean_object* v___x_490_; double v___x_491_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = 1;
v___x_490_ = lean_unsigned_to_nat(30u);
v___x_491_ = l_Float_ofScientific(v___x_490_, v___x_489_, v___x_488_);
return v___x_491_;
}
}
static double _init_lp_ariori_VesicaNumber_toFloat___closed__1(void){
_start:
{
double v___x_492_; double v___x_493_; 
v___x_492_ = lean_float_once(&lp_ariori_VesicaNumber_toFloat___closed__0, &lp_ariori_VesicaNumber_toFloat___closed__0_once, _init_lp_ariori_VesicaNumber_toFloat___closed__0);
v___x_493_ = sqrt(v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT double lp_ariori_VesicaNumber_toFloat(lean_object* v_v_494_){
_start:
{
lean_object* v_a_495_; lean_object* v_b_496_; lean_object* v_d_497_; double v_af_498_; double v_bf_499_; double v_df_500_; double v___x_501_; double v___x_502_; double v___x_503_; double v___x_504_; 
v_a_495_ = lean_ctor_get(v_v_494_, 0);
v_b_496_ = lean_ctor_get(v_v_494_, 1);
v_d_497_ = lean_ctor_get(v_v_494_, 2);
v_af_498_ = l_Float_ofInt(v_a_495_);
v_bf_499_ = l_Float_ofInt(v_b_496_);
v_df_500_ = l_Float_ofInt(v_d_497_);
v___x_501_ = lean_float_once(&lp_ariori_VesicaNumber_toFloat___closed__1, &lp_ariori_VesicaNumber_toFloat___closed__1_once, _init_lp_ariori_VesicaNumber_toFloat___closed__1);
v___x_502_ = lean_float_mul(v_bf_499_, v___x_501_);
v___x_503_ = lean_float_add(v_af_498_, v___x_502_);
v___x_504_ = lean_float_div(v___x_503_, v_df_500_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_toFloat___boxed(lean_object* v_v_505_){
_start:
{
double v_res_506_; lean_object* v_r_507_; 
v_res_506_ = lp_ariori_VesicaNumber_toFloat(v_v_505_);
lean_dec_ref(v_v_505_);
v_r_507_ = lean_box_float(v_res_506_);
return v_r_507_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_formatExact___closed__5(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_514_ = lean_int_neg(v___x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_formatExact(lean_object* v_v_518_){
_start:
{
lean_object* v_vn_519_; lean_object* v_a_520_; lean_object* v_b_521_; lean_object* v_d_522_; lean_object* v___x_523_; lean_object* v___y_525_; uint8_t v___x_562_; 
v_vn_519_ = lp_ariori_VesicaNumber_normalize(v_v_518_);
v_a_520_ = lean_ctor_get(v_vn_519_, 0);
lean_inc(v_a_520_);
v_b_521_ = lean_ctor_get(v_vn_519_, 1);
lean_inc(v_b_521_);
v_d_522_ = lean_ctor_get(v_vn_519_, 2);
lean_inc(v_d_522_);
lean_dec_ref(v_vn_519_);
v___x_523_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_562_ = lean_int_dec_eq(v_b_521_, v___x_523_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_563_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_564_ = lean_int_dec_eq(v_b_521_, v___x_563_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_565_ = l_Int_repr(v_b_521_);
v___x_566_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__6));
v___x_567_ = lean_string_append(v___x_565_, v___x_566_);
v___y_525_ = v___x_567_;
goto v___jp_524_;
}
else
{
lean_object* v___x_568_; 
v___x_568_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__7));
v___y_525_ = v___x_568_;
goto v___jp_524_;
}
}
else
{
lean_object* v___x_569_; 
v___x_569_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__8));
v___y_525_ = v___x_569_;
goto v___jp_524_;
}
v___jp_524_:
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_527_ = lean_int_dec_eq(v_b_521_, v___x_526_);
lean_dec(v_b_521_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; 
v___x_528_ = lean_int_dec_eq(v_a_520_, v___x_526_);
if (v___x_528_ == 0)
{
uint8_t v___x_529_; 
v___x_529_ = lean_int_dec_eq(v_d_522_, v___x_523_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_530_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__0));
v___x_531_ = l_Int_repr(v_a_520_);
lean_dec(v_a_520_);
v___x_532_ = lean_string_append(v___x_530_, v___x_531_);
lean_dec_ref(v___x_531_);
v___x_533_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__1));
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
v___x_535_ = lean_string_append(v___x_534_, v___y_525_);
lean_dec_ref(v___y_525_);
v___x_536_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__2));
v___x_537_ = lean_string_append(v___x_535_, v___x_536_);
v___x_538_ = l_Int_repr(v_d_522_);
lean_dec(v_d_522_);
v___x_539_ = lean_string_append(v___x_537_, v___x_538_);
lean_dec_ref(v___x_538_);
return v___x_539_;
}
else
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
lean_dec(v_d_522_);
v___x_540_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__0));
v___x_541_ = l_Int_repr(v_a_520_);
lean_dec(v_a_520_);
v___x_542_ = lean_string_append(v___x_540_, v___x_541_);
lean_dec_ref(v___x_541_);
v___x_543_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__1));
v___x_544_ = lean_string_append(v___x_542_, v___x_543_);
v___x_545_ = lean_string_append(v___x_544_, v___y_525_);
lean_dec_ref(v___y_525_);
v___x_546_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__3));
v___x_547_ = lean_string_append(v___x_545_, v___x_546_);
return v___x_547_;
}
}
else
{
uint8_t v___x_548_; 
lean_dec(v_a_520_);
v___x_548_ = lean_int_dec_eq(v_d_522_, v___x_523_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_549_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__0));
v___x_550_ = lean_string_append(v___x_549_, v___y_525_);
lean_dec_ref(v___y_525_);
v___x_551_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__2));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v___x_553_ = l_Int_repr(v_d_522_);
lean_dec(v_d_522_);
v___x_554_ = lean_string_append(v___x_552_, v___x_553_);
lean_dec_ref(v___x_553_);
return v___x_554_;
}
else
{
lean_dec(v_d_522_);
return v___y_525_;
}
}
}
else
{
uint8_t v___x_555_; 
lean_dec_ref(v___y_525_);
v___x_555_ = lean_int_dec_eq(v_d_522_, v___x_523_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_556_ = l_Int_repr(v_a_520_);
lean_dec(v_a_520_);
v___x_557_ = ((lean_object*)(lp_ariori_VesicaNumber_formatExact___closed__4));
v___x_558_ = lean_string_append(v___x_556_, v___x_557_);
v___x_559_ = l_Int_repr(v_d_522_);
lean_dec(v_d_522_);
v___x_560_ = lean_string_append(v___x_558_, v___x_559_);
lean_dec_ref(v___x_559_);
return v___x_560_;
}
else
{
lean_object* v___x_561_; 
lean_dec(v_d_522_);
v___x_561_ = l_Int_repr(v_a_520_);
lean_dec(v_a_520_);
return v___x_561_;
}
}
}
}
}
static lean_object* _init_lp_ariori_VesicaNumber_instOfNatOfNatNat(void){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = lp_ariori_VesicaNumber_zero;
return v___x_584_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_instOfNatOfNatNat__1(void){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = lp_ariori_VesicaNumber_one;
return v___x_585_;
}
}
static lean_object* _init_lp_ariori_VesicaNumber_instInhabited(void){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = lp_ariori_VesicaNumber_zero;
return v___x_588_;
}
}
LEAN_EXPORT uint64_t lp_ariori_VesicaNumber_instHashable___lam__0(lean_object* v_v_589_){
_start:
{
uint64_t v___y_591_; uint64_t v___y_592_; uint64_t v___y_593_; lean_object* v_vn_596_; uint64_t v___y_598_; uint64_t v___y_599_; uint64_t v___y_615_; lean_object* v_a_630_; lean_object* v_intZero_631_; uint8_t v_isNeg_632_; 
v_vn_596_ = lp_ariori_VesicaNumber_normalize(v_v_589_);
v_a_630_ = lean_ctor_get(v_vn_596_, 0);
lean_inc(v_a_630_);
v_intZero_631_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v_isNeg_632_ = lean_int_dec_lt(v_a_630_, v_intZero_631_);
if (v_isNeg_632_ == 0)
{
lean_object* v_a_633_; lean_object* v___x_634_; lean_object* v___x_635_; uint64_t v___x_636_; 
v_a_633_ = lean_nat_abs(v_a_630_);
lean_dec(v_a_630_);
v___x_634_ = lean_unsigned_to_nat(2u);
v___x_635_ = lean_nat_mul(v___x_634_, v_a_633_);
lean_dec(v_a_633_);
v___x_636_ = lean_uint64_of_nat(v___x_635_);
lean_dec(v___x_635_);
v___y_615_ = v___x_636_;
goto v___jp_614_;
}
else
{
lean_object* v_abs_637_; lean_object* v_one_638_; lean_object* v_a_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; uint64_t v___x_643_; 
v_abs_637_ = lean_nat_abs(v_a_630_);
lean_dec(v_a_630_);
v_one_638_ = lean_unsigned_to_nat(1u);
v_a_639_ = lean_nat_sub(v_abs_637_, v_one_638_);
lean_dec(v_abs_637_);
v___x_640_ = lean_unsigned_to_nat(2u);
v___x_641_ = lean_nat_mul(v___x_640_, v_a_639_);
lean_dec(v_a_639_);
v___x_642_ = lean_nat_add(v___x_641_, v_one_638_);
lean_dec(v___x_641_);
v___x_643_ = lean_uint64_of_nat(v___x_642_);
lean_dec(v___x_642_);
v___y_615_ = v___x_643_;
goto v___jp_614_;
}
v___jp_590_:
{
uint64_t v___x_594_; uint64_t v___x_595_; 
v___x_594_ = lean_uint64_mix_hash(v___y_592_, v___y_593_);
v___x_595_ = lean_uint64_mix_hash(v___y_591_, v___x_594_);
return v___x_595_;
}
v___jp_597_:
{
lean_object* v_d_600_; lean_object* v_intZero_601_; uint8_t v_isNeg_602_; 
v_d_600_ = lean_ctor_get(v_vn_596_, 2);
lean_inc(v_d_600_);
lean_dec_ref(v_vn_596_);
v_intZero_601_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v_isNeg_602_ = lean_int_dec_lt(v_d_600_, v_intZero_601_);
if (v_isNeg_602_ == 0)
{
lean_object* v_a_603_; lean_object* v___x_604_; lean_object* v___x_605_; uint64_t v___x_606_; 
v_a_603_ = lean_nat_abs(v_d_600_);
lean_dec(v_d_600_);
v___x_604_ = lean_unsigned_to_nat(2u);
v___x_605_ = lean_nat_mul(v___x_604_, v_a_603_);
lean_dec(v_a_603_);
v___x_606_ = lean_uint64_of_nat(v___x_605_);
lean_dec(v___x_605_);
v___y_591_ = v___y_598_;
v___y_592_ = v___y_599_;
v___y_593_ = v___x_606_;
goto v___jp_590_;
}
else
{
lean_object* v_abs_607_; lean_object* v_one_608_; lean_object* v_a_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint64_t v___x_613_; 
v_abs_607_ = lean_nat_abs(v_d_600_);
lean_dec(v_d_600_);
v_one_608_ = lean_unsigned_to_nat(1u);
v_a_609_ = lean_nat_sub(v_abs_607_, v_one_608_);
lean_dec(v_abs_607_);
v___x_610_ = lean_unsigned_to_nat(2u);
v___x_611_ = lean_nat_mul(v___x_610_, v_a_609_);
lean_dec(v_a_609_);
v___x_612_ = lean_nat_add(v___x_611_, v_one_608_);
lean_dec(v___x_611_);
v___x_613_ = lean_uint64_of_nat(v___x_612_);
lean_dec(v___x_612_);
v___y_591_ = v___y_598_;
v___y_592_ = v___y_599_;
v___y_593_ = v___x_613_;
goto v___jp_590_;
}
}
v___jp_614_:
{
lean_object* v_b_616_; lean_object* v_intZero_617_; uint8_t v_isNeg_618_; 
v_b_616_ = lean_ctor_get(v_vn_596_, 1);
lean_inc(v_b_616_);
v_intZero_617_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v_isNeg_618_ = lean_int_dec_lt(v_b_616_, v_intZero_617_);
if (v_isNeg_618_ == 0)
{
lean_object* v_a_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint64_t v___x_622_; 
v_a_619_ = lean_nat_abs(v_b_616_);
lean_dec(v_b_616_);
v___x_620_ = lean_unsigned_to_nat(2u);
v___x_621_ = lean_nat_mul(v___x_620_, v_a_619_);
lean_dec(v_a_619_);
v___x_622_ = lean_uint64_of_nat(v___x_621_);
lean_dec(v___x_621_);
v___y_598_ = v___y_615_;
v___y_599_ = v___x_622_;
goto v___jp_597_;
}
else
{
lean_object* v_abs_623_; lean_object* v_one_624_; lean_object* v_a_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; uint64_t v___x_629_; 
v_abs_623_ = lean_nat_abs(v_b_616_);
lean_dec(v_b_616_);
v_one_624_ = lean_unsigned_to_nat(1u);
v_a_625_ = lean_nat_sub(v_abs_623_, v_one_624_);
lean_dec(v_abs_623_);
v___x_626_ = lean_unsigned_to_nat(2u);
v___x_627_ = lean_nat_mul(v___x_626_, v_a_625_);
lean_dec(v_a_625_);
v___x_628_ = lean_nat_add(v___x_627_, v_one_624_);
lean_dec(v___x_627_);
v___x_629_ = lean_uint64_of_nat(v___x_628_);
lean_dec(v___x_628_);
v___y_598_ = v___y_615_;
v___y_599_ = v___x_629_;
goto v___jp_597_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_VesicaNumber_instHashable___lam__0___boxed(lean_object* v_v_644_){
_start:
{
uint64_t v_res_645_; lean_object* v_r_646_; 
v_res_645_ = lp_ariori_VesicaNumber_instHashable___lam__0(v_v_644_);
v_r_646_ = lean_box_uint64(v_res_645_);
return v_r_646_;
}
}
LEAN_EXPORT uint8_t lp_ariori_vLe(lean_object* v_a_649_, lean_object* v_b_650_){
_start:
{
uint8_t v___x_651_; uint8_t v___x_652_; uint8_t v___x_653_; 
v___x_651_ = lp_ariori_VesicaNumber_compare(v_a_649_, v_b_650_);
v___x_652_ = 2;
v___x_653_ = l_instDecidableEqOrdering(v___x_651_, v___x_652_);
if (v___x_653_ == 0)
{
uint8_t v___x_654_; 
v___x_654_ = 1;
return v___x_654_;
}
else
{
uint8_t v___x_655_; 
v___x_655_ = 0;
return v___x_655_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_vLe___boxed(lean_object* v_a_656_, lean_object* v_b_657_){
_start:
{
uint8_t v_res_658_; lean_object* v_r_659_; 
v_res_658_ = lp_ariori_vLe(v_a_656_, v_b_657_);
lean_dec_ref(v_b_657_);
lean_dec_ref(v_a_656_);
v_r_659_ = lean_box(v_res_658_);
return v_r_659_;
}
}
LEAN_EXPORT uint8_t lp_ariori_vGe(lean_object* v_a_660_, lean_object* v_b_661_){
_start:
{
uint8_t v___x_662_; uint8_t v___x_663_; uint8_t v___x_664_; 
v___x_662_ = lp_ariori_VesicaNumber_compare(v_a_660_, v_b_661_);
v___x_663_ = 0;
v___x_664_ = l_instDecidableEqOrdering(v___x_662_, v___x_663_);
if (v___x_664_ == 0)
{
uint8_t v___x_665_; 
v___x_665_ = 1;
return v___x_665_;
}
else
{
uint8_t v___x_666_; 
v___x_666_ = 0;
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_vGe___boxed(lean_object* v_a_667_, lean_object* v_b_668_){
_start:
{
uint8_t v_res_669_; lean_object* v_r_670_; 
v_res_669_ = lp_ariori_vGe(v_a_667_, v_b_668_);
lean_dec_ref(v_b_668_);
lean_dec_ref(v_a_667_);
v_r_670_ = lean_box(v_res_669_);
return v_r_670_;
}
}
LEAN_EXPORT uint8_t lp_ariori_vLt(lean_object* v_a_671_, lean_object* v_b_672_){
_start:
{
uint8_t v___x_673_; uint8_t v___x_674_; uint8_t v___x_675_; 
v___x_673_ = lp_ariori_VesicaNumber_compare(v_a_671_, v_b_672_);
v___x_674_ = 0;
v___x_675_ = l_instDecidableEqOrdering(v___x_673_, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* lp_ariori_vLt___boxed(lean_object* v_a_676_, lean_object* v_b_677_){
_start:
{
uint8_t v_res_678_; lean_object* v_r_679_; 
v_res_678_ = lp_ariori_vLt(v_a_676_, v_b_677_);
lean_dec_ref(v_b_677_);
lean_dec_ref(v_a_676_);
v_r_679_ = lean_box(v_res_678_);
return v_r_679_;
}
}
LEAN_EXPORT uint8_t lp_ariori_vGt(lean_object* v_a_680_, lean_object* v_b_681_){
_start:
{
uint8_t v___x_682_; uint8_t v___x_683_; uint8_t v___x_684_; 
v___x_682_ = lp_ariori_VesicaNumber_compare(v_a_680_, v_b_681_);
v___x_683_ = 2;
v___x_684_ = l_instDecidableEqOrdering(v___x_682_, v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* lp_ariori_vGt___boxed(lean_object* v_a_685_, lean_object* v_b_686_){
_start:
{
uint8_t v_res_687_; lean_object* v_r_688_; 
v_res_687_ = lp_ariori_vGt(v_a_685_, v_b_686_);
lean_dec_ref(v_b_686_);
lean_dec_ref(v_a_685_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT lean_object* lp_ariori_vMin(lean_object* v_a_689_, lean_object* v_b_690_){
_start:
{
uint8_t v___x_691_; 
v___x_691_ = lp_ariori_vLt(v_a_689_, v_b_690_);
if (v___x_691_ == 0)
{
lean_inc_ref(v_b_690_);
return v_b_690_;
}
else
{
lean_inc_ref(v_a_689_);
return v_a_689_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_vMin___boxed(lean_object* v_a_692_, lean_object* v_b_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = lp_ariori_vMin(v_a_692_, v_b_693_);
lean_dec_ref(v_b_693_);
lean_dec_ref(v_a_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* lp_ariori_vMax(lean_object* v_a_695_, lean_object* v_b_696_){
_start:
{
uint8_t v___x_697_; 
v___x_697_ = lp_ariori_vGt(v_a_695_, v_b_696_);
if (v___x_697_ == 0)
{
lean_inc_ref(v_b_696_);
return v_b_696_;
}
else
{
lean_inc_ref(v_a_695_);
return v_a_695_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_vMax___boxed(lean_object* v_a_698_, lean_object* v_b_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = lp_ariori_vMax(v_a_698_, v_b_699_);
lean_dec_ref(v_b_699_);
lean_dec_ref(v_a_698_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprPoint_repr___redArg(lean_object* v_x_713_){
_start:
{
lean_object* v_x_714_; lean_object* v_y_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_747_; 
v_x_714_ = lean_ctor_get(v_x_713_, 0);
v_y_715_ = lean_ctor_get(v_x_713_, 1);
v_isSharedCheck_747_ = !lean_is_exclusive(v_x_713_);
if (v_isSharedCheck_747_ == 0)
{
v___x_717_ = v_x_713_;
v_isShared_718_ = v_isSharedCheck_747_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_y_715_);
lean_inc(v_x_714_);
lean_dec(v_x_713_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_747_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_724_; 
v___x_719_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__5));
v___x_720_ = ((lean_object*)(lp_ariori_instReprPoint_repr___redArg___closed__3));
v___x_721_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__7, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__7_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__7);
v___x_722_ = lp_ariori_instReprVesicaNumber_repr___redArg(v_x_714_);
lean_dec_ref(v_x_714_);
if (v_isShared_718_ == 0)
{
lean_ctor_set_tag(v___x_717_, 4);
lean_ctor_set(v___x_717_, 1, v___x_722_);
lean_ctor_set(v___x_717_, 0, v___x_721_);
v___x_724_ = v___x_717_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_721_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v___x_722_);
v___x_724_ = v_reuseFailAlloc_746_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_725_ = 0;
v___x_726_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*1, v___x_725_);
v___x_727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_720_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
v___x_728_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__17));
v___x_729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_727_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = lean_box(1);
v___x_731_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_731_, 0, v___x_729_);
lean_ctor_set(v___x_731_, 1, v___x_730_);
v___x_732_ = ((lean_object*)(lp_ariori_instReprPoint_repr___redArg___closed__5));
v___x_733_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_733_, 0, v___x_731_);
lean_ctor_set(v___x_733_, 1, v___x_732_);
v___x_734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
lean_ctor_set(v___x_734_, 1, v___x_719_);
v___x_735_ = lp_ariori_instReprVesicaNumber_repr___redArg(v_y_715_);
lean_dec_ref(v_y_715_);
v___x_736_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_721_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*1, v___x_725_);
v___x_738_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_734_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__10, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__10_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__10);
v___x_740_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__11));
v___x_741_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
lean_ctor_set(v___x_741_, 1, v___x_738_);
v___x_742_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__12));
v___x_743_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_739_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_745_, 0, v___x_744_);
lean_ctor_set_uint8(v___x_745_, sizeof(void*)*1, v___x_725_);
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprPoint_repr(lean_object* v_x_748_, lean_object* v_prec_749_){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lp_ariori_instReprPoint_repr___redArg(v_x_748_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprPoint_repr___boxed(lean_object* v_x_751_, lean_object* v_prec_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = lp_ariori_instReprPoint_repr(v_x_751_, v_prec_752_);
lean_dec(v_prec_752_);
return v_res_753_;
}
}
LEAN_EXPORT uint8_t lp_ariori_instBEqPoint_beq(lean_object* v_x_756_, lean_object* v_x_757_){
_start:
{
lean_object* v_x_758_; lean_object* v_y_759_; lean_object* v_x_760_; lean_object* v_y_761_; uint8_t v___x_762_; 
v_x_758_ = lean_ctor_get(v_x_756_, 0);
v_y_759_ = lean_ctor_get(v_x_756_, 1);
v_x_760_ = lean_ctor_get(v_x_757_, 0);
v_y_761_ = lean_ctor_get(v_x_757_, 1);
v___x_762_ = lp_ariori_VesicaNumber_beq(v_x_758_, v_x_760_);
if (v___x_762_ == 0)
{
return v___x_762_;
}
else
{
uint8_t v___x_763_; 
v___x_763_ = lp_ariori_VesicaNumber_beq(v_y_759_, v_y_761_);
return v___x_763_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instBEqPoint_beq___boxed(lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
uint8_t v_res_766_; lean_object* v_r_767_; 
v_res_766_ = lp_ariori_instBEqPoint_beq(v_x_764_, v_x_765_);
lean_dec_ref(v_x_765_);
lean_dec_ref(v_x_764_);
v_r_767_ = lean_box(v_res_766_);
return v_r_767_;
}
}
static lean_object* _init_lp_ariori_instInhabitedPoint_default___closed__0(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lp_ariori_VesicaNumber_zero;
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
return v___x_771_;
}
}
static lean_object* _init_lp_ariori_instInhabitedPoint_default(void){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = lean_obj_once(&lp_ariori_instInhabitedPoint_default___closed__0, &lp_ariori_instInhabitedPoint_default___closed__0_once, _init_lp_ariori_instInhabitedPoint_default___closed__0);
return v___x_772_;
}
}
static lean_object* _init_lp_ariori_instInhabitedPoint(void){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lp_ariori_instInhabitedPoint_default;
return v___x_773_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Point_distSq(lean_object* v_p1_774_, lean_object* v_p2_775_){
_start:
{
lean_object* v_x_776_; lean_object* v_y_777_; lean_object* v_x_778_; lean_object* v_y_779_; lean_object* v_dx_780_; lean_object* v_dy_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v_x_776_ = lean_ctor_get(v_p1_774_, 0);
v_y_777_ = lean_ctor_get(v_p1_774_, 1);
v_x_778_ = lean_ctor_get(v_p2_775_, 0);
v_y_779_ = lean_ctor_get(v_p2_775_, 1);
v_dx_780_ = lp_ariori_VesicaNumber_sub(v_x_776_, v_x_778_);
v_dy_781_ = lp_ariori_VesicaNumber_sub(v_y_777_, v_y_779_);
v___x_782_ = lp_ariori_VesicaNumber_sq(v_dx_780_);
lean_dec_ref(v_dx_780_);
v___x_783_ = lp_ariori_VesicaNumber_sq(v_dy_781_);
lean_dec_ref(v_dy_781_);
v___x_784_ = lp_ariori_VesicaNumber_add(v___x_782_, v___x_783_);
lean_dec_ref(v___x_783_);
lean_dec_ref(v___x_782_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Point_distSq___boxed(lean_object* v_p1_785_, lean_object* v_p2_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = lp_ariori_Point_distSq(v_p1_785_, v_p2_786_);
lean_dec_ref(v_p2_786_);
lean_dec_ref(v_p1_785_);
return v_res_787_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Point_onInfiniteLine(lean_object* v_p_788_, lean_object* v_a_789_, lean_object* v_b_790_){
_start:
{
lean_object* v_x_791_; lean_object* v_y_792_; lean_object* v_x_793_; lean_object* v_y_794_; lean_object* v_x_795_; lean_object* v_y_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_term1_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v_term2_802_; uint8_t v___x_803_; 
v_x_791_ = lean_ctor_get(v_p_788_, 0);
v_y_792_ = lean_ctor_get(v_p_788_, 1);
v_x_793_ = lean_ctor_get(v_a_789_, 0);
v_y_794_ = lean_ctor_get(v_a_789_, 1);
v_x_795_ = lean_ctor_get(v_b_790_, 0);
v_y_796_ = lean_ctor_get(v_b_790_, 1);
v___x_797_ = lp_ariori_VesicaNumber_sub(v_y_792_, v_y_794_);
v___x_798_ = lp_ariori_VesicaNumber_sub(v_x_795_, v_x_793_);
v_term1_799_ = lp_ariori_VesicaNumber_mul(v___x_797_, v___x_798_);
lean_dec_ref(v___x_798_);
lean_dec_ref(v___x_797_);
v___x_800_ = lp_ariori_VesicaNumber_sub(v_y_796_, v_y_794_);
v___x_801_ = lp_ariori_VesicaNumber_sub(v_x_791_, v_x_793_);
v_term2_802_ = lp_ariori_VesicaNumber_mul(v___x_800_, v___x_801_);
lean_dec_ref(v___x_801_);
lean_dec_ref(v___x_800_);
v___x_803_ = lp_ariori_VesicaNumber_beq(v_term1_799_, v_term2_802_);
lean_dec_ref(v_term2_802_);
lean_dec_ref(v_term1_799_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Point_onInfiniteLine___boxed(lean_object* v_p_804_, lean_object* v_a_805_, lean_object* v_b_806_){
_start:
{
uint8_t v_res_807_; lean_object* v_r_808_; 
v_res_807_ = lp_ariori_Point_onInfiniteLine(v_p_804_, v_a_805_, v_b_806_);
lean_dec_ref(v_b_806_);
lean_dec_ref(v_a_805_);
lean_dec_ref(v_p_804_);
v_r_808_ = lean_box(v_res_807_);
return v_r_808_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Point_onSegment(lean_object* v_p_809_, lean_object* v_a_810_, lean_object* v_b_811_){
_start:
{
uint8_t v___x_812_; 
v___x_812_ = lp_ariori_Point_onInfiniteLine(v_p_809_, v_a_810_, v_b_811_);
if (v___x_812_ == 0)
{
return v___x_812_;
}
else
{
lean_object* v_x_813_; lean_object* v_y_814_; lean_object* v_x_815_; lean_object* v_y_816_; lean_object* v_x_817_; lean_object* v_y_818_; lean_object* v_minX_819_; lean_object* v_minY_820_; lean_object* v_maxY_821_; uint8_t v___y_823_; uint8_t v___x_826_; 
v_x_813_ = lean_ctor_get(v_a_810_, 0);
v_y_814_ = lean_ctor_get(v_a_810_, 1);
v_x_815_ = lean_ctor_get(v_b_811_, 0);
v_y_816_ = lean_ctor_get(v_b_811_, 1);
v_x_817_ = lean_ctor_get(v_p_809_, 0);
v_y_818_ = lean_ctor_get(v_p_809_, 1);
v_minX_819_ = lp_ariori_vMin(v_x_813_, v_x_815_);
v_minY_820_ = lp_ariori_vMin(v_y_814_, v_y_816_);
v_maxY_821_ = lp_ariori_vMax(v_y_814_, v_y_816_);
v___x_826_ = lp_ariori_vGe(v_x_817_, v_minX_819_);
lean_dec_ref(v_minX_819_);
if (v___x_826_ == 0)
{
v___y_823_ = v___x_826_;
goto v___jp_822_;
}
else
{
lean_object* v_maxX_827_; uint8_t v___x_828_; 
v_maxX_827_ = lp_ariori_vMax(v_x_813_, v_x_815_);
v___x_828_ = lp_ariori_vLe(v_x_817_, v_maxX_827_);
lean_dec_ref(v_maxX_827_);
v___y_823_ = v___x_828_;
goto v___jp_822_;
}
v___jp_822_:
{
if (v___y_823_ == 0)
{
lean_dec_ref(v_maxY_821_);
lean_dec_ref(v_minY_820_);
return v___y_823_;
}
else
{
uint8_t v___x_824_; 
v___x_824_ = lp_ariori_vGe(v_y_818_, v_minY_820_);
lean_dec_ref(v_minY_820_);
if (v___x_824_ == 0)
{
lean_dec_ref(v_maxY_821_);
return v___x_824_;
}
else
{
uint8_t v___x_825_; 
v___x_825_ = lp_ariori_vLe(v_y_818_, v_maxY_821_);
lean_dec_ref(v_maxY_821_);
return v___x_825_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Point_onSegment___boxed(lean_object* v_p_829_, lean_object* v_a_830_, lean_object* v_b_831_){
_start:
{
uint8_t v_res_832_; lean_object* v_r_833_; 
v_res_832_ = lp_ariori_Point_onSegment(v_p_829_, v_a_830_, v_b_831_);
lean_dec_ref(v_b_831_);
lean_dec_ref(v_a_830_);
lean_dec_ref(v_p_829_);
v_r_833_ = lean_box(v_res_832_);
return v_r_833_;
}
}
static lean_object* _init_lp_ariori_instReprSegment_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_unsigned_to_nat(6u);
v___x_844_ = lean_nat_to_int(v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprSegment_repr___redArg(lean_object* v_x_848_){
_start:
{
lean_object* v_p1_849_; lean_object* v_p2_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_882_; 
v_p1_849_ = lean_ctor_get(v_x_848_, 0);
v_p2_850_ = lean_ctor_get(v_x_848_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v_x_848_);
if (v_isSharedCheck_882_ == 0)
{
v___x_852_ = v_x_848_;
v_isShared_853_ = v_isSharedCheck_882_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_p2_850_);
lean_inc(v_p1_849_);
lean_dec(v_x_848_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_882_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_854_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__5));
v___x_855_ = ((lean_object*)(lp_ariori_instReprSegment_repr___redArg___closed__3));
v___x_856_ = lean_obj_once(&lp_ariori_instReprSegment_repr___redArg___closed__4, &lp_ariori_instReprSegment_repr___redArg___closed__4_once, _init_lp_ariori_instReprSegment_repr___redArg___closed__4);
v___x_857_ = lp_ariori_instReprPoint_repr___redArg(v_p1_849_);
if (v_isShared_853_ == 0)
{
lean_ctor_set_tag(v___x_852_, 4);
lean_ctor_set(v___x_852_, 1, v___x_857_);
lean_ctor_set(v___x_852_, 0, v___x_856_);
v___x_859_ = v___x_852_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_856_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v___x_857_);
v___x_859_ = v_reuseFailAlloc_881_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
uint8_t v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_860_ = 0;
v___x_861_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_861_, 0, v___x_859_);
lean_ctor_set_uint8(v___x_861_, sizeof(void*)*1, v___x_860_);
v___x_862_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_855_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__17));
v___x_864_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_862_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = lean_box(1);
v___x_866_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_864_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v___x_867_ = ((lean_object*)(lp_ariori_instReprSegment_repr___redArg___closed__6));
v___x_868_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_866_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
lean_ctor_set(v___x_869_, 1, v___x_854_);
v___x_870_ = lp_ariori_instReprPoint_repr___redArg(v_p2_850_);
v___x_871_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_856_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_872_, 0, v___x_871_);
lean_ctor_set_uint8(v___x_872_, sizeof(void*)*1, v___x_860_);
v___x_873_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_869_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__10, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__10_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__10);
v___x_875_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__11));
v___x_876_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v___x_873_);
v___x_877_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__12));
v___x_878_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_876_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___x_879_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_874_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_880_, 0, v___x_879_);
lean_ctor_set_uint8(v___x_880_, sizeof(void*)*1, v___x_860_);
return v___x_880_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprSegment_repr(lean_object* v_x_883_, lean_object* v_prec_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = lp_ariori_instReprSegment_repr___redArg(v_x_883_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprSegment_repr___boxed(lean_object* v_x_886_, lean_object* v_prec_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = lp_ariori_instReprSegment_repr(v_x_886_, v_prec_887_);
lean_dec(v_prec_887_);
return v_res_888_;
}
}
LEAN_EXPORT uint8_t lp_ariori_instBEqSegment_beq(lean_object* v_x_891_, lean_object* v_x_892_){
_start:
{
lean_object* v_p1_893_; lean_object* v_p2_894_; lean_object* v_p1_895_; lean_object* v_p2_896_; uint8_t v___x_897_; 
v_p1_893_ = lean_ctor_get(v_x_891_, 0);
v_p2_894_ = lean_ctor_get(v_x_891_, 1);
v_p1_895_ = lean_ctor_get(v_x_892_, 0);
v_p2_896_ = lean_ctor_get(v_x_892_, 1);
v___x_897_ = lp_ariori_instBEqPoint_beq(v_p1_893_, v_p1_895_);
if (v___x_897_ == 0)
{
return v___x_897_;
}
else
{
uint8_t v___x_898_; 
v___x_898_ = lp_ariori_instBEqPoint_beq(v_p2_894_, v_p2_896_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instBEqSegment_beq___boxed(lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
uint8_t v_res_901_; lean_object* v_r_902_; 
v_res_901_ = lp_ariori_instBEqSegment_beq(v_x_899_, v_x_900_);
lean_dec_ref(v_x_900_);
lean_dec_ref(v_x_899_);
v_r_902_ = lean_box(v_res_901_);
return v_r_902_;
}
}
static lean_object* _init_lp_ariori_instInhabitedSegment_default___closed__0(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lp_ariori_instInhabitedPoint_default;
v___x_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_lp_ariori_instInhabitedSegment_default(void){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_obj_once(&lp_ariori_instInhabitedSegment_default___closed__0, &lp_ariori_instInhabitedSegment_default___closed__0_once, _init_lp_ariori_instInhabitedSegment_default___closed__0);
return v___x_907_;
}
}
static lean_object* _init_lp_ariori_instInhabitedSegment(void){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = lp_ariori_instInhabitedSegment_default;
return v___x_908_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Segment_intersect(lean_object* v_s1_909_, lean_object* v_s2_910_){
_start:
{
lean_object* v_p1_911_; lean_object* v_p2_912_; lean_object* v_p1_913_; lean_object* v_p2_914_; lean_object* v_x_915_; lean_object* v_y_916_; lean_object* v_x_917_; lean_object* v_y_918_; lean_object* v_x_919_; lean_object* v_y_920_; lean_object* v_x_921_; lean_object* v_y_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_953_; 
v_p1_911_ = lean_ctor_get(v_s1_909_, 0);
v_p2_912_ = lean_ctor_get(v_s1_909_, 1);
v_p1_913_ = lean_ctor_get(v_s2_910_, 0);
lean_inc_ref(v_p1_913_);
v_p2_914_ = lean_ctor_get(v_s2_910_, 1);
lean_inc_ref(v_p2_914_);
lean_dec_ref(v_s2_910_);
v_x_915_ = lean_ctor_get(v_p1_911_, 0);
v_y_916_ = lean_ctor_get(v_p1_911_, 1);
v_x_917_ = lean_ctor_get(v_p2_912_, 0);
v_y_918_ = lean_ctor_get(v_p2_912_, 1);
v_x_919_ = lean_ctor_get(v_p1_913_, 0);
lean_inc_ref(v_x_919_);
v_y_920_ = lean_ctor_get(v_p1_913_, 1);
lean_inc_ref(v_y_920_);
lean_dec_ref(v_p1_913_);
v_x_921_ = lean_ctor_get(v_p2_914_, 0);
v_y_922_ = lean_ctor_get(v_p2_914_, 1);
v_isSharedCheck_953_ = !lean_is_exclusive(v_p2_914_);
if (v_isSharedCheck_953_ == 0)
{
v___x_924_ = v_p2_914_;
v_isShared_925_ = v_isSharedCheck_953_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_y_922_);
lean_inc(v_x_921_);
lean_dec(v_p2_914_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_953_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v_denom_932_; uint8_t v___x_933_; 
v___x_926_ = lp_ariori_VesicaNumber_sub(v_x_915_, v_x_917_);
v___x_927_ = lp_ariori_VesicaNumber_sub(v_y_920_, v_y_922_);
v___x_928_ = lp_ariori_VesicaNumber_mul(v___x_926_, v___x_927_);
v___x_929_ = lp_ariori_VesicaNumber_sub(v_y_916_, v_y_918_);
v___x_930_ = lp_ariori_VesicaNumber_sub(v_x_919_, v_x_921_);
v___x_931_ = lp_ariori_VesicaNumber_mul(v___x_929_, v___x_930_);
v_denom_932_ = lp_ariori_VesicaNumber_sub(v___x_928_, v___x_931_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_928_);
v___x_933_ = lp_ariori_VesicaNumber_isZero(v_denom_932_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v_term1_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v_term2_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v_numX_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v_numY_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_949_; 
v___x_934_ = lp_ariori_VesicaNumber_mul(v_x_915_, v_y_918_);
v___x_935_ = lp_ariori_VesicaNumber_mul(v_y_916_, v_x_917_);
v_term1_936_ = lp_ariori_VesicaNumber_sub(v___x_934_, v___x_935_);
lean_dec_ref(v___x_935_);
lean_dec_ref(v___x_934_);
v___x_937_ = lp_ariori_VesicaNumber_mul(v_x_919_, v_y_922_);
lean_dec_ref(v_y_922_);
lean_dec_ref(v_x_919_);
v___x_938_ = lp_ariori_VesicaNumber_mul(v_y_920_, v_x_921_);
lean_dec_ref(v_x_921_);
lean_dec_ref(v_y_920_);
v_term2_939_ = lp_ariori_VesicaNumber_sub(v___x_937_, v___x_938_);
lean_dec_ref(v___x_938_);
lean_dec_ref(v___x_937_);
v___x_940_ = lp_ariori_VesicaNumber_mul(v_term1_936_, v___x_930_);
lean_dec_ref(v___x_930_);
v___x_941_ = lp_ariori_VesicaNumber_mul(v___x_926_, v_term2_939_);
lean_dec_ref(v___x_926_);
v_numX_942_ = lp_ariori_VesicaNumber_sub(v___x_940_, v___x_941_);
lean_dec_ref(v___x_941_);
lean_dec_ref(v___x_940_);
v___x_943_ = lp_ariori_VesicaNumber_mul(v_term1_936_, v___x_927_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v_term1_936_);
v___x_944_ = lp_ariori_VesicaNumber_mul(v___x_929_, v_term2_939_);
lean_dec_ref(v_term2_939_);
lean_dec_ref(v___x_929_);
v_numY_945_ = lp_ariori_VesicaNumber_sub(v___x_943_, v___x_944_);
lean_dec_ref(v___x_944_);
lean_dec_ref(v___x_943_);
v___x_946_ = lp_ariori_VesicaNumber_div(v_numX_942_, v_denom_932_);
lean_dec_ref(v_numX_942_);
v___x_947_ = lp_ariori_VesicaNumber_div(v_numY_945_, v_denom_932_);
lean_dec_ref(v_denom_932_);
lean_dec_ref(v_numY_945_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v___x_947_);
lean_ctor_set(v___x_924_, 0, v___x_946_);
v___x_949_ = v___x_924_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_946_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___x_947_);
v___x_949_ = v_reuseFailAlloc_951_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_950_; 
v___x_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
return v___x_950_;
}
}
else
{
lean_object* v___x_952_; 
lean_dec_ref(v_denom_932_);
lean_dec_ref(v___x_930_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v___x_926_);
lean_del_object(v___x_924_);
lean_dec_ref(v_y_922_);
lean_dec_ref(v_x_921_);
lean_dec_ref(v_y_920_);
lean_dec_ref(v_x_919_);
v___x_952_ = lean_box(0);
return v___x_952_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Segment_intersect___boxed(lean_object* v_s1_954_, lean_object* v_s2_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = lp_ariori_Segment_intersect(v_s1_954_, v_s2_955_);
lean_dec_ref(v_s1_954_);
return v_res_956_;
}
}
static lean_object* _init_lp_ariori_circleCircleIntersect___closed__0(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v_two_960_; 
v___x_957_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_958_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_959_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v_two_960_ = lp_ariori_VesicaNumber_mk_x27(v___x_959_, v___x_958_, v___x_957_);
return v_two_960_;
}
}
LEAN_EXPORT lean_object* lp_ariori_circleCircleIntersect(lean_object* v_c1_961_, lean_object* v_r1_962_, lean_object* v_c2_963_, lean_object* v_r2_964_){
_start:
{
lean_object* v_x_965_; lean_object* v_y_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_1023_; 
v_x_965_ = lean_ctor_get(v_c2_963_, 0);
v_y_966_ = lean_ctor_get(v_c2_963_, 1);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_c2_963_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_968_ = v_c2_963_;
v_isShared_969_ = v_isSharedCheck_1023_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_y_966_);
lean_inc(v_x_965_);
lean_dec(v_c2_963_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_1023_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v_x_970_; lean_object* v_y_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_1022_; 
v_x_970_ = lean_ctor_get(v_c1_961_, 0);
v_y_971_ = lean_ctor_get(v_c1_961_, 1);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_c1_961_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_973_ = v_c1_961_;
v_isShared_974_ = v_isSharedCheck_1022_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_y_971_);
lean_inc(v_x_970_);
lean_dec(v_c1_961_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_1022_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v_dx_975_; lean_object* v_dy_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_dSq_979_; lean_object* v_r1Sq_980_; lean_object* v_r2Sq_981_; lean_object* v_two_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_ad_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v_h2d2_988_; uint8_t v___x_989_; 
v_dx_975_ = lp_ariori_VesicaNumber_sub(v_x_965_, v_x_970_);
lean_dec_ref(v_x_965_);
v_dy_976_ = lp_ariori_VesicaNumber_sub(v_y_966_, v_y_971_);
lean_dec_ref(v_y_966_);
v___x_977_ = lp_ariori_VesicaNumber_sq(v_dx_975_);
v___x_978_ = lp_ariori_VesicaNumber_sq(v_dy_976_);
v_dSq_979_ = lp_ariori_VesicaNumber_add(v___x_977_, v___x_978_);
lean_dec_ref(v___x_978_);
lean_dec_ref(v___x_977_);
v_r1Sq_980_ = lp_ariori_VesicaNumber_sq(v_r1_962_);
v_r2Sq_981_ = lp_ariori_VesicaNumber_sq(v_r2_964_);
v_two_982_ = lean_obj_once(&lp_ariori_circleCircleIntersect___closed__0, &lp_ariori_circleCircleIntersect___closed__0_once, _init_lp_ariori_circleCircleIntersect___closed__0);
v___x_983_ = lp_ariori_VesicaNumber_sub(v_r1Sq_980_, v_r2Sq_981_);
lean_dec_ref(v_r2Sq_981_);
v___x_984_ = lp_ariori_VesicaNumber_add(v___x_983_, v_dSq_979_);
lean_dec_ref(v___x_983_);
v_ad_985_ = lp_ariori_VesicaNumber_div(v___x_984_, v_two_982_);
lean_dec_ref(v___x_984_);
v___x_986_ = lp_ariori_VesicaNumber_mul(v_r1Sq_980_, v_dSq_979_);
lean_dec_ref(v_r1Sq_980_);
v___x_987_ = lp_ariori_VesicaNumber_sq(v_ad_985_);
v_h2d2_988_ = lp_ariori_VesicaNumber_sub(v___x_986_, v___x_987_);
lean_dec_ref(v___x_987_);
lean_dec_ref(v___x_986_);
lean_inc_ref(v_h2d2_988_);
v___x_989_ = lp_ariori_VesicaNumber_isNeg(v_h2d2_988_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; 
v___x_990_ = lp_ariori_VesicaNumber_vesicaSqrt(v_h2d2_988_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v___x_991_; 
lean_dec_ref(v_ad_985_);
lean_dec_ref(v_dSq_979_);
lean_dec_ref(v_dy_976_);
lean_dec_ref(v_dx_975_);
lean_del_object(v___x_973_);
lean_dec_ref(v_y_971_);
lean_dec_ref(v_x_970_);
lean_del_object(v___x_968_);
v___x_991_ = lean_box(0);
return v___x_991_;
}
else
{
lean_object* v_val_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1020_; 
v_val_992_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_994_ = v___x_990_;
v_isShared_995_ = v_isSharedCheck_1020_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_val_992_);
lean_dec(v___x_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1020_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v_x2_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v_y2_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v_p1_1009_; 
v___x_996_ = lp_ariori_VesicaNumber_mul(v_ad_985_, v_dx_975_);
v___x_997_ = lp_ariori_VesicaNumber_div(v___x_996_, v_dSq_979_);
lean_dec_ref(v___x_996_);
v_x2_998_ = lp_ariori_VesicaNumber_add(v_x_970_, v___x_997_);
lean_dec_ref(v___x_997_);
lean_dec_ref(v_x_970_);
v___x_999_ = lp_ariori_VesicaNumber_mul(v_ad_985_, v_dy_976_);
lean_dec_ref(v_ad_985_);
v___x_1000_ = lp_ariori_VesicaNumber_div(v___x_999_, v_dSq_979_);
lean_dec_ref(v___x_999_);
v_y2_1001_ = lp_ariori_VesicaNumber_add(v_y_971_, v___x_1000_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v_y_971_);
v___x_1002_ = lp_ariori_VesicaNumber_mul(v_val_992_, v_dy_976_);
lean_dec_ref(v_dy_976_);
v___x_1003_ = lp_ariori_VesicaNumber_div(v___x_1002_, v_dSq_979_);
lean_dec_ref(v___x_1002_);
v___x_1004_ = lp_ariori_VesicaNumber_add(v_x2_998_, v___x_1003_);
v___x_1005_ = lp_ariori_VesicaNumber_mul(v_val_992_, v_dx_975_);
lean_dec_ref(v_dx_975_);
lean_dec(v_val_992_);
v___x_1006_ = lp_ariori_VesicaNumber_div(v___x_1005_, v_dSq_979_);
lean_dec_ref(v_dSq_979_);
lean_dec_ref(v___x_1005_);
v___x_1007_ = lp_ariori_VesicaNumber_sub(v_y2_1001_, v___x_1006_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 1, v___x_1007_);
lean_ctor_set(v___x_973_, 0, v___x_1004_);
v_p1_1009_ = v___x_973_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v___x_1007_);
v_p1_1009_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v_p2_1013_; 
v___x_1010_ = lp_ariori_VesicaNumber_sub(v_x2_998_, v___x_1003_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v_x2_998_);
v___x_1011_ = lp_ariori_VesicaNumber_add(v_y2_1001_, v___x_1006_);
lean_dec_ref(v___x_1006_);
lean_dec_ref(v_y2_1001_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 1, v___x_1011_);
lean_ctor_set(v___x_968_, 0, v___x_1010_);
v_p2_1013_ = v___x_968_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v___x_1011_);
v_p2_1013_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v_p1_1009_);
lean_ctor_set(v___x_1014_, 1, v_p2_1013_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_1014_);
v___x_1016_ = v___x_994_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
}
}
else
{
lean_object* v___x_1021_; 
lean_dec_ref(v_h2d2_988_);
lean_dec_ref(v_ad_985_);
lean_dec_ref(v_dSq_979_);
lean_dec_ref(v_dy_976_);
lean_dec_ref(v_dx_975_);
lean_del_object(v___x_973_);
lean_dec_ref(v_y_971_);
lean_dec_ref(v_x_970_);
lean_del_object(v___x_968_);
v___x_1021_ = lean_box(0);
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_circleCircleIntersect___boxed(lean_object* v_c1_1024_, lean_object* v_r1_1025_, lean_object* v_c2_1026_, lean_object* v_r2_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = lp_ariori_circleCircleIntersect(v_c1_1024_, v_r1_1025_, v_c2_1026_, v_r2_1027_);
lean_dec_ref(v_r2_1027_);
lean_dec_ref(v_r1_1025_);
return v_res_1028_;
}
}
static lean_object* _init_lp_ariori_lineCircleIntersect___closed__0(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_unsigned_to_nat(4u);
v___x_1030_ = lean_nat_to_int(v___x_1029_);
return v___x_1030_;
}
}
static lean_object* _init_lp_ariori_lineCircleIntersect___closed__1(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v_four_1034_; 
v___x_1031_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_1032_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_1033_ = lean_obj_once(&lp_ariori_lineCircleIntersect___closed__0, &lp_ariori_lineCircleIntersect___closed__0_once, _init_lp_ariori_lineCircleIntersect___closed__0);
v_four_1034_ = lp_ariori_VesicaNumber_mk_x27(v___x_1033_, v___x_1032_, v___x_1031_);
return v_four_1034_;
}
}
LEAN_EXPORT lean_object* lp_ariori_lineCircleIntersect(lean_object* v_p1_1035_, lean_object* v_p2_1036_, lean_object* v_c_1037_, lean_object* v_r_1038_){
_start:
{
lean_object* v_x_1039_; lean_object* v_y_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1113_; 
v_x_1039_ = lean_ctor_get(v_p2_1036_, 0);
v_y_1040_ = lean_ctor_get(v_p2_1036_, 1);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_p2_1036_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1042_ = v_p2_1036_;
v_isShared_1043_ = v_isSharedCheck_1113_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_y_1040_);
lean_inc(v_x_1039_);
lean_dec(v_p2_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1113_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v_x_1044_; lean_object* v_y_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1112_; 
v_x_1044_ = lean_ctor_get(v_p1_1035_, 0);
v_y_1045_ = lean_ctor_get(v_p1_1035_, 1);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_p1_1035_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1047_ = v_p1_1035_;
v_isShared_1048_ = v_isSharedCheck_1112_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_y_1045_);
lean_inc(v_x_1044_);
lean_dec(v_p1_1035_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1112_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v_x_1049_; lean_object* v_y_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1111_; 
v_x_1049_ = lean_ctor_get(v_c_1037_, 0);
v_y_1050_ = lean_ctor_get(v_c_1037_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_c_1037_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1052_ = v_c_1037_;
v_isShared_1053_ = v_isSharedCheck_1111_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_y_1050_);
lean_inc(v_x_1049_);
lean_dec(v_c_1037_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1111_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v_dx_1054_; lean_object* v_dy_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v_a_1058_; lean_object* v_fx_1059_; lean_object* v_fy_1060_; lean_object* v_two_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v_b_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v_quadC_1070_; lean_object* v_four_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v_disc_1075_; uint8_t v___x_1076_; 
v_dx_1054_ = lp_ariori_VesicaNumber_sub(v_x_1039_, v_x_1044_);
lean_dec_ref(v_x_1039_);
v_dy_1055_ = lp_ariori_VesicaNumber_sub(v_y_1040_, v_y_1045_);
lean_dec_ref(v_y_1040_);
v___x_1056_ = lp_ariori_VesicaNumber_sq(v_dx_1054_);
v___x_1057_ = lp_ariori_VesicaNumber_sq(v_dy_1055_);
v_a_1058_ = lp_ariori_VesicaNumber_add(v___x_1056_, v___x_1057_);
lean_dec_ref(v___x_1057_);
lean_dec_ref(v___x_1056_);
v_fx_1059_ = lp_ariori_VesicaNumber_sub(v_x_1044_, v_x_1049_);
lean_dec_ref(v_x_1049_);
v_fy_1060_ = lp_ariori_VesicaNumber_sub(v_y_1045_, v_y_1050_);
lean_dec_ref(v_y_1050_);
v_two_1061_ = lean_obj_once(&lp_ariori_circleCircleIntersect___closed__0, &lp_ariori_circleCircleIntersect___closed__0_once, _init_lp_ariori_circleCircleIntersect___closed__0);
v___x_1062_ = lp_ariori_VesicaNumber_mul(v_fx_1059_, v_dx_1054_);
v___x_1063_ = lp_ariori_VesicaNumber_mul(v_fy_1060_, v_dy_1055_);
v___x_1064_ = lp_ariori_VesicaNumber_add(v___x_1062_, v___x_1063_);
lean_dec_ref(v___x_1063_);
lean_dec_ref(v___x_1062_);
v_b_1065_ = lp_ariori_VesicaNumber_mul(v_two_1061_, v___x_1064_);
lean_dec_ref(v___x_1064_);
v___x_1066_ = lp_ariori_VesicaNumber_sq(v_fx_1059_);
lean_dec_ref(v_fx_1059_);
v___x_1067_ = lp_ariori_VesicaNumber_sq(v_fy_1060_);
lean_dec_ref(v_fy_1060_);
v___x_1068_ = lp_ariori_VesicaNumber_add(v___x_1066_, v___x_1067_);
lean_dec_ref(v___x_1067_);
lean_dec_ref(v___x_1066_);
v___x_1069_ = lp_ariori_VesicaNumber_sq(v_r_1038_);
v_quadC_1070_ = lp_ariori_VesicaNumber_sub(v___x_1068_, v___x_1069_);
lean_dec_ref(v___x_1069_);
lean_dec_ref(v___x_1068_);
v_four_1071_ = lean_obj_once(&lp_ariori_lineCircleIntersect___closed__1, &lp_ariori_lineCircleIntersect___closed__1_once, _init_lp_ariori_lineCircleIntersect___closed__1);
v___x_1072_ = lp_ariori_VesicaNumber_sq(v_b_1065_);
v___x_1073_ = lp_ariori_VesicaNumber_mul(v_four_1071_, v_a_1058_);
v___x_1074_ = lp_ariori_VesicaNumber_mul(v___x_1073_, v_quadC_1070_);
lean_dec_ref(v_quadC_1070_);
lean_dec_ref(v___x_1073_);
v_disc_1075_ = lp_ariori_VesicaNumber_sub(v___x_1072_, v___x_1074_);
lean_dec_ref(v___x_1074_);
lean_dec_ref(v___x_1072_);
lean_inc_ref(v_disc_1075_);
v___x_1076_ = lp_ariori_VesicaNumber_isNeg(v_disc_1075_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; 
v___x_1077_ = lp_ariori_VesicaNumber_vesicaSqrt(v_disc_1075_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v___x_1078_; 
lean_dec_ref(v_b_1065_);
lean_dec_ref(v_a_1058_);
lean_dec_ref(v_dy_1055_);
lean_dec_ref(v_dx_1054_);
lean_del_object(v___x_1052_);
lean_del_object(v___x_1047_);
lean_dec_ref(v_y_1045_);
lean_dec_ref(v_x_1044_);
lean_del_object(v___x_1042_);
v___x_1078_ = lean_box(0);
return v___x_1078_;
}
else
{
lean_object* v_val_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1109_; 
v_val_1079_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1081_ = v___x_1077_;
v_isShared_1082_ = v_isSharedCheck_1109_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_val_1079_);
lean_dec(v___x_1077_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1109_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v_t1_1086_; lean_object* v___x_1087_; lean_object* v_t2_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v_res1_1094_; 
v___x_1083_ = lp_ariori_VesicaNumber_neg(v_b_1065_);
v___x_1084_ = lp_ariori_VesicaNumber_sub(v___x_1083_, v_val_1079_);
v___x_1085_ = lp_ariori_VesicaNumber_mul(v_two_1061_, v_a_1058_);
lean_dec_ref(v_a_1058_);
v_t1_1086_ = lp_ariori_VesicaNumber_div(v___x_1084_, v___x_1085_);
lean_dec_ref(v___x_1084_);
v___x_1087_ = lp_ariori_VesicaNumber_add(v___x_1083_, v_val_1079_);
lean_dec(v_val_1079_);
lean_dec_ref(v___x_1083_);
v_t2_1088_ = lp_ariori_VesicaNumber_div(v___x_1087_, v___x_1085_);
lean_dec_ref(v___x_1085_);
lean_dec_ref(v___x_1087_);
v___x_1089_ = lp_ariori_VesicaNumber_mul(v_t1_1086_, v_dx_1054_);
v___x_1090_ = lp_ariori_VesicaNumber_add(v_x_1044_, v___x_1089_);
lean_dec_ref(v___x_1089_);
v___x_1091_ = lp_ariori_VesicaNumber_mul(v_t1_1086_, v_dy_1055_);
lean_dec_ref(v_t1_1086_);
v___x_1092_ = lp_ariori_VesicaNumber_add(v_y_1045_, v___x_1091_);
lean_dec_ref(v___x_1091_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 1, v___x_1092_);
lean_ctor_set(v___x_1052_, 0, v___x_1090_);
v_res1_1094_ = v___x_1052_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v___x_1092_);
v_res1_1094_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v_res2_1100_; 
v___x_1095_ = lp_ariori_VesicaNumber_mul(v_t2_1088_, v_dx_1054_);
lean_dec_ref(v_dx_1054_);
v___x_1096_ = lp_ariori_VesicaNumber_add(v_x_1044_, v___x_1095_);
lean_dec_ref(v___x_1095_);
lean_dec_ref(v_x_1044_);
v___x_1097_ = lp_ariori_VesicaNumber_mul(v_t2_1088_, v_dy_1055_);
lean_dec_ref(v_dy_1055_);
lean_dec_ref(v_t2_1088_);
v___x_1098_ = lp_ariori_VesicaNumber_add(v_y_1045_, v___x_1097_);
lean_dec_ref(v___x_1097_);
lean_dec_ref(v_y_1045_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v___x_1098_);
lean_ctor_set(v___x_1047_, 0, v___x_1096_);
v_res2_1100_ = v___x_1047_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v___x_1098_);
v_res2_1100_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1102_; 
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 1, v_res2_1100_);
lean_ctor_set(v___x_1042_, 0, v_res1_1094_);
v___x_1102_ = v___x_1042_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_res1_1094_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v_res2_1100_);
v___x_1102_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
lean_object* v___x_1104_; 
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 0, v___x_1102_);
v___x_1104_ = v___x_1081_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1110_; 
lean_dec_ref(v_disc_1075_);
lean_dec_ref(v_b_1065_);
lean_dec_ref(v_a_1058_);
lean_dec_ref(v_dy_1055_);
lean_dec_ref(v_dx_1054_);
lean_del_object(v___x_1052_);
lean_del_object(v___x_1047_);
lean_dec_ref(v_y_1045_);
lean_dec_ref(v_x_1044_);
lean_del_object(v___x_1042_);
v___x_1110_ = lean_box(0);
return v___x_1110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_lineCircleIntersect___boxed(lean_object* v_p1_1114_, lean_object* v_p2_1115_, lean_object* v_c_1116_, lean_object* v_r_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = lp_ariori_lineCircleIntersect(v_p1_1114_, v_p2_1115_, v_c_1116_, v_r_1117_);
lean_dec_ref(v_r_1117_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* lp_ariori_fartherFrom(lean_object* v_a_1119_, lean_object* v_b_1120_, lean_object* v_refPt_1121_){
_start:
{
lean_object* v_da_1122_; lean_object* v_db_1123_; uint8_t v___x_1124_; 
v_da_1122_ = lp_ariori_Point_distSq(v_a_1119_, v_refPt_1121_);
v_db_1123_ = lp_ariori_Point_distSq(v_b_1120_, v_refPt_1121_);
v___x_1124_ = lp_ariori_vGt(v_da_1122_, v_db_1123_);
lean_dec_ref(v_db_1123_);
lean_dec_ref(v_da_1122_);
if (v___x_1124_ == 0)
{
lean_inc_ref(v_b_1120_);
return v_b_1120_;
}
else
{
lean_inc_ref(v_a_1119_);
return v_a_1119_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_fartherFrom___boxed(lean_object* v_a_1125_, lean_object* v_b_1126_, lean_object* v_refPt_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = lp_ariori_fartherFrom(v_a_1125_, v_b_1126_, v_refPt_1127_);
lean_dec_ref(v_refPt_1127_);
lean_dec_ref(v_b_1126_);
lean_dec_ref(v_a_1125_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* lp_ariori_lineIntersect(lean_object* v_a1_1129_, lean_object* v_a2_1130_, lean_object* v_b1_1131_, lean_object* v_b2_1132_){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v_a1_1129_);
lean_ctor_set(v___x_1133_, 1, v_a2_1130_);
v___x_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1134_, 0, v_b1_1131_);
lean_ctor_set(v___x_1134_, 1, v_b2_1132_);
v___x_1135_ = lp_ariori_Segment_intersect(v___x_1133_, v___x_1134_);
lean_dec_ref(v___x_1133_);
return v___x_1135_;
}
}
static lean_object* _init_lp_ariori_instReprSquareConstruction_repr___redArg___closed__28(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_unsigned_to_nat(10u);
v___x_1179_ = lean_nat_to_int(v___x_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprSquareConstruction_repr___redArg(lean_object* v_x_1180_){
_start:
{
lean_object* v_p1_1181_; lean_object* v_p2_1182_; lean_object* v_p3_1183_; lean_object* v_p4_1184_; lean_object* v_p5_1185_; lean_object* v_p6_1186_; lean_object* v_c1_1187_; lean_object* v_c2_1188_; lean_object* v_c3_1189_; lean_object* v_c4_1190_; lean_object* v_k_1191_; lean_object* v_l_1192_; lean_object* v_m_1193_; lean_object* v_n_1194_; lean_object* v_s_1195_; lean_object* v_radius_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; uint8_t v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v_p1_1181_ = lean_ctor_get(v_x_1180_, 0);
lean_inc_ref(v_p1_1181_);
v_p2_1182_ = lean_ctor_get(v_x_1180_, 1);
lean_inc_ref(v_p2_1182_);
v_p3_1183_ = lean_ctor_get(v_x_1180_, 2);
lean_inc_ref(v_p3_1183_);
v_p4_1184_ = lean_ctor_get(v_x_1180_, 3);
lean_inc_ref(v_p4_1184_);
v_p5_1185_ = lean_ctor_get(v_x_1180_, 4);
lean_inc_ref(v_p5_1185_);
v_p6_1186_ = lean_ctor_get(v_x_1180_, 5);
lean_inc_ref(v_p6_1186_);
v_c1_1187_ = lean_ctor_get(v_x_1180_, 6);
lean_inc_ref(v_c1_1187_);
v_c2_1188_ = lean_ctor_get(v_x_1180_, 7);
lean_inc_ref(v_c2_1188_);
v_c3_1189_ = lean_ctor_get(v_x_1180_, 8);
lean_inc_ref(v_c3_1189_);
v_c4_1190_ = lean_ctor_get(v_x_1180_, 9);
lean_inc_ref(v_c4_1190_);
v_k_1191_ = lean_ctor_get(v_x_1180_, 10);
lean_inc_ref(v_k_1191_);
v_l_1192_ = lean_ctor_get(v_x_1180_, 11);
lean_inc_ref(v_l_1192_);
v_m_1193_ = lean_ctor_get(v_x_1180_, 12);
lean_inc_ref(v_m_1193_);
v_n_1194_ = lean_ctor_get(v_x_1180_, 13);
lean_inc_ref(v_n_1194_);
v_s_1195_ = lean_ctor_get(v_x_1180_, 14);
lean_inc_ref(v_s_1195_);
v_radius_1196_ = lean_ctor_get(v_x_1180_, 15);
lean_inc_ref(v_radius_1196_);
lean_dec_ref(v_x_1180_);
v___x_1197_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__5));
v___x_1198_ = ((lean_object*)(lp_ariori_instReprSegment_repr___redArg___closed__3));
v___x_1199_ = lean_obj_once(&lp_ariori_instReprSegment_repr___redArg___closed__4, &lp_ariori_instReprSegment_repr___redArg___closed__4_once, _init_lp_ariori_instReprSegment_repr___redArg___closed__4);
v___x_1200_ = lp_ariori_instReprPoint_repr___redArg(v_p1_1181_);
v___x_1201_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1199_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
v___x_1202_ = 0;
v___x_1203_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1203_, 0, v___x_1201_);
lean_ctor_set_uint8(v___x_1203_, sizeof(void*)*1, v___x_1202_);
v___x_1204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1198_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
v___x_1205_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__17));
v___x_1206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = lean_box(1);
v___x_1208_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1206_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
v___x_1209_ = ((lean_object*)(lp_ariori_instReprSegment_repr___redArg___closed__6));
v___x_1210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1208_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
lean_ctor_set(v___x_1211_, 1, v___x_1197_);
v___x_1212_ = lp_ariori_instReprPoint_repr___redArg(v_p2_1182_);
v___x_1213_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1199_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
v___x_1214_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
lean_ctor_set_uint8(v___x_1214_, sizeof(void*)*1, v___x_1202_);
v___x_1215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1211_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
v___x_1216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v___x_1205_);
v___x_1217_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
lean_ctor_set(v___x_1217_, 1, v___x_1207_);
v___x_1218_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__1));
v___x_1219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1217_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
lean_ctor_set(v___x_1220_, 1, v___x_1197_);
v___x_1221_ = lp_ariori_instReprPoint_repr___redArg(v_p3_1183_);
v___x_1222_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1199_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
v___x_1223_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
lean_ctor_set_uint8(v___x_1223_, sizeof(void*)*1, v___x_1202_);
v___x_1224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1220_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
lean_ctor_set(v___x_1225_, 1, v___x_1205_);
v___x_1226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
lean_ctor_set(v___x_1226_, 1, v___x_1207_);
v___x_1227_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__3));
v___x_1228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1226_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
lean_ctor_set(v___x_1229_, 1, v___x_1197_);
v___x_1230_ = lp_ariori_instReprPoint_repr___redArg(v_p4_1184_);
v___x_1231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1199_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
lean_ctor_set_uint8(v___x_1232_, sizeof(void*)*1, v___x_1202_);
v___x_1233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1229_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
lean_ctor_set(v___x_1234_, 1, v___x_1205_);
v___x_1235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
lean_ctor_set(v___x_1235_, 1, v___x_1207_);
v___x_1236_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__5));
v___x_1237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
lean_ctor_set(v___x_1238_, 1, v___x_1197_);
v___x_1239_ = lp_ariori_instReprPoint_repr___redArg(v_p5_1185_);
v___x_1240_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1199_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*1, v___x_1202_);
v___x_1242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1238_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v___x_1205_);
v___x_1244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
lean_ctor_set(v___x_1244_, 1, v___x_1207_);
v___x_1245_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__7));
v___x_1246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
lean_ctor_set(v___x_1247_, 1, v___x_1197_);
v___x_1248_ = lp_ariori_instReprPoint_repr___redArg(v_p6_1186_);
v___x_1249_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1199_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
lean_ctor_set_uint8(v___x_1250_, sizeof(void*)*1, v___x_1202_);
v___x_1251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1247_);
lean_ctor_set(v___x_1251_, 1, v___x_1250_);
v___x_1252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
lean_ctor_set(v___x_1252_, 1, v___x_1205_);
v___x_1253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
lean_ctor_set(v___x_1253_, 1, v___x_1207_);
v___x_1254_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__9));
v___x_1255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1253_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
v___x_1256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v___x_1197_);
v___x_1257_ = lp_ariori_instReprPoint_repr___redArg(v_c1_1187_);
v___x_1258_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1199_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set_uint8(v___x_1259_, sizeof(void*)*1, v___x_1202_);
v___x_1260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1256_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
lean_ctor_set(v___x_1261_, 1, v___x_1205_);
v___x_1262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
lean_ctor_set(v___x_1262_, 1, v___x_1207_);
v___x_1263_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__11));
v___x_1264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1262_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
lean_ctor_set(v___x_1265_, 1, v___x_1197_);
v___x_1266_ = lp_ariori_instReprPoint_repr___redArg(v_c2_1188_);
v___x_1267_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1199_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
v___x_1268_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
lean_ctor_set_uint8(v___x_1268_, sizeof(void*)*1, v___x_1202_);
v___x_1269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1265_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
lean_ctor_set(v___x_1270_, 1, v___x_1205_);
v___x_1271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v___x_1207_);
v___x_1272_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__13));
v___x_1273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1271_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
lean_ctor_set(v___x_1274_, 1, v___x_1197_);
v___x_1275_ = lp_ariori_instReprPoint_repr___redArg(v_c3_1189_);
v___x_1276_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1199_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
lean_ctor_set_uint8(v___x_1277_, sizeof(void*)*1, v___x_1202_);
v___x_1278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1274_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
lean_ctor_set(v___x_1279_, 1, v___x_1205_);
v___x_1280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
lean_ctor_set(v___x_1280_, 1, v___x_1207_);
v___x_1281_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__15));
v___x_1282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1280_);
lean_ctor_set(v___x_1282_, 1, v___x_1281_);
v___x_1283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
lean_ctor_set(v___x_1283_, 1, v___x_1197_);
v___x_1284_ = lp_ariori_instReprPoint_repr___redArg(v_c4_1190_);
v___x_1285_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1199_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v___x_1286_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
lean_ctor_set_uint8(v___x_1286_, sizeof(void*)*1, v___x_1202_);
v___x_1287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1283_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___x_1205_);
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v___x_1207_);
v___x_1290_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__17));
v___x_1291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1289_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
lean_ctor_set(v___x_1292_, 1, v___x_1197_);
v___x_1293_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__7, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__7_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__7);
v___x_1294_ = lp_ariori_instReprPoint_repr___redArg(v_k_1191_);
v___x_1295_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1293_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set_uint8(v___x_1296_, sizeof(void*)*1, v___x_1202_);
v___x_1297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1292_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
lean_ctor_set(v___x_1298_, 1, v___x_1205_);
v___x_1299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set(v___x_1299_, 1, v___x_1207_);
v___x_1300_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__19));
v___x_1301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v___x_1197_);
v___x_1303_ = lp_ariori_instReprPoint_repr___redArg(v_l_1192_);
v___x_1304_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1293_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set_uint8(v___x_1305_, sizeof(void*)*1, v___x_1202_);
v___x_1306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1302_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v___x_1205_);
v___x_1308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1207_);
v___x_1309_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__21));
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1197_);
v___x_1312_ = lp_ariori_instReprPoint_repr___redArg(v_m_1193_);
v___x_1313_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1293_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*1, v___x_1202_);
v___x_1315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1311_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v___x_1205_);
v___x_1317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v___x_1207_);
v___x_1318_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__23));
v___x_1319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v___x_1197_);
v___x_1321_ = lp_ariori_instReprPoint_repr___redArg(v_n_1194_);
v___x_1322_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1293_);
lean_ctor_set(v___x_1322_, 1, v___x_1321_);
v___x_1323_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
lean_ctor_set_uint8(v___x_1323_, sizeof(void*)*1, v___x_1202_);
v___x_1324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1320_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___x_1205_);
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v___x_1207_);
v___x_1327_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__25));
v___x_1328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
lean_ctor_set(v___x_1329_, 1, v___x_1197_);
v___x_1330_ = lp_ariori_instReprPoint_repr___redArg(v_s_1195_);
v___x_1331_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1293_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*1, v___x_1202_);
v___x_1333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1329_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
lean_ctor_set(v___x_1334_, 1, v___x_1205_);
v___x_1335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
lean_ctor_set(v___x_1335_, 1, v___x_1207_);
v___x_1336_ = ((lean_object*)(lp_ariori_instReprSquareConstruction_repr___redArg___closed__27));
v___x_1337_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1335_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
lean_ctor_set(v___x_1338_, 1, v___x_1197_);
v___x_1339_ = lean_obj_once(&lp_ariori_instReprSquareConstruction_repr___redArg___closed__28, &lp_ariori_instReprSquareConstruction_repr___redArg___closed__28_once, _init_lp_ariori_instReprSquareConstruction_repr___redArg___closed__28);
v___x_1340_ = lp_ariori_instReprVesicaNumber_repr___redArg(v_radius_1196_);
lean_dec_ref(v_radius_1196_);
v___x_1341_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
lean_ctor_set_uint8(v___x_1342_, sizeof(void*)*1, v___x_1202_);
v___x_1343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1338_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__10, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__10_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__10);
v___x_1345_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__11));
v___x_1346_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
lean_ctor_set(v___x_1346_, 1, v___x_1343_);
v___x_1347_ = ((lean_object*)(lp_ariori_instReprVesicaNumber_repr___redArg___closed__12));
v___x_1348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1346_);
lean_ctor_set(v___x_1348_, 1, v___x_1347_);
v___x_1349_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1344_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
lean_ctor_set_uint8(v___x_1350_, sizeof(void*)*1, v___x_1202_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprSquareConstruction_repr(lean_object* v_x_1351_, lean_object* v_prec_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = lp_ariori_instReprSquareConstruction_repr___redArg(v_x_1351_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprSquareConstruction_repr___boxed(lean_object* v_x_1354_, lean_object* v_prec_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = lp_ariori_instReprSquareConstruction_repr(v_x_1354_, v_prec_1355_);
lean_dec(v_prec_1355_);
return v_res_1356_;
}
}
static lean_object* _init_lp_ariori_instInhabitedSquareConstruction_default___closed__0(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1359_ = lp_ariori_VesicaNumber_zero;
v___x_1360_ = lp_ariori_instInhabitedPoint_default;
v___x_1361_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
lean_ctor_set(v___x_1361_, 2, v___x_1360_);
lean_ctor_set(v___x_1361_, 3, v___x_1360_);
lean_ctor_set(v___x_1361_, 4, v___x_1360_);
lean_ctor_set(v___x_1361_, 5, v___x_1360_);
lean_ctor_set(v___x_1361_, 6, v___x_1360_);
lean_ctor_set(v___x_1361_, 7, v___x_1360_);
lean_ctor_set(v___x_1361_, 8, v___x_1360_);
lean_ctor_set(v___x_1361_, 9, v___x_1360_);
lean_ctor_set(v___x_1361_, 10, v___x_1360_);
lean_ctor_set(v___x_1361_, 11, v___x_1360_);
lean_ctor_set(v___x_1361_, 12, v___x_1360_);
lean_ctor_set(v___x_1361_, 13, v___x_1360_);
lean_ctor_set(v___x_1361_, 14, v___x_1360_);
lean_ctor_set(v___x_1361_, 15, v___x_1359_);
return v___x_1361_;
}
}
static lean_object* _init_lp_ariori_instInhabitedSquareConstruction_default(void){
_start:
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_obj_once(&lp_ariori_instInhabitedSquareConstruction_default___closed__0, &lp_ariori_instInhabitedSquareConstruction_default___closed__0_once, _init_lp_ariori_instInhabitedSquareConstruction_default___closed__0);
return v___x_1362_;
}
}
static lean_object* _init_lp_ariori_instInhabitedSquareConstruction(void){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = lp_ariori_instInhabitedSquareConstruction_default;
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* lp_ariori_deriveSquare(lean_object* v_o_1364_, lean_object* v_p_1365_, lean_object* v_r_1366_){
_start:
{
lean_object* v___x_1367_; 
lean_inc_ref(v_p_1365_);
lean_inc_ref(v_o_1364_);
v___x_1367_ = lp_ariori_circleCircleIntersect(v_o_1364_, v_r_1366_, v_p_1365_, v_r_1366_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v___x_1368_; 
lean_dec_ref(v_r_1366_);
lean_dec_ref(v_p_1365_);
lean_dec_ref(v_o_1364_);
v___x_1368_ = lean_box(0);
return v___x_1368_;
}
else
{
lean_object* v_val_1369_; lean_object* v_fst_1370_; lean_object* v_snd_1371_; lean_object* v___x_1372_; 
v_val_1369_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_val_1369_);
lean_dec_ref(v___x_1367_);
v_fst_1370_ = lean_ctor_get(v_val_1369_, 0);
lean_inc_n(v_fst_1370_, 2);
v_snd_1371_ = lean_ctor_get(v_val_1369_, 1);
lean_inc(v_snd_1371_);
lean_dec(v_val_1369_);
lean_inc_ref(v_o_1364_);
v___x_1372_ = lp_ariori_circleCircleIntersect(v_fst_1370_, v_r_1366_, v_o_1364_, v_r_1366_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v___x_1373_; 
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
lean_dec_ref(v_p_1365_);
lean_dec_ref(v_o_1364_);
v___x_1373_ = lean_box(0);
return v___x_1373_;
}
else
{
lean_object* v_val_1374_; lean_object* v_fst_1375_; lean_object* v_snd_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v_val_1374_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_val_1374_);
lean_dec_ref(v___x_1372_);
v_fst_1375_ = lean_ctor_get(v_val_1374_, 0);
lean_inc(v_fst_1375_);
v_snd_1376_ = lean_ctor_get(v_val_1374_, 1);
lean_inc(v_snd_1376_);
lean_dec(v_val_1374_);
v___x_1377_ = lp_ariori_fartherFrom(v_fst_1375_, v_snd_1376_, v_p_1365_);
lean_dec(v_snd_1376_);
lean_dec(v_fst_1375_);
lean_inc_ref(v_p_1365_);
lean_inc(v_fst_1370_);
v___x_1378_ = lp_ariori_circleCircleIntersect(v_fst_1370_, v_r_1366_, v_p_1365_, v_r_1366_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v___x_1379_; 
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
lean_dec_ref(v_p_1365_);
lean_dec_ref(v_o_1364_);
v___x_1379_ = lean_box(0);
return v___x_1379_;
}
else
{
lean_object* v_val_1380_; lean_object* v_fst_1381_; lean_object* v_snd_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v_val_1380_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_val_1380_);
lean_dec_ref(v___x_1378_);
v_fst_1381_ = lean_ctor_get(v_val_1380_, 0);
lean_inc(v_fst_1381_);
v_snd_1382_ = lean_ctor_get(v_val_1380_, 1);
lean_inc(v_snd_1382_);
lean_dec(v_val_1380_);
v___x_1383_ = lp_ariori_fartherFrom(v_fst_1381_, v_snd_1382_, v_o_1364_);
lean_dec(v_snd_1382_);
lean_dec(v_fst_1381_);
lean_inc_ref(v_o_1364_);
lean_inc(v_snd_1371_);
v___x_1384_ = lp_ariori_circleCircleIntersect(v_snd_1371_, v_r_1366_, v_o_1364_, v_r_1366_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v___x_1385_; 
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
lean_dec_ref(v_p_1365_);
lean_dec_ref(v_o_1364_);
v___x_1385_ = lean_box(0);
return v___x_1385_;
}
else
{
lean_object* v_val_1386_; lean_object* v_fst_1387_; lean_object* v_snd_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v_val_1386_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_val_1386_);
lean_dec_ref(v___x_1384_);
v_fst_1387_ = lean_ctor_get(v_val_1386_, 0);
lean_inc(v_fst_1387_);
v_snd_1388_ = lean_ctor_get(v_val_1386_, 1);
lean_inc(v_snd_1388_);
lean_dec(v_val_1386_);
v___x_1389_ = lp_ariori_fartherFrom(v_fst_1387_, v_snd_1388_, v_p_1365_);
lean_dec(v_snd_1388_);
lean_dec(v_fst_1387_);
lean_inc(v_snd_1371_);
v___x_1390_ = lp_ariori_circleCircleIntersect(v_snd_1371_, v_r_1366_, v_p_1365_, v_r_1366_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v___x_1391_; 
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
lean_dec_ref(v_o_1364_);
v___x_1391_ = lean_box(0);
return v___x_1391_;
}
else
{
lean_object* v_val_1392_; lean_object* v_fst_1393_; lean_object* v_snd_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v_val_1392_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_val_1392_);
lean_dec_ref(v___x_1390_);
v_fst_1393_ = lean_ctor_get(v_val_1392_, 0);
lean_inc(v_fst_1393_);
v_snd_1394_ = lean_ctor_get(v_val_1392_, 1);
lean_inc(v_snd_1394_);
lean_dec(v_val_1392_);
v___x_1395_ = lp_ariori_fartherFrom(v_fst_1393_, v_snd_1394_, v_o_1364_);
lean_dec(v_snd_1394_);
lean_dec(v_fst_1393_);
lean_inc_ref_n(v_o_1364_, 2);
lean_inc_ref(v___x_1383_);
v___x_1396_ = lp_ariori_lineCircleIntersect(v___x_1383_, v_o_1364_, v_o_1364_, v_r_1366_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v___x_1397_; 
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
lean_dec_ref(v_o_1364_);
v___x_1397_ = lean_box(0);
return v___x_1397_;
}
else
{
lean_object* v_val_1398_; lean_object* v_fst_1399_; lean_object* v_snd_1400_; lean_object* v___x_1401_; 
v_val_1398_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_val_1398_);
lean_dec_ref(v___x_1396_);
v_fst_1399_ = lean_ctor_get(v_val_1398_, 0);
lean_inc(v_fst_1399_);
v_snd_1400_ = lean_ctor_get(v_val_1398_, 1);
lean_inc(v_snd_1400_);
lean_dec(v_val_1398_);
lean_inc_ref(v_o_1364_);
lean_inc_ref(v___x_1395_);
v___x_1401_ = lp_ariori_lineCircleIntersect(v___x_1395_, v_o_1364_, v_o_1364_, v_r_1366_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v___x_1402_; 
lean_dec(v_snd_1400_);
lean_dec(v_fst_1399_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
v___x_1402_ = lean_box(0);
return v___x_1402_;
}
else
{
lean_object* v_val_1403_; lean_object* v_fst_1404_; lean_object* v_snd_1405_; lean_object* v___x_1406_; 
v_val_1403_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_val_1403_);
lean_dec_ref(v___x_1401_);
v_fst_1404_ = lean_ctor_get(v_val_1403_, 0);
lean_inc(v_fst_1404_);
v_snd_1405_ = lean_ctor_get(v_val_1403_, 1);
lean_inc_n(v_snd_1405_, 2);
lean_dec(v_val_1403_);
lean_inc(v_snd_1400_);
lean_inc_ref(v___x_1377_);
lean_inc(v_fst_1370_);
v___x_1406_ = lp_ariori_lineIntersect(v_fst_1370_, v___x_1377_, v_snd_1405_, v_snd_1400_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v___x_1407_; 
lean_dec(v_snd_1405_);
lean_dec(v_fst_1404_);
lean_dec(v_snd_1400_);
lean_dec(v_fst_1399_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
v___x_1407_ = lean_box(0);
return v___x_1407_;
}
else
{
lean_object* v_val_1408_; lean_object* v___x_1409_; 
v_val_1408_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_val_1408_);
lean_dec_ref(v___x_1406_);
lean_inc(v_fst_1404_);
lean_inc(v_fst_1399_);
lean_inc_ref(v___x_1377_);
lean_inc(v_fst_1370_);
v___x_1409_ = lp_ariori_lineIntersect(v_fst_1370_, v___x_1377_, v_fst_1399_, v_fst_1404_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v___x_1410_; 
lean_dec(v_val_1408_);
lean_dec(v_snd_1405_);
lean_dec(v_fst_1404_);
lean_dec(v_snd_1400_);
lean_dec(v_fst_1399_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
v___x_1410_ = lean_box(0);
return v___x_1410_;
}
else
{
lean_object* v_val_1411_; lean_object* v___x_1412_; 
v_val_1411_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_val_1411_);
lean_dec_ref(v___x_1409_);
lean_inc(v_snd_1400_);
lean_inc(v_snd_1405_);
lean_inc(v_snd_1371_);
lean_inc_ref(v___x_1389_);
v___x_1412_ = lp_ariori_lineIntersect(v___x_1389_, v_snd_1371_, v_snd_1405_, v_snd_1400_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v___x_1413_; 
lean_dec(v_val_1411_);
lean_dec(v_val_1408_);
lean_dec(v_snd_1405_);
lean_dec(v_fst_1404_);
lean_dec(v_snd_1400_);
lean_dec(v_fst_1399_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
v___x_1413_ = lean_box(0);
return v___x_1413_;
}
else
{
lean_object* v_val_1414_; lean_object* v___x_1415_; 
v_val_1414_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_val_1414_);
lean_dec_ref(v___x_1412_);
lean_inc(v_fst_1404_);
lean_inc(v_fst_1399_);
lean_inc(v_snd_1371_);
lean_inc_ref(v___x_1389_);
v___x_1415_ = lp_ariori_lineIntersect(v___x_1389_, v_snd_1371_, v_fst_1399_, v_fst_1404_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v___x_1416_; 
lean_dec(v_val_1414_);
lean_dec(v_val_1411_);
lean_dec(v_val_1408_);
lean_dec(v_snd_1405_);
lean_dec(v_fst_1404_);
lean_dec(v_snd_1400_);
lean_dec(v_fst_1399_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
v___x_1416_ = lean_box(0);
return v___x_1416_;
}
else
{
lean_object* v_val_1417_; lean_object* v___x_1418_; 
v_val_1417_ = lean_ctor_get(v___x_1415_, 0);
lean_inc_n(v_val_1417_, 2);
lean_dec_ref(v___x_1415_);
lean_inc(v_val_1414_);
lean_inc(v_val_1411_);
lean_inc(v_val_1408_);
v___x_1418_ = lp_ariori_lineIntersect(v_val_1408_, v_val_1417_, v_val_1411_, v_val_1414_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v___x_1419_; 
lean_dec(v_val_1417_);
lean_dec(v_val_1414_);
lean_dec(v_val_1411_);
lean_dec(v_val_1408_);
lean_dec(v_snd_1405_);
lean_dec(v_fst_1404_);
lean_dec(v_snd_1400_);
lean_dec(v_fst_1399_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1389_);
lean_dec_ref(v___x_1383_);
lean_dec_ref(v___x_1377_);
lean_dec(v_snd_1371_);
lean_dec(v_fst_1370_);
lean_dec_ref(v_r_1366_);
v___x_1419_ = lean_box(0);
return v___x_1419_;
}
else
{
lean_object* v_val_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1428_; 
v_val_1420_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1422_ = v___x_1418_;
v_isShared_1423_ = v_isSharedCheck_1428_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_val_1420_);
lean_dec(v___x_1418_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1428_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1426_; 
v___x_1424_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v___x_1424_, 0, v_fst_1370_);
lean_ctor_set(v___x_1424_, 1, v_snd_1371_);
lean_ctor_set(v___x_1424_, 2, v___x_1377_);
lean_ctor_set(v___x_1424_, 3, v___x_1383_);
lean_ctor_set(v___x_1424_, 4, v___x_1389_);
lean_ctor_set(v___x_1424_, 5, v___x_1395_);
lean_ctor_set(v___x_1424_, 6, v_fst_1399_);
lean_ctor_set(v___x_1424_, 7, v_snd_1400_);
lean_ctor_set(v___x_1424_, 8, v_fst_1404_);
lean_ctor_set(v___x_1424_, 9, v_snd_1405_);
lean_ctor_set(v___x_1424_, 10, v_val_1408_);
lean_ctor_set(v___x_1424_, 11, v_val_1411_);
lean_ctor_set(v___x_1424_, 12, v_val_1414_);
lean_ctor_set(v___x_1424_, 13, v_val_1417_);
lean_ctor_set(v___x_1424_, 14, v_val_1420_);
lean_ctor_set(v___x_1424_, 15, v_r_1366_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1424_);
v___x_1426_ = v___x_1422_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1424_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
static lean_object* _init_lp_ariori_gen1Foundation___closed__0(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1429_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_1430_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_1431_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_1432_ = lp_ariori_VesicaNumber_mk_x27(v___x_1431_, v___x_1430_, v___x_1429_);
return v___x_1432_;
}
}
static lean_object* _init_lp_ariori_gen1Foundation___closed__1(void){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1433_ = lean_obj_once(&lp_ariori_gen1Foundation___closed__0, &lp_ariori_gen1Foundation___closed__0_once, _init_lp_ariori_gen1Foundation___closed__0);
v___x_1434_ = lp_ariori_VesicaNumber_sqrt3;
v___x_1435_ = lp_ariori_VesicaNumber_mul(v___x_1434_, v___x_1433_);
return v___x_1435_;
}
}
static lean_object* _init_lp_ariori_gen1Foundation___closed__2(void){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1436_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_1437_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_1438_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_1439_ = lp_ariori_VesicaNumber_mk_x27(v___x_1438_, v___x_1437_, v___x_1436_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* lp_ariori_gen1Foundation(lean_object* v_r_1440_){
_start:
{
lean_object* v_zero_1441_; lean_object* v_o_1442_; lean_object* v_p_1443_; lean_object* v___x_1444_; 
v_zero_1441_ = lp_ariori_VesicaNumber_zero;
v_o_1442_ = lean_obj_once(&lp_ariori_instInhabitedPoint_default___closed__0, &lp_ariori_instInhabitedPoint_default___closed__0_once, _init_lp_ariori_instInhabitedPoint_default___closed__0);
lean_inc_ref_n(v_r_1440_, 2);
v_p_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_p_1443_, 0, v_r_1440_);
lean_ctor_set(v_p_1443_, 1, v_zero_1441_);
lean_inc_ref(v_p_1443_);
v___x_1444_ = lp_ariori_deriveSquare(v_o_1442_, v_p_1443_, v_r_1440_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v___x_1445_; 
lean_dec_ref(v_p_1443_);
lean_dec_ref(v_r_1440_);
v___x_1445_ = lean_box(0);
return v___x_1445_;
}
else
{
lean_object* v_val_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1531_; 
v_val_1446_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1448_ = v___x_1444_;
v_isShared_1449_ = v_isSharedCheck_1531_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_val_1446_);
lean_dec(v___x_1444_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1531_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v_p1_1450_; lean_object* v_p2_1451_; lean_object* v_p3_1452_; lean_object* v_p4_1453_; lean_object* v_p5_1454_; lean_object* v_p6_1455_; lean_object* v_c1_1456_; lean_object* v_c2_1457_; lean_object* v_c3_1458_; lean_object* v_c4_1459_; lean_object* v_k_1460_; lean_object* v_l_1461_; lean_object* v_m_1462_; lean_object* v_n_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1529_; 
v_p1_1450_ = lean_ctor_get(v_val_1446_, 0);
lean_inc_ref(v_p1_1450_);
v_p2_1451_ = lean_ctor_get(v_val_1446_, 1);
lean_inc_ref(v_p2_1451_);
v_p3_1452_ = lean_ctor_get(v_val_1446_, 2);
lean_inc_ref(v_p3_1452_);
v_p4_1453_ = lean_ctor_get(v_val_1446_, 3);
lean_inc_ref(v_p4_1453_);
v_p5_1454_ = lean_ctor_get(v_val_1446_, 4);
lean_inc_ref(v_p5_1454_);
v_p6_1455_ = lean_ctor_get(v_val_1446_, 5);
lean_inc_ref(v_p6_1455_);
v_c1_1456_ = lean_ctor_get(v_val_1446_, 6);
lean_inc_ref(v_c1_1456_);
v_c2_1457_ = lean_ctor_get(v_val_1446_, 7);
lean_inc_ref_n(v_c2_1457_, 2);
v_c3_1458_ = lean_ctor_get(v_val_1446_, 8);
lean_inc_ref(v_c3_1458_);
v_c4_1459_ = lean_ctor_get(v_val_1446_, 9);
lean_inc_ref_n(v_c4_1459_, 2);
v_k_1460_ = lean_ctor_get(v_val_1446_, 10);
lean_inc_ref_n(v_k_1460_, 2);
v_l_1461_ = lean_ctor_get(v_val_1446_, 11);
lean_inc_ref_n(v_l_1461_, 2);
v_m_1462_ = lean_ctor_get(v_val_1446_, 12);
lean_inc_ref_n(v_m_1462_, 2);
v_n_1463_ = lean_ctor_get(v_val_1446_, 13);
lean_inc_ref_n(v_n_1463_, 2);
lean_dec(v_val_1446_);
lean_inc_ref(v_p_1443_);
v___x_1464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1464_, 0, v_o_1442_);
lean_ctor_set(v___x_1464_, 1, v_p_1443_);
v___x_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1465_, 0, v_p1_1450_);
lean_ctor_set(v___x_1465_, 1, v_p3_1452_);
v___x_1466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1466_, 0, v_p5_1454_);
lean_ctor_set(v___x_1466_, 1, v_p2_1451_);
v___x_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1467_, 0, v_c1_1456_);
lean_ctor_set(v___x_1467_, 1, v_c3_1458_);
v___x_1468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1468_, 0, v_c4_1459_);
lean_ctor_set(v___x_1468_, 1, v_c2_1457_);
v___x_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1469_, 0, v_p4_1453_);
lean_ctor_set(v___x_1469_, 1, v_c2_1457_);
v___x_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1470_, 0, v_p6_1455_);
lean_ctor_set(v___x_1470_, 1, v_c4_1459_);
v___x_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1471_, 0, v_k_1460_);
lean_ctor_set(v___x_1471_, 1, v_l_1461_);
v___x_1472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1472_, 0, v_l_1461_);
lean_ctor_set(v___x_1472_, 1, v_n_1463_);
v___x_1473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1473_, 0, v_n_1463_);
lean_ctor_set(v___x_1473_, 1, v_m_1462_);
v___x_1474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1474_, 0, v_m_1462_);
lean_ctor_set(v___x_1474_, 1, v_k_1460_);
v___x_1475_ = lean_box(0);
v___x_1476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1474_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1473_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1472_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1471_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
v___x_1480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1470_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
v___x_1481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1469_);
lean_ctor_set(v___x_1481_, 1, v___x_1480_);
v___x_1482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1468_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1467_);
lean_ctor_set(v___x_1483_, 1, v___x_1482_);
v___x_1484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1466_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1465_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
v___x_1486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1464_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = lean_obj_once(&lp_ariori_gen1Foundation___closed__0, &lp_ariori_gen1Foundation___closed__0_once, _init_lp_ariori_gen1Foundation___closed__0);
v___x_1488_ = lean_obj_once(&lp_ariori_gen1Foundation___closed__1, &lp_ariori_gen1Foundation___closed__1_once, _init_lp_ariori_gen1Foundation___closed__1);
v___x_1489_ = lean_obj_once(&lp_ariori_gen1Foundation___closed__2, &lp_ariori_gen1Foundation___closed__2_once, _init_lp_ariori_gen1Foundation___closed__2);
v___x_1490_ = lp_ariori_VesicaNumber_mul(v_r_1440_, v___x_1487_);
v___x_1491_ = lp_ariori_VesicaNumber_mul(v_r_1440_, v___x_1488_);
lean_inc_ref_n(v___x_1491_, 10);
lean_inc_ref_n(v___x_1490_, 4);
v___x_1492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1490_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = lp_ariori_VesicaNumber_neg(v___x_1491_);
lean_inc_ref_n(v___x_1493_, 8);
v___x_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1490_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lp_ariori_VesicaNumber_neg(v___x_1490_);
lean_inc_ref_n(v___x_1495_, 3);
v___x_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
lean_ctor_set(v___x_1496_, 1, v___x_1491_);
v___x_1497_ = lp_ariori_VesicaNumber_mul(v_r_1440_, v___x_1489_);
lean_dec_ref(v_r_1440_);
lean_inc_ref(v___x_1497_);
v___x_1498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
lean_ctor_set(v___x_1498_, 1, v___x_1491_);
v___x_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1495_);
lean_ctor_set(v___x_1499_, 1, v___x_1493_);
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1497_);
lean_ctor_set(v___x_1500_, 1, v___x_1493_);
v___x_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1491_);
lean_ctor_set(v___x_1501_, 1, v___x_1490_);
v___x_1502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1493_);
lean_ctor_set(v___x_1502_, 1, v___x_1495_);
v___x_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1491_);
lean_ctor_set(v___x_1503_, 1, v___x_1495_);
v___x_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1493_);
lean_ctor_set(v___x_1504_, 1, v___x_1490_);
v___x_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1493_);
lean_ctor_set(v___x_1505_, 1, v___x_1491_);
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1491_);
lean_ctor_set(v___x_1506_, 1, v___x_1491_);
v___x_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1493_);
lean_ctor_set(v___x_1507_, 1, v___x_1493_);
v___x_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1491_);
lean_ctor_set(v___x_1508_, 1, v___x_1493_);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1491_);
lean_ctor_set(v___x_1509_, 1, v_zero_1441_);
v___x_1510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1509_);
lean_ctor_set(v___x_1510_, 1, v___x_1475_);
v___x_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1508_);
lean_ctor_set(v___x_1511_, 1, v___x_1510_);
v___x_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1507_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1506_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
v___x_1514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1505_);
lean_ctor_set(v___x_1514_, 1, v___x_1513_);
v___x_1515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1504_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1503_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
v___x_1517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1502_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
v___x_1518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1501_);
lean_ctor_set(v___x_1518_, 1, v___x_1517_);
v___x_1519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1500_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1499_);
lean_ctor_set(v___x_1520_, 1, v___x_1519_);
v___x_1521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1498_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1496_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
v___x_1523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1494_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1492_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1525_, 0, v_p_1443_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1526_, 0, v_o_1442_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
lean_ctor_set(v___x_1527_, 1, v___x_1486_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1527_);
v___x_1529_ = v___x_1448_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1527_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___lam__0(uint8_t v___x_1532_, lean_object* v_a_1533_, lean_object* v_b_1534_){
_start:
{
lean_object* v_x_1535_; lean_object* v_y_1536_; lean_object* v_x_1537_; lean_object* v_y_1538_; uint8_t v___x_1539_; 
v_x_1535_ = lean_ctor_get(v_a_1533_, 0);
v_y_1536_ = lean_ctor_get(v_a_1533_, 1);
v_x_1537_ = lean_ctor_get(v_b_1534_, 0);
v_y_1538_ = lean_ctor_get(v_b_1534_, 1);
v___x_1539_ = lp_ariori_vLt(v_x_1535_, v_x_1537_);
if (v___x_1539_ == 0)
{
uint8_t v___x_1540_; 
v___x_1540_ = lp_ariori_vGt(v_x_1535_, v_x_1537_);
if (v___x_1540_ == 0)
{
uint8_t v___x_1541_; 
v___x_1541_ = lp_ariori_vLt(v_y_1536_, v_y_1538_);
if (v___x_1541_ == 0)
{
return v___x_1541_;
}
else
{
return v___x_1532_;
}
}
else
{
return v___x_1539_;
}
}
else
{
return v___x_1532_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___lam__0___boxed(lean_object* v___x_1542_, lean_object* v_a_1543_, lean_object* v_b_1544_){
_start:
{
uint8_t v___x_202__boxed_1545_; uint8_t v_res_1546_; lean_object* v_r_1547_; 
v___x_202__boxed_1545_ = lean_unbox(v___x_1542_);
v_res_1546_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___lam__0(v___x_202__boxed_1545_, v_a_1543_, v_b_1544_);
lean_dec_ref(v_b_1544_);
lean_dec_ref(v_a_1543_);
v_r_1547_ = lean_box(v_res_1546_);
return v_r_1547_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg(lean_object* v_as_1548_, lean_object* v_lo_1549_, lean_object* v_hi_1550_){
_start:
{
uint8_t v___x_1551_; 
v___x_1551_ = lean_nat_dec_lt(v_lo_1549_, v_hi_1550_);
if (v___x_1551_ == 0)
{
lean_dec(v_lo_1549_);
return v_as_1548_;
}
else
{
lean_object* v___x_1552_; lean_object* v___f_1553_; lean_object* v___x_1554_; lean_object* v_fst_1555_; lean_object* v_snd_1556_; uint8_t v___x_1557_; 
v___x_1552_ = lean_box(v___x_1551_);
v___f_1553_ = lean_alloc_closure((void*)(lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1553_, 0, v___x_1552_);
lean_inc(v_lo_1549_);
v___x_1554_ = l_Array_qpartition___redArg(v_as_1548_, v___f_1553_, v_lo_1549_, v_hi_1550_);
v_fst_1555_ = lean_ctor_get(v___x_1554_, 0);
lean_inc(v_fst_1555_);
v_snd_1556_ = lean_ctor_get(v___x_1554_, 1);
lean_inc(v_snd_1556_);
lean_dec_ref(v___x_1554_);
v___x_1557_ = lean_nat_dec_le(v_hi_1550_, v_fst_1555_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1558_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg(v_snd_1556_, v_lo_1549_, v_fst_1555_);
v___x_1559_ = lean_unsigned_to_nat(1u);
v___x_1560_ = lean_nat_add(v_fst_1555_, v___x_1559_);
lean_dec(v_fst_1555_);
v_as_1548_ = v___x_1558_;
v_lo_1549_ = v___x_1560_;
goto _start;
}
else
{
lean_dec(v_fst_1555_);
lean_dec(v_lo_1549_);
return v_snd_1556_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg___boxed(lean_object* v_as_1562_, lean_object* v_lo_1563_, lean_object* v_hi_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg(v_as_1562_, v_lo_1563_, v_hi_1564_);
lean_dec(v_hi_1564_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* lp_ariori_sortPointsOnSegment(lean_object* v_pts_1566_){
_start:
{
lean_object* v_ptsArr_1567_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___x_1573_; lean_object* v___x_1574_; uint8_t v___x_1575_; 
v_ptsArr_1567_ = lean_array_mk(v_pts_1566_);
v___x_1573_ = lean_array_get_size(v_ptsArr_1567_);
v___x_1574_ = lean_unsigned_to_nat(0u);
v___x_1575_ = lean_nat_dec_eq(v___x_1573_, v___x_1574_);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___y_1579_; uint8_t v___x_1581_; 
v___x_1576_ = lean_unsigned_to_nat(1u);
v___x_1577_ = lean_nat_sub(v___x_1573_, v___x_1576_);
v___x_1581_ = lean_nat_dec_le(v___x_1574_, v___x_1577_);
if (v___x_1581_ == 0)
{
lean_inc(v___x_1577_);
v___y_1579_ = v___x_1577_;
goto v___jp_1578_;
}
else
{
v___y_1579_ = v___x_1574_;
goto v___jp_1578_;
}
v___jp_1578_:
{
uint8_t v___x_1580_; 
v___x_1580_ = lean_nat_dec_le(v___y_1579_, v___x_1577_);
if (v___x_1580_ == 0)
{
lean_dec(v___x_1577_);
lean_inc(v___y_1579_);
v___y_1569_ = v___y_1579_;
v___y_1570_ = v___y_1579_;
goto v___jp_1568_;
}
else
{
v___y_1569_ = v___y_1579_;
v___y_1570_ = v___x_1577_;
goto v___jp_1568_;
}
}
}
else
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_array_to_list(v_ptsArr_1567_);
return v___x_1582_;
}
v___jp_1568_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg(v_ptsArr_1567_, v___y_1569_, v___y_1570_);
lean_dec(v___y_1570_);
v___x_1572_ = lean_array_to_list(v___x_1571_);
return v___x_1572_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0(lean_object* v_n_1583_, lean_object* v_as_1584_, lean_object* v_lo_1585_, lean_object* v_hi_1586_, lean_object* v_w_1587_, lean_object* v_hlo_1588_, lean_object* v_hhi_1589_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___redArg(v_as_1584_, v_lo_1585_, v_hi_1586_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0___boxed(lean_object* v_n_1591_, lean_object* v_as_1592_, lean_object* v_lo_1593_, lean_object* v_hi_1594_, lean_object* v_w_1595_, lean_object* v_hlo_1596_, lean_object* v_hhi_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00sortPointsOnSegment_spec__0(v_n_1591_, v_as_1592_, v_lo_1593_, v_hi_1594_, v_w_1595_, v_hlo_1596_, v_hhi_1597_);
lean_dec(v_hi_1594_);
lean_dec(v_n_1591_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* lp_ariori_splitSegment_makePairs(lean_object* v_lst_1599_){
_start:
{
if (lean_obj_tag(v_lst_1599_) == 0)
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_box(0);
return v___x_1600_;
}
else
{
lean_object* v_tail_1601_; 
v_tail_1601_ = lean_ctor_get(v_lst_1599_, 1);
lean_inc(v_tail_1601_);
if (lean_obj_tag(v_tail_1601_) == 0)
{
lean_object* v___x_1602_; 
lean_dec_ref(v_lst_1599_);
v___x_1602_ = lean_box(0);
return v___x_1602_;
}
else
{
lean_object* v_head_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1613_; 
v_head_1603_ = lean_ctor_get(v_lst_1599_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_lst_1599_);
if (v_isSharedCheck_1613_ == 0)
{
lean_object* v_unused_1614_; 
v_unused_1614_ = lean_ctor_get(v_lst_1599_, 1);
lean_dec(v_unused_1614_);
v___x_1605_ = v_lst_1599_;
v_isShared_1606_ = v_isSharedCheck_1613_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_head_1603_);
lean_dec(v_lst_1599_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1613_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v_head_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1611_; 
v_head_1607_ = lean_ctor_get(v_tail_1601_, 0);
lean_inc(v_head_1607_);
v___x_1608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1608_, 0, v_head_1603_);
lean_ctor_set(v___x_1608_, 1, v_head_1607_);
v___x_1609_ = lp_ariori_splitSegment_makePairs(v_tail_1601_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 1, v___x_1609_);
lean_ctor_set(v___x_1605_, 0, v___x_1608_);
v___x_1611_ = v___x_1605_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v___x_1608_);
lean_ctor_set(v_reuseFailAlloc_1612_, 1, v___x_1609_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00splitSegment_spec__0(lean_object* v_seg_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
if (lean_obj_tag(v_a_1616_) == 0)
{
lean_object* v___x_1618_; 
v___x_1618_ = l_List_reverse___redArg(v_a_1617_);
return v___x_1618_;
}
else
{
lean_object* v_head_1619_; lean_object* v_tail_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1632_; 
v_head_1619_ = lean_ctor_get(v_a_1616_, 0);
v_tail_1620_ = lean_ctor_get(v_a_1616_, 1);
v_isSharedCheck_1632_ = !lean_is_exclusive(v_a_1616_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1622_ = v_a_1616_;
v_isShared_1623_ = v_isSharedCheck_1632_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_tail_1620_);
lean_inc(v_head_1619_);
lean_dec(v_a_1616_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1632_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v_p1_1624_; lean_object* v_p2_1625_; uint8_t v___x_1626_; 
v_p1_1624_ = lean_ctor_get(v_seg_1615_, 0);
v_p2_1625_ = lean_ctor_get(v_seg_1615_, 1);
v___x_1626_ = lp_ariori_Point_onSegment(v_head_1619_, v_p1_1624_, v_p2_1625_);
if (v___x_1626_ == 0)
{
lean_del_object(v___x_1622_);
lean_dec(v_head_1619_);
v_a_1616_ = v_tail_1620_;
goto _start;
}
else
{
lean_object* v___x_1629_; 
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 1, v_a_1617_);
v___x_1629_ = v___x_1622_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_head_1619_);
lean_ctor_set(v_reuseFailAlloc_1631_, 1, v_a_1617_);
v___x_1629_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
v_a_1616_ = v_tail_1620_;
v_a_1617_ = v___x_1629_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00splitSegment_spec__0___boxed(lean_object* v_seg_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = lp_ariori_List_filterTR_loop___at___00splitSegment_spec__0(v_seg_1633_, v_a_1634_, v_a_1635_);
lean_dec_ref(v_seg_1633_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* lp_ariori_splitSegment(lean_object* v_seg_1637_, lean_object* v_allPoints_1638_){
_start:
{
lean_object* v___x_1639_; lean_object* v_onSeg_1640_; lean_object* v_sorted_1641_; lean_object* v___x_1642_; 
v___x_1639_ = lean_box(0);
v_onSeg_1640_ = lp_ariori_List_filterTR_loop___at___00splitSegment_spec__0(v_seg_1637_, v_allPoints_1638_, v___x_1639_);
v_sorted_1641_ = lp_ariori_sortPointsOnSegment(v_onSeg_1640_);
v___x_1642_ = lp_ariori_splitSegment_makePairs(v_sorted_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* lp_ariori_splitSegment___boxed(lean_object* v_seg_1643_, lean_object* v_allPoints_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = lp_ariori_splitSegment(v_seg_1643_, v_allPoints_1644_);
lean_dec_ref(v_seg_1643_);
return v_res_1645_;
}
}
LEAN_EXPORT uint8_t lp_ariori_List_elem___at___00atomicSpectrum_dedup_spec__0(lean_object* v_a_1646_, lean_object* v_x_1647_){
_start:
{
if (lean_obj_tag(v_x_1647_) == 0)
{
uint8_t v___x_1648_; 
v___x_1648_ = 0;
return v___x_1648_;
}
else
{
lean_object* v_head_1649_; lean_object* v_tail_1650_; uint8_t v___x_1651_; 
v_head_1649_ = lean_ctor_get(v_x_1647_, 0);
v_tail_1650_ = lean_ctor_get(v_x_1647_, 1);
v___x_1651_ = lp_ariori_instBEqSegment_beq(v_a_1646_, v_head_1649_);
if (v___x_1651_ == 0)
{
v_x_1647_ = v_tail_1650_;
goto _start;
}
else
{
return v___x_1651_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_elem___at___00atomicSpectrum_dedup_spec__0___boxed(lean_object* v_a_1653_, lean_object* v_x_1654_){
_start:
{
uint8_t v_res_1655_; lean_object* v_r_1656_; 
v_res_1655_ = lp_ariori_List_elem___at___00atomicSpectrum_dedup_spec__0(v_a_1653_, v_x_1654_);
lean_dec(v_x_1654_);
lean_dec_ref(v_a_1653_);
v_r_1656_ = lean_box(v_res_1655_);
return v_r_1656_;
}
}
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum_dedup(lean_object* v_lst_1657_, lean_object* v_acc_1658_){
_start:
{
if (lean_obj_tag(v_lst_1657_) == 0)
{
return v_acc_1658_;
}
else
{
lean_object* v_head_1659_; lean_object* v_tail_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1670_; 
v_head_1659_ = lean_ctor_get(v_lst_1657_, 0);
v_tail_1660_ = lean_ctor_get(v_lst_1657_, 1);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_lst_1657_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1662_ = v_lst_1657_;
v_isShared_1663_ = v_isSharedCheck_1670_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_tail_1660_);
lean_inc(v_head_1659_);
lean_dec(v_lst_1657_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1670_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
uint8_t v___x_1664_; 
v___x_1664_ = lp_ariori_List_elem___at___00atomicSpectrum_dedup_spec__0(v_head_1659_, v_acc_1658_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1666_; 
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 1, v_acc_1658_);
v___x_1666_ = v___x_1662_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_head_1659_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_acc_1658_);
v___x_1666_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
v_lst_1657_ = v_tail_1660_;
v_acc_1658_ = v___x_1666_;
goto _start;
}
}
else
{
lean_del_object(v___x_1662_);
lean_dec(v_head_1659_);
v_lst_1657_ = v_tail_1660_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum_insertFreq(lean_object* v_item_1671_, lean_object* v_acc_1672_){
_start:
{
if (lean_obj_tag(v_acc_1672_) == 0)
{
lean_object* v_fst_1673_; lean_object* v_snd_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1684_; 
v_fst_1673_ = lean_ctor_get(v_item_1671_, 0);
v_snd_1674_ = lean_ctor_get(v_item_1671_, 1);
v_isSharedCheck_1684_ = !lean_is_exclusive(v_item_1671_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1676_ = v_item_1671_;
v_isShared_1677_ = v_isSharedCheck_1684_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_snd_1674_);
lean_inc(v_fst_1673_);
lean_dec(v_item_1671_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1684_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1678_; lean_object* v___x_1680_; 
v___x_1678_ = lean_unsigned_to_nat(1u);
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1678_);
lean_ctor_set(v___x_1676_, 0, v_snd_1674_);
v___x_1680_ = v___x_1676_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_snd_1674_);
lean_ctor_set(v_reuseFailAlloc_1683_, 1, v___x_1678_);
v___x_1680_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1681_, 0, v_fst_1673_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
v___x_1682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
lean_ctor_set(v___x_1682_, 1, v_acc_1672_);
return v___x_1682_;
}
}
}
else
{
lean_object* v_head_1685_; lean_object* v_snd_1686_; lean_object* v_tail_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1721_; 
v_head_1685_ = lean_ctor_get(v_acc_1672_, 0);
lean_inc(v_head_1685_);
v_snd_1686_ = lean_ctor_get(v_head_1685_, 1);
lean_inc(v_snd_1686_);
v_tail_1687_ = lean_ctor_get(v_acc_1672_, 1);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_acc_1672_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; 
v_unused_1722_ = lean_ctor_get(v_acc_1672_, 0);
lean_dec(v_unused_1722_);
v___x_1689_ = v_acc_1672_;
v_isShared_1690_ = v_isSharedCheck_1721_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_tail_1687_);
lean_dec(v_acc_1672_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1721_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v_fst_1691_; lean_object* v_fst_1692_; lean_object* v_snd_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1720_; 
v_fst_1691_ = lean_ctor_get(v_head_1685_, 0);
v_fst_1692_ = lean_ctor_get(v_snd_1686_, 0);
v_snd_1693_ = lean_ctor_get(v_snd_1686_, 1);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_snd_1686_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1695_ = v_snd_1686_;
v_isShared_1696_ = v_isSharedCheck_1720_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_snd_1693_);
lean_inc(v_fst_1692_);
lean_dec(v_snd_1686_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1720_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v_fst_1697_; uint8_t v___x_1698_; 
v_fst_1697_ = lean_ctor_get(v_item_1671_, 0);
v___x_1698_ = lp_ariori_VesicaNumber_beq(v_fst_1691_, v_fst_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
lean_del_object(v___x_1695_);
lean_dec(v_snd_1693_);
lean_dec(v_fst_1692_);
v___x_1699_ = lp_ariori_atomicSpectrum_insertFreq(v_item_1671_, v_tail_1687_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 1, v___x_1699_);
v___x_1701_ = v___x_1689_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_head_1685_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
else
{
lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1717_; 
lean_inc(v_fst_1691_);
lean_dec(v_head_1685_);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_item_1671_);
if (v_isSharedCheck_1717_ == 0)
{
lean_object* v_unused_1718_; lean_object* v_unused_1719_; 
v_unused_1718_ = lean_ctor_get(v_item_1671_, 1);
lean_dec(v_unused_1718_);
v_unused_1719_ = lean_ctor_get(v_item_1671_, 0);
lean_dec(v_unused_1719_);
v___x_1704_ = v_item_1671_;
v_isShared_1705_ = v_isSharedCheck_1717_;
goto v_resetjp_1703_;
}
else
{
lean_dec(v_item_1671_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1717_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1709_; 
v___x_1706_ = lean_unsigned_to_nat(1u);
v___x_1707_ = lean_nat_add(v_snd_1693_, v___x_1706_);
lean_dec(v_snd_1693_);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 1, v___x_1707_);
lean_ctor_set(v___x_1704_, 0, v_fst_1692_);
v___x_1709_ = v___x_1704_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_fst_1692_);
lean_ctor_set(v_reuseFailAlloc_1716_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
lean_object* v___x_1711_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 1, v___x_1709_);
lean_ctor_set(v___x_1695_, 0, v_fst_1691_);
v___x_1711_ = v___x_1695_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_fst_1691_);
lean_ctor_set(v_reuseFailAlloc_1715_, 1, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1713_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1711_);
v___x_1713_ = v___x_1689_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v___x_1711_);
lean_ctor_set(v_reuseFailAlloc_1714_, 1, v_tail_1687_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00atomicSpectrum_spec__3(lean_object* v_x_1723_, lean_object* v_x_1724_){
_start:
{
if (lean_obj_tag(v_x_1724_) == 0)
{
return v_x_1723_;
}
else
{
lean_object* v_head_1725_; lean_object* v_tail_1726_; lean_object* v___x_1727_; 
v_head_1725_ = lean_ctor_get(v_x_1724_, 0);
lean_inc(v_head_1725_);
v_tail_1726_ = lean_ctor_get(v_x_1724_, 1);
lean_inc(v_tail_1726_);
lean_dec_ref(v_x_1724_);
v___x_1727_ = lp_ariori_atomicSpectrum_insertFreq(v_head_1725_, v_x_1723_);
v_x_1723_ = v___x_1727_;
v_x_1724_ = v_tail_1726_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___lam__0(lean_object* v_a_1729_, lean_object* v_b_1730_){
_start:
{
lean_object* v_fst_1731_; lean_object* v_fst_1732_; uint8_t v___x_1733_; 
v_fst_1731_ = lean_ctor_get(v_a_1729_, 0);
v_fst_1732_ = lean_ctor_get(v_b_1730_, 0);
v___x_1733_ = lp_ariori_vLt(v_fst_1731_, v_fst_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___lam__0___boxed(lean_object* v_a_1734_, lean_object* v_b_1735_){
_start:
{
uint8_t v_res_1736_; lean_object* v_r_1737_; 
v_res_1736_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___lam__0(v_a_1734_, v_b_1735_);
lean_dec_ref(v_b_1735_);
lean_dec_ref(v_a_1734_);
v_r_1737_ = lean_box(v_res_1736_);
return v_r_1737_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg(lean_object* v_as_1739_, lean_object* v_lo_1740_, lean_object* v_hi_1741_){
_start:
{
uint8_t v___x_1742_; 
v___x_1742_ = lean_nat_dec_lt(v_lo_1740_, v_hi_1741_);
if (v___x_1742_ == 0)
{
lean_dec(v_lo_1740_);
return v_as_1739_;
}
else
{
lean_object* v___f_1743_; lean_object* v___x_1744_; lean_object* v_fst_1745_; lean_object* v_snd_1746_; uint8_t v___x_1747_; 
v___f_1743_ = ((lean_object*)(lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___closed__0));
lean_inc(v_lo_1740_);
v___x_1744_ = l_Array_qpartition___redArg(v_as_1739_, v___f_1743_, v_lo_1740_, v_hi_1741_);
v_fst_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_fst_1745_);
v_snd_1746_ = lean_ctor_get(v___x_1744_, 1);
lean_inc(v_snd_1746_);
lean_dec_ref(v___x_1744_);
v___x_1747_ = lean_nat_dec_le(v_hi_1741_, v_fst_1745_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1748_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg(v_snd_1746_, v_lo_1740_, v_fst_1745_);
v___x_1749_ = lean_unsigned_to_nat(1u);
v___x_1750_ = lean_nat_add(v_fst_1745_, v___x_1749_);
lean_dec(v_fst_1745_);
v_as_1739_ = v___x_1748_;
v_lo_1740_ = v___x_1750_;
goto _start;
}
else
{
lean_dec(v_fst_1745_);
lean_dec(v_lo_1740_);
return v_snd_1746_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg___boxed(lean_object* v_as_1752_, lean_object* v_lo_1753_, lean_object* v_hi_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg(v_as_1752_, v_lo_1753_, v_hi_1754_);
lean_dec(v_hi_1754_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00atomicSpectrum_spec__1(lean_object* v_a_1756_, lean_object* v_a_1757_){
_start:
{
if (lean_obj_tag(v_a_1756_) == 0)
{
lean_object* v___x_1758_; 
v___x_1758_ = l_List_reverse___redArg(v_a_1757_);
return v___x_1758_;
}
else
{
lean_object* v_head_1759_; lean_object* v_tail_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1790_; 
v_head_1759_ = lean_ctor_get(v_a_1756_, 0);
v_tail_1760_ = lean_ctor_get(v_a_1756_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v_a_1756_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1762_ = v_a_1756_;
v_isShared_1763_ = v_isSharedCheck_1790_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_tail_1760_);
lean_inc(v_head_1759_);
lean_dec(v_a_1756_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1790_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___y_1765_; lean_object* v_p1_1770_; lean_object* v_p2_1771_; uint8_t v___y_1773_; lean_object* v_x_1783_; lean_object* v_y_1784_; lean_object* v_x_1785_; lean_object* v_y_1786_; uint8_t v___x_1787_; 
v_p1_1770_ = lean_ctor_get(v_head_1759_, 0);
v_p2_1771_ = lean_ctor_get(v_head_1759_, 1);
v_x_1783_ = lean_ctor_get(v_p1_1770_, 0);
v_y_1784_ = lean_ctor_get(v_p1_1770_, 1);
v_x_1785_ = lean_ctor_get(v_p2_1771_, 0);
v_y_1786_ = lean_ctor_get(v_p2_1771_, 1);
v___x_1787_ = lp_ariori_vLt(v_x_1783_, v_x_1785_);
if (v___x_1787_ == 0)
{
uint8_t v___x_1788_; 
v___x_1788_ = lp_ariori_VesicaNumber_beq(v_x_1783_, v_x_1785_);
if (v___x_1788_ == 0)
{
v___y_1773_ = v___x_1788_;
goto v___jp_1772_;
}
else
{
uint8_t v___x_1789_; 
v___x_1789_ = lp_ariori_vLt(v_y_1784_, v_y_1786_);
v___y_1773_ = v___x_1789_;
goto v___jp_1772_;
}
}
else
{
v___y_1773_ = v___x_1787_;
goto v___jp_1772_;
}
v___jp_1764_:
{
lean_object* v___x_1767_; 
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 1, v_a_1757_);
lean_ctor_set(v___x_1762_, 0, v___y_1765_);
v___x_1767_ = v___x_1762_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v___y_1765_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v_a_1757_);
v___x_1767_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
v_a_1756_ = v_tail_1760_;
v_a_1757_ = v___x_1767_;
goto _start;
}
}
v___jp_1772_:
{
if (v___y_1773_ == 0)
{
lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_inc_ref(v_p2_1771_);
lean_inc_ref(v_p1_1770_);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_head_1759_);
if (v_isSharedCheck_1780_ == 0)
{
lean_object* v_unused_1781_; lean_object* v_unused_1782_; 
v_unused_1781_ = lean_ctor_get(v_head_1759_, 1);
lean_dec(v_unused_1781_);
v_unused_1782_ = lean_ctor_get(v_head_1759_, 0);
lean_dec(v_unused_1782_);
v___x_1775_ = v_head_1759_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_dec(v_head_1759_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 1, v_p1_1770_);
lean_ctor_set(v___x_1775_, 0, v_p2_1771_);
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_p2_1771_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v_p1_1770_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
v___y_1765_ = v___x_1778_;
goto v___jp_1764_;
}
}
}
else
{
v___y_1765_ = v_head_1759_;
goto v___jp_1764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00atomicSpectrum_spec__0(lean_object* v_points_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
if (lean_obj_tag(v_a_1792_) == 0)
{
lean_object* v___x_1794_; 
lean_dec(v_points_1791_);
v___x_1794_ = lean_array_to_list(v_a_1793_);
return v___x_1794_;
}
else
{
lean_object* v_head_1795_; lean_object* v_tail_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v_head_1795_ = lean_ctor_get(v_a_1792_, 0);
v_tail_1796_ = lean_ctor_get(v_a_1792_, 1);
lean_inc(v_points_1791_);
v___x_1797_ = lp_ariori_splitSegment(v_head_1795_, v_points_1791_);
v___x_1798_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1793_, v___x_1797_);
v_a_1792_ = v_tail_1796_;
v_a_1793_ = v___x_1798_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00atomicSpectrum_spec__0___boxed(lean_object* v_points_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00atomicSpectrum_spec__0(v_points_1800_, v_a_1801_, v_a_1802_);
lean_dec(v_a_1801_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00atomicSpectrum_spec__2(lean_object* v_r_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_){
_start:
{
if (lean_obj_tag(v_a_1805_) == 0)
{
lean_object* v___x_1807_; 
v___x_1807_ = lean_array_to_list(v_a_1806_);
return v___x_1807_;
}
else
{
lean_object* v_head_1808_; lean_object* v_tail_1809_; lean_object* v_p1_1810_; lean_object* v_p2_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1827_; 
v_head_1808_ = lean_ctor_get(v_a_1805_, 0);
lean_inc(v_head_1808_);
v_tail_1809_ = lean_ctor_get(v_a_1805_, 1);
lean_inc(v_tail_1809_);
lean_dec_ref(v_a_1805_);
v_p1_1810_ = lean_ctor_get(v_head_1808_, 0);
v_p2_1811_ = lean_ctor_get(v_head_1808_, 1);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_head_1808_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1813_ = v_head_1808_;
v_isShared_1814_ = v_isSharedCheck_1827_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_p2_1811_);
lean_inc(v_p1_1810_);
lean_dec(v_head_1808_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1827_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v_distSq_1815_; lean_object* v___x_1816_; 
v_distSq_1815_ = lp_ariori_Point_distSq(v_p1_1810_, v_p2_1811_);
lean_dec_ref(v_p2_1811_);
lean_dec_ref(v_p1_1810_);
v___x_1816_ = lp_ariori_VesicaNumber_vesicaSqrt(v_distSq_1815_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_del_object(v___x_1813_);
v_a_1805_ = v_tail_1809_;
goto _start;
}
else
{
lean_object* v_val_1818_; lean_object* v_ratio_1819_; uint8_t v___x_1820_; 
v_val_1818_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_val_1818_);
lean_dec_ref(v___x_1816_);
v_ratio_1819_ = lp_ariori_VesicaNumber_div(v_val_1818_, v_r_1804_);
v___x_1820_ = lp_ariori_VesicaNumber_isZero(v_ratio_1819_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1822_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 1, v_val_1818_);
lean_ctor_set(v___x_1813_, 0, v_ratio_1819_);
v___x_1822_ = v___x_1813_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_ratio_1819_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v_val_1818_);
v___x_1822_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_array_push(v_a_1806_, v___x_1822_);
v_a_1805_ = v_tail_1809_;
v_a_1806_ = v___x_1823_;
goto _start;
}
}
else
{
lean_dec_ref(v_ratio_1819_);
lean_dec(v_val_1818_);
lean_del_object(v___x_1813_);
v_a_1805_ = v_tail_1809_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00atomicSpectrum_spec__2___boxed(lean_object* v_r_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = lp_ariori_List_filterMapTR_go___at___00atomicSpectrum_spec__2(v_r_1828_, v_a_1829_, v_a_1830_);
lean_dec_ref(v_r_1828_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum(lean_object* v_points_1834_, lean_object* v_segments_1835_, lean_object* v_r_1836_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v_splitSegs_1839_; lean_object* v___x_1840_; lean_object* v_normSegs_1841_; lean_object* v_uniqueSegs_1842_; lean_object* v_ratios_1843_; lean_object* v_freqList_1844_; lean_object* v_freqArr_1845_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1837_ = lean_unsigned_to_nat(0u);
v___x_1838_ = ((lean_object*)(lp_ariori_atomicSpectrum___closed__0));
v_splitSegs_1839_ = lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00atomicSpectrum_spec__0(v_points_1834_, v_segments_1835_, v___x_1838_);
v___x_1840_ = lean_box(0);
v_normSegs_1841_ = lp_ariori_List_mapTR_loop___at___00atomicSpectrum_spec__1(v_splitSegs_1839_, v___x_1840_);
v_uniqueSegs_1842_ = lp_ariori_atomicSpectrum_dedup(v_normSegs_1841_, v___x_1840_);
v_ratios_1843_ = lp_ariori_List_filterMapTR_go___at___00atomicSpectrum_spec__2(v_r_1836_, v_uniqueSegs_1842_, v___x_1838_);
v_freqList_1844_ = lp_ariori_List_foldl___at___00atomicSpectrum_spec__3(v___x_1840_, v_ratios_1843_);
v_freqArr_1845_ = lean_array_mk(v_freqList_1844_);
v___x_1851_ = lean_array_get_size(v_freqArr_1845_);
v___x_1852_ = lean_nat_dec_eq(v___x_1851_, v___x_1837_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___y_1856_; uint8_t v___x_1858_; 
v___x_1853_ = lean_unsigned_to_nat(1u);
v___x_1854_ = lean_nat_sub(v___x_1851_, v___x_1853_);
v___x_1858_ = lean_nat_dec_le(v___x_1837_, v___x_1854_);
if (v___x_1858_ == 0)
{
lean_inc(v___x_1854_);
v___y_1856_ = v___x_1854_;
goto v___jp_1855_;
}
else
{
v___y_1856_ = v___x_1837_;
goto v___jp_1855_;
}
v___jp_1855_:
{
uint8_t v___x_1857_; 
v___x_1857_ = lean_nat_dec_le(v___y_1856_, v___x_1854_);
if (v___x_1857_ == 0)
{
lean_dec(v___x_1854_);
lean_inc(v___y_1856_);
v___y_1847_ = v___y_1856_;
v___y_1848_ = v___y_1856_;
goto v___jp_1846_;
}
else
{
v___y_1847_ = v___y_1856_;
v___y_1848_ = v___x_1854_;
goto v___jp_1846_;
}
}
}
else
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_array_to_list(v_freqArr_1845_);
return v___x_1859_;
}
v___jp_1846_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg(v_freqArr_1845_, v___y_1847_, v___y_1848_);
lean_dec(v___y_1848_);
v___x_1850_ = lean_array_to_list(v___x_1849_);
return v___x_1850_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_atomicSpectrum___boxed(lean_object* v_points_1860_, lean_object* v_segments_1861_, lean_object* v_r_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = lp_ariori_atomicSpectrum(v_points_1860_, v_segments_1861_, v_r_1862_);
lean_dec_ref(v_r_1862_);
lean_dec(v_segments_1861_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4(lean_object* v_n_1864_, lean_object* v_as_1865_, lean_object* v_lo_1866_, lean_object* v_hi_1867_, lean_object* v_w_1868_, lean_object* v_hlo_1869_, lean_object* v_hhi_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___redArg(v_as_1865_, v_lo_1866_, v_hi_1867_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4___boxed(lean_object* v_n_1872_, lean_object* v_as_1873_, lean_object* v_lo_1874_, lean_object* v_hi_1875_, lean_object* v_w_1876_, lean_object* v_hlo_1877_, lean_object* v_hhi_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = lp_ariori___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00atomicSpectrum_spec__4(v_n_1872_, v_as_1873_, v_lo_1874_, v_hi_1875_, v_w_1876_, v_hlo_1877_, v_hhi_1878_);
lean_dec(v_hi_1875_);
lean_dec(v_n_1872_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* lp_ariori_mapPointToSegmentAxis(lean_object* v_localPt_1880_, lean_object* v_axis_1881_, lean_object* v_dist_1882_){
_start:
{
lean_object* v_p2_1883_; lean_object* v_p1_1884_; lean_object* v_x_1885_; lean_object* v_y_1886_; lean_object* v_x_1887_; lean_object* v_y_1888_; lean_object* v_x_1889_; lean_object* v_y_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1909_; 
v_p2_1883_ = lean_ctor_get(v_axis_1881_, 1);
v_p1_1884_ = lean_ctor_get(v_axis_1881_, 0);
v_x_1885_ = lean_ctor_get(v_p2_1883_, 0);
v_y_1886_ = lean_ctor_get(v_p2_1883_, 1);
v_x_1887_ = lean_ctor_get(v_p1_1884_, 0);
v_y_1888_ = lean_ctor_get(v_p1_1884_, 1);
v_x_1889_ = lean_ctor_get(v_localPt_1880_, 0);
v_y_1890_ = lean_ctor_get(v_localPt_1880_, 1);
v_isSharedCheck_1909_ = !lean_is_exclusive(v_localPt_1880_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1892_ = v_localPt_1880_;
v_isShared_1893_ = v_isSharedCheck_1909_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_y_1890_);
lean_inc(v_x_1889_);
lean_dec(v_localPt_1880_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1909_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v_dx_1894_; lean_object* v_dy_1895_; lean_object* v_xComp_1896_; lean_object* v_yComp_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v_worldX_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v_worldY_1905_; lean_object* v___x_1907_; 
v_dx_1894_ = lp_ariori_VesicaNumber_sub(v_x_1885_, v_x_1887_);
v_dy_1895_ = lp_ariori_VesicaNumber_sub(v_y_1886_, v_y_1888_);
v_xComp_1896_ = lp_ariori_VesicaNumber_div(v_x_1889_, v_dist_1882_);
lean_dec_ref(v_x_1889_);
v_yComp_1897_ = lp_ariori_VesicaNumber_div(v_y_1890_, v_dist_1882_);
lean_dec_ref(v_y_1890_);
v___x_1898_ = lp_ariori_VesicaNumber_mul(v_xComp_1896_, v_dx_1894_);
v___x_1899_ = lp_ariori_VesicaNumber_add(v_x_1887_, v___x_1898_);
lean_dec_ref(v___x_1898_);
v___x_1900_ = lp_ariori_VesicaNumber_mul(v_yComp_1897_, v_dy_1895_);
v_worldX_1901_ = lp_ariori_VesicaNumber_sub(v___x_1899_, v___x_1900_);
lean_dec_ref(v___x_1900_);
lean_dec_ref(v___x_1899_);
v___x_1902_ = lp_ariori_VesicaNumber_mul(v_xComp_1896_, v_dy_1895_);
lean_dec_ref(v_dy_1895_);
lean_dec_ref(v_xComp_1896_);
v___x_1903_ = lp_ariori_VesicaNumber_add(v_y_1888_, v___x_1902_);
lean_dec_ref(v___x_1902_);
v___x_1904_ = lp_ariori_VesicaNumber_mul(v_yComp_1897_, v_dx_1894_);
lean_dec_ref(v_dx_1894_);
lean_dec_ref(v_yComp_1897_);
v_worldY_1905_ = lp_ariori_VesicaNumber_add(v___x_1903_, v___x_1904_);
lean_dec_ref(v___x_1904_);
lean_dec_ref(v___x_1903_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v_worldY_1905_);
lean_ctor_set(v___x_1892_, 0, v_worldX_1901_);
v___x_1907_ = v___x_1892_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_worldX_1901_);
lean_ctor_set(v_reuseFailAlloc_1908_, 1, v_worldY_1905_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_mapPointToSegmentAxis___boxed(lean_object* v_localPt_1910_, lean_object* v_axis_1911_, lean_object* v_dist_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = lp_ariori_mapPointToSegmentAxis(v_localPt_1910_, v_axis_1911_, v_dist_1912_);
lean_dec_ref(v_dist_1912_);
lean_dec_ref(v_axis_1911_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__1(lean_object* v_axis_1914_, lean_object* v_dist_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_){
_start:
{
if (lean_obj_tag(v_a_1916_) == 0)
{
lean_object* v___x_1918_; 
v___x_1918_ = l_List_reverse___redArg(v_a_1917_);
return v___x_1918_;
}
else
{
lean_object* v_head_1919_; lean_object* v_tail_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1939_; 
v_head_1919_ = lean_ctor_get(v_a_1916_, 0);
v_tail_1920_ = lean_ctor_get(v_a_1916_, 1);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_a_1916_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1922_ = v_a_1916_;
v_isShared_1923_ = v_isSharedCheck_1939_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_tail_1920_);
lean_inc(v_head_1919_);
lean_dec(v_a_1916_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1939_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v_p1_1924_; lean_object* v_p2_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1938_; 
v_p1_1924_ = lean_ctor_get(v_head_1919_, 0);
v_p2_1925_ = lean_ctor_get(v_head_1919_, 1);
v_isSharedCheck_1938_ = !lean_is_exclusive(v_head_1919_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1927_ = v_head_1919_;
v_isShared_1928_ = v_isSharedCheck_1938_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_p2_1925_);
lean_inc(v_p1_1924_);
lean_dec(v_head_1919_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1938_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1932_; 
v___x_1929_ = lp_ariori_mapPointToSegmentAxis(v_p1_1924_, v_axis_1914_, v_dist_1915_);
v___x_1930_ = lp_ariori_mapPointToSegmentAxis(v_p2_1925_, v_axis_1914_, v_dist_1915_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 1, v___x_1930_);
lean_ctor_set(v___x_1927_, 0, v___x_1929_);
v___x_1932_ = v___x_1927_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1929_);
lean_ctor_set(v_reuseFailAlloc_1937_, 1, v___x_1930_);
v___x_1932_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1934_; 
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 1, v_a_1917_);
lean_ctor_set(v___x_1922_, 0, v___x_1932_);
v___x_1934_ = v___x_1922_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1932_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v_a_1917_);
v___x_1934_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
v_a_1916_ = v_tail_1920_;
v_a_1917_ = v___x_1934_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__1___boxed(lean_object* v_axis_1940_, lean_object* v_dist_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__1(v_axis_1940_, v_dist_1941_, v_a_1942_, v_a_1943_);
lean_dec_ref(v_dist_1941_);
lean_dec_ref(v_axis_1940_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__0(lean_object* v_axis_1945_, lean_object* v_dist_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
if (lean_obj_tag(v_a_1947_) == 0)
{
lean_object* v___x_1949_; 
v___x_1949_ = l_List_reverse___redArg(v_a_1948_);
return v___x_1949_;
}
else
{
lean_object* v_head_1950_; lean_object* v_tail_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1960_; 
v_head_1950_ = lean_ctor_get(v_a_1947_, 0);
v_tail_1951_ = lean_ctor_get(v_a_1947_, 1);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_a_1947_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1953_ = v_a_1947_;
v_isShared_1954_ = v_isSharedCheck_1960_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_tail_1951_);
lean_inc(v_head_1950_);
lean_dec(v_a_1947_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1960_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1955_; lean_object* v___x_1957_; 
v___x_1955_ = lp_ariori_mapPointToSegmentAxis(v_head_1950_, v_axis_1945_, v_dist_1946_);
if (v_isShared_1954_ == 0)
{
lean_ctor_set(v___x_1953_, 1, v_a_1948_);
lean_ctor_set(v___x_1953_, 0, v___x_1955_);
v___x_1957_ = v___x_1953_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1955_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v_a_1948_);
v___x_1957_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
v_a_1947_ = v_tail_1951_;
v_a_1948_ = v___x_1957_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__0___boxed(lean_object* v_axis_1961_, lean_object* v_dist_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__0(v_axis_1961_, v_dist_1962_, v_a_1963_, v_a_1964_);
lean_dec_ref(v_dist_1962_);
lean_dec_ref(v_axis_1961_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* lp_ariori_liftChildToAxis(lean_object* v_child_1966_, lean_object* v_axis_1967_, lean_object* v_dist_1968_){
_start:
{
lean_object* v_points_1969_; lean_object* v_segments_1970_; lean_object* v___x_1971_; lean_object* v_mappedPts_1972_; lean_object* v_mappedSegs_1973_; lean_object* v_childSpec_1974_; lean_object* v___x_1975_; 
v_points_1969_ = lean_ctor_get(v_child_1966_, 0);
lean_inc(v_points_1969_);
v_segments_1970_ = lean_ctor_get(v_child_1966_, 1);
lean_inc(v_segments_1970_);
lean_dec_ref(v_child_1966_);
v___x_1971_ = lean_box(0);
v_mappedPts_1972_ = lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__0(v_axis_1967_, v_dist_1968_, v_points_1969_, v___x_1971_);
v_mappedSegs_1973_ = lp_ariori_List_mapTR_loop___at___00liftChildToAxis_spec__1(v_axis_1967_, v_dist_1968_, v_segments_1970_, v___x_1971_);
lean_inc(v_mappedPts_1972_);
v_childSpec_1974_ = lp_ariori_atomicSpectrum(v_mappedPts_1972_, v_mappedSegs_1973_, v_dist_1968_);
v___x_1975_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1975_, 0, v_mappedPts_1972_);
lean_ctor_set(v___x_1975_, 1, v_mappedSegs_1973_);
lean_ctor_set(v___x_1975_, 2, v_childSpec_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* lp_ariori_liftChildToAxis___boxed(lean_object* v_child_1976_, lean_object* v_axis_1977_, lean_object* v_dist_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = lp_ariori_liftChildToAxis(v_child_1976_, v_axis_1977_, v_dist_1978_);
lean_dec_ref(v_dist_1978_);
lean_dec_ref(v_axis_1977_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* lp_ariori_SpawnChildWitness_child(lean_object* v_w_1980_){
_start:
{
lean_object* v_segment_1981_; lean_object* v_dist_1982_; lean_object* v_base_1983_; lean_object* v___x_1984_; 
v_segment_1981_ = lean_ctor_get(v_w_1980_, 0);
lean_inc_ref(v_segment_1981_);
v_dist_1982_ = lean_ctor_get(v_w_1980_, 1);
lean_inc_ref(v_dist_1982_);
v_base_1983_ = lean_ctor_get(v_w_1980_, 2);
lean_inc_ref(v_base_1983_);
lean_dec_ref(v_w_1980_);
v___x_1984_ = lp_ariori_liftChildToAxis(v_base_1983_, v_segment_1981_, v_dist_1982_);
lean_dec_ref(v_dist_1982_);
lean_dec_ref(v_segment_1981_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild___redArg(lean_object* v_s_1985_){
_start:
{
lean_object* v_p1_1986_; lean_object* v_p2_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v_p1_1986_ = lean_ctor_get(v_s_1985_, 0);
v_p2_1987_ = lean_ctor_get(v_s_1985_, 1);
v___x_1988_ = lp_ariori_Point_distSq(v_p1_1986_, v_p2_1987_);
v___x_1989_ = lp_ariori_VesicaNumber_vesicaSqrt(v___x_1988_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v___x_1990_; 
v___x_1990_ = lean_box(0);
return v___x_1990_;
}
else
{
lean_object* v_val_1991_; uint8_t v___x_1992_; 
v_val_1991_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_val_1991_);
lean_dec_ref(v___x_1989_);
v___x_1992_ = lp_ariori_VesicaNumber_isZero(v_val_1991_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; 
lean_inc(v_val_1991_);
v___x_1993_ = lp_ariori_gen1Foundation(v_val_1991_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v___x_1994_; 
lean_dec(v_val_1991_);
v___x_1994_ = lean_box(0);
return v___x_1994_;
}
else
{
lean_object* v_val_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2003_; 
v_val_1995_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1997_ = v___x_1993_;
v_isShared_1998_ = v_isSharedCheck_2003_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_val_1995_);
lean_dec(v___x_1993_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2003_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_1999_; lean_object* v___x_2001_; 
v___x_1999_ = lp_ariori_liftChildToAxis(v_val_1995_, v_s_1985_, v_val_1991_);
lean_dec(v_val_1991_);
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v___x_1999_);
v___x_2001_ = v___x_1997_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1999_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
else
{
lean_object* v___x_2004_; 
lean_dec(v_val_1991_);
v___x_2004_ = lean_box(0);
return v___x_2004_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild___redArg___boxed(lean_object* v_s_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = lp_ariori_spawnOneChild___redArg(v_s_2005_);
lean_dec_ref(v_s_2005_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild(lean_object* v_s_2007_, lean_object* v___parentR_2008_){
_start:
{
lean_object* v___x_2009_; 
v___x_2009_ = lp_ariori_spawnOneChild___redArg(v_s_2007_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* lp_ariori_spawnOneChild___boxed(lean_object* v_s_2010_, lean_object* v___parentR_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = lp_ariori_spawnOneChild(v_s_2010_, v___parentR_2011_);
lean_dec_ref(v___parentR_2011_);
lean_dec_ref(v_s_2010_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___redArg(lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
if (lean_obj_tag(v_a_2013_) == 0)
{
lean_object* v___x_2015_; 
v___x_2015_ = lean_array_to_list(v_a_2014_);
return v___x_2015_;
}
else
{
lean_object* v_head_2016_; lean_object* v_tail_2017_; lean_object* v___x_2018_; 
v_head_2016_ = lean_ctor_get(v_a_2013_, 0);
v_tail_2017_ = lean_ctor_get(v_a_2013_, 1);
v___x_2018_ = lp_ariori_spawnOneChild___redArg(v_head_2016_);
if (lean_obj_tag(v___x_2018_) == 0)
{
v_a_2013_ = v_tail_2017_;
goto _start;
}
else
{
lean_object* v_val_2020_; lean_object* v___x_2021_; 
v_val_2020_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_val_2020_);
lean_dec_ref(v___x_2018_);
v___x_2021_ = lean_array_push(v_a_2014_, v_val_2020_);
v_a_2013_ = v_tail_2017_;
v_a_2014_ = v___x_2021_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___redArg___boxed(lean_object* v_a_2023_, lean_object* v_a_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___redArg(v_a_2023_, v_a_2024_);
lean_dec(v_a_2023_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* lp_ariori_spawnChildren(lean_object* v_segments_2028_, lean_object* v_parentR_2029_){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = ((lean_object*)(lp_ariori_spawnChildren___closed__0));
v___x_2031_ = lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___redArg(v_segments_2028_, v___x_2030_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* lp_ariori_spawnChildren___boxed(lean_object* v_segments_2032_, lean_object* v_parentR_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = lp_ariori_spawnChildren(v_segments_2032_, v_parentR_2033_);
lean_dec_ref(v_parentR_2033_);
lean_dec(v_segments_2032_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0(lean_object* v_parentR_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_){
_start:
{
lean_object* v___x_2038_; 
v___x_2038_ = lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___redArg(v_a_2036_, v_a_2037_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0___boxed(lean_object* v_parentR_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = lp_ariori_List_filterMapTR_go___at___00spawnChildren_spec__0(v_parentR_2039_, v_a_2040_, v_a_2041_);
lean_dec(v_a_2040_);
lean_dec_ref(v_parentR_2039_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__spawnOneChild_match__1_splitter___redArg(lean_object* v_x_2043_, lean_object* v_h__1_2044_, lean_object* v_h__2_2045_){
_start:
{
if (lean_obj_tag(v_x_2043_) == 0)
{
lean_object* v___x_2046_; lean_object* v___x_2047_; 
lean_dec(v_h__2_2045_);
v___x_2046_ = lean_box(0);
v___x_2047_ = lean_apply_1(v_h__1_2044_, v___x_2046_);
return v___x_2047_;
}
else
{
lean_object* v_val_2048_; lean_object* v___x_2049_; 
lean_dec(v_h__1_2044_);
v_val_2048_ = lean_ctor_get(v_x_2043_, 0);
lean_inc(v_val_2048_);
lean_dec_ref(v_x_2043_);
v___x_2049_ = lean_apply_1(v_h__2_2045_, v_val_2048_);
return v___x_2049_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__spawnOneChild_match__1_splitter(lean_object* v_motive_2050_, lean_object* v_x_2051_, lean_object* v_h__1_2052_, lean_object* v_h__2_2053_){
_start:
{
if (lean_obj_tag(v_x_2051_) == 0)
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
lean_dec(v_h__2_2053_);
v___x_2054_ = lean_box(0);
v___x_2055_ = lean_apply_1(v_h__1_2052_, v___x_2054_);
return v___x_2055_;
}
else
{
lean_object* v_val_2056_; lean_object* v___x_2057_; 
lean_dec(v_h__1_2052_);
v_val_2056_ = lean_ctor_get(v_x_2051_, 0);
lean_inc(v_val_2056_);
lean_dec_ref(v_x_2051_);
v___x_2057_ = lean_apply_1(v_h__2_2053_, v_val_2056_);
return v___x_2057_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_filterMap_match__1_splitter___redArg(lean_object* v_x_2058_, lean_object* v_h__1_2059_, lean_object* v_h__2_2060_){
_start:
{
if (lean_obj_tag(v_x_2058_) == 0)
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
lean_dec(v_h__2_2060_);
v___x_2061_ = lean_box(0);
v___x_2062_ = lean_apply_1(v_h__1_2059_, v___x_2061_);
return v___x_2062_;
}
else
{
lean_object* v_val_2063_; lean_object* v___x_2064_; 
lean_dec(v_h__1_2059_);
v_val_2063_ = lean_ctor_get(v_x_2058_, 0);
lean_inc(v_val_2063_);
lean_dec_ref(v_x_2058_);
v___x_2064_ = lean_apply_1(v_h__2_2060_, v_val_2063_);
return v___x_2064_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_filterMap_match__1_splitter(lean_object* v_00_u03b2_2065_, lean_object* v_motive_2066_, lean_object* v_x_2067_, lean_object* v_h__1_2068_, lean_object* v_h__2_2069_){
_start:
{
if (lean_obj_tag(v_x_2067_) == 0)
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
lean_dec(v_h__2_2069_);
v___x_2070_ = lean_box(0);
v___x_2071_ = lean_apply_1(v_h__1_2068_, v___x_2070_);
return v___x_2071_;
}
else
{
lean_object* v_val_2072_; lean_object* v___x_2073_; 
lean_dec(v_h__1_2068_);
v_val_2072_ = lean_ctor_get(v_x_2067_, 0);
lean_inc(v_val_2072_);
lean_dec_ref(v_x_2067_);
v___x_2073_ = lean_apply_1(v_h__2_2069_, v_val_2072_);
return v___x_2073_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_processSeed(lean_object* v_r_2074_){
_start:
{
lean_object* v___x_2075_; 
lean_inc_ref(v_r_2074_);
v___x_2075_ = lp_ariori_gen1Foundation(v_r_2074_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v___x_2076_; 
lean_dec_ref(v_r_2074_);
v___x_2076_ = lean_box(0);
return v___x_2076_;
}
else
{
lean_object* v_val_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2088_; 
v_val_2077_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2079_ = v___x_2075_;
v_isShared_2080_ = v_isSharedCheck_2088_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_val_2077_);
lean_dec(v___x_2075_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2088_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v_points_2081_; lean_object* v_segments_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2086_; 
v_points_2081_ = lean_ctor_get(v_val_2077_, 0);
lean_inc_n(v_points_2081_, 2);
v_segments_2082_ = lean_ctor_get(v_val_2077_, 1);
lean_inc(v_segments_2082_);
lean_dec(v_val_2077_);
v___x_2083_ = lp_ariori_atomicSpectrum(v_points_2081_, v_segments_2082_, v_r_2074_);
lean_dec_ref(v_r_2074_);
v___x_2084_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2084_, 0, v_points_2081_);
lean_ctor_set(v___x_2084_, 1, v_segments_2082_);
lean_ctor_set(v___x_2084_, 2, v___x_2083_);
if (v_isShared_2080_ == 0)
{
lean_ctor_set(v___x_2079_, 0, v___x_2084_);
v___x_2086_ = v___x_2079_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2084_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_generationAtomicSegments_dedup(lean_object* v_lst_2089_, lean_object* v_acc_2090_){
_start:
{
if (lean_obj_tag(v_lst_2089_) == 0)
{
return v_acc_2090_;
}
else
{
lean_object* v_head_2091_; lean_object* v_tail_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2102_; 
v_head_2091_ = lean_ctor_get(v_lst_2089_, 0);
v_tail_2092_ = lean_ctor_get(v_lst_2089_, 1);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_lst_2089_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2094_ = v_lst_2089_;
v_isShared_2095_ = v_isSharedCheck_2102_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_tail_2092_);
lean_inc(v_head_2091_);
lean_dec(v_lst_2089_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2102_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
uint8_t v___x_2096_; 
v___x_2096_ = lp_ariori_List_elem___at___00atomicSpectrum_dedup_spec__0(v_head_2091_, v_acc_2090_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2098_; 
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 1, v_acc_2090_);
v___x_2098_ = v___x_2094_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_head_2091_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_acc_2090_);
v___x_2098_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
v_lst_2089_ = v_tail_2092_;
v_acc_2090_ = v___x_2098_;
goto _start;
}
}
else
{
lean_del_object(v___x_2094_);
lean_dec(v_head_2091_);
v_lst_2089_ = v_tail_2092_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00generationAtomicSegments_spec__0(lean_object* v_gen_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_){
_start:
{
if (lean_obj_tag(v_a_2104_) == 0)
{
lean_object* v___x_2106_; 
lean_dec_ref(v_gen_2103_);
v___x_2106_ = lean_array_to_list(v_a_2105_);
return v___x_2106_;
}
else
{
lean_object* v_head_2107_; lean_object* v_tail_2108_; lean_object* v_points_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v_head_2107_ = lean_ctor_get(v_a_2104_, 0);
v_tail_2108_ = lean_ctor_get(v_a_2104_, 1);
v_points_2109_ = lean_ctor_get(v_gen_2103_, 0);
lean_inc(v_points_2109_);
v___x_2110_ = lp_ariori_splitSegment(v_head_2107_, v_points_2109_);
v___x_2111_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2105_, v___x_2110_);
v_a_2104_ = v_tail_2108_;
v_a_2105_ = v___x_2111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00generationAtomicSegments_spec__0___boxed(lean_object* v_gen_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00generationAtomicSegments_spec__0(v_gen_2113_, v_a_2114_, v_a_2115_);
lean_dec(v_a_2114_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* lp_ariori_generationAtomicSegments(lean_object* v_gen_2117_){
_start:
{
lean_object* v_segments_2118_; lean_object* v___x_2119_; lean_object* v_splitSegs_2120_; lean_object* v___x_2121_; lean_object* v_normSegs_2122_; lean_object* v___x_2123_; 
v_segments_2118_ = lean_ctor_get(v_gen_2117_, 1);
lean_inc(v_segments_2118_);
v___x_2119_ = ((lean_object*)(lp_ariori_atomicSpectrum___closed__0));
v_splitSegs_2120_ = lp_ariori___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00generationAtomicSegments_spec__0(v_gen_2117_, v_segments_2118_, v___x_2119_);
lean_dec(v_segments_2118_);
v___x_2121_ = lean_box(0);
v_normSegs_2122_ = lp_ariori_List_mapTR_loop___at___00atomicSpectrum_spec__1(v_splitSegs_2120_, v___x_2121_);
v___x_2123_ = lp_ariori_generationAtomicSegments_dedup(v_normSegs_2122_, v___x_2121_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00mergeGenerationData_spec__0(lean_object* v_x_2124_, lean_object* v_x_2125_){
_start:
{
if (lean_obj_tag(v_x_2125_) == 0)
{
return v_x_2124_;
}
else
{
lean_object* v_head_2126_; lean_object* v_tail_2127_; lean_object* v_points_2128_; lean_object* v___x_2129_; 
v_head_2126_ = lean_ctor_get(v_x_2125_, 0);
lean_inc(v_head_2126_);
v_tail_2127_ = lean_ctor_get(v_x_2125_, 1);
lean_inc(v_tail_2127_);
lean_dec_ref(v_x_2125_);
v_points_2128_ = lean_ctor_get(v_head_2126_, 0);
lean_inc(v_points_2128_);
lean_dec(v_head_2126_);
v___x_2129_ = l_List_appendTR___redArg(v_x_2124_, v_points_2128_);
v_x_2124_ = v___x_2129_;
v_x_2125_ = v_tail_2127_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00mergeGenerationData_spec__1(lean_object* v_x_2131_, lean_object* v_x_2132_){
_start:
{
if (lean_obj_tag(v_x_2132_) == 0)
{
return v_x_2131_;
}
else
{
lean_object* v_head_2133_; lean_object* v_tail_2134_; lean_object* v_segments_2135_; lean_object* v___x_2136_; 
v_head_2133_ = lean_ctor_get(v_x_2132_, 0);
lean_inc(v_head_2133_);
v_tail_2134_ = lean_ctor_get(v_x_2132_, 1);
lean_inc(v_tail_2134_);
lean_dec_ref(v_x_2132_);
v_segments_2135_ = lean_ctor_get(v_head_2133_, 1);
lean_inc(v_segments_2135_);
lean_dec(v_head_2133_);
v___x_2136_ = l_List_appendTR___redArg(v_x_2131_, v_segments_2135_);
v_x_2131_ = v___x_2136_;
v_x_2132_ = v_tail_2134_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_mergeGenerationData(lean_object* v_children_2138_, lean_object* v_baseR_2139_){
_start:
{
lean_object* v___x_2140_; lean_object* v_pts_2141_; lean_object* v_segs_2142_; lean_object* v_spec_2143_; lean_object* v___x_2144_; 
v___x_2140_ = lean_box(0);
lean_inc(v_children_2138_);
v_pts_2141_ = lp_ariori_List_foldl___at___00mergeGenerationData_spec__0(v___x_2140_, v_children_2138_);
v_segs_2142_ = lp_ariori_List_foldl___at___00mergeGenerationData_spec__1(v___x_2140_, v_children_2138_);
lean_inc(v_pts_2141_);
v_spec_2143_ = lp_ariori_atomicSpectrum(v_pts_2141_, v_segs_2142_, v_baseR_2139_);
v___x_2144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2144_, 0, v_pts_2141_);
lean_ctor_set(v___x_2144_, 1, v_segs_2142_);
lean_ctor_set(v___x_2144_, 2, v_spec_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* lp_ariori_mergeGenerationData___boxed(lean_object* v_children_2145_, lean_object* v_baseR_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = lp_ariori_mergeGenerationData(v_children_2145_, v_baseR_2146_);
lean_dec_ref(v_baseR_2146_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionStep(lean_object* v_r_2148_, lean_object* v_current_2149_){
_start:
{
lean_object* v_atoms_2150_; lean_object* v_children_2151_; lean_object* v___x_2152_; 
v_atoms_2150_ = lp_ariori_generationAtomicSegments(v_current_2149_);
v_children_2151_ = lp_ariori_spawnChildren(v_atoms_2150_, v_r_2148_);
lean_dec(v_atoms_2150_);
v___x_2152_ = lp_ariori_mergeGenerationData(v_children_2151_, v_r_2148_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionStep___boxed(lean_object* v_r_2153_, lean_object* v_current_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = lp_ariori_recursionStep(v_r_2153_, v_current_2154_);
lean_dec_ref(v_r_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionLoop(lean_object* v_r_2156_, lean_object* v_current_2157_, lean_object* v_remaining_2158_, lean_object* v_acc_2159_){
_start:
{
lean_object* v_zero_2160_; uint8_t v_isZero_2161_; 
v_zero_2160_ = lean_unsigned_to_nat(0u);
v_isZero_2161_ = lean_nat_dec_eq(v_remaining_2158_, v_zero_2160_);
if (v_isZero_2161_ == 1)
{
lean_object* v___x_2162_; 
lean_dec(v_remaining_2158_);
lean_dec_ref(v_current_2157_);
v___x_2162_ = l_List_reverse___redArg(v_acc_2159_);
return v___x_2162_;
}
else
{
lean_object* v_one_2163_; lean_object* v_n_2164_; lean_object* v_next_2165_; lean_object* v___x_2166_; 
v_one_2163_ = lean_unsigned_to_nat(1u);
v_n_2164_ = lean_nat_sub(v_remaining_2158_, v_one_2163_);
lean_dec(v_remaining_2158_);
v_next_2165_ = lp_ariori_recursionStep(v_r_2156_, v_current_2157_);
lean_inc_ref(v_next_2165_);
v___x_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2166_, 0, v_next_2165_);
lean_ctor_set(v___x_2166_, 1, v_acc_2159_);
v_current_2157_ = v_next_2165_;
v_remaining_2158_ = v_n_2164_;
v_acc_2159_ = v___x_2166_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionLoop___boxed(lean_object* v_r_2168_, lean_object* v_current_2169_, lean_object* v_remaining_2170_, lean_object* v_acc_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = lp_ariori_recursionLoop(v_r_2168_, v_current_2169_, v_remaining_2170_, v_acc_2171_);
lean_dec_ref(v_r_2168_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* lp_ariori_processGenerations(lean_object* v_r_2173_, lean_object* v_depth_2174_){
_start:
{
lean_object* v___x_2175_; 
lean_inc_ref(v_r_2173_);
v___x_2175_ = lp_ariori_processSeed(v_r_2173_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v___x_2176_; 
lean_dec(v_depth_2174_);
lean_dec_ref(v_r_2173_);
v___x_2176_ = lean_box(0);
return v___x_2176_;
}
else
{
lean_object* v_val_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2187_; 
v_val_2177_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2179_ = v___x_2175_;
v_isShared_2180_ = v_isSharedCheck_2187_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_val_2177_);
lean_dec(v___x_2175_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2187_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2185_; 
v___x_2181_ = lean_box(0);
lean_inc(v_val_2177_);
v___x_2182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2182_, 0, v_val_2177_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = lp_ariori_recursionLoop(v_r_2173_, v_val_2177_, v_depth_2174_, v___x_2182_);
lean_dec_ref(v_r_2173_);
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 0, v___x_2183_);
v___x_2185_ = v___x_2179_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorIdx(uint8_t v_x_2188_){
_start:
{
switch(v_x_2188_)
{
case 0:
{
lean_object* v___x_2189_; 
v___x_2189_ = lean_unsigned_to_nat(0u);
return v___x_2189_;
}
case 1:
{
lean_object* v___x_2190_; 
v___x_2190_ = lean_unsigned_to_nat(1u);
return v___x_2190_;
}
case 2:
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_unsigned_to_nat(2u);
return v___x_2191_;
}
case 3:
{
lean_object* v___x_2192_; 
v___x_2192_ = lean_unsigned_to_nat(3u);
return v___x_2192_;
}
case 4:
{
lean_object* v___x_2193_; 
v___x_2193_ = lean_unsigned_to_nat(4u);
return v___x_2193_;
}
case 5:
{
lean_object* v___x_2194_; 
v___x_2194_ = lean_unsigned_to_nat(5u);
return v___x_2194_;
}
case 6:
{
lean_object* v___x_2195_; 
v___x_2195_ = lean_unsigned_to_nat(6u);
return v___x_2195_;
}
case 7:
{
lean_object* v___x_2196_; 
v___x_2196_ = lean_unsigned_to_nat(7u);
return v___x_2196_;
}
case 8:
{
lean_object* v___x_2197_; 
v___x_2197_ = lean_unsigned_to_nat(8u);
return v___x_2197_;
}
case 9:
{
lean_object* v___x_2198_; 
v___x_2198_ = lean_unsigned_to_nat(9u);
return v___x_2198_;
}
case 10:
{
lean_object* v___x_2199_; 
v___x_2199_ = lean_unsigned_to_nat(10u);
return v___x_2199_;
}
case 11:
{
lean_object* v___x_2200_; 
v___x_2200_ = lean_unsigned_to_nat(11u);
return v___x_2200_;
}
case 12:
{
lean_object* v___x_2201_; 
v___x_2201_ = lean_unsigned_to_nat(12u);
return v___x_2201_;
}
case 13:
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_unsigned_to_nat(13u);
return v___x_2202_;
}
case 14:
{
lean_object* v___x_2203_; 
v___x_2203_ = lean_unsigned_to_nat(14u);
return v___x_2203_;
}
case 15:
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_unsigned_to_nat(15u);
return v___x_2204_;
}
default: 
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_unsigned_to_nat(16u);
return v___x_2205_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorIdx___boxed(lean_object* v_x_2206_){
_start:
{
uint8_t v_x_boxed_2207_; lean_object* v_res_2208_; 
v_x_boxed_2207_ = lean_unbox(v_x_2206_);
v_res_2208_ = lp_ariori_NodeLabel_ctorIdx(v_x_boxed_2207_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_toCtorIdx(uint8_t v_x_2209_){
_start:
{
lean_object* v___x_2210_; 
v___x_2210_ = lp_ariori_NodeLabel_ctorIdx(v_x_2209_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_toCtorIdx___boxed(lean_object* v_x_2211_){
_start:
{
uint8_t v_x_4__boxed_2212_; lean_object* v_res_2213_; 
v_x_4__boxed_2212_ = lean_unbox(v_x_2211_);
v_res_2213_ = lp_ariori_NodeLabel_toCtorIdx(v_x_4__boxed_2212_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim___redArg(lean_object* v_k_2214_){
_start:
{
lean_inc(v_k_2214_);
return v_k_2214_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim___redArg___boxed(lean_object* v_k_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = lp_ariori_NodeLabel_ctorElim___redArg(v_k_2215_);
lean_dec(v_k_2215_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim(lean_object* v_motive_2217_, lean_object* v_ctorIdx_2218_, uint8_t v_t_2219_, lean_object* v_h_2220_, lean_object* v_k_2221_){
_start:
{
lean_inc(v_k_2221_);
return v_k_2221_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_ctorElim___boxed(lean_object* v_motive_2222_, lean_object* v_ctorIdx_2223_, lean_object* v_t_2224_, lean_object* v_h_2225_, lean_object* v_k_2226_){
_start:
{
uint8_t v_t_boxed_2227_; lean_object* v_res_2228_; 
v_t_boxed_2227_ = lean_unbox(v_t_2224_);
v_res_2228_ = lp_ariori_NodeLabel_ctorElim(v_motive_2222_, v_ctorIdx_2223_, v_t_boxed_2227_, v_h_2225_, v_k_2226_);
lean_dec(v_k_2226_);
lean_dec(v_ctorIdx_2223_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim___redArg(lean_object* v_A_2229_){
_start:
{
lean_inc(v_A_2229_);
return v_A_2229_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim___redArg___boxed(lean_object* v_A_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = lp_ariori_NodeLabel_A_elim___redArg(v_A_2230_);
lean_dec(v_A_2230_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim(lean_object* v_motive_2232_, uint8_t v_t_2233_, lean_object* v_h_2234_, lean_object* v_A_2235_){
_start:
{
lean_inc(v_A_2235_);
return v_A_2235_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_A_elim___boxed(lean_object* v_motive_2236_, lean_object* v_t_2237_, lean_object* v_h_2238_, lean_object* v_A_2239_){
_start:
{
uint8_t v_t_boxed_2240_; lean_object* v_res_2241_; 
v_t_boxed_2240_ = lean_unbox(v_t_2237_);
v_res_2241_ = lp_ariori_NodeLabel_A_elim(v_motive_2236_, v_t_boxed_2240_, v_h_2238_, v_A_2239_);
lean_dec(v_A_2239_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim___redArg(lean_object* v_B_2242_){
_start:
{
lean_inc(v_B_2242_);
return v_B_2242_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim___redArg___boxed(lean_object* v_B_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = lp_ariori_NodeLabel_B_elim___redArg(v_B_2243_);
lean_dec(v_B_2243_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim(lean_object* v_motive_2245_, uint8_t v_t_2246_, lean_object* v_h_2247_, lean_object* v_B_2248_){
_start:
{
lean_inc(v_B_2248_);
return v_B_2248_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_B_elim___boxed(lean_object* v_motive_2249_, lean_object* v_t_2250_, lean_object* v_h_2251_, lean_object* v_B_2252_){
_start:
{
uint8_t v_t_boxed_2253_; lean_object* v_res_2254_; 
v_t_boxed_2253_ = lean_unbox(v_t_2250_);
v_res_2254_ = lp_ariori_NodeLabel_B_elim(v_motive_2249_, v_t_boxed_2253_, v_h_2251_, v_B_2252_);
lean_dec(v_B_2252_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim___redArg(lean_object* v_Top_2255_){
_start:
{
lean_inc(v_Top_2255_);
return v_Top_2255_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim___redArg___boxed(lean_object* v_Top_2256_){
_start:
{
lean_object* v_res_2257_; 
v_res_2257_ = lp_ariori_NodeLabel_Top_elim___redArg(v_Top_2256_);
lean_dec(v_Top_2256_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim(lean_object* v_motive_2258_, uint8_t v_t_2259_, lean_object* v_h_2260_, lean_object* v_Top_2261_){
_start:
{
lean_inc(v_Top_2261_);
return v_Top_2261_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Top_elim___boxed(lean_object* v_motive_2262_, lean_object* v_t_2263_, lean_object* v_h_2264_, lean_object* v_Top_2265_){
_start:
{
uint8_t v_t_boxed_2266_; lean_object* v_res_2267_; 
v_t_boxed_2266_ = lean_unbox(v_t_2263_);
v_res_2267_ = lp_ariori_NodeLabel_Top_elim(v_motive_2262_, v_t_boxed_2266_, v_h_2264_, v_Top_2265_);
lean_dec(v_Top_2265_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim___redArg(lean_object* v_Bot_2268_){
_start:
{
lean_inc(v_Bot_2268_);
return v_Bot_2268_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim___redArg___boxed(lean_object* v_Bot_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = lp_ariori_NodeLabel_Bot_elim___redArg(v_Bot_2269_);
lean_dec(v_Bot_2269_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim(lean_object* v_motive_2271_, uint8_t v_t_2272_, lean_object* v_h_2273_, lean_object* v_Bot_2274_){
_start:
{
lean_inc(v_Bot_2274_);
return v_Bot_2274_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_Bot_elim___boxed(lean_object* v_motive_2275_, lean_object* v_t_2276_, lean_object* v_h_2277_, lean_object* v_Bot_2278_){
_start:
{
uint8_t v_t_boxed_2279_; lean_object* v_res_2280_; 
v_t_boxed_2279_ = lean_unbox(v_t_2276_);
v_res_2280_ = lp_ariori_NodeLabel_Bot_elim(v_motive_2275_, v_t_boxed_2279_, v_h_2277_, v_Bot_2278_);
lean_dec(v_Bot_2278_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim___redArg(lean_object* v_P3_2281_){
_start:
{
lean_inc(v_P3_2281_);
return v_P3_2281_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim___redArg___boxed(lean_object* v_P3_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = lp_ariori_NodeLabel_P3_elim___redArg(v_P3_2282_);
lean_dec(v_P3_2282_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim(lean_object* v_motive_2284_, uint8_t v_t_2285_, lean_object* v_h_2286_, lean_object* v_P3_2287_){
_start:
{
lean_inc(v_P3_2287_);
return v_P3_2287_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P3_elim___boxed(lean_object* v_motive_2288_, lean_object* v_t_2289_, lean_object* v_h_2290_, lean_object* v_P3_2291_){
_start:
{
uint8_t v_t_boxed_2292_; lean_object* v_res_2293_; 
v_t_boxed_2292_ = lean_unbox(v_t_2289_);
v_res_2293_ = lp_ariori_NodeLabel_P3_elim(v_motive_2288_, v_t_boxed_2292_, v_h_2290_, v_P3_2291_);
lean_dec(v_P3_2291_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim___redArg(lean_object* v_P4_2294_){
_start:
{
lean_inc(v_P4_2294_);
return v_P4_2294_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim___redArg___boxed(lean_object* v_P4_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = lp_ariori_NodeLabel_P4_elim___redArg(v_P4_2295_);
lean_dec(v_P4_2295_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim(lean_object* v_motive_2297_, uint8_t v_t_2298_, lean_object* v_h_2299_, lean_object* v_P4_2300_){
_start:
{
lean_inc(v_P4_2300_);
return v_P4_2300_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P4_elim___boxed(lean_object* v_motive_2301_, lean_object* v_t_2302_, lean_object* v_h_2303_, lean_object* v_P4_2304_){
_start:
{
uint8_t v_t_boxed_2305_; lean_object* v_res_2306_; 
v_t_boxed_2305_ = lean_unbox(v_t_2302_);
v_res_2306_ = lp_ariori_NodeLabel_P4_elim(v_motive_2301_, v_t_boxed_2305_, v_h_2303_, v_P4_2304_);
lean_dec(v_P4_2304_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim___redArg(lean_object* v_P5_2307_){
_start:
{
lean_inc(v_P5_2307_);
return v_P5_2307_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim___redArg___boxed(lean_object* v_P5_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = lp_ariori_NodeLabel_P5_elim___redArg(v_P5_2308_);
lean_dec(v_P5_2308_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim(lean_object* v_motive_2310_, uint8_t v_t_2311_, lean_object* v_h_2312_, lean_object* v_P5_2313_){
_start:
{
lean_inc(v_P5_2313_);
return v_P5_2313_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P5_elim___boxed(lean_object* v_motive_2314_, lean_object* v_t_2315_, lean_object* v_h_2316_, lean_object* v_P5_2317_){
_start:
{
uint8_t v_t_boxed_2318_; lean_object* v_res_2319_; 
v_t_boxed_2318_ = lean_unbox(v_t_2315_);
v_res_2319_ = lp_ariori_NodeLabel_P5_elim(v_motive_2314_, v_t_boxed_2318_, v_h_2316_, v_P5_2317_);
lean_dec(v_P5_2317_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim___redArg(lean_object* v_P6_2320_){
_start:
{
lean_inc(v_P6_2320_);
return v_P6_2320_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim___redArg___boxed(lean_object* v_P6_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = lp_ariori_NodeLabel_P6_elim___redArg(v_P6_2321_);
lean_dec(v_P6_2321_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim(lean_object* v_motive_2323_, uint8_t v_t_2324_, lean_object* v_h_2325_, lean_object* v_P6_2326_){
_start:
{
lean_inc(v_P6_2326_);
return v_P6_2326_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_P6_elim___boxed(lean_object* v_motive_2327_, lean_object* v_t_2328_, lean_object* v_h_2329_, lean_object* v_P6_2330_){
_start:
{
uint8_t v_t_boxed_2331_; lean_object* v_res_2332_; 
v_t_boxed_2331_ = lean_unbox(v_t_2328_);
v_res_2332_ = lp_ariori_NodeLabel_P6_elim(v_motive_2327_, v_t_boxed_2331_, v_h_2329_, v_P6_2330_);
lean_dec(v_P6_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim___redArg(lean_object* v_C1_2333_){
_start:
{
lean_inc(v_C1_2333_);
return v_C1_2333_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim___redArg___boxed(lean_object* v_C1_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = lp_ariori_NodeLabel_C1_elim___redArg(v_C1_2334_);
lean_dec(v_C1_2334_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim(lean_object* v_motive_2336_, uint8_t v_t_2337_, lean_object* v_h_2338_, lean_object* v_C1_2339_){
_start:
{
lean_inc(v_C1_2339_);
return v_C1_2339_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C1_elim___boxed(lean_object* v_motive_2340_, lean_object* v_t_2341_, lean_object* v_h_2342_, lean_object* v_C1_2343_){
_start:
{
uint8_t v_t_boxed_2344_; lean_object* v_res_2345_; 
v_t_boxed_2344_ = lean_unbox(v_t_2341_);
v_res_2345_ = lp_ariori_NodeLabel_C1_elim(v_motive_2340_, v_t_boxed_2344_, v_h_2342_, v_C1_2343_);
lean_dec(v_C1_2343_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim___redArg(lean_object* v_C2_2346_){
_start:
{
lean_inc(v_C2_2346_);
return v_C2_2346_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim___redArg___boxed(lean_object* v_C2_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = lp_ariori_NodeLabel_C2_elim___redArg(v_C2_2347_);
lean_dec(v_C2_2347_);
return v_res_2348_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim(lean_object* v_motive_2349_, uint8_t v_t_2350_, lean_object* v_h_2351_, lean_object* v_C2_2352_){
_start:
{
lean_inc(v_C2_2352_);
return v_C2_2352_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C2_elim___boxed(lean_object* v_motive_2353_, lean_object* v_t_2354_, lean_object* v_h_2355_, lean_object* v_C2_2356_){
_start:
{
uint8_t v_t_boxed_2357_; lean_object* v_res_2358_; 
v_t_boxed_2357_ = lean_unbox(v_t_2354_);
v_res_2358_ = lp_ariori_NodeLabel_C2_elim(v_motive_2353_, v_t_boxed_2357_, v_h_2355_, v_C2_2356_);
lean_dec(v_C2_2356_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim___redArg(lean_object* v_C3_2359_){
_start:
{
lean_inc(v_C3_2359_);
return v_C3_2359_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim___redArg___boxed(lean_object* v_C3_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = lp_ariori_NodeLabel_C3_elim___redArg(v_C3_2360_);
lean_dec(v_C3_2360_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim(lean_object* v_motive_2362_, uint8_t v_t_2363_, lean_object* v_h_2364_, lean_object* v_C3_2365_){
_start:
{
lean_inc(v_C3_2365_);
return v_C3_2365_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C3_elim___boxed(lean_object* v_motive_2366_, lean_object* v_t_2367_, lean_object* v_h_2368_, lean_object* v_C3_2369_){
_start:
{
uint8_t v_t_boxed_2370_; lean_object* v_res_2371_; 
v_t_boxed_2370_ = lean_unbox(v_t_2367_);
v_res_2371_ = lp_ariori_NodeLabel_C3_elim(v_motive_2366_, v_t_boxed_2370_, v_h_2368_, v_C3_2369_);
lean_dec(v_C3_2369_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim___redArg(lean_object* v_C4_2372_){
_start:
{
lean_inc(v_C4_2372_);
return v_C4_2372_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim___redArg___boxed(lean_object* v_C4_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = lp_ariori_NodeLabel_C4_elim___redArg(v_C4_2373_);
lean_dec(v_C4_2373_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim(lean_object* v_motive_2375_, uint8_t v_t_2376_, lean_object* v_h_2377_, lean_object* v_C4_2378_){
_start:
{
lean_inc(v_C4_2378_);
return v_C4_2378_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_C4_elim___boxed(lean_object* v_motive_2379_, lean_object* v_t_2380_, lean_object* v_h_2381_, lean_object* v_C4_2382_){
_start:
{
uint8_t v_t_boxed_2383_; lean_object* v_res_2384_; 
v_t_boxed_2383_ = lean_unbox(v_t_2380_);
v_res_2384_ = lp_ariori_NodeLabel_C4_elim(v_motive_2379_, v_t_boxed_2383_, v_h_2381_, v_C4_2382_);
lean_dec(v_C4_2382_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim___redArg(lean_object* v_K_2385_){
_start:
{
lean_inc(v_K_2385_);
return v_K_2385_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim___redArg___boxed(lean_object* v_K_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = lp_ariori_NodeLabel_K_elim___redArg(v_K_2386_);
lean_dec(v_K_2386_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim(lean_object* v_motive_2388_, uint8_t v_t_2389_, lean_object* v_h_2390_, lean_object* v_K_2391_){
_start:
{
lean_inc(v_K_2391_);
return v_K_2391_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_K_elim___boxed(lean_object* v_motive_2392_, lean_object* v_t_2393_, lean_object* v_h_2394_, lean_object* v_K_2395_){
_start:
{
uint8_t v_t_boxed_2396_; lean_object* v_res_2397_; 
v_t_boxed_2396_ = lean_unbox(v_t_2393_);
v_res_2397_ = lp_ariori_NodeLabel_K_elim(v_motive_2392_, v_t_boxed_2396_, v_h_2394_, v_K_2395_);
lean_dec(v_K_2395_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim___redArg(lean_object* v_L_2398_){
_start:
{
lean_inc(v_L_2398_);
return v_L_2398_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim___redArg___boxed(lean_object* v_L_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = lp_ariori_NodeLabel_L_elim___redArg(v_L_2399_);
lean_dec(v_L_2399_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim(lean_object* v_motive_2401_, uint8_t v_t_2402_, lean_object* v_h_2403_, lean_object* v_L_2404_){
_start:
{
lean_inc(v_L_2404_);
return v_L_2404_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_L_elim___boxed(lean_object* v_motive_2405_, lean_object* v_t_2406_, lean_object* v_h_2407_, lean_object* v_L_2408_){
_start:
{
uint8_t v_t_boxed_2409_; lean_object* v_res_2410_; 
v_t_boxed_2409_ = lean_unbox(v_t_2406_);
v_res_2410_ = lp_ariori_NodeLabel_L_elim(v_motive_2405_, v_t_boxed_2409_, v_h_2407_, v_L_2408_);
lean_dec(v_L_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim___redArg(lean_object* v_M_2411_){
_start:
{
lean_inc(v_M_2411_);
return v_M_2411_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim___redArg___boxed(lean_object* v_M_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = lp_ariori_NodeLabel_M_elim___redArg(v_M_2412_);
lean_dec(v_M_2412_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim(lean_object* v_motive_2414_, uint8_t v_t_2415_, lean_object* v_h_2416_, lean_object* v_M_2417_){
_start:
{
lean_inc(v_M_2417_);
return v_M_2417_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_M_elim___boxed(lean_object* v_motive_2418_, lean_object* v_t_2419_, lean_object* v_h_2420_, lean_object* v_M_2421_){
_start:
{
uint8_t v_t_boxed_2422_; lean_object* v_res_2423_; 
v_t_boxed_2422_ = lean_unbox(v_t_2419_);
v_res_2423_ = lp_ariori_NodeLabel_M_elim(v_motive_2418_, v_t_boxed_2422_, v_h_2420_, v_M_2421_);
lean_dec(v_M_2421_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim___redArg(lean_object* v_N_2424_){
_start:
{
lean_inc(v_N_2424_);
return v_N_2424_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim___redArg___boxed(lean_object* v_N_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = lp_ariori_NodeLabel_N_elim___redArg(v_N_2425_);
lean_dec(v_N_2425_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim(lean_object* v_motive_2427_, uint8_t v_t_2428_, lean_object* v_h_2429_, lean_object* v_N_2430_){
_start:
{
lean_inc(v_N_2430_);
return v_N_2430_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_N_elim___boxed(lean_object* v_motive_2431_, lean_object* v_t_2432_, lean_object* v_h_2433_, lean_object* v_N_2434_){
_start:
{
uint8_t v_t_boxed_2435_; lean_object* v_res_2436_; 
v_t_boxed_2435_ = lean_unbox(v_t_2432_);
v_res_2436_ = lp_ariori_NodeLabel_N_elim(v_motive_2431_, v_t_boxed_2435_, v_h_2433_, v_N_2434_);
lean_dec(v_N_2434_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim___redArg(lean_object* v_X17_2437_){
_start:
{
lean_inc(v_X17_2437_);
return v_X17_2437_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim___redArg___boxed(lean_object* v_X17_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = lp_ariori_NodeLabel_X17_elim___redArg(v_X17_2438_);
lean_dec(v_X17_2438_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim(lean_object* v_motive_2440_, uint8_t v_t_2441_, lean_object* v_h_2442_, lean_object* v_X17_2443_){
_start:
{
lean_inc(v_X17_2443_);
return v_X17_2443_;
}
}
LEAN_EXPORT lean_object* lp_ariori_NodeLabel_X17_elim___boxed(lean_object* v_motive_2444_, lean_object* v_t_2445_, lean_object* v_h_2446_, lean_object* v_X17_2447_){
_start:
{
uint8_t v_t_boxed_2448_; lean_object* v_res_2449_; 
v_t_boxed_2448_ = lean_unbox(v_t_2445_);
v_res_2449_ = lp_ariori_NodeLabel_X17_elim(v_motive_2444_, v_t_boxed_2448_, v_h_2446_, v_X17_2447_);
lean_dec(v_X17_2447_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprNodeLabel_repr(uint8_t v_x_2501_, lean_object* v_prec_2502_){
_start:
{
lean_object* v___y_2504_; lean_object* v___y_2511_; lean_object* v___y_2518_; lean_object* v___y_2525_; lean_object* v___y_2532_; lean_object* v___y_2539_; lean_object* v___y_2546_; lean_object* v___y_2553_; lean_object* v___y_2560_; lean_object* v___y_2567_; lean_object* v___y_2574_; lean_object* v___y_2581_; lean_object* v___y_2588_; lean_object* v___y_2595_; lean_object* v___y_2602_; lean_object* v___y_2609_; lean_object* v___y_2616_; 
switch(v_x_2501_)
{
case 0:
{
lean_object* v___x_2622_; uint8_t v___x_2623_; 
v___x_2622_ = lean_unsigned_to_nat(1024u);
v___x_2623_ = lean_nat_dec_le(v___x_2622_, v_prec_2502_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; 
v___x_2624_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2504_ = v___x_2624_;
goto v___jp_2503_;
}
else
{
lean_object* v___x_2625_; 
v___x_2625_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2504_ = v___x_2625_;
goto v___jp_2503_;
}
}
case 1:
{
lean_object* v___x_2626_; uint8_t v___x_2627_; 
v___x_2626_ = lean_unsigned_to_nat(1024u);
v___x_2627_ = lean_nat_dec_le(v___x_2626_, v_prec_2502_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2511_ = v___x_2628_;
goto v___jp_2510_;
}
else
{
lean_object* v___x_2629_; 
v___x_2629_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2511_ = v___x_2629_;
goto v___jp_2510_;
}
}
case 2:
{
lean_object* v___x_2630_; uint8_t v___x_2631_; 
v___x_2630_ = lean_unsigned_to_nat(1024u);
v___x_2631_ = lean_nat_dec_le(v___x_2630_, v_prec_2502_);
if (v___x_2631_ == 0)
{
lean_object* v___x_2632_; 
v___x_2632_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2518_ = v___x_2632_;
goto v___jp_2517_;
}
else
{
lean_object* v___x_2633_; 
v___x_2633_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2518_ = v___x_2633_;
goto v___jp_2517_;
}
}
case 3:
{
lean_object* v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = lean_unsigned_to_nat(1024u);
v___x_2635_ = lean_nat_dec_le(v___x_2634_, v_prec_2502_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2525_ = v___x_2636_;
goto v___jp_2524_;
}
else
{
lean_object* v___x_2637_; 
v___x_2637_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2525_ = v___x_2637_;
goto v___jp_2524_;
}
}
case 4:
{
lean_object* v___x_2638_; uint8_t v___x_2639_; 
v___x_2638_ = lean_unsigned_to_nat(1024u);
v___x_2639_ = lean_nat_dec_le(v___x_2638_, v_prec_2502_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; 
v___x_2640_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2532_ = v___x_2640_;
goto v___jp_2531_;
}
else
{
lean_object* v___x_2641_; 
v___x_2641_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2532_ = v___x_2641_;
goto v___jp_2531_;
}
}
case 5:
{
lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2642_ = lean_unsigned_to_nat(1024u);
v___x_2643_ = lean_nat_dec_le(v___x_2642_, v_prec_2502_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; 
v___x_2644_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2539_ = v___x_2644_;
goto v___jp_2538_;
}
else
{
lean_object* v___x_2645_; 
v___x_2645_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2539_ = v___x_2645_;
goto v___jp_2538_;
}
}
case 6:
{
lean_object* v___x_2646_; uint8_t v___x_2647_; 
v___x_2646_ = lean_unsigned_to_nat(1024u);
v___x_2647_ = lean_nat_dec_le(v___x_2646_, v_prec_2502_);
if (v___x_2647_ == 0)
{
lean_object* v___x_2648_; 
v___x_2648_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2546_ = v___x_2648_;
goto v___jp_2545_;
}
else
{
lean_object* v___x_2649_; 
v___x_2649_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2546_ = v___x_2649_;
goto v___jp_2545_;
}
}
case 7:
{
lean_object* v___x_2650_; uint8_t v___x_2651_; 
v___x_2650_ = lean_unsigned_to_nat(1024u);
v___x_2651_ = lean_nat_dec_le(v___x_2650_, v_prec_2502_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; 
v___x_2652_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2553_ = v___x_2652_;
goto v___jp_2552_;
}
else
{
lean_object* v___x_2653_; 
v___x_2653_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2553_ = v___x_2653_;
goto v___jp_2552_;
}
}
case 8:
{
lean_object* v___x_2654_; uint8_t v___x_2655_; 
v___x_2654_ = lean_unsigned_to_nat(1024u);
v___x_2655_ = lean_nat_dec_le(v___x_2654_, v_prec_2502_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; 
v___x_2656_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2560_ = v___x_2656_;
goto v___jp_2559_;
}
else
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2560_ = v___x_2657_;
goto v___jp_2559_;
}
}
case 9:
{
lean_object* v___x_2658_; uint8_t v___x_2659_; 
v___x_2658_ = lean_unsigned_to_nat(1024u);
v___x_2659_ = lean_nat_dec_le(v___x_2658_, v_prec_2502_);
if (v___x_2659_ == 0)
{
lean_object* v___x_2660_; 
v___x_2660_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2567_ = v___x_2660_;
goto v___jp_2566_;
}
else
{
lean_object* v___x_2661_; 
v___x_2661_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2567_ = v___x_2661_;
goto v___jp_2566_;
}
}
case 10:
{
lean_object* v___x_2662_; uint8_t v___x_2663_; 
v___x_2662_ = lean_unsigned_to_nat(1024u);
v___x_2663_ = lean_nat_dec_le(v___x_2662_, v_prec_2502_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; 
v___x_2664_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2574_ = v___x_2664_;
goto v___jp_2573_;
}
else
{
lean_object* v___x_2665_; 
v___x_2665_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2574_ = v___x_2665_;
goto v___jp_2573_;
}
}
case 11:
{
lean_object* v___x_2666_; uint8_t v___x_2667_; 
v___x_2666_ = lean_unsigned_to_nat(1024u);
v___x_2667_ = lean_nat_dec_le(v___x_2666_, v_prec_2502_);
if (v___x_2667_ == 0)
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2581_ = v___x_2668_;
goto v___jp_2580_;
}
else
{
lean_object* v___x_2669_; 
v___x_2669_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2581_ = v___x_2669_;
goto v___jp_2580_;
}
}
case 12:
{
lean_object* v___x_2670_; uint8_t v___x_2671_; 
v___x_2670_ = lean_unsigned_to_nat(1024u);
v___x_2671_ = lean_nat_dec_le(v___x_2670_, v_prec_2502_);
if (v___x_2671_ == 0)
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2588_ = v___x_2672_;
goto v___jp_2587_;
}
else
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2588_ = v___x_2673_;
goto v___jp_2587_;
}
}
case 13:
{
lean_object* v___x_2674_; uint8_t v___x_2675_; 
v___x_2674_ = lean_unsigned_to_nat(1024u);
v___x_2675_ = lean_nat_dec_le(v___x_2674_, v_prec_2502_);
if (v___x_2675_ == 0)
{
lean_object* v___x_2676_; 
v___x_2676_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2595_ = v___x_2676_;
goto v___jp_2594_;
}
else
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2595_ = v___x_2677_;
goto v___jp_2594_;
}
}
case 14:
{
lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2678_ = lean_unsigned_to_nat(1024u);
v___x_2679_ = lean_nat_dec_le(v___x_2678_, v_prec_2502_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2680_; 
v___x_2680_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2602_ = v___x_2680_;
goto v___jp_2601_;
}
else
{
lean_object* v___x_2681_; 
v___x_2681_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2602_ = v___x_2681_;
goto v___jp_2601_;
}
}
case 15:
{
lean_object* v___x_2682_; uint8_t v___x_2683_; 
v___x_2682_ = lean_unsigned_to_nat(1024u);
v___x_2683_ = lean_nat_dec_le(v___x_2682_, v_prec_2502_);
if (v___x_2683_ == 0)
{
lean_object* v___x_2684_; 
v___x_2684_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2609_ = v___x_2684_;
goto v___jp_2608_;
}
else
{
lean_object* v___x_2685_; 
v___x_2685_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2609_ = v___x_2685_;
goto v___jp_2608_;
}
}
default: 
{
lean_object* v___x_2686_; uint8_t v___x_2687_; 
v___x_2686_ = lean_unsigned_to_nat(1024u);
v___x_2687_ = lean_nat_dec_le(v___x_2686_, v_prec_2502_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; 
v___x_2688_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_2616_ = v___x_2688_;
goto v___jp_2615_;
}
else
{
lean_object* v___x_2689_; 
v___x_2689_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_2616_ = v___x_2689_;
goto v___jp_2615_;
}
}
}
v___jp_2503_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2505_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__1));
lean_inc(v___y_2504_);
v___x_2506_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___y_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = 0;
v___x_2508_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2508_, 0, v___x_2506_);
lean_ctor_set_uint8(v___x_2508_, sizeof(void*)*1, v___x_2507_);
v___x_2509_ = l_Repr_addAppParen(v___x_2508_, v_prec_2502_);
return v___x_2509_;
}
v___jp_2510_:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2512_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__3));
lean_inc(v___y_2511_);
v___x_2513_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2513_, 0, v___y_2511_);
lean_ctor_set(v___x_2513_, 1, v___x_2512_);
v___x_2514_ = 0;
v___x_2515_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2515_, 0, v___x_2513_);
lean_ctor_set_uint8(v___x_2515_, sizeof(void*)*1, v___x_2514_);
v___x_2516_ = l_Repr_addAppParen(v___x_2515_, v_prec_2502_);
return v___x_2516_;
}
v___jp_2517_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; uint8_t v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2519_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__5));
lean_inc(v___y_2518_);
v___x_2520_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2520_, 0, v___y_2518_);
lean_ctor_set(v___x_2520_, 1, v___x_2519_);
v___x_2521_ = 0;
v___x_2522_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2522_, 0, v___x_2520_);
lean_ctor_set_uint8(v___x_2522_, sizeof(void*)*1, v___x_2521_);
v___x_2523_ = l_Repr_addAppParen(v___x_2522_, v_prec_2502_);
return v___x_2523_;
}
v___jp_2524_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2526_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__7));
lean_inc(v___y_2525_);
v___x_2527_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___y_2525_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = 0;
v___x_2529_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2529_, 0, v___x_2527_);
lean_ctor_set_uint8(v___x_2529_, sizeof(void*)*1, v___x_2528_);
v___x_2530_ = l_Repr_addAppParen(v___x_2529_, v_prec_2502_);
return v___x_2530_;
}
v___jp_2531_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; uint8_t v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2533_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__9));
lean_inc(v___y_2532_);
v___x_2534_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___y_2532_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = 0;
v___x_2536_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2536_, 0, v___x_2534_);
lean_ctor_set_uint8(v___x_2536_, sizeof(void*)*1, v___x_2535_);
v___x_2537_ = l_Repr_addAppParen(v___x_2536_, v_prec_2502_);
return v___x_2537_;
}
v___jp_2538_:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2540_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__11));
lean_inc(v___y_2539_);
v___x_2541_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___y_2539_);
lean_ctor_set(v___x_2541_, 1, v___x_2540_);
v___x_2542_ = 0;
v___x_2543_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2543_, 0, v___x_2541_);
lean_ctor_set_uint8(v___x_2543_, sizeof(void*)*1, v___x_2542_);
v___x_2544_ = l_Repr_addAppParen(v___x_2543_, v_prec_2502_);
return v___x_2544_;
}
v___jp_2545_:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; uint8_t v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2547_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__13));
lean_inc(v___y_2546_);
v___x_2548_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___y_2546_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = 0;
v___x_2550_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2550_, 0, v___x_2548_);
lean_ctor_set_uint8(v___x_2550_, sizeof(void*)*1, v___x_2549_);
v___x_2551_ = l_Repr_addAppParen(v___x_2550_, v_prec_2502_);
return v___x_2551_;
}
v___jp_2552_:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; uint8_t v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2554_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__15));
lean_inc(v___y_2553_);
v___x_2555_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___y_2553_);
lean_ctor_set(v___x_2555_, 1, v___x_2554_);
v___x_2556_ = 0;
v___x_2557_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2557_, 0, v___x_2555_);
lean_ctor_set_uint8(v___x_2557_, sizeof(void*)*1, v___x_2556_);
v___x_2558_ = l_Repr_addAppParen(v___x_2557_, v_prec_2502_);
return v___x_2558_;
}
v___jp_2559_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2561_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__17));
lean_inc(v___y_2560_);
v___x_2562_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___y_2560_);
lean_ctor_set(v___x_2562_, 1, v___x_2561_);
v___x_2563_ = 0;
v___x_2564_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2564_, 0, v___x_2562_);
lean_ctor_set_uint8(v___x_2564_, sizeof(void*)*1, v___x_2563_);
v___x_2565_ = l_Repr_addAppParen(v___x_2564_, v_prec_2502_);
return v___x_2565_;
}
v___jp_2566_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; uint8_t v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2568_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__19));
lean_inc(v___y_2567_);
v___x_2569_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___y_2567_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = 0;
v___x_2571_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2571_, 0, v___x_2569_);
lean_ctor_set_uint8(v___x_2571_, sizeof(void*)*1, v___x_2570_);
v___x_2572_ = l_Repr_addAppParen(v___x_2571_, v_prec_2502_);
return v___x_2572_;
}
v___jp_2573_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2575_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__21));
lean_inc(v___y_2574_);
v___x_2576_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___y_2574_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = 0;
v___x_2578_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*1, v___x_2577_);
v___x_2579_ = l_Repr_addAppParen(v___x_2578_, v_prec_2502_);
return v___x_2579_;
}
v___jp_2580_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; uint8_t v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2582_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__23));
lean_inc(v___y_2581_);
v___x_2583_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___y_2581_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = 0;
v___x_2585_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2585_, 0, v___x_2583_);
lean_ctor_set_uint8(v___x_2585_, sizeof(void*)*1, v___x_2584_);
v___x_2586_ = l_Repr_addAppParen(v___x_2585_, v_prec_2502_);
return v___x_2586_;
}
v___jp_2587_:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2589_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__25));
lean_inc(v___y_2588_);
v___x_2590_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___y_2588_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = 0;
v___x_2592_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set_uint8(v___x_2592_, sizeof(void*)*1, v___x_2591_);
v___x_2593_ = l_Repr_addAppParen(v___x_2592_, v_prec_2502_);
return v___x_2593_;
}
v___jp_2594_:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; uint8_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2596_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__27));
lean_inc(v___y_2595_);
v___x_2597_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___y_2595_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
v___x_2598_ = 0;
v___x_2599_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2599_, 0, v___x_2597_);
lean_ctor_set_uint8(v___x_2599_, sizeof(void*)*1, v___x_2598_);
v___x_2600_ = l_Repr_addAppParen(v___x_2599_, v_prec_2502_);
return v___x_2600_;
}
v___jp_2601_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; uint8_t v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2603_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__29));
lean_inc(v___y_2602_);
v___x_2604_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___y_2602_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = 0;
v___x_2606_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2606_, 0, v___x_2604_);
lean_ctor_set_uint8(v___x_2606_, sizeof(void*)*1, v___x_2605_);
v___x_2607_ = l_Repr_addAppParen(v___x_2606_, v_prec_2502_);
return v___x_2607_;
}
v___jp_2608_:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; uint8_t v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2610_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__31));
lean_inc(v___y_2609_);
v___x_2611_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___y_2609_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
v___x_2612_ = 0;
v___x_2613_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2613_, 0, v___x_2611_);
lean_ctor_set_uint8(v___x_2613_, sizeof(void*)*1, v___x_2612_);
v___x_2614_ = l_Repr_addAppParen(v___x_2613_, v_prec_2502_);
return v___x_2614_;
}
v___jp_2615_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; uint8_t v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2617_ = ((lean_object*)(lp_ariori_instReprNodeLabel_repr___closed__33));
lean_inc(v___y_2616_);
v___x_2618_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___y_2616_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = 0;
v___x_2620_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2620_, 0, v___x_2618_);
lean_ctor_set_uint8(v___x_2620_, sizeof(void*)*1, v___x_2619_);
v___x_2621_ = l_Repr_addAppParen(v___x_2620_, v_prec_2502_);
return v___x_2621_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprNodeLabel_repr___boxed(lean_object* v_x_2690_, lean_object* v_prec_2691_){
_start:
{
uint8_t v_x_957__boxed_2692_; lean_object* v_res_2693_; 
v_x_957__boxed_2692_ = lean_unbox(v_x_2690_);
v_res_2693_ = lp_ariori_instReprNodeLabel_repr(v_x_957__boxed_2692_, v_prec_2691_);
lean_dec(v_prec_2691_);
return v_res_2693_;
}
}
LEAN_EXPORT uint8_t lp_ariori_instBEqNodeLabel_beq(uint8_t v_x_2696_, uint8_t v_y_2697_){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2698_ = lp_ariori_NodeLabel_ctorIdx(v_x_2696_);
v___x_2699_ = lp_ariori_NodeLabel_ctorIdx(v_y_2697_);
v___x_2700_ = lean_nat_dec_eq(v___x_2698_, v___x_2699_);
lean_dec(v___x_2699_);
lean_dec(v___x_2698_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instBEqNodeLabel_beq___boxed(lean_object* v_x_2701_, lean_object* v_y_2702_){
_start:
{
uint8_t v_x_17__boxed_2703_; uint8_t v_y_18__boxed_2704_; uint8_t v_res_2705_; lean_object* v_r_2706_; 
v_x_17__boxed_2703_ = lean_unbox(v_x_2701_);
v_y_18__boxed_2704_ = lean_unbox(v_y_2702_);
v_res_2705_ = lp_ariori_instBEqNodeLabel_beq(v_x_17__boxed_2703_, v_y_18__boxed_2704_);
v_r_2706_ = lean_box(v_res_2705_);
return v_r_2706_;
}
}
static uint8_t _init_lp_ariori_instInhabitedNodeLabel_default(void){
_start:
{
uint8_t v___x_2709_; 
v___x_2709_ = 0;
return v___x_2709_;
}
}
static uint8_t _init_lp_ariori_instInhabitedNodeLabel(void){
_start:
{
uint8_t v___x_2710_; 
v___x_2710_ = 0;
return v___x_2710_;
}
}
LEAN_EXPORT uint8_t lp_ariori_instDecidableEqNodeLabel(uint8_t v_a_2711_, uint8_t v_b_2712_){
_start:
{
switch(v_a_2711_)
{
case 0:
{
if (v_b_2712_ == 0)
{
uint8_t v___x_2713_; 
v___x_2713_ = 1;
return v___x_2713_;
}
else
{
uint8_t v___x_2714_; 
v___x_2714_ = 0;
return v___x_2714_;
}
}
case 1:
{
if (v_b_2712_ == 1)
{
uint8_t v___x_2715_; 
v___x_2715_ = 1;
return v___x_2715_;
}
else
{
uint8_t v___x_2716_; 
v___x_2716_ = 0;
return v___x_2716_;
}
}
case 2:
{
if (v_b_2712_ == 2)
{
uint8_t v___x_2717_; 
v___x_2717_ = 1;
return v___x_2717_;
}
else
{
uint8_t v___x_2718_; 
v___x_2718_ = 0;
return v___x_2718_;
}
}
case 3:
{
if (v_b_2712_ == 3)
{
uint8_t v___x_2719_; 
v___x_2719_ = 1;
return v___x_2719_;
}
else
{
uint8_t v___x_2720_; 
v___x_2720_ = 0;
return v___x_2720_;
}
}
case 4:
{
if (v_b_2712_ == 4)
{
uint8_t v___x_2721_; 
v___x_2721_ = 1;
return v___x_2721_;
}
else
{
uint8_t v___x_2722_; 
v___x_2722_ = 0;
return v___x_2722_;
}
}
case 5:
{
if (v_b_2712_ == 5)
{
uint8_t v___x_2723_; 
v___x_2723_ = 1;
return v___x_2723_;
}
else
{
uint8_t v___x_2724_; 
v___x_2724_ = 0;
return v___x_2724_;
}
}
case 6:
{
if (v_b_2712_ == 6)
{
uint8_t v___x_2725_; 
v___x_2725_ = 1;
return v___x_2725_;
}
else
{
uint8_t v___x_2726_; 
v___x_2726_ = 0;
return v___x_2726_;
}
}
case 7:
{
if (v_b_2712_ == 7)
{
uint8_t v___x_2727_; 
v___x_2727_ = 1;
return v___x_2727_;
}
else
{
uint8_t v___x_2728_; 
v___x_2728_ = 0;
return v___x_2728_;
}
}
case 8:
{
if (v_b_2712_ == 8)
{
uint8_t v___x_2729_; 
v___x_2729_ = 1;
return v___x_2729_;
}
else
{
uint8_t v___x_2730_; 
v___x_2730_ = 0;
return v___x_2730_;
}
}
case 9:
{
if (v_b_2712_ == 9)
{
uint8_t v___x_2731_; 
v___x_2731_ = 1;
return v___x_2731_;
}
else
{
uint8_t v___x_2732_; 
v___x_2732_ = 0;
return v___x_2732_;
}
}
case 10:
{
if (v_b_2712_ == 10)
{
uint8_t v___x_2733_; 
v___x_2733_ = 1;
return v___x_2733_;
}
else
{
uint8_t v___x_2734_; 
v___x_2734_ = 0;
return v___x_2734_;
}
}
case 11:
{
if (v_b_2712_ == 11)
{
uint8_t v___x_2735_; 
v___x_2735_ = 1;
return v___x_2735_;
}
else
{
uint8_t v___x_2736_; 
v___x_2736_ = 0;
return v___x_2736_;
}
}
case 12:
{
if (v_b_2712_ == 12)
{
uint8_t v___x_2737_; 
v___x_2737_ = 1;
return v___x_2737_;
}
else
{
uint8_t v___x_2738_; 
v___x_2738_ = 0;
return v___x_2738_;
}
}
case 13:
{
if (v_b_2712_ == 13)
{
uint8_t v___x_2739_; 
v___x_2739_ = 1;
return v___x_2739_;
}
else
{
uint8_t v___x_2740_; 
v___x_2740_ = 0;
return v___x_2740_;
}
}
case 14:
{
if (v_b_2712_ == 14)
{
uint8_t v___x_2741_; 
v___x_2741_ = 1;
return v___x_2741_;
}
else
{
uint8_t v___x_2742_; 
v___x_2742_ = 0;
return v___x_2742_;
}
}
case 15:
{
if (v_b_2712_ == 15)
{
uint8_t v___x_2743_; 
v___x_2743_ = 1;
return v___x_2743_;
}
else
{
uint8_t v___x_2744_; 
v___x_2744_ = 0;
return v___x_2744_;
}
}
default: 
{
if (v_b_2712_ == 16)
{
uint8_t v___x_2745_; 
v___x_2745_ = 1;
return v___x_2745_;
}
else
{
uint8_t v___x_2746_; 
v___x_2746_ = 0;
return v___x_2746_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instDecidableEqNodeLabel___boxed(lean_object* v_a_2747_, lean_object* v_b_2748_){
_start:
{
uint8_t v_a_boxed_2749_; uint8_t v_b_boxed_2750_; uint8_t v_res_2751_; lean_object* v_r_2752_; 
v_a_boxed_2749_ = lean_unbox(v_a_2747_);
v_b_boxed_2750_ = lean_unbox(v_b_2748_);
v_res_2751_ = lp_ariori_instDecidableEqNodeLabel(v_a_boxed_2749_, v_b_boxed_2750_);
v_r_2752_ = lean_box(v_res_2751_);
return v_r_2752_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instToStringNodeLabel___lam__0(uint8_t v_x_2770_){
_start:
{
switch(v_x_2770_)
{
case 0:
{
lean_object* v___x_2771_; 
v___x_2771_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__0));
return v___x_2771_;
}
case 1:
{
lean_object* v___x_2772_; 
v___x_2772_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__1));
return v___x_2772_;
}
case 2:
{
lean_object* v___x_2773_; 
v___x_2773_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__2));
return v___x_2773_;
}
case 3:
{
lean_object* v___x_2774_; 
v___x_2774_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__3));
return v___x_2774_;
}
case 4:
{
lean_object* v___x_2775_; 
v___x_2775_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__4));
return v___x_2775_;
}
case 5:
{
lean_object* v___x_2776_; 
v___x_2776_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__5));
return v___x_2776_;
}
case 6:
{
lean_object* v___x_2777_; 
v___x_2777_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__6));
return v___x_2777_;
}
case 7:
{
lean_object* v___x_2778_; 
v___x_2778_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__7));
return v___x_2778_;
}
case 8:
{
lean_object* v___x_2779_; 
v___x_2779_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__8));
return v___x_2779_;
}
case 9:
{
lean_object* v___x_2780_; 
v___x_2780_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__9));
return v___x_2780_;
}
case 10:
{
lean_object* v___x_2781_; 
v___x_2781_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__10));
return v___x_2781_;
}
case 11:
{
lean_object* v___x_2782_; 
v___x_2782_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__11));
return v___x_2782_;
}
case 12:
{
lean_object* v___x_2783_; 
v___x_2783_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__12));
return v___x_2783_;
}
case 13:
{
lean_object* v___x_2784_; 
v___x_2784_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__13));
return v___x_2784_;
}
case 14:
{
lean_object* v___x_2785_; 
v___x_2785_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__14));
return v___x_2785_;
}
case 15:
{
lean_object* v___x_2786_; 
v___x_2786_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__15));
return v___x_2786_;
}
default: 
{
lean_object* v___x_2787_; 
v___x_2787_ = ((lean_object*)(lp_ariori_instToStringNodeLabel___lam__0___closed__16));
return v___x_2787_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instToStringNodeLabel___lam__0___boxed(lean_object* v_x_2788_){
_start:
{
uint8_t v_x_176__boxed_2789_; lean_object* v_res_2790_; 
v_x_176__boxed_2789_ = lean_unbox(v_x_2788_);
v_res_2790_ = lp_ariori_instToStringNodeLabel___lam__0(v_x_176__boxed_2789_);
return v_res_2790_;
}
}
LEAN_EXPORT uint8_t lp_ariori_hasEdge___lam__0(uint8_t v_v_3031_, uint8_t v_u_3032_, lean_object* v_x_3033_){
_start:
{
lean_object* v_fst_3034_; lean_object* v_snd_3035_; uint8_t v___y_3037_; uint8_t v___x_3042_; uint8_t v___x_3043_; 
v_fst_3034_ = lean_ctor_get(v_x_3033_, 0);
v_snd_3035_ = lean_ctor_get(v_x_3033_, 1);
v___x_3042_ = lean_unbox(v_fst_3034_);
v___x_3043_ = lp_ariori_instBEqNodeLabel_beq(v___x_3042_, v_u_3032_);
if (v___x_3043_ == 0)
{
v___y_3037_ = v___x_3043_;
goto v___jp_3036_;
}
else
{
uint8_t v___x_3044_; uint8_t v___x_3045_; 
v___x_3044_ = lean_unbox(v_snd_3035_);
v___x_3045_ = lp_ariori_instBEqNodeLabel_beq(v___x_3044_, v_v_3031_);
v___y_3037_ = v___x_3045_;
goto v___jp_3036_;
}
v___jp_3036_:
{
if (v___y_3037_ == 0)
{
uint8_t v___x_3038_; uint8_t v___x_3039_; 
v___x_3038_ = lean_unbox(v_fst_3034_);
v___x_3039_ = lp_ariori_instBEqNodeLabel_beq(v___x_3038_, v_v_3031_);
if (v___x_3039_ == 0)
{
return v___x_3039_;
}
else
{
uint8_t v___x_3040_; uint8_t v___x_3041_; 
v___x_3040_ = lean_unbox(v_snd_3035_);
v___x_3041_ = lp_ariori_instBEqNodeLabel_beq(v___x_3040_, v_u_3032_);
return v___x_3041_;
}
}
else
{
return v___y_3037_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_hasEdge___lam__0___boxed(lean_object* v_v_3046_, lean_object* v_u_3047_, lean_object* v_x_3048_){
_start:
{
uint8_t v_v_boxed_3049_; uint8_t v_u_boxed_3050_; uint8_t v_res_3051_; lean_object* v_r_3052_; 
v_v_boxed_3049_ = lean_unbox(v_v_3046_);
v_u_boxed_3050_ = lean_unbox(v_u_3047_);
v_res_3051_ = lp_ariori_hasEdge___lam__0(v_v_boxed_3049_, v_u_boxed_3050_, v_x_3048_);
lean_dec_ref(v_x_3048_);
v_r_3052_ = lean_box(v_res_3051_);
return v_r_3052_;
}
}
LEAN_EXPORT uint8_t lp_ariori_hasEdge(uint8_t v_u_3053_, uint8_t v_v_3054_){
_start:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___f_3057_; lean_object* v___x_3058_; uint8_t v___x_3059_; 
v___x_3055_ = lean_box(v_v_3054_);
v___x_3056_ = lean_box(v_u_3053_);
v___f_3057_ = lean_alloc_closure((void*)(lp_ariori_hasEdge___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3057_, 0, v___x_3055_);
lean_closure_set(v___f_3057_, 1, v___x_3056_);
v___x_3058_ = ((lean_object*)(lp_ariori_gen1Edges));
v___x_3059_ = l_List_any___redArg(v___x_3058_, v___f_3057_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* lp_ariori_hasEdge___boxed(lean_object* v_u_3060_, lean_object* v_v_3061_){
_start:
{
uint8_t v_u_boxed_3062_; uint8_t v_v_boxed_3063_; uint8_t v_res_3064_; lean_object* v_r_3065_; 
v_u_boxed_3062_ = lean_unbox(v_u_3060_);
v_v_boxed_3063_ = lean_unbox(v_v_3061_);
v_res_3064_ = lp_ariori_hasEdge(v_u_boxed_3062_, v_v_boxed_3063_);
v_r_3065_ = lean_box(v_res_3064_);
return v_r_3065_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00degree_spec__0(uint8_t v_node_3066_, lean_object* v_x_3067_, lean_object* v_x_3068_){
_start:
{
if (lean_obj_tag(v_x_3068_) == 0)
{
return v_x_3067_;
}
else
{
lean_object* v_head_3069_; lean_object* v_tail_3070_; uint8_t v___y_3072_; lean_object* v_fst_3077_; lean_object* v_snd_3078_; uint8_t v___x_3079_; uint8_t v___x_3080_; 
v_head_3069_ = lean_ctor_get(v_x_3068_, 0);
v_tail_3070_ = lean_ctor_get(v_x_3068_, 1);
v_fst_3077_ = lean_ctor_get(v_head_3069_, 0);
v_snd_3078_ = lean_ctor_get(v_head_3069_, 1);
v___x_3079_ = lean_unbox(v_fst_3077_);
v___x_3080_ = lp_ariori_instBEqNodeLabel_beq(v___x_3079_, v_node_3066_);
if (v___x_3080_ == 0)
{
uint8_t v___x_3081_; uint8_t v___x_3082_; 
v___x_3081_ = lean_unbox(v_snd_3078_);
v___x_3082_ = lp_ariori_instBEqNodeLabel_beq(v___x_3081_, v_node_3066_);
v___y_3072_ = v___x_3082_;
goto v___jp_3071_;
}
else
{
v___y_3072_ = v___x_3080_;
goto v___jp_3071_;
}
v___jp_3071_:
{
if (v___y_3072_ == 0)
{
v_x_3068_ = v_tail_3070_;
goto _start;
}
else
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_unsigned_to_nat(1u);
v___x_3075_ = lean_nat_add(v_x_3067_, v___x_3074_);
lean_dec(v_x_3067_);
v_x_3067_ = v___x_3075_;
v_x_3068_ = v_tail_3070_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00degree_spec__0___boxed(lean_object* v_node_3083_, lean_object* v_x_3084_, lean_object* v_x_3085_){
_start:
{
uint8_t v_node_boxed_3086_; lean_object* v_res_3087_; 
v_node_boxed_3086_ = lean_unbox(v_node_3083_);
v_res_3087_ = lp_ariori_List_foldl___at___00degree_spec__0(v_node_boxed_3086_, v_x_3084_, v_x_3085_);
lean_dec(v_x_3085_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* lp_ariori_degree(uint8_t v_node_3088_){
_start:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3089_ = lean_unsigned_to_nat(0u);
v___x_3090_ = ((lean_object*)(lp_ariori_gen1Edges));
v___x_3091_ = lp_ariori_List_foldl___at___00degree_spec__0(v_node_3088_, v___x_3089_, v___x_3090_);
return v___x_3091_;
}
}
LEAN_EXPORT lean_object* lp_ariori_degree___boxed(lean_object* v_node_3092_){
_start:
{
uint8_t v_node_boxed_3093_; lean_object* v_res_3094_; 
v_node_boxed_3093_ = lean_unbox(v_node_3092_);
v_res_3094_ = lp_ariori_degree(v_node_boxed_3093_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00neighbors_spec__0(uint8_t v_node_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_){
_start:
{
if (lean_obj_tag(v_a_3096_) == 0)
{
lean_object* v___x_3098_; 
v___x_3098_ = lean_array_to_list(v_a_3097_);
return v___x_3098_;
}
else
{
lean_object* v_head_3099_; lean_object* v_tail_3100_; uint8_t v_val_3102_; lean_object* v_fst_3106_; lean_object* v_snd_3107_; uint8_t v___x_3108_; uint8_t v___x_3109_; 
v_head_3099_ = lean_ctor_get(v_a_3096_, 0);
v_tail_3100_ = lean_ctor_get(v_a_3096_, 1);
v_fst_3106_ = lean_ctor_get(v_head_3099_, 0);
v_snd_3107_ = lean_ctor_get(v_head_3099_, 1);
v___x_3108_ = lean_unbox(v_fst_3106_);
v___x_3109_ = lp_ariori_instBEqNodeLabel_beq(v___x_3108_, v_node_3095_);
if (v___x_3109_ == 0)
{
uint8_t v___x_3110_; uint8_t v___x_3111_; 
v___x_3110_ = lean_unbox(v_snd_3107_);
v___x_3111_ = lp_ariori_instBEqNodeLabel_beq(v___x_3110_, v_node_3095_);
if (v___x_3111_ == 0)
{
v_a_3096_ = v_tail_3100_;
goto _start;
}
else
{
uint8_t v___x_3113_; 
v___x_3113_ = lean_unbox(v_fst_3106_);
v_val_3102_ = v___x_3113_;
goto v___jp_3101_;
}
}
else
{
uint8_t v___x_3114_; 
v___x_3114_ = lean_unbox(v_snd_3107_);
v_val_3102_ = v___x_3114_;
goto v___jp_3101_;
}
v___jp_3101_:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = lean_box(v_val_3102_);
v___x_3104_ = lean_array_push(v_a_3097_, v___x_3103_);
v_a_3096_ = v_tail_3100_;
v_a_3097_ = v___x_3104_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterMapTR_go___at___00neighbors_spec__0___boxed(lean_object* v_node_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_){
_start:
{
uint8_t v_node_boxed_3118_; lean_object* v_res_3119_; 
v_node_boxed_3118_ = lean_unbox(v_node_3115_);
v_res_3119_ = lp_ariori_List_filterMapTR_go___at___00neighbors_spec__0(v_node_boxed_3118_, v_a_3116_, v_a_3117_);
lean_dec(v_a_3116_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* lp_ariori_neighbors(uint8_t v_node_3122_){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3123_ = ((lean_object*)(lp_ariori_gen1Edges));
v___x_3124_ = ((lean_object*)(lp_ariori_neighbors___closed__0));
v___x_3125_ = lp_ariori_List_filterMapTR_go___at___00neighbors_spec__0(v_node_3122_, v___x_3123_, v___x_3124_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* lp_ariori_neighbors___boxed(lean_object* v_node_3126_){
_start:
{
uint8_t v_node_boxed_3127_; lean_object* v_res_3128_; 
v_node_boxed_3127_ = lean_unbox(v_node_3126_);
v_res_3128_ = lp_ariori_neighbors(v_node_boxed_3127_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00neighborMultisetCount_spec__0(lean_object* v_x_3129_, lean_object* v_x_3130_){
_start:
{
if (lean_obj_tag(v_x_3130_) == 0)
{
return v_x_3129_;
}
else
{
lean_object* v_tail_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v_tail_3131_ = lean_ctor_get(v_x_3130_, 1);
v___x_3132_ = lean_unsigned_to_nat(1u);
v___x_3133_ = lean_nat_add(v_x_3129_, v___x_3132_);
lean_dec(v_x_3129_);
v_x_3129_ = v___x_3133_;
v_x_3130_ = v_tail_3131_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00neighborMultisetCount_spec__0___boxed(lean_object* v_x_3135_, lean_object* v_x_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = lp_ariori_List_foldl___at___00neighborMultisetCount_spec__0(v_x_3135_, v_x_3136_);
lean_dec(v_x_3136_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* lp_ariori_neighborMultisetCount(uint8_t v_n_3138_){
_start:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3139_ = lean_unsigned_to_nat(0u);
v___x_3140_ = lp_ariori_neighbors(v_n_3138_);
v___x_3141_ = lp_ariori_List_foldl___at___00neighborMultisetCount_spec__0(v___x_3139_, v___x_3140_);
lean_dec(v___x_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* lp_ariori_neighborMultisetCount___boxed(lean_object* v_n_3142_){
_start:
{
uint8_t v_n_boxed_3143_; lean_object* v_res_3144_; 
v_n_boxed_3143_ = lean_unbox(v_n_3142_);
v_res_3144_ = lp_ariori_neighborMultisetCount(v_n_boxed_3143_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__0(uint8_t v_v_3145_, uint8_t v_head_3146_, lean_object* v_x_3147_, lean_object* v_x_3148_){
_start:
{
if (lean_obj_tag(v_x_3148_) == 0)
{
return v_x_3147_;
}
else
{
lean_object* v_head_3149_; lean_object* v_tail_3150_; uint8_t v___x_3151_; uint8_t v___x_3152_; 
v_head_3149_ = lean_ctor_get(v_x_3148_, 0);
v_tail_3150_ = lean_ctor_get(v_x_3148_, 1);
v___x_3151_ = lean_unbox(v_head_3149_);
v___x_3152_ = lp_ariori_instBEqNodeLabel_beq(v_v_3145_, v___x_3151_);
if (v___x_3152_ == 0)
{
uint8_t v___x_3153_; 
v___x_3153_ = lp_ariori_hasEdge(v_head_3146_, v_v_3145_);
if (v___x_3153_ == 0)
{
v_x_3148_ = v_tail_3150_;
goto _start;
}
else
{
uint8_t v___x_3155_; uint8_t v___x_3156_; 
v___x_3155_ = lean_unbox(v_head_3149_);
v___x_3156_ = lp_ariori_hasEdge(v_v_3145_, v___x_3155_);
if (v___x_3156_ == 0)
{
v_x_3148_ = v_tail_3150_;
goto _start;
}
else
{
uint8_t v___x_3158_; uint8_t v___x_3159_; 
v___x_3158_ = lean_unbox(v_head_3149_);
v___x_3159_ = lp_ariori_hasEdge(v_head_3146_, v___x_3158_);
if (v___x_3159_ == 0)
{
v_x_3148_ = v_tail_3150_;
goto _start;
}
else
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = lean_unsigned_to_nat(1u);
v___x_3162_ = lean_nat_add(v_x_3147_, v___x_3161_);
lean_dec(v_x_3147_);
v_x_3147_ = v___x_3162_;
v_x_3148_ = v_tail_3150_;
goto _start;
}
}
}
}
else
{
v_x_3148_ = v_tail_3150_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__0___boxed(lean_object* v_v_3165_, lean_object* v_head_3166_, lean_object* v_x_3167_, lean_object* v_x_3168_){
_start:
{
uint8_t v_v_boxed_3169_; uint8_t v_head_283__boxed_3170_; lean_object* v_res_3171_; 
v_v_boxed_3169_ = lean_unbox(v_v_3165_);
v_head_283__boxed_3170_ = lean_unbox(v_head_3166_);
v_res_3171_ = lp_ariori_List_foldl___at___00countTriangles_go_spec__0(v_v_boxed_3169_, v_head_283__boxed_3170_, v_x_3167_, v_x_3168_);
lean_dec(v_x_3168_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__1(uint8_t v_head_3172_, lean_object* v_tail_3173_, lean_object* v_x_3174_, lean_object* v_x_3175_){
_start:
{
if (lean_obj_tag(v_x_3175_) == 0)
{
return v_x_3174_;
}
else
{
lean_object* v_head_3176_; lean_object* v_tail_3177_; uint8_t v___x_3178_; lean_object* v___x_3179_; 
v_head_3176_ = lean_ctor_get(v_x_3175_, 0);
v_tail_3177_ = lean_ctor_get(v_x_3175_, 1);
v___x_3178_ = lean_unbox(v_head_3176_);
v___x_3179_ = lp_ariori_List_foldl___at___00countTriangles_go_spec__0(v___x_3178_, v_head_3172_, v_x_3174_, v_tail_3173_);
v_x_3174_ = v___x_3179_;
v_x_3175_ = v_tail_3177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countTriangles_go_spec__1___boxed(lean_object* v_head_3181_, lean_object* v_tail_3182_, lean_object* v_x_3183_, lean_object* v_x_3184_){
_start:
{
uint8_t v_head_324__boxed_3185_; lean_object* v_res_3186_; 
v_head_324__boxed_3185_ = lean_unbox(v_head_3181_);
v_res_3186_ = lp_ariori_List_foldl___at___00countTriangles_go_spec__1(v_head_324__boxed_3185_, v_tail_3182_, v_x_3183_, v_x_3184_);
lean_dec(v_x_3184_);
lean_dec(v_tail_3182_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* lp_ariori_countTriangles_go(lean_object* v_remaining_3187_, lean_object* v_acc_3188_){
_start:
{
if (lean_obj_tag(v_remaining_3187_) == 0)
{
return v_acc_3188_;
}
else
{
lean_object* v_head_3189_; lean_object* v_tail_3190_; lean_object* v___x_3191_; uint8_t v___x_3192_; lean_object* v_inner_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v_head_3189_ = lean_ctor_get(v_remaining_3187_, 0);
v_tail_3190_ = lean_ctor_get(v_remaining_3187_, 1);
v___x_3191_ = lean_unsigned_to_nat(0u);
v___x_3192_ = lean_unbox(v_head_3189_);
v_inner_3193_ = lp_ariori_List_foldl___at___00countTriangles_go_spec__1(v___x_3192_, v_tail_3190_, v___x_3191_, v_tail_3190_);
v___x_3194_ = lean_unsigned_to_nat(1u);
v___x_3195_ = lean_nat_shiftr(v_inner_3193_, v___x_3194_);
lean_dec(v_inner_3193_);
v___x_3196_ = lean_nat_add(v_acc_3188_, v___x_3195_);
lean_dec(v___x_3195_);
lean_dec(v_acc_3188_);
v_remaining_3187_ = v_tail_3190_;
v_acc_3188_ = v___x_3196_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_countTriangles_go___boxed(lean_object* v_remaining_3198_, lean_object* v_acc_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = lp_ariori_countTriangles_go(v_remaining_3198_, v_acc_3199_);
lean_dec(v_remaining_3198_);
return v_res_3200_;
}
}
static lean_object* _init_lp_ariori_countTriangles___closed__0(void){
_start:
{
lean_object* v___x_3201_; lean_object* v_nodes_3202_; lean_object* v___x_3203_; 
v___x_3201_ = lean_unsigned_to_nat(0u);
v_nodes_3202_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3203_ = lp_ariori_countTriangles_go(v_nodes_3202_, v___x_3201_);
return v___x_3203_;
}
}
static lean_object* _init_lp_ariori_countTriangles(void){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = lean_obj_once(&lp_ariori_countTriangles___closed__0, &lp_ariori_countTriangles___closed__0_once, _init_lp_ariori_countTriangles___closed__0);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go3(uint8_t v_u_3205_, uint8_t v_v_3206_, lean_object* v_ws_3207_, lean_object* v_acc_3208_){
_start:
{
if (lean_obj_tag(v_ws_3207_) == 0)
{
return v_acc_3208_;
}
else
{
lean_object* v_head_3209_; lean_object* v_tail_3210_; lean_object* v___x_3212_; uint8_t v_isShared_3213_; uint8_t v_isSharedCheck_3231_; 
v_head_3209_ = lean_ctor_get(v_ws_3207_, 0);
v_tail_3210_ = lean_ctor_get(v_ws_3207_, 1);
v_isSharedCheck_3231_ = !lean_is_exclusive(v_ws_3207_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3212_ = v_ws_3207_;
v_isShared_3213_ = v_isSharedCheck_3231_;
goto v_resetjp_3211_;
}
else
{
lean_inc(v_tail_3210_);
lean_inc(v_head_3209_);
lean_dec(v_ws_3207_);
v___x_3212_ = lean_box(0);
v_isShared_3213_ = v_isSharedCheck_3231_;
goto v_resetjp_3211_;
}
v_resetjp_3211_:
{
uint8_t v___y_3215_; uint8_t v___x_3228_; 
v___x_3228_ = lp_ariori_hasEdge(v_u_3205_, v_v_3206_);
if (v___x_3228_ == 0)
{
v___y_3215_ = v___x_3228_;
goto v___jp_3214_;
}
else
{
uint8_t v___x_3229_; uint8_t v___x_3230_; 
v___x_3229_ = lean_unbox(v_head_3209_);
v___x_3230_ = lp_ariori_hasEdge(v_v_3206_, v___x_3229_);
v___y_3215_ = v___x_3230_;
goto v___jp_3214_;
}
v___jp_3214_:
{
if (v___y_3215_ == 0)
{
lean_del_object(v___x_3212_);
lean_dec(v_head_3209_);
v_ws_3207_ = v_tail_3210_;
goto _start;
}
else
{
uint8_t v___x_3217_; uint8_t v___x_3218_; 
v___x_3217_ = lean_unbox(v_head_3209_);
v___x_3218_ = lp_ariori_hasEdge(v_u_3205_, v___x_3217_);
if (v___x_3218_ == 0)
{
lean_del_object(v___x_3212_);
lean_dec(v_head_3209_);
v_ws_3207_ = v_tail_3210_;
goto _start;
}
else
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3225_; 
v___x_3220_ = lean_box(v_v_3206_);
v___x_3221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3220_);
lean_ctor_set(v___x_3221_, 1, v_head_3209_);
v___x_3222_ = lean_box(v_u_3205_);
v___x_3223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3222_);
lean_ctor_set(v___x_3223_, 1, v___x_3221_);
if (v_isShared_3213_ == 0)
{
lean_ctor_set(v___x_3212_, 1, v_acc_3208_);
lean_ctor_set(v___x_3212_, 0, v___x_3223_);
v___x_3225_ = v___x_3212_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3223_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v_acc_3208_);
v___x_3225_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
v_ws_3207_ = v_tail_3210_;
v_acc_3208_ = v___x_3225_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go3___boxed(lean_object* v_u_3232_, lean_object* v_v_3233_, lean_object* v_ws_3234_, lean_object* v_acc_3235_){
_start:
{
uint8_t v_u_boxed_3236_; uint8_t v_v_boxed_3237_; lean_object* v_res_3238_; 
v_u_boxed_3236_ = lean_unbox(v_u_3232_);
v_v_boxed_3237_ = lean_unbox(v_v_3233_);
v_res_3238_ = lp_ariori_findTriangles_go3(v_u_boxed_3236_, v_v_boxed_3237_, v_ws_3234_, v_acc_3235_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go2(uint8_t v_u_3239_, lean_object* v_vs_3240_, lean_object* v_acc_3241_){
_start:
{
if (lean_obj_tag(v_vs_3240_) == 0)
{
return v_acc_3241_;
}
else
{
lean_object* v_head_3242_; lean_object* v_tail_3243_; uint8_t v___x_3244_; lean_object* v___x_3245_; 
v_head_3242_ = lean_ctor_get(v_vs_3240_, 0);
lean_inc(v_head_3242_);
v_tail_3243_ = lean_ctor_get(v_vs_3240_, 1);
lean_inc_n(v_tail_3243_, 2);
lean_dec_ref(v_vs_3240_);
v___x_3244_ = lean_unbox(v_head_3242_);
lean_dec(v_head_3242_);
v___x_3245_ = lp_ariori_findTriangles_go3(v_u_3239_, v___x_3244_, v_tail_3243_, v_acc_3241_);
v_vs_3240_ = v_tail_3243_;
v_acc_3241_ = v___x_3245_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go2___boxed(lean_object* v_u_3247_, lean_object* v_vs_3248_, lean_object* v_acc_3249_){
_start:
{
uint8_t v_u_boxed_3250_; lean_object* v_res_3251_; 
v_u_boxed_3250_ = lean_unbox(v_u_3247_);
v_res_3251_ = lp_ariori_findTriangles_go2(v_u_boxed_3250_, v_vs_3248_, v_acc_3249_);
return v_res_3251_;
}
}
LEAN_EXPORT lean_object* lp_ariori_findTriangles_go1(lean_object* v_us_3252_, lean_object* v_acc_3253_){
_start:
{
if (lean_obj_tag(v_us_3252_) == 0)
{
return v_acc_3253_;
}
else
{
lean_object* v_head_3254_; lean_object* v_tail_3255_; uint8_t v___x_3256_; lean_object* v___x_3257_; 
v_head_3254_ = lean_ctor_get(v_us_3252_, 0);
lean_inc(v_head_3254_);
v_tail_3255_ = lean_ctor_get(v_us_3252_, 1);
lean_inc_n(v_tail_3255_, 2);
lean_dec_ref(v_us_3252_);
v___x_3256_ = lean_unbox(v_head_3254_);
lean_dec(v_head_3254_);
v___x_3257_ = lp_ariori_findTriangles_go2(v___x_3256_, v_tail_3255_, v_acc_3253_);
v_us_3252_ = v_tail_3255_;
v_acc_3253_ = v___x_3257_;
goto _start;
}
}
}
static lean_object* _init_lp_ariori_findTriangles___closed__0(void){
_start:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3259_ = lean_box(0);
v___x_3260_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3261_ = lp_ariori_findTriangles_go1(v___x_3260_, v___x_3259_);
return v___x_3261_;
}
}
static lean_object* _init_lp_ariori_findTriangles___closed__1(void){
_start:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3262_ = lean_obj_once(&lp_ariori_findTriangles___closed__0, &lp_ariori_findTriangles___closed__0_once, _init_lp_ariori_findTriangles___closed__0);
v___x_3263_ = l_List_reverse___redArg(v___x_3262_);
return v___x_3263_;
}
}
static lean_object* _init_lp_ariori_findTriangles(void){
_start:
{
lean_object* v___x_3264_; 
v___x_3264_ = lean_obj_once(&lp_ariori_findTriangles___closed__1, &lp_ariori_findTriangles___closed__1_once, _init_lp_ariori_findTriangles___closed__1);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00handshakingSum_spec__0(lean_object* v_x_3265_, lean_object* v_x_3266_){
_start:
{
if (lean_obj_tag(v_x_3266_) == 0)
{
return v_x_3265_;
}
else
{
lean_object* v_head_3267_; lean_object* v_tail_3268_; uint8_t v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v_head_3267_ = lean_ctor_get(v_x_3266_, 0);
v_tail_3268_ = lean_ctor_get(v_x_3266_, 1);
v___x_3269_ = lean_unbox(v_head_3267_);
v___x_3270_ = lp_ariori_degree(v___x_3269_);
v___x_3271_ = lean_nat_add(v_x_3265_, v___x_3270_);
lean_dec(v___x_3270_);
lean_dec(v_x_3265_);
v_x_3265_ = v___x_3271_;
v_x_3266_ = v_tail_3268_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00handshakingSum_spec__0___boxed(lean_object* v_x_3273_, lean_object* v_x_3274_){
_start:
{
lean_object* v_res_3275_; 
v_res_3275_ = lp_ariori_List_foldl___at___00handshakingSum_spec__0(v_x_3273_, v_x_3274_);
lean_dec(v_x_3274_);
return v_res_3275_;
}
}
static lean_object* _init_lp_ariori_handshakingSum___closed__0(void){
_start:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v___x_3276_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3277_ = lean_unsigned_to_nat(0u);
v___x_3278_ = lp_ariori_List_foldl___at___00handshakingSum_spec__0(v___x_3277_, v___x_3276_);
return v___x_3278_;
}
}
static lean_object* _init_lp_ariori_handshakingSum(void){
_start:
{
lean_object* v___x_3279_; 
v___x_3279_ = lean_obj_once(&lp_ariori_handshakingSum___closed__0, &lp_ariori_handshakingSum___closed__0_once, _init_lp_ariori_handshakingSum___closed__0);
return v___x_3279_;
}
}
LEAN_EXPORT uint8_t lp_ariori_degreeMatchesNeighbors___lam__0(uint8_t v_n_3280_){
_start:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; uint8_t v___x_3284_; 
v___x_3281_ = lp_ariori_degree(v_n_3280_);
v___x_3282_ = lp_ariori_neighbors(v_n_3280_);
v___x_3283_ = l_List_lengthTR___redArg(v___x_3282_);
lean_dec(v___x_3282_);
v___x_3284_ = lean_nat_dec_eq(v___x_3281_, v___x_3283_);
lean_dec(v___x_3283_);
lean_dec(v___x_3281_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* lp_ariori_degreeMatchesNeighbors___lam__0___boxed(lean_object* v_n_3285_){
_start:
{
uint8_t v_n_boxed_3286_; uint8_t v_res_3287_; lean_object* v_r_3288_; 
v_n_boxed_3286_ = lean_unbox(v_n_3285_);
v_res_3287_ = lp_ariori_degreeMatchesNeighbors___lam__0(v_n_boxed_3286_);
v_r_3288_ = lean_box(v_res_3287_);
return v_r_3288_;
}
}
static uint8_t _init_lp_ariori_degreeMatchesNeighbors___closed__1(void){
_start:
{
lean_object* v___f_3290_; lean_object* v___x_3291_; uint8_t v___x_3292_; 
v___f_3290_ = ((lean_object*)(lp_ariori_degreeMatchesNeighbors___closed__0));
v___x_3291_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3292_ = l_List_all___redArg(v___x_3291_, v___f_3290_);
return v___x_3292_;
}
}
static uint8_t _init_lp_ariori_degreeMatchesNeighbors(void){
_start:
{
uint8_t v___x_3293_; 
v___x_3293_ = lean_uint8_once(&lp_ariori_degreeMatchesNeighbors___closed__1, &lp_ariori_degreeMatchesNeighbors___closed__1_once, _init_lp_ariori_degreeMatchesNeighbors___closed__1);
return v___x_3293_;
}
}
LEAN_EXPORT uint8_t lp_ariori_laplacianRowSumsZero___lam__0(uint8_t v_n_3294_){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; 
v___x_3295_ = lp_ariori_degree(v_n_3294_);
v___x_3296_ = lp_ariori_neighborMultisetCount(v_n_3294_);
v___x_3297_ = lean_nat_dec_eq(v___x_3295_, v___x_3296_);
lean_dec(v___x_3296_);
lean_dec(v___x_3295_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* lp_ariori_laplacianRowSumsZero___lam__0___boxed(lean_object* v_n_3298_){
_start:
{
uint8_t v_n_boxed_3299_; uint8_t v_res_3300_; lean_object* v_r_3301_; 
v_n_boxed_3299_ = lean_unbox(v_n_3298_);
v_res_3300_ = lp_ariori_laplacianRowSumsZero___lam__0(v_n_boxed_3299_);
v_r_3301_ = lean_box(v_res_3300_);
return v_r_3301_;
}
}
static uint8_t _init_lp_ariori_laplacianRowSumsZero___closed__1(void){
_start:
{
lean_object* v___f_3303_; lean_object* v___x_3304_; uint8_t v___x_3305_; 
v___f_3303_ = ((lean_object*)(lp_ariori_laplacianRowSumsZero___closed__0));
v___x_3304_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3305_ = l_List_all___redArg(v___x_3304_, v___f_3303_);
return v___x_3305_;
}
}
static uint8_t _init_lp_ariori_laplacianRowSumsZero(void){
_start:
{
uint8_t v___x_3306_; 
v___x_3306_ = lean_uint8_once(&lp_ariori_laplacianRowSumsZero___closed__1, &lp_ariori_laplacianRowSumsZero___closed__1_once, _init_lp_ariori_laplacianRowSumsZero___closed__1);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_any_match__1_splitter___redArg(lean_object* v_x_3307_, lean_object* v_x_3308_, lean_object* v_h__1_3309_, lean_object* v_h__2_3310_){
_start:
{
if (lean_obj_tag(v_x_3307_) == 0)
{
lean_object* v___x_3311_; 
lean_dec(v_h__2_3310_);
v___x_3311_ = lean_apply_1(v_h__1_3309_, v_x_3308_);
return v___x_3311_;
}
else
{
lean_object* v_head_3312_; lean_object* v_tail_3313_; lean_object* v___x_3314_; 
lean_dec(v_h__1_3309_);
v_head_3312_ = lean_ctor_get(v_x_3307_, 0);
lean_inc(v_head_3312_);
v_tail_3313_ = lean_ctor_get(v_x_3307_, 1);
lean_inc(v_tail_3313_);
lean_dec_ref(v_x_3307_);
v___x_3314_ = lean_apply_3(v_h__2_3310_, v_head_3312_, v_tail_3313_, v_x_3308_);
return v___x_3314_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__List_any_match__1_splitter(lean_object* v_00_u03b1_3315_, lean_object* v_motive_3316_, lean_object* v_x_3317_, lean_object* v_x_3318_, lean_object* v_h__1_3319_, lean_object* v_h__2_3320_){
_start:
{
if (lean_obj_tag(v_x_3317_) == 0)
{
lean_object* v___x_3321_; 
lean_dec(v_h__2_3320_);
v___x_3321_ = lean_apply_1(v_h__1_3319_, v_x_3318_);
return v___x_3321_;
}
else
{
lean_object* v_head_3322_; lean_object* v_tail_3323_; lean_object* v___x_3324_; 
lean_dec(v_h__1_3319_);
v_head_3322_ = lean_ctor_get(v_x_3317_, 0);
lean_inc(v_head_3322_);
v_tail_3323_ = lean_ctor_get(v_x_3317_, 1);
lean_inc(v_tail_3323_);
lean_dec_ref(v_x_3317_);
v___x_3324_ = lean_apply_3(v_h__2_3320_, v_head_3322_, v_tail_3323_, v_x_3318_);
return v___x_3324_;
}
}
}
LEAN_EXPORT uint8_t lp_ariori_List_elem___at___00insertIfNew_spec__0(uint8_t v_a_3325_, lean_object* v_x_3326_){
_start:
{
if (lean_obj_tag(v_x_3326_) == 0)
{
uint8_t v___x_3327_; 
v___x_3327_ = 0;
return v___x_3327_;
}
else
{
lean_object* v_head_3328_; lean_object* v_tail_3329_; uint8_t v___x_3330_; uint8_t v___x_3331_; 
v_head_3328_ = lean_ctor_get(v_x_3326_, 0);
v_tail_3329_ = lean_ctor_get(v_x_3326_, 1);
v___x_3330_ = lean_unbox(v_head_3328_);
v___x_3331_ = lp_ariori_instBEqNodeLabel_beq(v_a_3325_, v___x_3330_);
if (v___x_3331_ == 0)
{
v_x_3326_ = v_tail_3329_;
goto _start;
}
else
{
return v___x_3331_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_elem___at___00insertIfNew_spec__0___boxed(lean_object* v_a_3333_, lean_object* v_x_3334_){
_start:
{
uint8_t v_a_boxed_3335_; uint8_t v_res_3336_; lean_object* v_r_3337_; 
v_a_boxed_3335_ = lean_unbox(v_a_3333_);
v_res_3336_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v_a_boxed_3335_, v_x_3334_);
lean_dec(v_x_3334_);
v_r_3337_ = lean_box(v_res_3336_);
return v_r_3337_;
}
}
LEAN_EXPORT lean_object* lp_ariori_insertIfNew(uint8_t v_x_3338_, lean_object* v_xs_3339_){
_start:
{
uint8_t v___x_3340_; 
v___x_3340_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v_x_3338_, v_xs_3339_);
if (v___x_3340_ == 0)
{
lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3341_ = lean_box(v_x_3338_);
v___x_3342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v_xs_3339_);
return v___x_3342_;
}
else
{
return v_xs_3339_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_insertIfNew___boxed(lean_object* v_x_3343_, lean_object* v_xs_3344_){
_start:
{
uint8_t v_x_boxed_3345_; lean_object* v_res_3346_; 
v_x_boxed_3345_ = lean_unbox(v_x_3343_);
v_res_3346_ = lp_ariori_insertIfNew(v_x_boxed_3345_, v_xs_3344_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__0(lean_object* v_x_3347_, lean_object* v_x_3348_){
_start:
{
if (lean_obj_tag(v_x_3348_) == 0)
{
return v_x_3347_;
}
else
{
lean_object* v_head_3349_; lean_object* v_tail_3350_; uint8_t v___x_3351_; lean_object* v___x_3352_; 
v_head_3349_ = lean_ctor_get(v_x_3348_, 0);
v_tail_3350_ = lean_ctor_get(v_x_3348_, 1);
v___x_3351_ = lean_unbox(v_head_3349_);
v___x_3352_ = lp_ariori_insertIfNew(v___x_3351_, v_x_3347_);
v_x_3347_ = v___x_3352_;
v_x_3348_ = v_tail_3350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__0___boxed(lean_object* v_x_3354_, lean_object* v_x_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = lp_ariori_List_foldl___at___00expandReachable_spec__0(v_x_3354_, v_x_3355_);
lean_dec(v_x_3355_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__1(lean_object* v_x_3357_, lean_object* v_x_3358_){
_start:
{
if (lean_obj_tag(v_x_3358_) == 0)
{
return v_x_3357_;
}
else
{
lean_object* v_head_3359_; lean_object* v_tail_3360_; uint8_t v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v_head_3359_ = lean_ctor_get(v_x_3358_, 0);
v_tail_3360_ = lean_ctor_get(v_x_3358_, 1);
v___x_3361_ = lean_unbox(v_head_3359_);
v___x_3362_ = lp_ariori_neighbors(v___x_3361_);
v___x_3363_ = lp_ariori_List_foldl___at___00expandReachable_spec__0(v_x_3357_, v___x_3362_);
lean_dec(v___x_3362_);
v_x_3357_ = v___x_3363_;
v_x_3358_ = v_tail_3360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00expandReachable_spec__1___boxed(lean_object* v_x_3365_, lean_object* v_x_3366_){
_start:
{
lean_object* v_res_3367_; 
v_res_3367_ = lp_ariori_List_foldl___at___00expandReachable_spec__1(v_x_3365_, v_x_3366_);
lean_dec(v_x_3366_);
return v_res_3367_;
}
}
LEAN_EXPORT lean_object* lp_ariori_expandReachable(lean_object* v_seen_3368_){
_start:
{
lean_object* v___x_3369_; 
lean_inc(v_seen_3368_);
v___x_3369_ = lp_ariori_List_foldl___at___00expandReachable_spec__1(v_seen_3368_, v_seen_3368_);
lean_dec(v_seen_3368_);
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00reachableFromStart_spec__0(lean_object* v_x_3370_, lean_object* v_x_3371_){
_start:
{
if (lean_obj_tag(v_x_3371_) == 0)
{
return v_x_3370_;
}
else
{
lean_object* v_tail_3372_; lean_object* v___x_3373_; 
v_tail_3372_ = lean_ctor_get(v_x_3371_, 1);
lean_inc(v_x_3370_);
v___x_3373_ = lp_ariori_List_foldl___at___00expandReachable_spec__1(v_x_3370_, v_x_3370_);
lean_dec(v_x_3370_);
v_x_3370_ = v___x_3373_;
v_x_3371_ = v_tail_3372_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00reachableFromStart_spec__0___boxed(lean_object* v_x_3375_, lean_object* v_x_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = lp_ariori_List_foldl___at___00reachableFromStart_spec__0(v_x_3375_, v_x_3376_);
lean_dec(v_x_3376_);
return v_res_3377_;
}
}
static lean_object* _init_lp_ariori_reachableFromStart___closed__0(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = lean_unsigned_to_nat(18u);
v___x_3379_ = l_List_range(v___x_3378_);
return v___x_3379_;
}
}
LEAN_EXPORT lean_object* lp_ariori_reachableFromStart(uint8_t v_start_3380_){
_start:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v___x_3381_ = lean_box(0);
v___x_3382_ = lean_box(v_start_3380_);
v___x_3383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3382_);
lean_ctor_set(v___x_3383_, 1, v___x_3381_);
v___x_3384_ = lean_obj_once(&lp_ariori_reachableFromStart___closed__0, &lp_ariori_reachableFromStart___closed__0_once, _init_lp_ariori_reachableFromStart___closed__0);
v___x_3385_ = lp_ariori_List_foldl___at___00reachableFromStart_spec__0(v___x_3383_, v___x_3384_);
return v___x_3385_;
}
}
LEAN_EXPORT lean_object* lp_ariori_reachableFromStart___boxed(lean_object* v_start_3386_){
_start:
{
uint8_t v_start_boxed_3387_; lean_object* v_res_3388_; 
v_start_boxed_3387_ = lean_unbox(v_start_3386_);
v_res_3388_ = lp_ariori_reachableFromStart(v_start_boxed_3387_);
return v_res_3388_;
}
}
static lean_object* _init_lp_ariori_gen1Connected___lam__0___closed__0(void){
_start:
{
uint8_t v___x_3389_; lean_object* v___x_3390_; 
v___x_3389_ = 0;
v___x_3390_ = lp_ariori_reachableFromStart(v___x_3389_);
return v___x_3390_;
}
}
LEAN_EXPORT uint8_t lp_ariori_gen1Connected___lam__0(uint8_t v_n_3391_){
_start:
{
lean_object* v___x_3392_; uint8_t v___x_3393_; 
v___x_3392_ = lean_obj_once(&lp_ariori_gen1Connected___lam__0___closed__0, &lp_ariori_gen1Connected___lam__0___closed__0_once, _init_lp_ariori_gen1Connected___lam__0___closed__0);
v___x_3393_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v_n_3391_, v___x_3392_);
return v___x_3393_;
}
}
LEAN_EXPORT lean_object* lp_ariori_gen1Connected___lam__0___boxed(lean_object* v_n_3394_){
_start:
{
uint8_t v_n_boxed_3395_; uint8_t v_res_3396_; lean_object* v_r_3397_; 
v_n_boxed_3395_ = lean_unbox(v_n_3394_);
v_res_3396_ = lp_ariori_gen1Connected___lam__0(v_n_boxed_3395_);
v_r_3397_ = lean_box(v_res_3396_);
return v_r_3397_;
}
}
static uint8_t _init_lp_ariori_gen1Connected___closed__1(void){
_start:
{
lean_object* v___f_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___f_3399_ = ((lean_object*)(lp_ariori_gen1Connected___closed__0));
v___x_3400_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3401_ = l_List_all___redArg(v___x_3400_, v___f_3399_);
return v___x_3401_;
}
}
static uint8_t _init_lp_ariori_gen1Connected(void){
_start:
{
uint8_t v___x_3402_; 
v___x_3402_ = lean_uint8_once(&lp_ariori_gen1Connected___closed__1, &lp_ariori_gen1Connected___closed__1_once, _init_lp_ariori_gen1Connected___closed__1);
return v___x_3402_;
}
}
LEAN_EXPORT uint8_t lp_ariori_isGraphAutomorphism___lam__0(uint8_t v_u_3403_, lean_object* v_00_u03c3_3404_, uint8_t v_v_3405_){
_start:
{
uint8_t v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; uint8_t v___x_3411_; uint8_t v___x_3412_; uint8_t v___x_3413_; 
v___x_3406_ = lp_ariori_hasEdge(v_u_3403_, v_v_3405_);
v___x_3407_ = lean_box(v_u_3403_);
lean_inc_ref(v_00_u03c3_3404_);
v___x_3408_ = lean_apply_1(v_00_u03c3_3404_, v___x_3407_);
v___x_3409_ = lean_box(v_v_3405_);
v___x_3410_ = lean_apply_1(v_00_u03c3_3404_, v___x_3409_);
v___x_3411_ = lean_unbox(v___x_3408_);
v___x_3412_ = lean_unbox(v___x_3410_);
v___x_3413_ = lp_ariori_hasEdge(v___x_3411_, v___x_3412_);
if (v___x_3406_ == 0)
{
if (v___x_3413_ == 0)
{
uint8_t v___x_3414_; 
v___x_3414_ = 1;
return v___x_3414_;
}
else
{
return v___x_3406_;
}
}
else
{
return v___x_3413_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_isGraphAutomorphism___lam__0___boxed(lean_object* v_u_3415_, lean_object* v_00_u03c3_3416_, lean_object* v_v_3417_){
_start:
{
uint8_t v_u_boxed_3418_; uint8_t v_v_boxed_3419_; uint8_t v_res_3420_; lean_object* v_r_3421_; 
v_u_boxed_3418_ = lean_unbox(v_u_3415_);
v_v_boxed_3419_ = lean_unbox(v_v_3417_);
v_res_3420_ = lp_ariori_isGraphAutomorphism___lam__0(v_u_boxed_3418_, v_00_u03c3_3416_, v_v_boxed_3419_);
v_r_3421_ = lean_box(v_res_3420_);
return v_r_3421_;
}
}
LEAN_EXPORT uint8_t lp_ariori_isGraphAutomorphism___lam__1(lean_object* v_00_u03c3_3422_, lean_object* v___x_3423_, uint8_t v_u_3424_){
_start:
{
lean_object* v___x_3425_; lean_object* v___f_3426_; uint8_t v___x_3427_; 
v___x_3425_ = lean_box(v_u_3424_);
v___f_3426_ = lean_alloc_closure((void*)(lp_ariori_isGraphAutomorphism___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3426_, 0, v___x_3425_);
lean_closure_set(v___f_3426_, 1, v_00_u03c3_3422_);
v___x_3427_ = l_List_all___redArg(v___x_3423_, v___f_3426_);
return v___x_3427_;
}
}
LEAN_EXPORT lean_object* lp_ariori_isGraphAutomorphism___lam__1___boxed(lean_object* v_00_u03c3_3428_, lean_object* v___x_3429_, lean_object* v_u_3430_){
_start:
{
uint8_t v_u_boxed_3431_; uint8_t v_res_3432_; lean_object* v_r_3433_; 
v_u_boxed_3431_ = lean_unbox(v_u_3430_);
v_res_3432_ = lp_ariori_isGraphAutomorphism___lam__1(v_00_u03c3_3428_, v___x_3429_, v_u_boxed_3431_);
v_r_3433_ = lean_box(v_res_3432_);
return v_r_3433_;
}
}
LEAN_EXPORT uint8_t lp_ariori_isGraphAutomorphism(lean_object* v_00_u03c3_3434_){
_start:
{
lean_object* v___x_3435_; lean_object* v___f_3436_; uint8_t v___x_3437_; 
v___x_3435_ = ((lean_object*)(lp_ariori_allNodes));
v___f_3436_ = lean_alloc_closure((void*)(lp_ariori_isGraphAutomorphism___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3436_, 0, v_00_u03c3_3434_);
lean_closure_set(v___f_3436_, 1, v___x_3435_);
v___x_3437_ = l_List_all___redArg(v___x_3435_, v___f_3436_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* lp_ariori_isGraphAutomorphism___boxed(lean_object* v_00_u03c3_3438_){
_start:
{
uint8_t v_res_3439_; lean_object* v_r_3440_; 
v_res_3439_ = lp_ariori_isGraphAutomorphism(v_00_u03c3_3438_);
v_r_3440_ = lean_box(v_res_3439_);
return v_r_3440_;
}
}
LEAN_EXPORT uint8_t lp_ariori_idNode(uint8_t v_n_3441_){
_start:
{
return v_n_3441_;
}
}
LEAN_EXPORT lean_object* lp_ariori_idNode___boxed(lean_object* v_n_3442_){
_start:
{
uint8_t v_n_boxed_3443_; uint8_t v_res_3444_; lean_object* v_r_3445_; 
v_n_boxed_3443_ = lean_unbox(v_n_3442_);
v_res_3444_ = lp_ariori_idNode(v_n_boxed_3443_);
v_r_3445_ = lean_box(v_res_3444_);
return v_r_3445_;
}
}
LEAN_EXPORT uint8_t lp_ariori_swapTopBot(uint8_t v_n_3446_){
_start:
{
switch(v_n_3446_)
{
case 2:
{
uint8_t v___x_3447_; 
v___x_3447_ = 3;
return v___x_3447_;
}
case 3:
{
uint8_t v___x_3448_; 
v___x_3448_ = 2;
return v___x_3448_;
}
default: 
{
return v_n_3446_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_swapTopBot___boxed(lean_object* v_n_3449_){
_start:
{
uint8_t v_n_boxed_3450_; uint8_t v_res_3451_; lean_object* v_r_3452_; 
v_n_boxed_3450_ = lean_unbox(v_n_3449_);
v_res_3451_ = lp_ariori_swapTopBot(v_n_boxed_3450_);
v_r_3452_ = lean_box(v_res_3451_);
return v_r_3452_;
}
}
LEAN_EXPORT uint8_t lp_ariori_swapC2C4(uint8_t v_n_3453_){
_start:
{
switch(v_n_3453_)
{
case 9:
{
uint8_t v___x_3454_; 
v___x_3454_ = 11;
return v___x_3454_;
}
case 11:
{
uint8_t v___x_3455_; 
v___x_3455_ = 9;
return v___x_3455_;
}
default: 
{
return v_n_3453_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_swapC2C4___boxed(lean_object* v_n_3456_){
_start:
{
uint8_t v_n_boxed_3457_; uint8_t v_res_3458_; lean_object* v_r_3459_; 
v_n_boxed_3457_ = lean_unbox(v_n_3456_);
v_res_3458_ = lp_ariori_swapC2C4(v_n_boxed_3457_);
v_r_3459_ = lean_box(v_res_3458_);
return v_r_3459_;
}
}
LEAN_EXPORT uint8_t lp_ariori_mirrorAutomorphism(uint8_t v_n_3460_){
_start:
{
switch(v_n_3460_)
{
case 2:
{
uint8_t v___x_3461_; 
v___x_3461_ = 3;
return v___x_3461_;
}
case 3:
{
uint8_t v___x_3462_; 
v___x_3462_ = 2;
return v___x_3462_;
}
case 4:
{
uint8_t v___x_3463_; 
v___x_3463_ = 6;
return v___x_3463_;
}
case 6:
{
uint8_t v___x_3464_; 
v___x_3464_ = 4;
return v___x_3464_;
}
case 5:
{
uint8_t v___x_3465_; 
v___x_3465_ = 7;
return v___x_3465_;
}
case 7:
{
uint8_t v___x_3466_; 
v___x_3466_ = 5;
return v___x_3466_;
}
case 8:
{
uint8_t v___x_3467_; 
v___x_3467_ = 10;
return v___x_3467_;
}
case 10:
{
uint8_t v___x_3468_; 
v___x_3468_ = 8;
return v___x_3468_;
}
case 9:
{
uint8_t v___x_3469_; 
v___x_3469_ = 11;
return v___x_3469_;
}
case 11:
{
uint8_t v___x_3470_; 
v___x_3470_ = 9;
return v___x_3470_;
}
case 12:
{
uint8_t v___x_3471_; 
v___x_3471_ = 14;
return v___x_3471_;
}
case 14:
{
uint8_t v___x_3472_; 
v___x_3472_ = 12;
return v___x_3472_;
}
case 13:
{
uint8_t v___x_3473_; 
v___x_3473_ = 15;
return v___x_3473_;
}
case 15:
{
uint8_t v___x_3474_; 
v___x_3474_ = 13;
return v___x_3474_;
}
default: 
{
return v_n_3460_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_mirrorAutomorphism___boxed(lean_object* v_n_3475_){
_start:
{
uint8_t v_n_boxed_3476_; uint8_t v_res_3477_; lean_object* v_r_3478_; 
v_n_boxed_3476_ = lean_unbox(v_n_3475_);
v_res_3477_ = lp_ariori_mirrorAutomorphism(v_n_boxed_3476_);
v_r_3478_ = lean_box(v_res_3477_);
return v_r_3478_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorIdx(uint8_t v_x_3479_){
_start:
{
if (v_x_3479_ == 0)
{
lean_object* v___x_3480_; 
v___x_3480_ = lean_unsigned_to_nat(0u);
return v___x_3480_;
}
else
{
lean_object* v___x_3481_; 
v___x_3481_ = lean_unsigned_to_nat(1u);
return v___x_3481_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorIdx___boxed(lean_object* v_x_3482_){
_start:
{
uint8_t v_x_boxed_3483_; lean_object* v_res_3484_; 
v_x_boxed_3483_ = lean_unbox(v_x_3482_);
v_res_3484_ = lp_ariori_Gen1Auto_ctorIdx(v_x_boxed_3483_);
return v_res_3484_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_toCtorIdx(uint8_t v_x_3485_){
_start:
{
lean_object* v___x_3486_; 
v___x_3486_ = lp_ariori_Gen1Auto_ctorIdx(v_x_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_toCtorIdx___boxed(lean_object* v_x_3487_){
_start:
{
uint8_t v_x_4__boxed_3488_; lean_object* v_res_3489_; 
v_x_4__boxed_3488_ = lean_unbox(v_x_3487_);
v_res_3489_ = lp_ariori_Gen1Auto_toCtorIdx(v_x_4__boxed_3488_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim___redArg(lean_object* v_k_3490_){
_start:
{
lean_inc(v_k_3490_);
return v_k_3490_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim___redArg___boxed(lean_object* v_k_3491_){
_start:
{
lean_object* v_res_3492_; 
v_res_3492_ = lp_ariori_Gen1Auto_ctorElim___redArg(v_k_3491_);
lean_dec(v_k_3491_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim(lean_object* v_motive_3493_, lean_object* v_ctorIdx_3494_, uint8_t v_t_3495_, lean_object* v_h_3496_, lean_object* v_k_3497_){
_start:
{
lean_inc(v_k_3497_);
return v_k_3497_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ctorElim___boxed(lean_object* v_motive_3498_, lean_object* v_ctorIdx_3499_, lean_object* v_t_3500_, lean_object* v_h_3501_, lean_object* v_k_3502_){
_start:
{
uint8_t v_t_boxed_3503_; lean_object* v_res_3504_; 
v_t_boxed_3503_ = lean_unbox(v_t_3500_);
v_res_3504_ = lp_ariori_Gen1Auto_ctorElim(v_motive_3498_, v_ctorIdx_3499_, v_t_boxed_3503_, v_h_3501_, v_k_3502_);
lean_dec(v_k_3502_);
lean_dec(v_ctorIdx_3499_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim___redArg(lean_object* v_id_3505_){
_start:
{
lean_inc(v_id_3505_);
return v_id_3505_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim___redArg___boxed(lean_object* v_id_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = lp_ariori_Gen1Auto_id_elim___redArg(v_id_3506_);
lean_dec(v_id_3506_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim(lean_object* v_motive_3508_, uint8_t v_t_3509_, lean_object* v_h_3510_, lean_object* v_id_3511_){
_start:
{
lean_inc(v_id_3511_);
return v_id_3511_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_id_elim___boxed(lean_object* v_motive_3512_, lean_object* v_t_3513_, lean_object* v_h_3514_, lean_object* v_id_3515_){
_start:
{
uint8_t v_t_boxed_3516_; lean_object* v_res_3517_; 
v_t_boxed_3516_ = lean_unbox(v_t_3513_);
v_res_3517_ = lp_ariori_Gen1Auto_id_elim(v_motive_3512_, v_t_boxed_3516_, v_h_3514_, v_id_3515_);
lean_dec(v_id_3515_);
return v_res_3517_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim___redArg(lean_object* v_mirror_3518_){
_start:
{
lean_inc(v_mirror_3518_);
return v_mirror_3518_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim___redArg___boxed(lean_object* v_mirror_3519_){
_start:
{
lean_object* v_res_3520_; 
v_res_3520_ = lp_ariori_Gen1Auto_mirror_elim___redArg(v_mirror_3519_);
lean_dec(v_mirror_3519_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim(lean_object* v_motive_3521_, uint8_t v_t_3522_, lean_object* v_h_3523_, lean_object* v_mirror_3524_){
_start:
{
lean_inc(v_mirror_3524_);
return v_mirror_3524_;
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_mirror_elim___boxed(lean_object* v_motive_3525_, lean_object* v_t_3526_, lean_object* v_h_3527_, lean_object* v_mirror_3528_){
_start:
{
uint8_t v_t_boxed_3529_; lean_object* v_res_3530_; 
v_t_boxed_3529_ = lean_unbox(v_t_3526_);
v_res_3530_ = lp_ariori_Gen1Auto_mirror_elim(v_motive_3525_, v_t_boxed_3529_, v_h_3527_, v_mirror_3528_);
lean_dec(v_mirror_3528_);
return v_res_3530_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprGen1Auto_repr(uint8_t v_x_3537_, lean_object* v_prec_3538_){
_start:
{
lean_object* v___y_3540_; lean_object* v___y_3547_; 
if (v_x_3537_ == 0)
{
lean_object* v___x_3553_; uint8_t v___x_3554_; 
v___x_3553_ = lean_unsigned_to_nat(1024u);
v___x_3554_ = lean_nat_dec_le(v___x_3553_, v_prec_3538_);
if (v___x_3554_ == 0)
{
lean_object* v___x_3555_; 
v___x_3555_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_3540_ = v___x_3555_;
goto v___jp_3539_;
}
else
{
lean_object* v___x_3556_; 
v___x_3556_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_3540_ = v___x_3556_;
goto v___jp_3539_;
}
}
else
{
lean_object* v___x_3557_; uint8_t v___x_3558_; 
v___x_3557_ = lean_unsigned_to_nat(1024u);
v___x_3558_ = lean_nat_dec_le(v___x_3557_, v_prec_3538_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; 
v___x_3559_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___y_3547_ = v___x_3559_;
goto v___jp_3546_;
}
else
{
lean_object* v___x_3560_; 
v___x_3560_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_3547_ = v___x_3560_;
goto v___jp_3546_;
}
}
v___jp_3539_:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3541_ = ((lean_object*)(lp_ariori_instReprGen1Auto_repr___closed__1));
lean_inc(v___y_3540_);
v___x_3542_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___y_3540_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
v___x_3543_ = 0;
v___x_3544_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3544_, 0, v___x_3542_);
lean_ctor_set_uint8(v___x_3544_, sizeof(void*)*1, v___x_3543_);
v___x_3545_ = l_Repr_addAppParen(v___x_3544_, v_prec_3538_);
return v___x_3545_;
}
v___jp_3546_:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; uint8_t v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3548_ = ((lean_object*)(lp_ariori_instReprGen1Auto_repr___closed__3));
lean_inc(v___y_3547_);
v___x_3549_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3549_, 0, v___y_3547_);
lean_ctor_set(v___x_3549_, 1, v___x_3548_);
v___x_3550_ = 0;
v___x_3551_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3551_, 0, v___x_3549_);
lean_ctor_set_uint8(v___x_3551_, sizeof(void*)*1, v___x_3550_);
v___x_3552_ = l_Repr_addAppParen(v___x_3551_, v_prec_3538_);
return v___x_3552_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_instReprGen1Auto_repr___boxed(lean_object* v_x_3561_, lean_object* v_prec_3562_){
_start:
{
uint8_t v_x_117__boxed_3563_; lean_object* v_res_3564_; 
v_x_117__boxed_3563_ = lean_unbox(v_x_3561_);
v_res_3564_ = lp_ariori_instReprGen1Auto_repr(v_x_117__boxed_3563_, v_prec_3562_);
lean_dec(v_prec_3562_);
return v_res_3564_;
}
}
LEAN_EXPORT uint8_t lp_ariori_instBEqGen1Auto_beq(uint8_t v_x_3567_, uint8_t v_y_3568_){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; 
v___x_3569_ = lp_ariori_Gen1Auto_ctorIdx(v_x_3567_);
v___x_3570_ = lp_ariori_Gen1Auto_ctorIdx(v_y_3568_);
v___x_3571_ = lean_nat_dec_eq(v___x_3569_, v___x_3570_);
lean_dec(v___x_3570_);
lean_dec(v___x_3569_);
return v___x_3571_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instBEqGen1Auto_beq___boxed(lean_object* v_x_3572_, lean_object* v_y_3573_){
_start:
{
uint8_t v_x_17__boxed_3574_; uint8_t v_y_18__boxed_3575_; uint8_t v_res_3576_; lean_object* v_r_3577_; 
v_x_17__boxed_3574_ = lean_unbox(v_x_3572_);
v_y_18__boxed_3575_ = lean_unbox(v_y_3573_);
v_res_3576_ = lp_ariori_instBEqGen1Auto_beq(v_x_17__boxed_3574_, v_y_18__boxed_3575_);
v_r_3577_ = lean_box(v_res_3576_);
return v_r_3577_;
}
}
LEAN_EXPORT uint8_t lp_ariori_Gen1Auto_ofNat(lean_object* v_n_3580_){
_start:
{
lean_object* v___x_3581_; uint8_t v___x_3582_; 
v___x_3581_ = lean_unsigned_to_nat(0u);
v___x_3582_ = lean_nat_dec_le(v_n_3580_, v___x_3581_);
if (v___x_3582_ == 0)
{
uint8_t v___x_3583_; 
v___x_3583_ = 1;
return v___x_3583_;
}
else
{
uint8_t v___x_3584_; 
v___x_3584_ = 0;
return v___x_3584_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_Gen1Auto_ofNat___boxed(lean_object* v_n_3585_){
_start:
{
uint8_t v_res_3586_; lean_object* v_r_3587_; 
v_res_3586_ = lp_ariori_Gen1Auto_ofNat(v_n_3585_);
lean_dec(v_n_3585_);
v_r_3587_ = lean_box(v_res_3586_);
return v_r_3587_;
}
}
LEAN_EXPORT uint8_t lp_ariori_instDecidableEqGen1Auto(uint8_t v_x_3588_, uint8_t v_y_3589_){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; uint8_t v___x_3592_; 
v___x_3590_ = lp_ariori_Gen1Auto_ctorIdx(v_x_3588_);
v___x_3591_ = lp_ariori_Gen1Auto_ctorIdx(v_y_3589_);
v___x_3592_ = lean_nat_dec_eq(v___x_3590_, v___x_3591_);
lean_dec(v___x_3591_);
lean_dec(v___x_3590_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* lp_ariori_instDecidableEqGen1Auto___boxed(lean_object* v_x_3593_, lean_object* v_y_3594_){
_start:
{
uint8_t v_x_13__boxed_3595_; uint8_t v_y_14__boxed_3596_; uint8_t v_res_3597_; lean_object* v_r_3598_; 
v_x_13__boxed_3595_ = lean_unbox(v_x_3593_);
v_y_14__boxed_3596_ = lean_unbox(v_y_3594_);
v_res_3597_ = lp_ariori_instDecidableEqGen1Auto(v_x_13__boxed_3595_, v_y_14__boxed_3596_);
v_r_3598_ = lean_box(v_res_3597_);
return v_r_3598_;
}
}
LEAN_EXPORT uint8_t lp_ariori_graphAutomorphismInjective___lam__0(lean_object* v_00_u03c3_3599_, uint8_t v_u_3600_, uint8_t v_v_3601_){
_start:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; uint8_t v___x_3606_; uint8_t v___x_3607_; uint8_t v___x_3608_; uint8_t v___x_3609_; 
v___x_3602_ = lean_box(v_u_3600_);
lean_inc_ref(v_00_u03c3_3599_);
v___x_3603_ = lean_apply_1(v_00_u03c3_3599_, v___x_3602_);
v___x_3604_ = lean_box(v_v_3601_);
v___x_3605_ = lean_apply_1(v_00_u03c3_3599_, v___x_3604_);
v___x_3606_ = lean_unbox(v___x_3603_);
v___x_3607_ = lean_unbox(v___x_3605_);
v___x_3608_ = lp_ariori_instBEqNodeLabel_beq(v___x_3606_, v___x_3607_);
v___x_3609_ = lp_ariori_instBEqNodeLabel_beq(v_u_3600_, v_v_3601_);
if (v___x_3608_ == 0)
{
if (v___x_3609_ == 0)
{
uint8_t v___x_3610_; 
v___x_3610_ = 1;
return v___x_3610_;
}
else
{
return v___x_3608_;
}
}
else
{
return v___x_3609_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_graphAutomorphismInjective___lam__0___boxed(lean_object* v_00_u03c3_3611_, lean_object* v_u_3612_, lean_object* v_v_3613_){
_start:
{
uint8_t v_u_boxed_3614_; uint8_t v_v_boxed_3615_; uint8_t v_res_3616_; lean_object* v_r_3617_; 
v_u_boxed_3614_ = lean_unbox(v_u_3612_);
v_v_boxed_3615_ = lean_unbox(v_v_3613_);
v_res_3616_ = lp_ariori_graphAutomorphismInjective___lam__0(v_00_u03c3_3611_, v_u_boxed_3614_, v_v_boxed_3615_);
v_r_3617_ = lean_box(v_res_3616_);
return v_r_3617_;
}
}
LEAN_EXPORT uint8_t lp_ariori_graphAutomorphismInjective___lam__1(lean_object* v_00_u03c3_3618_, lean_object* v___x_3619_, uint8_t v_u_3620_){
_start:
{
lean_object* v___x_3621_; lean_object* v___f_3622_; uint8_t v___x_3623_; 
v___x_3621_ = lean_box(v_u_3620_);
v___f_3622_ = lean_alloc_closure((void*)(lp_ariori_graphAutomorphismInjective___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3622_, 0, v_00_u03c3_3618_);
lean_closure_set(v___f_3622_, 1, v___x_3621_);
v___x_3623_ = l_List_all___redArg(v___x_3619_, v___f_3622_);
return v___x_3623_;
}
}
LEAN_EXPORT lean_object* lp_ariori_graphAutomorphismInjective___lam__1___boxed(lean_object* v_00_u03c3_3624_, lean_object* v___x_3625_, lean_object* v_u_3626_){
_start:
{
uint8_t v_u_boxed_3627_; uint8_t v_res_3628_; lean_object* v_r_3629_; 
v_u_boxed_3627_ = lean_unbox(v_u_3626_);
v_res_3628_ = lp_ariori_graphAutomorphismInjective___lam__1(v_00_u03c3_3624_, v___x_3625_, v_u_boxed_3627_);
v_r_3629_ = lean_box(v_res_3628_);
return v_r_3629_;
}
}
LEAN_EXPORT uint8_t lp_ariori_graphAutomorphismInjective(lean_object* v_00_u03c3_3630_){
_start:
{
lean_object* v___x_3631_; lean_object* v___f_3632_; uint8_t v___x_3633_; 
v___x_3631_ = ((lean_object*)(lp_ariori_allNodes));
v___f_3632_ = lean_alloc_closure((void*)(lp_ariori_graphAutomorphismInjective___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3632_, 0, v_00_u03c3_3630_);
lean_closure_set(v___f_3632_, 1, v___x_3631_);
v___x_3633_ = l_List_all___redArg(v___x_3631_, v___f_3632_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* lp_ariori_graphAutomorphismInjective___boxed(lean_object* v_00_u03c3_3634_){
_start:
{
uint8_t v_res_3635_; lean_object* v_r_3636_; 
v_res_3635_ = lp_ariori_graphAutomorphismInjective(v_00_u03c3_3634_);
v_r_3636_ = lean_box(v_res_3635_);
return v_r_3636_;
}
}
LEAN_EXPORT uint8_t lp_ariori_neighborsHasEdgeAgree(uint8_t v_n_3637_, uint8_t v_j_3638_){
_start:
{
lean_object* v___x_3639_; uint8_t v___x_3640_; uint8_t v___x_3641_; 
v___x_3639_ = lp_ariori_neighbors(v_n_3637_);
v___x_3640_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v_j_3638_, v___x_3639_);
lean_dec(v___x_3639_);
v___x_3641_ = lp_ariori_hasEdge(v_n_3637_, v_j_3638_);
if (v___x_3640_ == 0)
{
if (v___x_3641_ == 0)
{
uint8_t v___x_3642_; 
v___x_3642_ = 1;
return v___x_3642_;
}
else
{
return v___x_3640_;
}
}
else
{
return v___x_3641_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_neighborsHasEdgeAgree___boxed(lean_object* v_n_3643_, lean_object* v_j_3644_){
_start:
{
uint8_t v_n_boxed_3645_; uint8_t v_j_boxed_3646_; uint8_t v_res_3647_; lean_object* v_r_3648_; 
v_n_boxed_3645_ = lean_unbox(v_n_3643_);
v_j_boxed_3646_ = lean_unbox(v_j_3644_);
v_res_3647_ = lp_ariori_neighborsHasEdgeAgree(v_n_boxed_3645_, v_j_boxed_3646_);
v_r_3648_ = lean_box(v_res_3647_);
return v_r_3648_;
}
}
LEAN_EXPORT uint8_t lp_ariori_neighborsHasEdgeAgreeAll___lam__0(uint8_t v_n_3649_, uint8_t v_j_3650_){
_start:
{
uint8_t v___x_3651_; 
v___x_3651_ = lp_ariori_neighborsHasEdgeAgree(v_n_3649_, v_j_3650_);
return v___x_3651_;
}
}
LEAN_EXPORT lean_object* lp_ariori_neighborsHasEdgeAgreeAll___lam__0___boxed(lean_object* v_n_3652_, lean_object* v_j_3653_){
_start:
{
uint8_t v_n_boxed_3654_; uint8_t v_j_boxed_3655_; uint8_t v_res_3656_; lean_object* v_r_3657_; 
v_n_boxed_3654_ = lean_unbox(v_n_3652_);
v_j_boxed_3655_ = lean_unbox(v_j_3653_);
v_res_3656_ = lp_ariori_neighborsHasEdgeAgreeAll___lam__0(v_n_boxed_3654_, v_j_boxed_3655_);
v_r_3657_ = lean_box(v_res_3656_);
return v_r_3657_;
}
}
LEAN_EXPORT uint8_t lp_ariori_neighborsHasEdgeAgreeAll___lam__1(lean_object* v___x_3658_, uint8_t v_n_3659_){
_start:
{
lean_object* v___x_3660_; lean_object* v___f_3661_; uint8_t v___x_3662_; 
v___x_3660_ = lean_box(v_n_3659_);
v___f_3661_ = lean_alloc_closure((void*)(lp_ariori_neighborsHasEdgeAgreeAll___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3661_, 0, v___x_3660_);
v___x_3662_ = l_List_all___redArg(v___x_3658_, v___f_3661_);
return v___x_3662_;
}
}
LEAN_EXPORT lean_object* lp_ariori_neighborsHasEdgeAgreeAll___lam__1___boxed(lean_object* v___x_3663_, lean_object* v_n_3664_){
_start:
{
uint8_t v_n_boxed_3665_; uint8_t v_res_3666_; lean_object* v_r_3667_; 
v_n_boxed_3665_ = lean_unbox(v_n_3664_);
v_res_3666_ = lp_ariori_neighborsHasEdgeAgreeAll___lam__1(v___x_3663_, v_n_boxed_3665_);
v_r_3667_ = lean_box(v_res_3666_);
return v_r_3667_;
}
}
static uint8_t _init_lp_ariori_neighborsHasEdgeAgreeAll___closed__1(void){
_start:
{
lean_object* v___f_3670_; lean_object* v___x_3671_; uint8_t v___x_3672_; 
v___f_3670_ = ((lean_object*)(lp_ariori_neighborsHasEdgeAgreeAll___closed__0));
v___x_3671_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3672_ = l_List_all___redArg(v___x_3671_, v___f_3670_);
return v___x_3672_;
}
}
static uint8_t _init_lp_ariori_neighborsHasEdgeAgreeAll(void){
_start:
{
uint8_t v___x_3673_; 
v___x_3673_ = lean_uint8_once(&lp_ariori_neighborsHasEdgeAgreeAll___closed__1, &lp_ariori_neighborsHasEdgeAgreeAll___closed__1_once, _init_lp_ariori_neighborsHasEdgeAgreeAll___closed__1);
return v___x_3673_;
}
}
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesDegree___lam__0(lean_object* v_00_u03c3_3674_, uint8_t v_n_3675_){
_start:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; uint8_t v___x_3679_; lean_object* v___x_3680_; uint8_t v___x_3681_; 
v___x_3676_ = lp_ariori_degree(v_n_3675_);
v___x_3677_ = lean_box(v_n_3675_);
v___x_3678_ = lean_apply_1(v_00_u03c3_3674_, v___x_3677_);
v___x_3679_ = lean_unbox(v___x_3678_);
v___x_3680_ = lp_ariori_degree(v___x_3679_);
v___x_3681_ = lean_nat_dec_eq(v___x_3676_, v___x_3680_);
lean_dec(v___x_3680_);
lean_dec(v___x_3676_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesDegree___lam__0___boxed(lean_object* v_00_u03c3_3682_, lean_object* v_n_3683_){
_start:
{
uint8_t v_n_boxed_3684_; uint8_t v_res_3685_; lean_object* v_r_3686_; 
v_n_boxed_3684_ = lean_unbox(v_n_3683_);
v_res_3685_ = lp_ariori_automorphismPreservesDegree___lam__0(v_00_u03c3_3682_, v_n_boxed_3684_);
v_r_3686_ = lean_box(v_res_3685_);
return v_r_3686_;
}
}
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesDegree(lean_object* v_00_u03c3_3687_){
_start:
{
lean_object* v___f_3688_; lean_object* v___x_3689_; uint8_t v___x_3690_; 
v___f_3688_ = lean_alloc_closure((void*)(lp_ariori_automorphismPreservesDegree___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3688_, 0, v_00_u03c3_3687_);
v___x_3689_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3690_ = l_List_all___redArg(v___x_3689_, v___f_3688_);
return v___x_3690_;
}
}
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesDegree___boxed(lean_object* v_00_u03c3_3691_){
_start:
{
uint8_t v_res_3692_; lean_object* v_r_3693_; 
v_res_3692_ = lp_ariori_automorphismPreservesDegree(v_00_u03c3_3691_);
v_r_3693_ = lean_box(v_res_3692_);
return v_r_3693_;
}
}
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesNeighbors___lam__0(uint8_t v_n_3694_, lean_object* v_00_u03c3_3695_, uint8_t v_j_3696_){
_start:
{
lean_object* v___x_3697_; uint8_t v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; uint8_t v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; uint8_t v___x_3705_; uint8_t v___x_3706_; 
v___x_3697_ = lp_ariori_neighbors(v_n_3694_);
v___x_3698_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v_j_3696_, v___x_3697_);
lean_dec(v___x_3697_);
v___x_3699_ = lean_box(v_n_3694_);
lean_inc_ref(v_00_u03c3_3695_);
v___x_3700_ = lean_apply_1(v_00_u03c3_3695_, v___x_3699_);
v___x_3701_ = lean_unbox(v___x_3700_);
v___x_3702_ = lp_ariori_neighbors(v___x_3701_);
v___x_3703_ = lean_box(v_j_3696_);
v___x_3704_ = lean_apply_1(v_00_u03c3_3695_, v___x_3703_);
v___x_3705_ = lean_unbox(v___x_3704_);
v___x_3706_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v___x_3705_, v___x_3702_);
lean_dec(v___x_3702_);
if (v___x_3698_ == 0)
{
if (v___x_3706_ == 0)
{
uint8_t v___x_3707_; 
v___x_3707_ = 1;
return v___x_3707_;
}
else
{
return v___x_3698_;
}
}
else
{
return v___x_3706_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesNeighbors___lam__0___boxed(lean_object* v_n_3708_, lean_object* v_00_u03c3_3709_, lean_object* v_j_3710_){
_start:
{
uint8_t v_n_boxed_3711_; uint8_t v_j_boxed_3712_; uint8_t v_res_3713_; lean_object* v_r_3714_; 
v_n_boxed_3711_ = lean_unbox(v_n_3708_);
v_j_boxed_3712_ = lean_unbox(v_j_3710_);
v_res_3713_ = lp_ariori_automorphismPreservesNeighbors___lam__0(v_n_boxed_3711_, v_00_u03c3_3709_, v_j_boxed_3712_);
v_r_3714_ = lean_box(v_res_3713_);
return v_r_3714_;
}
}
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesNeighbors___lam__1(lean_object* v_00_u03c3_3715_, lean_object* v___x_3716_, uint8_t v_n_3717_){
_start:
{
lean_object* v___x_3718_; lean_object* v___f_3719_; uint8_t v___x_3720_; 
v___x_3718_ = lean_box(v_n_3717_);
v___f_3719_ = lean_alloc_closure((void*)(lp_ariori_automorphismPreservesNeighbors___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3719_, 0, v___x_3718_);
lean_closure_set(v___f_3719_, 1, v_00_u03c3_3715_);
v___x_3720_ = l_List_all___redArg(v___x_3716_, v___f_3719_);
return v___x_3720_;
}
}
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesNeighbors___lam__1___boxed(lean_object* v_00_u03c3_3721_, lean_object* v___x_3722_, lean_object* v_n_3723_){
_start:
{
uint8_t v_n_boxed_3724_; uint8_t v_res_3725_; lean_object* v_r_3726_; 
v_n_boxed_3724_ = lean_unbox(v_n_3723_);
v_res_3725_ = lp_ariori_automorphismPreservesNeighbors___lam__1(v_00_u03c3_3721_, v___x_3722_, v_n_boxed_3724_);
v_r_3726_ = lean_box(v_res_3725_);
return v_r_3726_;
}
}
LEAN_EXPORT uint8_t lp_ariori_automorphismPreservesNeighbors(lean_object* v_00_u03c3_3727_){
_start:
{
lean_object* v___x_3728_; lean_object* v___f_3729_; uint8_t v___x_3730_; 
v___x_3728_ = ((lean_object*)(lp_ariori_allNodes));
v___f_3729_ = lean_alloc_closure((void*)(lp_ariori_automorphismPreservesNeighbors___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3729_, 0, v_00_u03c3_3727_);
lean_closure_set(v___f_3729_, 1, v___x_3728_);
v___x_3730_ = l_List_all___redArg(v___x_3728_, v___f_3729_);
return v___x_3730_;
}
}
LEAN_EXPORT lean_object* lp_ariori_automorphismPreservesNeighbors___boxed(lean_object* v_00_u03c3_3731_){
_start:
{
uint8_t v_res_3732_; lean_object* v_r_3733_; 
v_res_3732_ = lp_ariori_automorphismPreservesNeighbors(v_00_u03c3_3731_);
v_r_3733_ = lean_box(v_res_3732_);
return v_r_3733_;
}
}
LEAN_EXPORT lean_object* lp_ariori_relabelField(lean_object* v_00_u03c3_3734_, lean_object* v_00_u03c6_3735_, uint8_t v_n_3736_){
_start:
{
lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3737_ = lean_box(v_n_3736_);
v___x_3738_ = lean_apply_1(v_00_u03c3_3734_, v___x_3737_);
v___x_3739_ = lean_apply_1(v_00_u03c6_3735_, v___x_3738_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* lp_ariori_relabelField___boxed(lean_object* v_00_u03c3_3740_, lean_object* v_00_u03c6_3741_, lean_object* v_n_3742_){
_start:
{
uint8_t v_n_boxed_3743_; lean_object* v_res_3744_; 
v_n_boxed_3743_ = lean_unbox(v_n_3742_);
v_res_3744_ = lp_ariori_relabelField(v_00_u03c3_3740_, v_00_u03c6_3741_, v_n_boxed_3743_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__0(lean_object* v_i_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_){
_start:
{
if (lean_obj_tag(v_a_3746_) == 0)
{
lean_object* v___x_3748_; 
lean_dec(v_i_3745_);
v___x_3748_ = l_List_reverse___redArg(v_a_3747_);
return v___x_3748_;
}
else
{
lean_object* v_head_3749_; lean_object* v_tail_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3775_; 
v_head_3749_ = lean_ctor_get(v_a_3746_, 0);
v_tail_3750_ = lean_ctor_get(v_a_3746_, 1);
v_isSharedCheck_3775_ = !lean_is_exclusive(v_a_3746_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3752_ = v_a_3746_;
v_isShared_3753_ = v_isSharedCheck_3775_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_tail_3750_);
lean_inc(v_head_3749_);
lean_dec(v_a_3746_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3775_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___y_3755_; uint8_t v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v_ni_3763_; uint8_t v___x_3764_; 
v___x_3760_ = 0;
v___x_3761_ = ((lean_object*)(lp_ariori_allNodes));
v___x_3762_ = lean_box(v___x_3760_);
lean_inc(v_i_3745_);
v_ni_3763_ = l_List_get_x21Internal___redArg(v___x_3762_, v___x_3761_, v_i_3745_);
lean_dec(v___x_3762_);
v___x_3764_ = lean_nat_dec_eq(v_i_3745_, v_head_3749_);
if (v___x_3764_ == 0)
{
lean_object* v___x_3765_; lean_object* v_nj_3766_; uint8_t v___x_3767_; uint8_t v___x_3768_; uint8_t v___x_3769_; 
v___x_3765_ = lean_box(v___x_3760_);
v_nj_3766_ = l_List_get_x21Internal___redArg(v___x_3765_, v___x_3761_, v_head_3749_);
lean_dec(v___x_3765_);
v___x_3767_ = lean_unbox(v_ni_3763_);
lean_dec(v_ni_3763_);
v___x_3768_ = lean_unbox(v_nj_3766_);
lean_dec(v_nj_3766_);
v___x_3769_ = lp_ariori_hasEdge(v___x_3767_, v___x_3768_);
if (v___x_3769_ == 0)
{
lean_object* v___x_3770_; 
v___x_3770_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___y_3755_ = v___x_3770_;
goto v___jp_3754_;
}
else
{
lean_object* v___x_3771_; 
v___x_3771_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___y_3755_ = v___x_3771_;
goto v___jp_3754_;
}
}
else
{
uint8_t v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
lean_dec(v_head_3749_);
v___x_3772_ = lean_unbox(v_ni_3763_);
lean_dec(v_ni_3763_);
v___x_3773_ = lp_ariori_degree(v___x_3772_);
v___x_3774_ = lean_nat_to_int(v___x_3773_);
v___y_3755_ = v___x_3774_;
goto v___jp_3754_;
}
v___jp_3754_:
{
lean_object* v___x_3757_; 
if (v_isShared_3753_ == 0)
{
lean_ctor_set(v___x_3752_, 1, v_a_3747_);
lean_ctor_set(v___x_3752_, 0, v___y_3755_);
v___x_3757_ = v___x_3752_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v___y_3755_);
lean_ctor_set(v_reuseFailAlloc_3759_, 1, v_a_3747_);
v___x_3757_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
v_a_3746_ = v_tail_3750_;
v_a_3747_ = v___x_3757_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3776_ = lean_unsigned_to_nat(17u);
v___x_3777_ = l_List_range(v___x_3776_);
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1(lean_object* v_a_3778_, lean_object* v_a_3779_){
_start:
{
if (lean_obj_tag(v_a_3778_) == 0)
{
lean_object* v___x_3780_; 
v___x_3780_ = l_List_reverse___redArg(v_a_3779_);
return v___x_3780_;
}
else
{
lean_object* v_head_3781_; lean_object* v_tail_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3793_; 
v_head_3781_ = lean_ctor_get(v_a_3778_, 0);
v_tail_3782_ = lean_ctor_get(v_a_3778_, 1);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_a_3778_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3784_ = v_a_3778_;
v_isShared_3785_ = v_isSharedCheck_3793_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_tail_3782_);
lean_inc(v_head_3781_);
lean_dec(v_a_3778_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3793_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3790_; 
v___x_3786_ = lean_obj_once(&lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0, &lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0_once, _init_lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0);
v___x_3787_ = lean_box(0);
v___x_3788_ = lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__0(v_head_3781_, v___x_3786_, v___x_3787_);
if (v_isShared_3785_ == 0)
{
lean_ctor_set(v___x_3784_, 1, v_a_3779_);
lean_ctor_set(v___x_3784_, 0, v___x_3788_);
v___x_3790_ = v___x_3784_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v___x_3788_);
lean_ctor_set(v_reuseFailAlloc_3792_, 1, v_a_3779_);
v___x_3790_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
v_a_3778_ = v_tail_3782_;
v_a_3779_ = v___x_3790_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_ariori_laplacianMatrix___closed__0(void){
_start:
{
lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3794_ = lean_box(0);
v___x_3795_ = lean_obj_once(&lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0, &lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0_once, _init_lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1___closed__0);
v___x_3796_ = lp_ariori_List_mapTR_loop___at___00laplacianMatrix_spec__1(v___x_3795_, v___x_3794_);
return v___x_3796_;
}
}
static lean_object* _init_lp_ariori_laplacianMatrix(void){
_start:
{
lean_object* v___x_3797_; 
v___x_3797_ = lean_obj_once(&lp_ariori_laplacianMatrix___closed__0, &lp_ariori_laplacianMatrix___closed__0_once, _init_lp_ariori_laplacianMatrix___closed__0);
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsFloat_spec__0(lean_object* v_i_3798_, lean_object* v_j_3799_, lean_object* v_mat_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_){
_start:
{
if (lean_obj_tag(v_a_3801_) == 0)
{
lean_object* v___x_3803_; 
lean_dec(v_j_3799_);
lean_dec(v_i_3798_);
v___x_3803_ = lean_array_to_list(v_a_3802_);
return v___x_3803_;
}
else
{
lean_object* v_head_3804_; lean_object* v_tail_3805_; lean_object* v___y_3807_; lean_object* v___x_3810_; uint8_t v___x_3811_; 
v_head_3804_ = lean_ctor_get(v_a_3801_, 0);
lean_inc(v_head_3804_);
v_tail_3805_ = lean_ctor_get(v_a_3801_, 1);
lean_inc(v_tail_3805_);
lean_dec_ref(v_a_3801_);
v___x_3810_ = lean_array_get_size(v_a_3802_);
v___x_3811_ = lean_nat_dec_eq(v___x_3810_, v_i_3798_);
if (v___x_3811_ == 0)
{
uint8_t v___x_3812_; 
v___x_3812_ = lean_nat_dec_eq(v___x_3810_, v_j_3799_);
if (v___x_3812_ == 0)
{
v___y_3807_ = v_head_3804_;
goto v___jp_3806_;
}
else
{
lean_object* v___x_3813_; lean_object* v___x_3814_; 
lean_dec(v_head_3804_);
v___x_3813_ = lean_box(0);
lean_inc(v_i_3798_);
v___x_3814_ = l_List_get_x21Internal___redArg(v___x_3813_, v_mat_3800_, v_i_3798_);
v___y_3807_ = v___x_3814_;
goto v___jp_3806_;
}
}
else
{
lean_object* v___x_3815_; lean_object* v___x_3816_; 
lean_dec(v_head_3804_);
v___x_3815_ = lean_box(0);
lean_inc(v_j_3799_);
v___x_3816_ = l_List_get_x21Internal___redArg(v___x_3815_, v_mat_3800_, v_j_3799_);
v___y_3807_ = v___x_3816_;
goto v___jp_3806_;
}
v___jp_3806_:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_array_push(v_a_3802_, v___y_3807_);
v_a_3801_ = v_tail_3805_;
v_a_3802_ = v___x_3808_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsFloat_spec__0___boxed(lean_object* v_i_3817_, lean_object* v_j_3818_, lean_object* v_mat_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = lp_ariori_List_mapIdx_go___at___00swapRowsFloat_spec__0(v_i_3817_, v_j_3818_, v_mat_3819_, v_a_3820_, v_a_3821_);
lean_dec(v_mat_3819_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* lp_ariori_swapRowsFloat(lean_object* v_mat_3825_, lean_object* v_i_3826_, lean_object* v_j_3827_){
_start:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; 
v___x_3828_ = ((lean_object*)(lp_ariori_swapRowsFloat___closed__0));
lean_inc(v_mat_3825_);
v___x_3829_ = lp_ariori_List_mapIdx_go___at___00swapRowsFloat_spec__0(v_i_3826_, v_j_3827_, v_mat_3825_, v_mat_3825_, v___x_3828_);
lean_dec(v_mat_3825_);
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixFloat_spec__0(lean_object* v_a_3830_, lean_object* v_a_3831_){
_start:
{
if (lean_obj_tag(v_a_3830_) == 0)
{
lean_object* v___x_3832_; 
v___x_3832_ = l_List_reverse___redArg(v_a_3831_);
return v___x_3832_;
}
else
{
lean_object* v_head_3833_; lean_object* v_tail_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3844_; 
v_head_3833_ = lean_ctor_get(v_a_3830_, 0);
v_tail_3834_ = lean_ctor_get(v_a_3830_, 1);
v_isSharedCheck_3844_ = !lean_is_exclusive(v_a_3830_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3836_ = v_a_3830_;
v_isShared_3837_ = v_isSharedCheck_3844_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_tail_3834_);
lean_inc(v_head_3833_);
lean_dec(v_a_3830_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3844_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
double v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3841_; 
v___x_3838_ = l_Float_ofInt(v_head_3833_);
lean_dec(v_head_3833_);
v___x_3839_ = lean_box_float(v___x_3838_);
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 1, v_a_3831_);
lean_ctor_set(v___x_3836_, 0, v___x_3839_);
v___x_3841_ = v___x_3836_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v___x_3839_);
lean_ctor_set(v_reuseFailAlloc_3843_, 1, v_a_3831_);
v___x_3841_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
v_a_3830_ = v_tail_3834_;
v_a_3831_ = v___x_3841_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixFloat_spec__1(lean_object* v_a_3845_, lean_object* v_a_3846_){
_start:
{
if (lean_obj_tag(v_a_3845_) == 0)
{
lean_object* v___x_3847_; 
v___x_3847_ = l_List_reverse___redArg(v_a_3846_);
return v___x_3847_;
}
else
{
lean_object* v_head_3848_; lean_object* v_tail_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3859_; 
v_head_3848_ = lean_ctor_get(v_a_3845_, 0);
v_tail_3849_ = lean_ctor_get(v_a_3845_, 1);
v_isSharedCheck_3859_ = !lean_is_exclusive(v_a_3845_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3851_ = v_a_3845_;
v_isShared_3852_ = v_isSharedCheck_3859_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_tail_3849_);
lean_inc(v_head_3848_);
lean_dec(v_a_3845_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3859_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3856_; 
v___x_3853_ = lean_box(0);
v___x_3854_ = lp_ariori_List_mapTR_loop___at___00laplacianMatrixFloat_spec__0(v_head_3848_, v___x_3853_);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 1, v_a_3846_);
lean_ctor_set(v___x_3851_, 0, v___x_3854_);
v___x_3856_ = v___x_3851_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3854_);
lean_ctor_set(v_reuseFailAlloc_3858_, 1, v_a_3846_);
v___x_3856_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
v_a_3845_ = v_tail_3849_;
v_a_3846_ = v___x_3856_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_ariori_laplacianMatrixFloat___closed__0(void){
_start:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3860_ = lean_box(0);
v___x_3861_ = lp_ariori_laplacianMatrix;
v___x_3862_ = lp_ariori_List_mapTR_loop___at___00laplacianMatrixFloat_spec__1(v___x_3861_, v___x_3860_);
return v___x_3862_;
}
}
static lean_object* _init_lp_ariori_laplacianMatrixFloat(void){
_start:
{
lean_object* v___x_3863_; 
v___x_3863_ = lean_obj_once(&lp_ariori_laplacianMatrixFloat___closed__0, &lp_ariori_laplacianMatrixFloat___closed__0_once, _init_lp_ariori_laplacianMatrixFloat___closed__0);
return v___x_3863_;
}
}
static double _init_lp_ariori_floatAt___closed__0(void){
_start:
{
lean_object* v___x_3864_; double v___x_3865_; 
v___x_3864_ = lean_unsigned_to_nat(0u);
v___x_3865_ = lean_float_of_nat(v___x_3864_);
return v___x_3865_;
}
}
static lean_object* _init_lp_ariori_floatAt___boxed__const__1(void){
_start:
{
double v___x_3866_; lean_object* v___x_3867_; 
v___x_3866_ = lean_float_once(&lp_ariori_floatAt___closed__0, &lp_ariori_floatAt___closed__0_once, _init_lp_ariori_floatAt___closed__0);
v___x_3867_ = lean_box_float(v___x_3866_);
return v___x_3867_;
}
}
LEAN_EXPORT double lp_ariori_floatAt(lean_object* v_row_3868_, lean_object* v_c_3869_){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; double v___x_3872_; 
v___x_3870_ = lp_ariori_floatAt___boxed__const__1;
v___x_3871_ = l_List_getD___redArg(v_row_3868_, v_c_3869_, v___x_3870_);
v___x_3872_ = lean_unbox_float(v___x_3871_);
lean_dec(v___x_3871_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* lp_ariori_floatAt___boxed(lean_object* v_row_3873_, lean_object* v_c_3874_){
_start:
{
double v_res_3875_; lean_object* v_r_3876_; 
v_res_3875_ = lp_ariori_floatAt(v_row_3873_, v_c_3874_);
lean_dec(v_row_3873_);
v_r_3876_ = lean_box_float(v_res_3875_);
return v_r_3876_;
}
}
static double _init_lp_ariori_floatNearZero___closed__0(void){
_start:
{
lean_object* v___x_3877_; uint8_t v___x_3878_; lean_object* v___x_3879_; double v___x_3880_; 
v___x_3877_ = lean_unsigned_to_nat(16u);
v___x_3878_ = 1;
v___x_3879_ = lean_unsigned_to_nat(1u);
v___x_3880_ = l_Float_ofScientific(v___x_3879_, v___x_3878_, v___x_3877_);
return v___x_3880_;
}
}
LEAN_EXPORT uint8_t lp_ariori_floatNearZero(double v_x_3881_){
_start:
{
double v___x_3882_; uint8_t v___x_3883_; 
v___x_3882_ = lean_float_once(&lp_ariori_floatAt___closed__0, &lp_ariori_floatAt___closed__0_once, _init_lp_ariori_floatAt___closed__0);
v___x_3883_ = lean_float_beq(v_x_3881_, v___x_3882_);
if (v___x_3883_ == 0)
{
double v___x_3884_; double v___x_3885_; uint8_t v___x_3886_; 
v___x_3884_ = lean_float_mul(v_x_3881_, v_x_3881_);
v___x_3885_ = lean_float_once(&lp_ariori_floatNearZero___closed__0, &lp_ariori_floatNearZero___closed__0_once, _init_lp_ariori_floatNearZero___closed__0);
v___x_3886_ = lean_float_decLt(v___x_3884_, v___x_3885_);
return v___x_3886_;
}
else
{
return v___x_3883_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_floatNearZero___boxed(lean_object* v_x_3887_){
_start:
{
double v_x_boxed_3888_; uint8_t v_res_3889_; lean_object* v_r_3890_; 
v_x_boxed_3888_ = lean_unbox_float(v_x_3887_);
lean_dec_ref(v_x_3887_);
v_res_3889_ = lp_ariori_floatNearZero(v_x_boxed_3888_);
v_r_3890_ = lean_box(v_res_3889_);
return v_r_3890_;
}
}
LEAN_EXPORT uint8_t lp_ariori_matrixRankFloat___lam__0(lean_object* v_col_3891_, uint8_t v___y_3892_, lean_object* v_row_3893_){
_start:
{
double v___x_3894_; uint8_t v___x_3895_; 
v___x_3894_ = lp_ariori_floatAt(v_row_3893_, v_col_3891_);
v___x_3895_ = lp_ariori_floatNearZero(v___x_3894_);
if (v___x_3895_ == 0)
{
uint8_t v___x_3896_; 
v___x_3896_ = 1;
return v___x_3896_;
}
else
{
return v___y_3892_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_matrixRankFloat___lam__0___boxed(lean_object* v_col_3897_, lean_object* v___y_3898_, lean_object* v_row_3899_){
_start:
{
uint8_t v___y_465__boxed_3900_; uint8_t v_res_3901_; lean_object* v_r_3902_; 
v___y_465__boxed_3900_ = lean_unbox(v___y_3898_);
v_res_3901_ = lp_ariori_matrixRankFloat___lam__0(v_col_3897_, v___y_465__boxed_3900_, v_row_3899_);
lean_dec(v_row_3899_);
v_r_3902_ = lean_box(v_res_3901_);
return v_r_3902_;
}
}
LEAN_EXPORT double lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___lam__0(double v_factor_3903_, double v_a_3904_, double v_b_3905_){
_start:
{
double v___x_3906_; double v___x_3907_; 
v___x_3906_ = lean_float_mul(v_factor_3903_, v_b_3905_);
v___x_3907_ = lean_float_sub(v_a_3904_, v___x_3906_);
return v___x_3907_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___lam__0___boxed(lean_object* v_factor_3908_, lean_object* v_a_3909_, lean_object* v_b_3910_){
_start:
{
double v_factor_boxed_3911_; double v_a_boxed_3912_; double v_b_boxed_3913_; double v_res_3914_; lean_object* v_r_3915_; 
v_factor_boxed_3911_ = lean_unbox_float(v_factor_3908_);
lean_dec_ref(v_factor_3908_);
v_a_boxed_3912_ = lean_unbox_float(v_a_3909_);
lean_dec_ref(v_a_3909_);
v_b_boxed_3913_ = lean_unbox_float(v_b_3910_);
lean_dec_ref(v_b_3910_);
v_res_3914_ = lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___lam__0(v_factor_boxed_3911_, v_a_boxed_3912_, v_b_boxed_3913_);
v_r_3915_ = lean_box_float(v_res_3914_);
return v_r_3915_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0(lean_object* v_rankRow_3918_, lean_object* v_col_3919_, double v_pivotVal_3920_, lean_object* v_pivotRow_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_){
_start:
{
if (lean_obj_tag(v_a_3922_) == 0)
{
lean_object* v___x_3924_; 
lean_dec(v_pivotRow_3921_);
lean_dec(v_col_3919_);
v___x_3924_ = lean_array_to_list(v_a_3923_);
return v___x_3924_;
}
else
{
lean_object* v_head_3925_; lean_object* v_tail_3926_; lean_object* v___y_3928_; lean_object* v___x_3931_; uint8_t v___x_3932_; 
v_head_3925_ = lean_ctor_get(v_a_3922_, 0);
lean_inc(v_head_3925_);
v_tail_3926_ = lean_ctor_get(v_a_3922_, 1);
lean_inc(v_tail_3926_);
lean_dec_ref(v_a_3922_);
v___x_3931_ = lean_array_get_size(v_a_3923_);
v___x_3932_ = lean_nat_dec_le(v___x_3931_, v_rankRow_3918_);
if (v___x_3932_ == 0)
{
double v___x_3933_; uint8_t v___x_3934_; 
lean_inc(v_col_3919_);
v___x_3933_ = lp_ariori_floatAt(v_head_3925_, v_col_3919_);
v___x_3934_ = lp_ariori_floatNearZero(v___x_3933_);
if (v___x_3934_ == 0)
{
double v_factor_3935_; lean_object* v___x_3936_; lean_object* v___f_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v_factor_3935_ = lean_float_div(v___x_3933_, v_pivotVal_3920_);
v___x_3936_ = lean_box_float(v_factor_3935_);
v___f_3937_ = lean_alloc_closure((void*)(lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3937_, 0, v___x_3936_);
v___x_3938_ = ((lean_object*)(lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___closed__0));
lean_inc(v_pivotRow_3921_);
v___x_3939_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_3937_, v_head_3925_, v_pivotRow_3921_, v___x_3938_);
v___y_3928_ = v___x_3939_;
goto v___jp_3927_;
}
else
{
v___y_3928_ = v_head_3925_;
goto v___jp_3927_;
}
}
else
{
v___y_3928_ = v_head_3925_;
goto v___jp_3927_;
}
v___jp_3927_:
{
lean_object* v___x_3929_; 
v___x_3929_ = lean_array_push(v_a_3923_, v___y_3928_);
v_a_3922_ = v_tail_3926_;
v_a_3923_ = v___x_3929_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0___boxed(lean_object* v_rankRow_3940_, lean_object* v_col_3941_, lean_object* v_pivotVal_3942_, lean_object* v_pivotRow_3943_, lean_object* v_a_3944_, lean_object* v_a_3945_){
_start:
{
double v_pivotVal_boxed_3946_; lean_object* v_res_3947_; 
v_pivotVal_boxed_3946_ = lean_unbox_float(v_pivotVal_3942_);
lean_dec_ref(v_pivotVal_3942_);
v_res_3947_ = lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0(v_rankRow_3940_, v_col_3941_, v_pivotVal_boxed_3946_, v_pivotRow_3943_, v_a_3944_, v_a_3945_);
lean_dec(v_rankRow_3940_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* lp_ariori_matrixRankFloat(lean_object* v_mat_3948_, lean_object* v_rankRow_3949_, lean_object* v_col_3950_, lean_object* v_fuel_3951_){
_start:
{
lean_object* v___x_3952_; lean_object* v___y_3954_; lean_object* v___y_3955_; uint8_t v___y_3966_; uint8_t v___x_3983_; 
v___x_3952_ = lean_unsigned_to_nat(0u);
v___x_3983_ = lean_nat_dec_eq(v_fuel_3951_, v___x_3952_);
if (v___x_3983_ == 0)
{
uint8_t v___x_3984_; 
v___x_3984_ = l_List_isEmpty___redArg(v_mat_3948_);
v___y_3966_ = v___x_3984_;
goto v___jp_3965_;
}
else
{
v___y_3966_ = v___x_3983_;
goto v___jp_3965_;
}
v___jp_3953_:
{
lean_object* v_pivotRow_3956_; double v_pivotVal_3957_; lean_object* v___x_3958_; lean_object* v_reduced_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
lean_inc(v_rankRow_3949_);
v_pivotRow_3956_ = l_List_get_x21Internal___redArg(v___y_3954_, v___y_3955_, v_rankRow_3949_);
lean_inc_n(v_col_3950_, 2);
v_pivotVal_3957_ = lp_ariori_floatAt(v_pivotRow_3956_, v_col_3950_);
v___x_3958_ = ((lean_object*)(lp_ariori_swapRowsFloat___closed__0));
v_reduced_3959_ = lp_ariori_List_mapIdx_go___at___00matrixRankFloat_spec__0(v_rankRow_3949_, v_col_3950_, v_pivotVal_3957_, v_pivotRow_3956_, v___y_3955_, v___x_3958_);
v___x_3960_ = lean_unsigned_to_nat(1u);
v___x_3961_ = lean_nat_add(v_rankRow_3949_, v___x_3960_);
lean_dec(v_rankRow_3949_);
v___x_3962_ = lean_nat_add(v_col_3950_, v___x_3960_);
lean_dec(v_col_3950_);
v___x_3963_ = lean_nat_sub(v_fuel_3951_, v___x_3960_);
lean_dec(v_fuel_3951_);
v_mat_3948_ = v_reduced_3959_;
v_rankRow_3949_ = v___x_3961_;
v_col_3950_ = v___x_3962_;
v_fuel_3951_ = v___x_3963_;
goto _start;
}
v___jp_3965_:
{
if (v___y_3966_ == 0)
{
lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; uint8_t v___x_3970_; 
v___x_3967_ = lean_box(0);
v___x_3968_ = l_List_get_x21Internal___redArg(v___x_3967_, v_mat_3948_, v___x_3952_);
v___x_3969_ = l_List_lengthTR___redArg(v___x_3968_);
lean_dec(v___x_3968_);
v___x_3970_ = lean_nat_dec_le(v___x_3969_, v_col_3950_);
lean_dec(v___x_3969_);
if (v___x_3970_ == 0)
{
lean_object* v___x_3971_; lean_object* v___f_3972_; lean_object* v_sub_3973_; lean_object* v___x_3974_; 
v___x_3971_ = lean_box(v___y_3966_);
lean_inc(v_col_3950_);
v___f_3972_ = lean_alloc_closure((void*)(lp_ariori_matrixRankFloat___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3972_, 0, v_col_3950_);
lean_closure_set(v___f_3972_, 1, v___x_3971_);
lean_inc(v_rankRow_3949_);
v_sub_3973_ = l_List_drop___redArg(v_rankRow_3949_, v_mat_3948_);
v___x_3974_ = l_List_findIdx_x3f___redArg(v___f_3972_, v_sub_3973_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v___x_3975_ = lean_unsigned_to_nat(1u);
v___x_3976_ = lean_nat_add(v_col_3950_, v___x_3975_);
lean_dec(v_col_3950_);
v___x_3977_ = lean_nat_sub(v_fuel_3951_, v___x_3975_);
lean_dec(v_fuel_3951_);
v_col_3950_ = v___x_3976_;
v_fuel_3951_ = v___x_3977_;
goto _start;
}
else
{
lean_object* v_val_3979_; lean_object* v_pivot_3980_; uint8_t v___x_3981_; 
v_val_3979_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_val_3979_);
lean_dec_ref(v___x_3974_);
v_pivot_3980_ = lean_nat_add(v_rankRow_3949_, v_val_3979_);
lean_dec(v_val_3979_);
v___x_3981_ = lean_nat_dec_eq(v_pivot_3980_, v_rankRow_3949_);
if (v___x_3981_ == 0)
{
lean_object* v___x_3982_; 
lean_inc(v_rankRow_3949_);
v___x_3982_ = lp_ariori_swapRowsFloat(v_mat_3948_, v_rankRow_3949_, v_pivot_3980_);
v___y_3954_ = v___x_3967_;
v___y_3955_ = v___x_3982_;
goto v___jp_3953_;
}
else
{
lean_dec(v_pivot_3980_);
v___y_3954_ = v___x_3967_;
v___y_3955_ = v_mat_3948_;
goto v___jp_3953_;
}
}
}
else
{
lean_dec(v_fuel_3951_);
lean_dec(v_col_3950_);
lean_dec(v_mat_3948_);
return v_rankRow_3949_;
}
}
else
{
lean_dec(v_fuel_3951_);
lean_dec(v_col_3950_);
lean_dec(v_mat_3948_);
return v_rankRow_3949_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_matrixRank(lean_object* v_mat_3985_){
_start:
{
lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; 
v___x_3986_ = lean_box(0);
v___x_3987_ = lp_ariori_List_mapTR_loop___at___00laplacianMatrixFloat_spec__1(v_mat_3985_, v___x_3986_);
v___x_3988_ = lean_unsigned_to_nat(0u);
v___x_3989_ = lean_unsigned_to_nat(400u);
v___x_3990_ = lp_ariori_matrixRankFloat(v___x_3987_, v___x_3988_, v___x_3988_, v___x_3989_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* lp_ariori_intMod(lean_object* v_x_3991_, lean_object* v_p_3992_){
_start:
{
lean_object* v___x_3993_; lean_object* v_m_3994_; lean_object* v___x_3995_; uint8_t v___x_3996_; 
v___x_3993_ = lean_nat_to_int(v_p_3992_);
v_m_3994_ = lean_int_emod(v_x_3991_, v___x_3993_);
v___x_3995_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_3996_ = lean_int_dec_lt(v_m_3994_, v___x_3995_);
if (v___x_3996_ == 0)
{
lean_object* v___x_3997_; 
lean_dec(v___x_3993_);
v___x_3997_ = l_Int_toNat(v_m_3994_);
lean_dec(v_m_3994_);
return v___x_3997_;
}
else
{
lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3998_ = lean_int_add(v_m_3994_, v___x_3993_);
lean_dec(v___x_3993_);
lean_dec(v_m_3994_);
v___x_3999_ = l_Int_toNat(v___x_3998_);
lean_dec(v___x_3998_);
return v___x_3999_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_intMod___boxed(lean_object* v_x_4000_, lean_object* v_p_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = lp_ariori_intMod(v_x_4000_, v_p_4001_);
lean_dec(v_x_4000_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixMod_spec__0(lean_object* v_p_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_){
_start:
{
if (lean_obj_tag(v_a_4004_) == 0)
{
lean_object* v___x_4006_; 
lean_dec(v_p_4003_);
v___x_4006_ = l_List_reverse___redArg(v_a_4005_);
return v___x_4006_;
}
else
{
lean_object* v_head_4007_; lean_object* v_tail_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4017_; 
v_head_4007_ = lean_ctor_get(v_a_4004_, 0);
v_tail_4008_ = lean_ctor_get(v_a_4004_, 1);
v_isSharedCheck_4017_ = !lean_is_exclusive(v_a_4004_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4010_ = v_a_4004_;
v_isShared_4011_ = v_isSharedCheck_4017_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_tail_4008_);
lean_inc(v_head_4007_);
lean_dec(v_a_4004_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4017_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4012_; lean_object* v___x_4014_; 
lean_inc(v_p_4003_);
v___x_4012_ = lp_ariori_intMod(v_head_4007_, v_p_4003_);
lean_dec(v_head_4007_);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 1, v_a_4005_);
lean_ctor_set(v___x_4010_, 0, v___x_4012_);
v___x_4014_ = v___x_4010_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v___x_4012_);
lean_ctor_set(v_reuseFailAlloc_4016_, 1, v_a_4005_);
v___x_4014_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
v_a_4004_ = v_tail_4008_;
v_a_4005_ = v___x_4014_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00laplacianMatrixMod_spec__1(lean_object* v_p_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_){
_start:
{
if (lean_obj_tag(v_a_4019_) == 0)
{
lean_object* v___x_4021_; 
lean_dec(v_p_4018_);
v___x_4021_ = l_List_reverse___redArg(v_a_4020_);
return v___x_4021_;
}
else
{
lean_object* v_head_4022_; lean_object* v_tail_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4033_; 
v_head_4022_ = lean_ctor_get(v_a_4019_, 0);
v_tail_4023_ = lean_ctor_get(v_a_4019_, 1);
v_isSharedCheck_4033_ = !lean_is_exclusive(v_a_4019_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4025_ = v_a_4019_;
v_isShared_4026_ = v_isSharedCheck_4033_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_tail_4023_);
lean_inc(v_head_4022_);
lean_dec(v_a_4019_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4033_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4030_; 
v___x_4027_ = lean_box(0);
lean_inc(v_p_4018_);
v___x_4028_ = lp_ariori_List_mapTR_loop___at___00laplacianMatrixMod_spec__0(v_p_4018_, v_head_4022_, v___x_4027_);
if (v_isShared_4026_ == 0)
{
lean_ctor_set(v___x_4025_, 1, v_a_4020_);
lean_ctor_set(v___x_4025_, 0, v___x_4028_);
v___x_4030_ = v___x_4025_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v___x_4028_);
lean_ctor_set(v_reuseFailAlloc_4032_, 1, v_a_4020_);
v___x_4030_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
v_a_4019_ = v_tail_4023_;
v_a_4020_ = v___x_4030_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_laplacianMatrixMod(lean_object* v_p_4034_){
_start:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4035_ = lp_ariori_laplacianMatrix;
v___x_4036_ = lean_box(0);
v___x_4037_ = lp_ariori_List_mapTR_loop___at___00laplacianMatrixMod_spec__1(v_p_4034_, v___x_4035_, v___x_4036_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsMod_spec__0(lean_object* v_i_4038_, lean_object* v_j_4039_, lean_object* v_mat_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_){
_start:
{
if (lean_obj_tag(v_a_4041_) == 0)
{
lean_object* v___x_4043_; 
lean_dec(v_j_4039_);
lean_dec(v_i_4038_);
v___x_4043_ = lean_array_to_list(v_a_4042_);
return v___x_4043_;
}
else
{
lean_object* v_head_4044_; lean_object* v_tail_4045_; lean_object* v___y_4047_; lean_object* v___x_4050_; uint8_t v___x_4051_; 
v_head_4044_ = lean_ctor_get(v_a_4041_, 0);
lean_inc(v_head_4044_);
v_tail_4045_ = lean_ctor_get(v_a_4041_, 1);
lean_inc(v_tail_4045_);
lean_dec_ref(v_a_4041_);
v___x_4050_ = lean_array_get_size(v_a_4042_);
v___x_4051_ = lean_nat_dec_eq(v___x_4050_, v_i_4038_);
if (v___x_4051_ == 0)
{
uint8_t v___x_4052_; 
v___x_4052_ = lean_nat_dec_eq(v___x_4050_, v_j_4039_);
if (v___x_4052_ == 0)
{
v___y_4047_ = v_head_4044_;
goto v___jp_4046_;
}
else
{
lean_object* v___x_4053_; lean_object* v___x_4054_; 
lean_dec(v_head_4044_);
v___x_4053_ = lean_box(0);
lean_inc(v_i_4038_);
v___x_4054_ = l_List_get_x21Internal___redArg(v___x_4053_, v_mat_4040_, v_i_4038_);
v___y_4047_ = v___x_4054_;
goto v___jp_4046_;
}
}
else
{
lean_object* v___x_4055_; lean_object* v___x_4056_; 
lean_dec(v_head_4044_);
v___x_4055_ = lean_box(0);
lean_inc(v_j_4039_);
v___x_4056_ = l_List_get_x21Internal___redArg(v___x_4055_, v_mat_4040_, v_j_4039_);
v___y_4047_ = v___x_4056_;
goto v___jp_4046_;
}
v___jp_4046_:
{
lean_object* v___x_4048_; 
v___x_4048_ = lean_array_push(v_a_4042_, v___y_4047_);
v_a_4041_ = v_tail_4045_;
v_a_4042_ = v___x_4048_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00swapRowsMod_spec__0___boxed(lean_object* v_i_4057_, lean_object* v_j_4058_, lean_object* v_mat_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = lp_ariori_List_mapIdx_go___at___00swapRowsMod_spec__0(v_i_4057_, v_j_4058_, v_mat_4059_, v_a_4060_, v_a_4061_);
lean_dec(v_mat_4059_);
return v_res_4062_;
}
}
LEAN_EXPORT lean_object* lp_ariori_swapRowsMod(lean_object* v_mat_4065_, lean_object* v_i_4066_, lean_object* v_j_4067_){
_start:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4068_ = ((lean_object*)(lp_ariori_swapRowsMod___closed__0));
lean_inc(v_mat_4065_);
v___x_4069_ = lp_ariori_List_mapIdx_go___at___00swapRowsMod_spec__0(v_i_4066_, v_j_4067_, v_mat_4065_, v_mat_4065_, v___x_4068_);
lean_dec(v_mat_4065_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* lp_ariori_subMod(lean_object* v_p_4070_, lean_object* v_a_4071_, lean_object* v_b_4072_){
_start:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4073_ = lean_nat_add(v_a_4071_, v_p_4070_);
v___x_4074_ = lean_nat_mod(v_b_4072_, v_p_4070_);
v___x_4075_ = lean_nat_sub(v___x_4073_, v___x_4074_);
lean_dec(v___x_4074_);
lean_dec(v___x_4073_);
v___x_4076_ = lean_nat_mod(v___x_4075_, v_p_4070_);
lean_dec(v___x_4075_);
return v___x_4076_;
}
}
LEAN_EXPORT lean_object* lp_ariori_subMod___boxed(lean_object* v_p_4077_, lean_object* v_a_4078_, lean_object* v_b_4079_){
_start:
{
lean_object* v_res_4080_; 
v_res_4080_ = lp_ariori_subMod(v_p_4077_, v_a_4078_, v_b_4079_);
lean_dec(v_b_4079_);
lean_dec(v_a_4078_);
lean_dec(v_p_4077_);
return v_res_4080_;
}
}
LEAN_EXPORT lean_object* lp_ariori_addRowMultipleMod___lam__0(lean_object* v_factor_4081_, lean_object* v_p_4082_, lean_object* v_a_4083_, lean_object* v_b_4084_){
_start:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4085_ = lean_nat_mul(v_factor_4081_, v_b_4084_);
v___x_4086_ = lean_nat_mod(v___x_4085_, v_p_4082_);
lean_dec(v___x_4085_);
v___x_4087_ = lp_ariori_subMod(v_p_4082_, v_a_4083_, v___x_4086_);
lean_dec(v___x_4086_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* lp_ariori_addRowMultipleMod___lam__0___boxed(lean_object* v_factor_4088_, lean_object* v_p_4089_, lean_object* v_a_4090_, lean_object* v_b_4091_){
_start:
{
lean_object* v_res_4092_; 
v_res_4092_ = lp_ariori_addRowMultipleMod___lam__0(v_factor_4088_, v_p_4089_, v_a_4090_, v_b_4091_);
lean_dec(v_b_4091_);
lean_dec(v_a_4090_);
lean_dec(v_p_4089_);
lean_dec(v_factor_4088_);
return v_res_4092_;
}
}
LEAN_EXPORT lean_object* lp_ariori_addRowMultipleMod(lean_object* v_p_4095_, lean_object* v_row_4096_, lean_object* v_pivotRow_4097_, lean_object* v_factor_4098_){
_start:
{
lean_object* v___f_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___f_4099_ = lean_alloc_closure((void*)(lp_ariori_addRowMultipleMod___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4099_, 0, v_factor_4098_);
lean_closure_set(v___f_4099_, 1, v_p_4095_);
v___x_4100_ = ((lean_object*)(lp_ariori_addRowMultipleMod___closed__0));
v___x_4101_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_4099_, v_row_4096_, v_pivotRow_4097_, v___x_4100_);
return v___x_4101_;
}
}
LEAN_EXPORT uint8_t lp_ariori_natInvMod97___lam__0(lean_object* v_a_4102_, lean_object* v_x_4103_){
_start:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; uint8_t v___x_4108_; 
v___x_4104_ = lean_nat_mul(v_a_4102_, v_x_4103_);
v___x_4105_ = lean_unsigned_to_nat(97u);
v___x_4106_ = lean_nat_mod(v___x_4104_, v___x_4105_);
lean_dec(v___x_4104_);
v___x_4107_ = lean_unsigned_to_nat(1u);
v___x_4108_ = lean_nat_dec_eq(v___x_4106_, v___x_4107_);
lean_dec(v___x_4106_);
return v___x_4108_;
}
}
LEAN_EXPORT lean_object* lp_ariori_natInvMod97___lam__0___boxed(lean_object* v_a_4109_, lean_object* v_x_4110_){
_start:
{
uint8_t v_res_4111_; lean_object* v_r_4112_; 
v_res_4111_ = lp_ariori_natInvMod97___lam__0(v_a_4109_, v_x_4110_);
lean_dec(v_x_4110_);
lean_dec(v_a_4109_);
v_r_4112_ = lean_box(v_res_4111_);
return v_r_4112_;
}
}
static lean_object* _init_lp_ariori_natInvMod97___closed__0(void){
_start:
{
lean_object* v___x_4113_; lean_object* v___x_4114_; 
v___x_4113_ = lean_unsigned_to_nat(97u);
v___x_4114_ = l_List_range(v___x_4113_);
return v___x_4114_;
}
}
LEAN_EXPORT lean_object* lp_ariori_natInvMod97(lean_object* v_a_4115_){
_start:
{
lean_object* v___x_4116_; uint8_t v___x_4117_; 
v___x_4116_ = lean_unsigned_to_nat(0u);
v___x_4117_ = lean_nat_dec_eq(v_a_4115_, v___x_4116_);
if (v___x_4117_ == 0)
{
lean_object* v___f_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___f_4118_ = lean_alloc_closure((void*)(lp_ariori_natInvMod97___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4118_, 0, v_a_4115_);
v___x_4119_ = lean_obj_once(&lp_ariori_natInvMod97___closed__0, &lp_ariori_natInvMod97___closed__0_once, _init_lp_ariori_natInvMod97___closed__0);
v___x_4120_ = l_List_find_x3f___redArg(v___f_4118_, v___x_4119_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v___x_4121_; 
v___x_4121_ = lean_unsigned_to_nat(1u);
return v___x_4121_;
}
else
{
lean_object* v_val_4122_; 
v_val_4122_ = lean_ctor_get(v___x_4120_, 0);
lean_inc(v_val_4122_);
lean_dec_ref(v___x_4120_);
return v_val_4122_;
}
}
else
{
lean_object* v___x_4123_; 
lean_dec(v_a_4115_);
v___x_4123_ = lean_unsigned_to_nat(1u);
return v___x_4123_;
}
}
}
LEAN_EXPORT uint8_t lp_ariori_matrixRankMod97Aux___lam__0(lean_object* v_col_4124_, lean_object* v___x_4125_, uint8_t v___y_4126_, lean_object* v_row_4127_){
_start:
{
lean_object* v___x_4128_; uint8_t v___x_4129_; 
v___x_4128_ = l_List_getD___redArg(v_row_4127_, v_col_4124_, v___x_4125_);
v___x_4129_ = lean_nat_dec_eq(v___x_4128_, v___x_4125_);
lean_dec(v___x_4128_);
if (v___x_4129_ == 0)
{
uint8_t v___x_4130_; 
v___x_4130_ = 1;
return v___x_4130_;
}
else
{
return v___y_4126_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_matrixRankMod97Aux___lam__0___boxed(lean_object* v_col_4131_, lean_object* v___x_4132_, lean_object* v___y_4133_, lean_object* v_row_4134_){
_start:
{
uint8_t v___y_583__boxed_4135_; uint8_t v_res_4136_; lean_object* v_r_4137_; 
v___y_583__boxed_4135_ = lean_unbox(v___y_4133_);
v_res_4136_ = lp_ariori_matrixRankMod97Aux___lam__0(v_col_4131_, v___x_4132_, v___y_583__boxed_4135_, v_row_4134_);
lean_dec(v_row_4134_);
lean_dec(v___x_4132_);
v_r_4137_ = lean_box(v_res_4136_);
return v_r_4137_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankMod97Aux_spec__0(lean_object* v_rankRow_4138_, lean_object* v_col_4139_, lean_object* v_inv_4140_, lean_object* v_pivotRow_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_){
_start:
{
if (lean_obj_tag(v_a_4142_) == 0)
{
lean_object* v___x_4144_; 
lean_dec(v_pivotRow_4141_);
lean_dec(v_col_4139_);
v___x_4144_ = lean_array_to_list(v_a_4143_);
return v___x_4144_;
}
else
{
lean_object* v_head_4145_; lean_object* v_tail_4146_; lean_object* v___y_4148_; lean_object* v___x_4151_; uint8_t v___x_4152_; 
v_head_4145_ = lean_ctor_get(v_a_4142_, 0);
lean_inc(v_head_4145_);
v_tail_4146_ = lean_ctor_get(v_a_4142_, 1);
lean_inc(v_tail_4146_);
lean_dec_ref(v_a_4142_);
v___x_4151_ = lean_array_get_size(v_a_4143_);
v___x_4152_ = lean_nat_dec_le(v___x_4151_, v_rankRow_4138_);
if (v___x_4152_ == 0)
{
lean_object* v___x_4153_; lean_object* v___x_4154_; uint8_t v___x_4155_; 
v___x_4153_ = lean_unsigned_to_nat(0u);
lean_inc(v_col_4139_);
v___x_4154_ = l_List_getD___redArg(v_head_4145_, v_col_4139_, v___x_4153_);
v___x_4155_ = lean_nat_dec_eq(v___x_4154_, v___x_4153_);
if (v___x_4155_ == 0)
{
lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v_factor_4158_; lean_object* v___x_4159_; 
v___x_4156_ = lean_nat_mul(v___x_4154_, v_inv_4140_);
lean_dec(v___x_4154_);
v___x_4157_ = lean_unsigned_to_nat(97u);
v_factor_4158_ = lean_nat_mod(v___x_4156_, v___x_4157_);
lean_dec(v___x_4156_);
lean_inc(v_pivotRow_4141_);
v___x_4159_ = lp_ariori_addRowMultipleMod(v___x_4157_, v_head_4145_, v_pivotRow_4141_, v_factor_4158_);
v___y_4148_ = v___x_4159_;
goto v___jp_4147_;
}
else
{
lean_dec(v___x_4154_);
v___y_4148_ = v_head_4145_;
goto v___jp_4147_;
}
}
else
{
v___y_4148_ = v_head_4145_;
goto v___jp_4147_;
}
v___jp_4147_:
{
lean_object* v___x_4149_; 
v___x_4149_ = lean_array_push(v_a_4143_, v___y_4148_);
v_a_4142_ = v_tail_4146_;
v_a_4143_ = v___x_4149_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapIdx_go___at___00matrixRankMod97Aux_spec__0___boxed(lean_object* v_rankRow_4160_, lean_object* v_col_4161_, lean_object* v_inv_4162_, lean_object* v_pivotRow_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_){
_start:
{
lean_object* v_res_4166_; 
v_res_4166_ = lp_ariori_List_mapIdx_go___at___00matrixRankMod97Aux_spec__0(v_rankRow_4160_, v_col_4161_, v_inv_4162_, v_pivotRow_4163_, v_a_4164_, v_a_4165_);
lean_dec(v_inv_4162_);
lean_dec(v_rankRow_4160_);
return v_res_4166_;
}
}
LEAN_EXPORT lean_object* lp_ariori_matrixRankMod97Aux(lean_object* v_mat_4167_, lean_object* v_rankRow_4168_, lean_object* v_col_4169_, lean_object* v_fuel_4170_){
_start:
{
lean_object* v___x_4171_; lean_object* v___y_4173_; lean_object* v___y_4174_; uint8_t v___y_4191_; uint8_t v___x_4208_; 
v___x_4171_ = lean_unsigned_to_nat(0u);
v___x_4208_ = lean_nat_dec_eq(v_fuel_4170_, v___x_4171_);
if (v___x_4208_ == 0)
{
uint8_t v___x_4209_; 
v___x_4209_ = l_List_isEmpty___redArg(v_mat_4167_);
v___y_4191_ = v___x_4209_;
goto v___jp_4190_;
}
else
{
v___y_4191_ = v___x_4208_;
goto v___jp_4190_;
}
v___jp_4172_:
{
lean_object* v_pivotRow_4175_; lean_object* v_pivotVal_4176_; uint8_t v___x_4177_; 
lean_inc(v_rankRow_4168_);
v_pivotRow_4175_ = l_List_get_x21Internal___redArg(v___y_4173_, v___y_4174_, v_rankRow_4168_);
lean_inc(v_col_4169_);
v_pivotVal_4176_ = l_List_getD___redArg(v_pivotRow_4175_, v_col_4169_, v___x_4171_);
v___x_4177_ = lean_nat_dec_eq(v_pivotVal_4176_, v___x_4171_);
if (v___x_4177_ == 0)
{
lean_object* v_inv_4178_; lean_object* v___x_4179_; lean_object* v_reduced_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; 
lean_dec(v_mat_4167_);
v_inv_4178_ = lp_ariori_natInvMod97(v_pivotVal_4176_);
v___x_4179_ = ((lean_object*)(lp_ariori_swapRowsMod___closed__0));
lean_inc(v_col_4169_);
v_reduced_4180_ = lp_ariori_List_mapIdx_go___at___00matrixRankMod97Aux_spec__0(v_rankRow_4168_, v_col_4169_, v_inv_4178_, v_pivotRow_4175_, v___y_4174_, v___x_4179_);
lean_dec(v_inv_4178_);
v___x_4181_ = lean_unsigned_to_nat(1u);
v___x_4182_ = lean_nat_add(v_rankRow_4168_, v___x_4181_);
lean_dec(v_rankRow_4168_);
v___x_4183_ = lean_nat_add(v_col_4169_, v___x_4181_);
lean_dec(v_col_4169_);
v___x_4184_ = lean_nat_sub(v_fuel_4170_, v___x_4181_);
lean_dec(v_fuel_4170_);
v_mat_4167_ = v_reduced_4180_;
v_rankRow_4168_ = v___x_4182_;
v_col_4169_ = v___x_4183_;
v_fuel_4170_ = v___x_4184_;
goto _start;
}
else
{
lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; 
lean_dec(v_pivotVal_4176_);
lean_dec(v_pivotRow_4175_);
lean_dec(v___y_4174_);
v___x_4186_ = lean_unsigned_to_nat(1u);
v___x_4187_ = lean_nat_add(v_col_4169_, v___x_4186_);
lean_dec(v_col_4169_);
v___x_4188_ = lean_nat_sub(v_fuel_4170_, v___x_4186_);
lean_dec(v_fuel_4170_);
v_col_4169_ = v___x_4187_;
v_fuel_4170_ = v___x_4188_;
goto _start;
}
}
v___jp_4190_:
{
if (v___y_4191_ == 0)
{
lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; uint8_t v___x_4195_; 
v___x_4192_ = lean_box(0);
v___x_4193_ = l_List_get_x21Internal___redArg(v___x_4192_, v_mat_4167_, v___x_4171_);
v___x_4194_ = l_List_lengthTR___redArg(v___x_4193_);
lean_dec(v___x_4193_);
v___x_4195_ = lean_nat_dec_le(v___x_4194_, v_col_4169_);
lean_dec(v___x_4194_);
if (v___x_4195_ == 0)
{
lean_object* v___x_4196_; lean_object* v___f_4197_; lean_object* v_sub_4198_; lean_object* v___x_4199_; 
v___x_4196_ = lean_box(v___y_4191_);
lean_inc(v_col_4169_);
v___f_4197_ = lean_alloc_closure((void*)(lp_ariori_matrixRankMod97Aux___lam__0___boxed), 4, 3);
lean_closure_set(v___f_4197_, 0, v_col_4169_);
lean_closure_set(v___f_4197_, 1, v___x_4171_);
lean_closure_set(v___f_4197_, 2, v___x_4196_);
lean_inc(v_rankRow_4168_);
v_sub_4198_ = l_List_drop___redArg(v_rankRow_4168_, v_mat_4167_);
v___x_4199_ = l_List_findIdx_x3f___redArg(v___f_4197_, v_sub_4198_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4200_ = lean_unsigned_to_nat(1u);
v___x_4201_ = lean_nat_add(v_col_4169_, v___x_4200_);
lean_dec(v_col_4169_);
v___x_4202_ = lean_nat_sub(v_fuel_4170_, v___x_4200_);
lean_dec(v_fuel_4170_);
v_col_4169_ = v___x_4201_;
v_fuel_4170_ = v___x_4202_;
goto _start;
}
else
{
lean_object* v_val_4204_; lean_object* v_pivot_4205_; uint8_t v___x_4206_; 
v_val_4204_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_val_4204_);
lean_dec_ref(v___x_4199_);
v_pivot_4205_ = lean_nat_add(v_rankRow_4168_, v_val_4204_);
lean_dec(v_val_4204_);
v___x_4206_ = lean_nat_dec_eq(v_pivot_4205_, v_rankRow_4168_);
if (v___x_4206_ == 0)
{
lean_object* v___x_4207_; 
lean_inc(v_rankRow_4168_);
lean_inc(v_mat_4167_);
v___x_4207_ = lp_ariori_swapRowsMod(v_mat_4167_, v_rankRow_4168_, v_pivot_4205_);
v___y_4173_ = v___x_4192_;
v___y_4174_ = v___x_4207_;
goto v___jp_4172_;
}
else
{
lean_dec(v_pivot_4205_);
lean_inc(v_mat_4167_);
v___y_4173_ = v___x_4192_;
v___y_4174_ = v_mat_4167_;
goto v___jp_4172_;
}
}
}
else
{
lean_dec(v_fuel_4170_);
lean_dec(v_col_4169_);
lean_dec(v_mat_4167_);
return v_rankRow_4168_;
}
}
else
{
lean_dec(v_fuel_4170_);
lean_dec(v_col_4169_);
lean_dec(v_mat_4167_);
return v_rankRow_4168_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_matrixRankMod97(lean_object* v_mat_4210_){
_start:
{
lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4211_ = lean_unsigned_to_nat(0u);
v___x_4212_ = lean_unsigned_to_nat(400u);
v___x_4213_ = lp_ariori_matrixRankMod97Aux(v_mat_4210_, v___x_4211_, v___x_4211_, v___x_4212_);
return v___x_4213_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00nodesOfDegree_spec__0(lean_object* v_d_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_){
_start:
{
if (lean_obj_tag(v_a_4216_) == 0)
{
lean_object* v___x_4218_; 
v___x_4218_ = l_List_reverse___redArg(v_a_4217_);
return v___x_4218_;
}
else
{
lean_object* v_head_4219_; lean_object* v_tail_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4232_; 
v_head_4219_ = lean_ctor_get(v_a_4216_, 0);
v_tail_4220_ = lean_ctor_get(v_a_4216_, 1);
v_isSharedCheck_4232_ = !lean_is_exclusive(v_a_4216_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4222_ = v_a_4216_;
v_isShared_4223_ = v_isSharedCheck_4232_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_tail_4220_);
lean_inc(v_head_4219_);
lean_dec(v_a_4216_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4232_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
uint8_t v___x_4224_; lean_object* v___x_4225_; uint8_t v___x_4226_; 
v___x_4224_ = lean_unbox(v_head_4219_);
v___x_4225_ = lp_ariori_degree(v___x_4224_);
v___x_4226_ = lean_nat_dec_eq(v___x_4225_, v_d_4215_);
lean_dec(v___x_4225_);
if (v___x_4226_ == 0)
{
lean_del_object(v___x_4222_);
lean_dec(v_head_4219_);
v_a_4216_ = v_tail_4220_;
goto _start;
}
else
{
lean_object* v___x_4229_; 
if (v_isShared_4223_ == 0)
{
lean_ctor_set(v___x_4222_, 1, v_a_4217_);
v___x_4229_ = v___x_4222_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_head_4219_);
lean_ctor_set(v_reuseFailAlloc_4231_, 1, v_a_4217_);
v___x_4229_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
v_a_4216_ = v_tail_4220_;
v_a_4217_ = v___x_4229_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00nodesOfDegree_spec__0___boxed(lean_object* v_d_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = lp_ariori_List_filterTR_loop___at___00nodesOfDegree_spec__0(v_d_4233_, v_a_4234_, v_a_4235_);
lean_dec(v_d_4233_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* lp_ariori_nodesOfDegree(lean_object* v_d_4237_){
_start:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4238_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4239_ = lean_box(0);
v___x_4240_ = lp_ariori_List_filterTR_loop___at___00nodesOfDegree_spec__0(v_d_4237_, v___x_4238_, v___x_4239_);
return v___x_4240_;
}
}
LEAN_EXPORT lean_object* lp_ariori_nodesOfDegree___boxed(lean_object* v_d_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = lp_ariori_nodesOfDegree(v_d_4241_);
lean_dec(v_d_4241_);
return v_res_4242_;
}
}
LEAN_EXPORT uint8_t lp_ariori_sigmaFromAssignment___lam__0(uint8_t v_a_4243_, lean_object* v_p_4244_){
_start:
{
lean_object* v_fst_4245_; uint8_t v___x_4246_; uint8_t v___x_4247_; 
v_fst_4245_ = lean_ctor_get(v_p_4244_, 0);
v___x_4246_ = lean_unbox(v_fst_4245_);
v___x_4247_ = lp_ariori_instBEqNodeLabel_beq(v___x_4246_, v_a_4243_);
return v___x_4247_;
}
}
LEAN_EXPORT lean_object* lp_ariori_sigmaFromAssignment___lam__0___boxed(lean_object* v_a_4248_, lean_object* v_p_4249_){
_start:
{
uint8_t v_a_147__boxed_4250_; uint8_t v_res_4251_; lean_object* v_r_4252_; 
v_a_147__boxed_4250_ = lean_unbox(v_a_4248_);
v_res_4251_ = lp_ariori_sigmaFromAssignment___lam__0(v_a_147__boxed_4250_, v_p_4249_);
lean_dec_ref(v_p_4249_);
v_r_4252_ = lean_box(v_res_4251_);
return v_r_4252_;
}
}
static lean_object* _init_lp_ariori_sigmaFromAssignment___closed__0(void){
_start:
{
lean_object* v___x_4253_; lean_object* v___x_4254_; 
v___x_4253_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4254_ = l_List_lengthTR___redArg(v___x_4253_);
return v___x_4254_;
}
}
LEAN_EXPORT uint8_t lp_ariori_sigmaFromAssignment(lean_object* v_chosen_4255_, uint8_t v_a_4256_){
_start:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; uint8_t v___x_4260_; 
v___x_4257_ = l_List_lengthTR___redArg(v_chosen_4255_);
v___x_4258_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4259_ = lean_obj_once(&lp_ariori_sigmaFromAssignment___closed__0, &lp_ariori_sigmaFromAssignment___closed__0_once, _init_lp_ariori_sigmaFromAssignment___closed__0);
v___x_4260_ = lean_nat_dec_eq(v___x_4257_, v___x_4259_);
lean_dec(v___x_4257_);
if (v___x_4260_ == 0)
{
lean_dec(v_chosen_4255_);
return v_a_4256_;
}
else
{
lean_object* v___x_4261_; lean_object* v___f_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
v___x_4261_ = lean_box(v_a_4256_);
v___f_4262_ = lean_alloc_closure((void*)(lp_ariori_sigmaFromAssignment___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4262_, 0, v___x_4261_);
v___x_4263_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v___x_4258_, v_chosen_4255_);
v___x_4264_ = l_List_find_x3f___redArg(v___f_4262_, v___x_4263_);
if (lean_obj_tag(v___x_4264_) == 0)
{
return v_a_4256_;
}
else
{
lean_object* v_val_4265_; lean_object* v_snd_4266_; uint8_t v___x_4267_; 
v_val_4265_ = lean_ctor_get(v___x_4264_, 0);
lean_inc(v_val_4265_);
lean_dec_ref(v___x_4264_);
v_snd_4266_ = lean_ctor_get(v_val_4265_, 1);
lean_inc(v_snd_4266_);
lean_dec(v_val_4265_);
v___x_4267_ = lean_unbox(v_snd_4266_);
lean_dec(v_snd_4266_);
return v___x_4267_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_sigmaFromAssignment___boxed(lean_object* v_chosen_4268_, lean_object* v_a_4269_){
_start:
{
uint8_t v_a_158__boxed_4270_; uint8_t v_res_4271_; lean_object* v_r_4272_; 
v_a_158__boxed_4270_ = lean_unbox(v_a_4269_);
v_res_4271_ = lp_ariori_sigmaFromAssignment(v_chosen_4268_, v_a_158__boxed_4270_);
v_r_4272_ = lean_box(v_res_4271_);
return v_r_4272_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_eraseDups___at___00partialAssignmentInjective_spec__0(lean_object* v_as_4273_){
_start:
{
lean_object* v___f_4274_; lean_object* v___x_4275_; 
v___f_4274_ = ((lean_object*)(lp_ariori_instBEqNodeLabel___closed__0));
v___x_4275_ = l_List_eraseDupsBy___redArg(v___f_4274_, v_as_4273_);
return v___x_4275_;
}
}
LEAN_EXPORT uint8_t lp_ariori_partialAssignmentInjective(lean_object* v_chosen_4276_){
_start:
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; uint8_t v___x_4280_; 
lean_inc(v_chosen_4276_);
v___x_4277_ = lp_ariori_List_eraseDups___at___00partialAssignmentInjective_spec__0(v_chosen_4276_);
v___x_4278_ = l_List_lengthTR___redArg(v___x_4277_);
lean_dec(v___x_4277_);
v___x_4279_ = l_List_lengthTR___redArg(v_chosen_4276_);
lean_dec(v_chosen_4276_);
v___x_4280_ = lean_nat_dec_eq(v___x_4278_, v___x_4279_);
lean_dec(v___x_4279_);
lean_dec(v___x_4278_);
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* lp_ariori_partialAssignmentInjective___boxed(lean_object* v_chosen_4281_){
_start:
{
uint8_t v_res_4282_; lean_object* v_r_4283_; 
v_res_4282_ = lp_ariori_partialAssignmentInjective(v_chosen_4281_);
v_r_4283_ = lean_box(v_res_4282_);
return v_r_4283_;
}
}
LEAN_EXPORT uint8_t lp_ariori_sigmaFromPartial___lam__0(uint8_t v_n_4284_, lean_object* v_p_4285_){
_start:
{
lean_object* v_fst_4286_; uint8_t v___x_4287_; uint8_t v___x_4288_; 
v_fst_4286_ = lean_ctor_get(v_p_4285_, 0);
v___x_4287_ = lean_unbox(v_fst_4286_);
v___x_4288_ = lp_ariori_instBEqNodeLabel_beq(v___x_4287_, v_n_4284_);
return v___x_4288_;
}
}
LEAN_EXPORT lean_object* lp_ariori_sigmaFromPartial___lam__0___boxed(lean_object* v_n_4289_, lean_object* v_p_4290_){
_start:
{
uint8_t v_n_boxed_4291_; uint8_t v_res_4292_; lean_object* v_r_4293_; 
v_n_boxed_4291_ = lean_unbox(v_n_4289_);
v_res_4292_ = lp_ariori_sigmaFromPartial___lam__0(v_n_boxed_4291_, v_p_4290_);
lean_dec_ref(v_p_4290_);
v_r_4293_ = lean_box(v_res_4292_);
return v_r_4293_;
}
}
LEAN_EXPORT uint8_t lp_ariori_sigmaFromPartial(lean_object* v_order_4294_, lean_object* v_chosen_4295_, uint8_t v_n_4296_){
_start:
{
lean_object* v___x_4297_; lean_object* v___f_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4297_ = lean_box(v_n_4296_);
v___f_4298_ = lean_alloc_closure((void*)(lp_ariori_sigmaFromPartial___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4298_, 0, v___x_4297_);
v___x_4299_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_order_4294_, v_chosen_4295_);
v___x_4300_ = l_List_find_x3f___redArg(v___f_4298_, v___x_4299_);
if (lean_obj_tag(v___x_4300_) == 0)
{
return v_n_4296_;
}
else
{
lean_object* v_val_4301_; lean_object* v_snd_4302_; uint8_t v___x_4303_; 
v_val_4301_ = lean_ctor_get(v___x_4300_, 0);
lean_inc(v_val_4301_);
lean_dec_ref(v___x_4300_);
v_snd_4302_ = lean_ctor_get(v_val_4301_, 1);
lean_inc(v_snd_4302_);
lean_dec(v_val_4301_);
v___x_4303_ = lean_unbox(v_snd_4302_);
lean_dec(v_snd_4302_);
return v___x_4303_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_sigmaFromPartial___boxed(lean_object* v_order_4304_, lean_object* v_chosen_4305_, lean_object* v_n_4306_){
_start:
{
uint8_t v_n_boxed_4307_; uint8_t v_res_4308_; lean_object* v_r_4309_; 
v_n_boxed_4307_ = lean_unbox(v_n_4306_);
v_res_4308_ = lp_ariori_sigmaFromPartial(v_order_4304_, v_chosen_4305_, v_n_boxed_4307_);
v_r_4309_ = lean_box(v_res_4308_);
return v_r_4309_;
}
}
LEAN_EXPORT uint8_t lp_ariori_partialAutomorphismOk___lam__0(uint8_t v_u_4310_, lean_object* v_order_4311_, lean_object* v_chosen_4312_, uint8_t v___x_4313_, uint8_t v_v_4314_){
_start:
{
uint8_t v___x_4315_; uint8_t v___x_4316_; uint8_t v___x_4317_; uint8_t v___x_4318_; 
v___x_4315_ = lp_ariori_hasEdge(v_u_4310_, v_v_4314_);
lean_inc(v_chosen_4312_);
lean_inc(v_order_4311_);
v___x_4316_ = lp_ariori_sigmaFromPartial(v_order_4311_, v_chosen_4312_, v_u_4310_);
v___x_4317_ = lp_ariori_sigmaFromPartial(v_order_4311_, v_chosen_4312_, v_v_4314_);
v___x_4318_ = lp_ariori_hasEdge(v___x_4316_, v___x_4317_);
if (v___x_4315_ == 0)
{
if (v___x_4318_ == 0)
{
return v___x_4313_;
}
else
{
return v___x_4315_;
}
}
else
{
return v___x_4318_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_partialAutomorphismOk___lam__0___boxed(lean_object* v_u_4319_, lean_object* v_order_4320_, lean_object* v_chosen_4321_, lean_object* v___x_4322_, lean_object* v_v_4323_){
_start:
{
uint8_t v_u_boxed_4324_; uint8_t v___x_182__boxed_4325_; uint8_t v_v_boxed_4326_; uint8_t v_res_4327_; lean_object* v_r_4328_; 
v_u_boxed_4324_ = lean_unbox(v_u_4319_);
v___x_182__boxed_4325_ = lean_unbox(v___x_4322_);
v_v_boxed_4326_ = lean_unbox(v_v_4323_);
v_res_4327_ = lp_ariori_partialAutomorphismOk___lam__0(v_u_boxed_4324_, v_order_4320_, v_chosen_4321_, v___x_182__boxed_4325_, v_v_boxed_4326_);
v_r_4328_ = lean_box(v_res_4327_);
return v_r_4328_;
}
}
LEAN_EXPORT uint8_t lp_ariori_partialAutomorphismOk___lam__1(lean_object* v_order_4329_, lean_object* v_chosen_4330_, uint8_t v___x_4331_, uint8_t v_u_4332_){
_start:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___f_4335_; uint8_t v___x_4336_; 
v___x_4333_ = lean_box(v_u_4332_);
v___x_4334_ = lean_box(v___x_4331_);
lean_inc(v_order_4329_);
v___f_4335_ = lean_alloc_closure((void*)(lp_ariori_partialAutomorphismOk___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4335_, 0, v___x_4333_);
lean_closure_set(v___f_4335_, 1, v_order_4329_);
lean_closure_set(v___f_4335_, 2, v_chosen_4330_);
lean_closure_set(v___f_4335_, 3, v___x_4334_);
v___x_4336_ = l_List_all___redArg(v_order_4329_, v___f_4335_);
return v___x_4336_;
}
}
LEAN_EXPORT lean_object* lp_ariori_partialAutomorphismOk___lam__1___boxed(lean_object* v_order_4337_, lean_object* v_chosen_4338_, lean_object* v___x_4339_, lean_object* v_u_4340_){
_start:
{
uint8_t v___x_193__boxed_4341_; uint8_t v_u_boxed_4342_; uint8_t v_res_4343_; lean_object* v_r_4344_; 
v___x_193__boxed_4341_ = lean_unbox(v___x_4339_);
v_u_boxed_4342_ = lean_unbox(v_u_4340_);
v_res_4343_ = lp_ariori_partialAutomorphismOk___lam__1(v_order_4337_, v_chosen_4338_, v___x_193__boxed_4341_, v_u_boxed_4342_);
v_r_4344_ = lean_box(v_res_4343_);
return v_r_4344_;
}
}
LEAN_EXPORT uint8_t lp_ariori_partialAutomorphismOk(lean_object* v_chosen_4345_){
_start:
{
uint8_t v___x_4346_; 
lean_inc(v_chosen_4345_);
v___x_4346_ = lp_ariori_partialAssignmentInjective(v_chosen_4345_);
if (v___x_4346_ == 0)
{
lean_dec(v_chosen_4345_);
return v___x_4346_;
}
else
{
lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v_order_4350_; lean_object* v___x_4351_; lean_object* v___f_4352_; uint8_t v___x_4353_; 
v___x_4347_ = l_List_lengthTR___redArg(v_chosen_4345_);
v___x_4348_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4349_ = ((lean_object*)(lp_ariori_neighbors___closed__0));
v_order_4350_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_4348_, v___x_4348_, v___x_4347_, v___x_4349_);
v___x_4351_ = lean_box(v___x_4346_);
lean_inc(v_order_4350_);
v___f_4352_ = lean_alloc_closure((void*)(lp_ariori_partialAutomorphismOk___lam__1___boxed), 4, 3);
lean_closure_set(v___f_4352_, 0, v_order_4350_);
lean_closure_set(v___f_4352_, 1, v_chosen_4345_);
lean_closure_set(v___f_4352_, 2, v___x_4351_);
v___x_4353_ = l_List_all___redArg(v_order_4350_, v___f_4352_);
return v___x_4353_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_partialAutomorphismOk___boxed(lean_object* v_chosen_4354_){
_start:
{
uint8_t v_res_4355_; lean_object* v_r_4356_; 
v_res_4355_ = lp_ariori_partialAutomorphismOk(v_chosen_4354_);
v_r_4356_ = lean_box(v_res_4355_);
return v_r_4356_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countGraphAutos_spec__0(lean_object* v_chosen_4357_, lean_object* v_fuel_4358_, lean_object* v_x_4359_, lean_object* v_x_4360_){
_start:
{
if (lean_obj_tag(v_x_4360_) == 0)
{
lean_dec(v_chosen_4357_);
return v_x_4359_;
}
else
{
lean_object* v_head_4361_; lean_object* v_tail_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4384_; 
v_head_4361_ = lean_ctor_get(v_x_4360_, 0);
v_tail_4362_ = lean_ctor_get(v_x_4360_, 1);
v_isSharedCheck_4384_ = !lean_is_exclusive(v_x_4360_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4364_ = v_x_4360_;
v_isShared_4365_ = v_isSharedCheck_4384_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_tail_4362_);
lean_inc(v_head_4361_);
lean_dec(v_x_4360_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4384_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
uint8_t v___x_4366_; uint8_t v___x_4367_; 
v___x_4366_ = lean_unbox(v_head_4361_);
v___x_4367_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v___x_4366_, v_chosen_4357_);
if (v___x_4367_ == 0)
{
lean_object* v___x_4368_; lean_object* v___x_4370_; 
v___x_4368_ = lean_box(0);
if (v_isShared_4365_ == 0)
{
lean_ctor_set(v___x_4364_, 1, v___x_4368_);
v___x_4370_ = v___x_4364_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_head_4361_);
lean_ctor_set(v_reuseFailAlloc_4382_, 1, v___x_4368_);
v___x_4370_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
lean_object* v___x_4371_; uint8_t v___x_4372_; 
lean_inc(v_chosen_4357_);
v___x_4371_ = l_List_appendTR___redArg(v_chosen_4357_, v___x_4370_);
lean_inc(v___x_4371_);
v___x_4372_ = lp_ariori_partialAssignmentInjective(v___x_4371_);
if (v___x_4372_ == 0)
{
lean_dec(v___x_4371_);
v_x_4360_ = v_tail_4362_;
goto _start;
}
else
{
if (v___x_4367_ == 0)
{
uint8_t v___x_4374_; 
lean_inc(v___x_4371_);
v___x_4374_ = lp_ariori_partialAutomorphismOk(v___x_4371_);
if (v___x_4374_ == 0)
{
lean_dec(v___x_4371_);
v_x_4360_ = v_tail_4362_;
goto _start;
}
else
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4376_ = lean_unsigned_to_nat(1u);
v___x_4377_ = lean_nat_sub(v_fuel_4358_, v___x_4376_);
v___x_4378_ = lp_ariori_countGraphAutos(v___x_4371_, v___x_4377_);
lean_dec(v___x_4377_);
v___x_4379_ = lean_nat_add(v_x_4359_, v___x_4378_);
lean_dec(v___x_4378_);
lean_dec(v_x_4359_);
v_x_4359_ = v___x_4379_;
v_x_4360_ = v_tail_4362_;
goto _start;
}
}
else
{
lean_dec(v___x_4371_);
v_x_4360_ = v_tail_4362_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_4364_);
lean_dec(v_head_4361_);
v_x_4360_ = v_tail_4362_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_countGraphAutos(lean_object* v_chosen_4385_, lean_object* v_fuel_4386_){
_start:
{
lean_object* v___x_4387_; uint8_t v___x_4388_; 
v___x_4387_ = lean_unsigned_to_nat(0u);
v___x_4388_ = lean_nat_dec_eq(v_fuel_4386_, v___x_4387_);
if (v___x_4388_ == 0)
{
lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; uint8_t v___x_4392_; 
v___x_4389_ = l_List_lengthTR___redArg(v_chosen_4385_);
v___x_4390_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4391_ = lean_obj_once(&lp_ariori_sigmaFromAssignment___closed__0, &lp_ariori_sigmaFromAssignment___closed__0_once, _init_lp_ariori_sigmaFromAssignment___closed__0);
v___x_4392_ = lean_nat_dec_eq(v___x_4389_, v___x_4391_);
if (v___x_4392_ == 0)
{
uint8_t v___x_4393_; lean_object* v___x_4394_; lean_object* v_n_4395_; uint8_t v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
v___x_4393_ = 0;
v___x_4394_ = lean_box(v___x_4393_);
v_n_4395_ = l_List_get_x21Internal___redArg(v___x_4394_, v___x_4390_, v___x_4389_);
lean_dec(v___x_4394_);
v___x_4396_ = lean_unbox(v_n_4395_);
lean_dec(v_n_4395_);
v___x_4397_ = lp_ariori_degree(v___x_4396_);
v___x_4398_ = lp_ariori_nodesOfDegree(v___x_4397_);
lean_dec(v___x_4397_);
v___x_4399_ = lp_ariori_List_foldl___at___00countGraphAutos_spec__0(v_chosen_4385_, v_fuel_4386_, v___x_4387_, v___x_4398_);
return v___x_4399_;
}
else
{
lean_object* v_00_u03c3_4400_; uint8_t v___x_4401_; 
lean_dec(v___x_4389_);
v_00_u03c3_4400_ = lean_alloc_closure((void*)(lp_ariori_sigmaFromAssignment___boxed), 2, 1);
lean_closure_set(v_00_u03c3_4400_, 0, v_chosen_4385_);
lean_inc_ref(v_00_u03c3_4400_);
v___x_4401_ = lp_ariori_isGraphAutomorphism(v_00_u03c3_4400_);
if (v___x_4401_ == 0)
{
lean_dec_ref(v_00_u03c3_4400_);
return v___x_4387_;
}
else
{
uint8_t v___x_4402_; 
v___x_4402_ = lp_ariori_graphAutomorphismInjective(v_00_u03c3_4400_);
if (v___x_4402_ == 0)
{
return v___x_4387_;
}
else
{
lean_object* v___x_4403_; 
v___x_4403_ = lean_unsigned_to_nat(1u);
return v___x_4403_;
}
}
}
}
else
{
lean_dec(v_chosen_4385_);
return v___x_4387_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_countGraphAutos___boxed(lean_object* v_chosen_4404_, lean_object* v_fuel_4405_){
_start:
{
lean_object* v_res_4406_; 
v_res_4406_ = lp_ariori_countGraphAutos(v_chosen_4404_, v_fuel_4405_);
lean_dec(v_fuel_4405_);
return v_res_4406_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00countGraphAutos_spec__0___boxed(lean_object* v_chosen_4407_, lean_object* v_fuel_4408_, lean_object* v_x_4409_, lean_object* v_x_4410_){
_start:
{
lean_object* v_res_4411_; 
v_res_4411_ = lp_ariori_List_foldl___at___00countGraphAutos_spec__0(v_chosen_4407_, v_fuel_4408_, v_x_4409_, v_x_4410_);
lean_dec(v_fuel_4408_);
return v_res_4411_;
}
}
LEAN_EXPORT lean_object* lp_ariori_collectGraphAutos(lean_object* v_chosen_4412_, lean_object* v_fuel_4413_){
_start:
{
lean_object* v___x_4414_; uint8_t v___x_4415_; 
v___x_4414_ = lean_unsigned_to_nat(0u);
v___x_4415_ = lean_nat_dec_eq(v_fuel_4413_, v___x_4414_);
if (v___x_4415_ == 0)
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; uint8_t v___x_4419_; 
v___x_4416_ = l_List_lengthTR___redArg(v_chosen_4412_);
v___x_4417_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4418_ = lean_obj_once(&lp_ariori_sigmaFromAssignment___closed__0, &lp_ariori_sigmaFromAssignment___closed__0_once, _init_lp_ariori_sigmaFromAssignment___closed__0);
v___x_4419_ = lean_nat_dec_eq(v___x_4416_, v___x_4418_);
if (v___x_4419_ == 0)
{
uint8_t v___x_4420_; lean_object* v___x_4421_; lean_object* v_n_4422_; lean_object* v___x_4423_; uint8_t v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; 
v___x_4420_ = 0;
v___x_4421_ = lean_box(v___x_4420_);
v_n_4422_ = l_List_get_x21Internal___redArg(v___x_4421_, v___x_4417_, v___x_4416_);
lean_dec(v___x_4421_);
v___x_4423_ = lean_box(0);
v___x_4424_ = lean_unbox(v_n_4422_);
lean_dec(v_n_4422_);
v___x_4425_ = lp_ariori_degree(v___x_4424_);
v___x_4426_ = lp_ariori_nodesOfDegree(v___x_4425_);
lean_dec(v___x_4425_);
v___x_4427_ = lp_ariori_List_foldl___at___00collectGraphAutos_spec__0(v_chosen_4412_, v_fuel_4413_, v___x_4423_, v___x_4426_);
return v___x_4427_;
}
else
{
lean_object* v_00_u03c3_4428_; uint8_t v___x_4429_; 
lean_dec(v___x_4416_);
lean_inc(v_chosen_4412_);
v_00_u03c3_4428_ = lean_alloc_closure((void*)(lp_ariori_sigmaFromAssignment___boxed), 2, 1);
lean_closure_set(v_00_u03c3_4428_, 0, v_chosen_4412_);
lean_inc_ref(v_00_u03c3_4428_);
v___x_4429_ = lp_ariori_isGraphAutomorphism(v_00_u03c3_4428_);
if (v___x_4429_ == 0)
{
lean_object* v___x_4430_; 
lean_dec_ref(v_00_u03c3_4428_);
lean_dec(v_chosen_4412_);
v___x_4430_ = lean_box(0);
return v___x_4430_;
}
else
{
uint8_t v___x_4431_; 
v___x_4431_ = lp_ariori_graphAutomorphismInjective(v_00_u03c3_4428_);
if (v___x_4431_ == 0)
{
lean_object* v___x_4432_; 
lean_dec(v_chosen_4412_);
v___x_4432_ = lean_box(0);
return v___x_4432_;
}
else
{
lean_object* v___x_4433_; lean_object* v___x_4434_; 
v___x_4433_ = lean_box(0);
v___x_4434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4434_, 0, v_chosen_4412_);
lean_ctor_set(v___x_4434_, 1, v___x_4433_);
return v___x_4434_;
}
}
}
}
else
{
lean_object* v___x_4435_; 
lean_dec(v_chosen_4412_);
v___x_4435_ = lean_box(0);
return v___x_4435_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00collectGraphAutos_spec__0(lean_object* v_chosen_4436_, lean_object* v_fuel_4437_, lean_object* v_x_4438_, lean_object* v_x_4439_){
_start:
{
if (lean_obj_tag(v_x_4439_) == 0)
{
lean_dec(v_chosen_4436_);
return v_x_4438_;
}
else
{
lean_object* v_head_4440_; lean_object* v_tail_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4463_; 
v_head_4440_ = lean_ctor_get(v_x_4439_, 0);
v_tail_4441_ = lean_ctor_get(v_x_4439_, 1);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_x_4439_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4443_ = v_x_4439_;
v_isShared_4444_ = v_isSharedCheck_4463_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_tail_4441_);
lean_inc(v_head_4440_);
lean_dec(v_x_4439_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4463_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
uint8_t v___x_4445_; uint8_t v___x_4446_; 
v___x_4445_ = lean_unbox(v_head_4440_);
v___x_4446_ = lp_ariori_List_elem___at___00insertIfNew_spec__0(v___x_4445_, v_chosen_4436_);
if (v___x_4446_ == 0)
{
lean_object* v___x_4447_; lean_object* v___x_4449_; 
v___x_4447_ = lean_box(0);
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 1, v___x_4447_);
v___x_4449_ = v___x_4443_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_head_4440_);
lean_ctor_set(v_reuseFailAlloc_4461_, 1, v___x_4447_);
v___x_4449_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
lean_object* v___x_4450_; uint8_t v___x_4451_; 
lean_inc(v_chosen_4436_);
v___x_4450_ = l_List_appendTR___redArg(v_chosen_4436_, v___x_4449_);
lean_inc(v___x_4450_);
v___x_4451_ = lp_ariori_partialAssignmentInjective(v___x_4450_);
if (v___x_4451_ == 0)
{
lean_dec(v___x_4450_);
v_x_4439_ = v_tail_4441_;
goto _start;
}
else
{
if (v___x_4446_ == 0)
{
uint8_t v___x_4453_; 
lean_inc(v___x_4450_);
v___x_4453_ = lp_ariori_partialAutomorphismOk(v___x_4450_);
if (v___x_4453_ == 0)
{
lean_dec(v___x_4450_);
v_x_4439_ = v_tail_4441_;
goto _start;
}
else
{
lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4455_ = lean_unsigned_to_nat(1u);
v___x_4456_ = lean_nat_sub(v_fuel_4437_, v___x_4455_);
v___x_4457_ = lp_ariori_collectGraphAutos(v___x_4450_, v___x_4456_);
lean_dec(v___x_4456_);
v___x_4458_ = l_List_appendTR___redArg(v_x_4438_, v___x_4457_);
v_x_4438_ = v___x_4458_;
v_x_4439_ = v_tail_4441_;
goto _start;
}
}
else
{
lean_dec(v___x_4450_);
v_x_4439_ = v_tail_4441_;
goto _start;
}
}
}
}
else
{
lean_del_object(v___x_4443_);
lean_dec(v_head_4440_);
v_x_4439_ = v_tail_4441_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00collectGraphAutos_spec__0___boxed(lean_object* v_chosen_4464_, lean_object* v_fuel_4465_, lean_object* v_x_4466_, lean_object* v_x_4467_){
_start:
{
lean_object* v_res_4468_; 
v_res_4468_ = lp_ariori_List_foldl___at___00collectGraphAutos_spec__0(v_chosen_4464_, v_fuel_4465_, v_x_4466_, v_x_4467_);
lean_dec(v_fuel_4465_);
return v_res_4468_;
}
}
LEAN_EXPORT lean_object* lp_ariori_collectGraphAutos___boxed(lean_object* v_chosen_4469_, lean_object* v_fuel_4470_){
_start:
{
lean_object* v_res_4471_; 
v_res_4471_ = lp_ariori_collectGraphAutos(v_chosen_4469_, v_fuel_4470_);
lean_dec(v_fuel_4470_);
return v_res_4471_;
}
}
static lean_object* _init_lp_ariori_gen1AutomorphismCount___closed__0(void){
_start:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
v___x_4472_ = lean_unsigned_to_nat(500000u);
v___x_4473_ = lean_box(0);
v___x_4474_ = lp_ariori_countGraphAutos(v___x_4473_, v___x_4472_);
return v___x_4474_;
}
}
static lean_object* _init_lp_ariori_gen1AutomorphismCount(void){
_start:
{
lean_object* v___x_4475_; 
v___x_4475_ = lean_obj_once(&lp_ariori_gen1AutomorphismCount___closed__0, &lp_ariori_gen1AutomorphismCount___closed__0_once, _init_lp_ariori_gen1AutomorphismCount___closed__0);
return v___x_4475_;
}
}
static lean_object* _init_lp_ariori_gen1AutomorphismAssignments___closed__0(void){
_start:
{
lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v___x_4476_ = lean_unsigned_to_nat(500000u);
v___x_4477_ = lean_box(0);
v___x_4478_ = lp_ariori_collectGraphAutos(v___x_4477_, v___x_4476_);
return v___x_4478_;
}
}
static lean_object* _init_lp_ariori_gen1AutomorphismAssignments(void){
_start:
{
lean_object* v___x_4479_; 
v___x_4479_ = lean_obj_once(&lp_ariori_gen1AutomorphismAssignments___closed__0, &lp_ariori_gen1AutomorphismAssignments___closed__0_once, _init_lp_ariori_gen1AutomorphismAssignments___closed__0);
return v___x_4479_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00mirrorAssignment_spec__0(lean_object* v_a_4480_, lean_object* v_a_4481_){
_start:
{
if (lean_obj_tag(v_a_4480_) == 0)
{
lean_object* v___x_4482_; 
v___x_4482_ = l_List_reverse___redArg(v_a_4481_);
return v___x_4482_;
}
else
{
lean_object* v_head_4483_; lean_object* v_tail_4484_; lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4495_; 
v_head_4483_ = lean_ctor_get(v_a_4480_, 0);
v_tail_4484_ = lean_ctor_get(v_a_4480_, 1);
v_isSharedCheck_4495_ = !lean_is_exclusive(v_a_4480_);
if (v_isSharedCheck_4495_ == 0)
{
v___x_4486_ = v_a_4480_;
v_isShared_4487_ = v_isSharedCheck_4495_;
goto v_resetjp_4485_;
}
else
{
lean_inc(v_tail_4484_);
lean_inc(v_head_4483_);
lean_dec(v_a_4480_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4495_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
uint8_t v___x_4488_; uint8_t v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4492_; 
v___x_4488_ = lean_unbox(v_head_4483_);
lean_dec(v_head_4483_);
v___x_4489_ = lp_ariori_mirrorAutomorphism(v___x_4488_);
v___x_4490_ = lean_box(v___x_4489_);
if (v_isShared_4487_ == 0)
{
lean_ctor_set(v___x_4486_, 1, v_a_4481_);
lean_ctor_set(v___x_4486_, 0, v___x_4490_);
v___x_4492_ = v___x_4486_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4494_; 
v_reuseFailAlloc_4494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4494_, 0, v___x_4490_);
lean_ctor_set(v_reuseFailAlloc_4494_, 1, v_a_4481_);
v___x_4492_ = v_reuseFailAlloc_4494_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
v_a_4480_ = v_tail_4484_;
v_a_4481_ = v___x_4492_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_ariori_mirrorAssignment___closed__0(void){
_start:
{
lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; 
v___x_4496_ = lean_box(0);
v___x_4497_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4498_ = lp_ariori_List_mapTR_loop___at___00mirrorAssignment_spec__0(v___x_4497_, v___x_4496_);
return v___x_4498_;
}
}
static lean_object* _init_lp_ariori_mirrorAssignment(void){
_start:
{
lean_object* v___x_4499_; 
v___x_4499_ = lean_obj_once(&lp_ariori_mirrorAssignment___closed__0, &lp_ariori_mirrorAssignment___closed__0_once, _init_lp_ariori_mirrorAssignment___closed__0);
return v___x_4499_;
}
}
LEAN_EXPORT uint8_t lp_ariori_List_beq___at___00assignmentInCollect_spec__0(lean_object* v_x_4500_, lean_object* v_x_4501_){
_start:
{
if (lean_obj_tag(v_x_4500_) == 0)
{
if (lean_obj_tag(v_x_4501_) == 0)
{
uint8_t v___x_4502_; 
v___x_4502_ = 1;
return v___x_4502_;
}
else
{
uint8_t v___x_4503_; 
v___x_4503_ = 0;
return v___x_4503_;
}
}
else
{
if (lean_obj_tag(v_x_4501_) == 0)
{
uint8_t v___x_4504_; 
v___x_4504_ = 0;
return v___x_4504_;
}
else
{
lean_object* v_head_4505_; lean_object* v_tail_4506_; lean_object* v_head_4507_; lean_object* v_tail_4508_; uint8_t v___x_4509_; uint8_t v___x_4510_; uint8_t v___x_4511_; 
v_head_4505_ = lean_ctor_get(v_x_4500_, 0);
v_tail_4506_ = lean_ctor_get(v_x_4500_, 1);
v_head_4507_ = lean_ctor_get(v_x_4501_, 0);
v_tail_4508_ = lean_ctor_get(v_x_4501_, 1);
v___x_4509_ = lean_unbox(v_head_4505_);
v___x_4510_ = lean_unbox(v_head_4507_);
v___x_4511_ = lp_ariori_instBEqNodeLabel_beq(v___x_4509_, v___x_4510_);
if (v___x_4511_ == 0)
{
return v___x_4511_;
}
else
{
v_x_4500_ = v_tail_4506_;
v_x_4501_ = v_tail_4508_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_beq___at___00assignmentInCollect_spec__0___boxed(lean_object* v_x_4513_, lean_object* v_x_4514_){
_start:
{
uint8_t v_res_4515_; lean_object* v_r_4516_; 
v_res_4515_ = lp_ariori_List_beq___at___00assignmentInCollect_spec__0(v_x_4513_, v_x_4514_);
lean_dec(v_x_4514_);
lean_dec(v_x_4513_);
v_r_4516_ = lean_box(v_res_4515_);
return v_r_4516_;
}
}
LEAN_EXPORT uint8_t lp_ariori_assignmentInCollect___lam__0(lean_object* v_chosen_4517_, lean_object* v_a_4518_){
_start:
{
uint8_t v___x_4519_; 
v___x_4519_ = lp_ariori_List_beq___at___00assignmentInCollect_spec__0(v_a_4518_, v_chosen_4517_);
return v___x_4519_;
}
}
LEAN_EXPORT lean_object* lp_ariori_assignmentInCollect___lam__0___boxed(lean_object* v_chosen_4520_, lean_object* v_a_4521_){
_start:
{
uint8_t v_res_4522_; lean_object* v_r_4523_; 
v_res_4522_ = lp_ariori_assignmentInCollect___lam__0(v_chosen_4520_, v_a_4521_);
lean_dec(v_a_4521_);
lean_dec(v_chosen_4520_);
v_r_4523_ = lean_box(v_res_4522_);
return v_r_4523_;
}
}
LEAN_EXPORT uint8_t lp_ariori_assignmentInCollect(lean_object* v_chosen_4524_){
_start:
{
lean_object* v___f_4525_; lean_object* v___x_4526_; uint8_t v___x_4527_; 
v___f_4525_ = lean_alloc_closure((void*)(lp_ariori_assignmentInCollect___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4525_, 0, v_chosen_4524_);
v___x_4526_ = lp_ariori_gen1AutomorphismAssignments;
v___x_4527_ = l_List_any___redArg(v___x_4526_, v___f_4525_);
return v___x_4527_;
}
}
LEAN_EXPORT lean_object* lp_ariori_assignmentInCollect___boxed(lean_object* v_chosen_4528_){
_start:
{
uint8_t v_res_4529_; lean_object* v_r_4530_; 
v_res_4529_ = lp_ariori_assignmentInCollect(v_chosen_4528_);
v_r_4530_ = lean_box(v_res_4529_);
return v_r_4530_;
}
}
LEAN_EXPORT uint8_t lp_ariori_assignmentMatchesSigma___lam__0(lean_object* v_00_u03c3_4531_, lean_object* v_chosen_4532_, uint8_t v_n_4533_){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; uint8_t v___x_4536_; uint8_t v___x_4537_; uint8_t v___x_4538_; 
v___x_4534_ = lean_box(v_n_4533_);
v___x_4535_ = lean_apply_1(v_00_u03c3_4531_, v___x_4534_);
v___x_4536_ = lp_ariori_sigmaFromAssignment(v_chosen_4532_, v_n_4533_);
v___x_4537_ = lean_unbox(v___x_4535_);
v___x_4538_ = lp_ariori_instBEqNodeLabel_beq(v___x_4537_, v___x_4536_);
return v___x_4538_;
}
}
LEAN_EXPORT lean_object* lp_ariori_assignmentMatchesSigma___lam__0___boxed(lean_object* v_00_u03c3_4539_, lean_object* v_chosen_4540_, lean_object* v_n_4541_){
_start:
{
uint8_t v_n_boxed_4542_; uint8_t v_res_4543_; lean_object* v_r_4544_; 
v_n_boxed_4542_ = lean_unbox(v_n_4541_);
v_res_4543_ = lp_ariori_assignmentMatchesSigma___lam__0(v_00_u03c3_4539_, v_chosen_4540_, v_n_boxed_4542_);
v_r_4544_ = lean_box(v_res_4543_);
return v_r_4544_;
}
}
LEAN_EXPORT uint8_t lp_ariori_assignmentMatchesSigma(lean_object* v_chosen_4545_, lean_object* v_00_u03c3_4546_){
_start:
{
lean_object* v___f_4547_; lean_object* v___x_4548_; uint8_t v___x_4549_; 
v___f_4547_ = lean_alloc_closure((void*)(lp_ariori_assignmentMatchesSigma___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4547_, 0, v_00_u03c3_4546_);
lean_closure_set(v___f_4547_, 1, v_chosen_4545_);
v___x_4548_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4549_ = l_List_all___redArg(v___x_4548_, v___f_4547_);
return v___x_4549_;
}
}
LEAN_EXPORT lean_object* lp_ariori_assignmentMatchesSigma___boxed(lean_object* v_chosen_4550_, lean_object* v_00_u03c3_4551_){
_start:
{
uint8_t v_res_4552_; lean_object* v_r_4553_; 
v_res_4552_ = lp_ariori_assignmentMatchesSigma(v_chosen_4550_, v_00_u03c3_4551_);
v_r_4553_ = lean_box(v_res_4552_);
return v_r_4553_;
}
}
LEAN_EXPORT lean_object* lp_ariori_classifyGen1Automorphism(lean_object* v_00_u03c3_4560_){
_start:
{
lean_object* v___x_4561_; uint8_t v___x_4562_; 
v___x_4561_ = ((lean_object*)(lp_ariori_allNodes));
lean_inc_ref(v_00_u03c3_4560_);
v___x_4562_ = lp_ariori_assignmentMatchesSigma(v___x_4561_, v_00_u03c3_4560_);
if (v___x_4562_ == 0)
{
lean_object* v___x_4563_; uint8_t v___x_4564_; 
v___x_4563_ = lp_ariori_mirrorAssignment;
v___x_4564_ = lp_ariori_assignmentMatchesSigma(v___x_4563_, v_00_u03c3_4560_);
if (v___x_4564_ == 0)
{
lean_object* v___x_4565_; 
v___x_4565_ = lean_box(0);
return v___x_4565_;
}
else
{
lean_object* v___x_4566_; 
v___x_4566_ = ((lean_object*)(lp_ariori_classifyGen1Automorphism___closed__0));
return v___x_4566_;
}
}
else
{
lean_object* v___x_4567_; 
lean_dec_ref(v_00_u03c3_4560_);
v___x_4567_ = ((lean_object*)(lp_ariori_classifyGen1Automorphism___closed__1));
return v___x_4567_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00sigmaAsAssignment_spec__0(lean_object* v_00_u03c3_4568_, lean_object* v_a_4569_, lean_object* v_a_4570_){
_start:
{
if (lean_obj_tag(v_a_4569_) == 0)
{
lean_object* v___x_4571_; 
lean_dec_ref(v_00_u03c3_4568_);
v___x_4571_ = l_List_reverse___redArg(v_a_4570_);
return v___x_4571_;
}
else
{
lean_object* v_head_4572_; lean_object* v_tail_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4582_; 
v_head_4572_ = lean_ctor_get(v_a_4569_, 0);
v_tail_4573_ = lean_ctor_get(v_a_4569_, 1);
v_isSharedCheck_4582_ = !lean_is_exclusive(v_a_4569_);
if (v_isSharedCheck_4582_ == 0)
{
v___x_4575_ = v_a_4569_;
v_isShared_4576_ = v_isSharedCheck_4582_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_tail_4573_);
lean_inc(v_head_4572_);
lean_dec(v_a_4569_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4582_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4577_; lean_object* v___x_4579_; 
lean_inc_ref(v_00_u03c3_4568_);
v___x_4577_ = lean_apply_1(v_00_u03c3_4568_, v_head_4572_);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 1, v_a_4570_);
lean_ctor_set(v___x_4575_, 0, v___x_4577_);
v___x_4579_ = v___x_4575_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4577_);
lean_ctor_set(v_reuseFailAlloc_4581_, 1, v_a_4570_);
v___x_4579_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
v_a_4569_ = v_tail_4573_;
v_a_4570_ = v___x_4579_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_sigmaAsAssignment(lean_object* v_00_u03c3_4583_){
_start:
{
lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; 
v___x_4584_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4585_ = lean_box(0);
v___x_4586_ = lp_ariori_List_mapTR_loop___at___00sigmaAsAssignment_spec__0(v_00_u03c3_4583_, v___x_4584_, v___x_4585_);
return v___x_4586_;
}
}
LEAN_EXPORT uint8_t lp_ariori_sigmaAssignmentInCollect(lean_object* v_00_u03c3_4587_){
_start:
{
lean_object* v___x_4588_; uint8_t v___x_4589_; 
v___x_4588_ = lp_ariori_sigmaAsAssignment(v_00_u03c3_4587_);
v___x_4589_ = lp_ariori_assignmentInCollect(v___x_4588_);
return v___x_4589_;
}
}
LEAN_EXPORT lean_object* lp_ariori_sigmaAssignmentInCollect___boxed(lean_object* v_00_u03c3_4590_){
_start:
{
uint8_t v_res_4591_; lean_object* v_r_4592_; 
v_res_4591_ = lp_ariori_sigmaAssignmentInCollect(v_00_u03c3_4590_);
v_r_4592_ = lean_box(v_res_4591_);
return v_r_4592_;
}
}
LEAN_EXPORT uint8_t lp_ariori_graphAutoAssignmentIsIdOrMirror(lean_object* v_00_u03c3_4593_){
_start:
{
uint8_t v___x_4594_; 
lean_inc_ref(v_00_u03c3_4593_);
v___x_4594_ = lp_ariori_isGraphAutomorphism(v_00_u03c3_4593_);
if (v___x_4594_ == 0)
{
uint8_t v___x_4595_; 
lean_dec_ref(v_00_u03c3_4593_);
v___x_4595_ = 1;
return v___x_4595_;
}
else
{
uint8_t v___x_4596_; 
lean_inc_ref(v_00_u03c3_4593_);
v___x_4596_ = lp_ariori_graphAutomorphismInjective(v_00_u03c3_4593_);
if (v___x_4596_ == 0)
{
lean_dec_ref(v_00_u03c3_4593_);
return v___x_4594_;
}
else
{
lean_object* v___x_4597_; lean_object* v___x_4598_; uint8_t v___x_4599_; 
v___x_4597_ = lp_ariori_sigmaAsAssignment(v_00_u03c3_4593_);
v___x_4598_ = ((lean_object*)(lp_ariori_allNodes));
v___x_4599_ = lp_ariori_List_beq___at___00assignmentInCollect_spec__0(v___x_4597_, v___x_4598_);
if (v___x_4599_ == 0)
{
lean_object* v___x_4600_; uint8_t v___x_4601_; 
v___x_4600_ = lp_ariori_mirrorAssignment;
v___x_4601_ = lp_ariori_List_beq___at___00assignmentInCollect_spec__0(v___x_4597_, v___x_4600_);
lean_dec(v___x_4597_);
return v___x_4601_;
}
else
{
lean_dec(v___x_4597_);
return v___x_4599_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_graphAutoAssignmentIsIdOrMirror___boxed(lean_object* v_00_u03c3_4602_){
_start:
{
uint8_t v_res_4603_; lean_object* v_r_4604_; 
v_res_4603_ = lp_ariori_graphAutoAssignmentIsIdOrMirror(v_00_u03c3_4602_);
v_r_4604_ = lean_box(v_res_4603_);
return v_r_4604_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__r(void){
_start:
{
lean_object* v___x_4605_; 
v___x_4605_ = lean_obj_once(&lp_ariori_VesicaNumber_one___closed__0, &lp_ariori_VesicaNumber_one___closed__0_once, _init_lp_ariori_VesicaNumber_one___closed__0);
return v___x_4605_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__half___closed__0(void){
_start:
{
lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4606_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_4607_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_4608_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4609_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4609_, 0, v___x_4608_);
lean_ctor_set(v___x_4609_, 1, v___x_4607_);
lean_ctor_set(v___x_4609_, 2, v___x_4606_);
return v___x_4609_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__half(void){
_start:
{
lean_object* v___x_4610_; 
v___x_4610_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__half___closed__0, &lp_ariori___private_ArioriFull_0__half___closed__0_once, _init_lp_ariori___private_ArioriFull_0__half___closed__0);
return v___x_4610_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__negHalf___closed__0(void){
_start:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___x_4611_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_4612_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_4613_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_4614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4614_, 0, v___x_4613_);
lean_ctor_set(v___x_4614_, 1, v___x_4612_);
lean_ctor_set(v___x_4614_, 2, v___x_4611_);
return v___x_4614_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__negHalf(void){
_start:
{
lean_object* v___x_4615_; 
v___x_4615_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__negHalf___closed__0, &lp_ariori___private_ArioriFull_0__negHalf___closed__0_once, _init_lp_ariori___private_ArioriFull_0__negHalf___closed__0);
return v___x_4615_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__halfSqrt3___closed__0(void){
_start:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4616_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_4617_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4618_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_4619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4619_, 0, v___x_4618_);
lean_ctor_set(v___x_4619_, 1, v___x_4617_);
lean_ctor_set(v___x_4619_, 2, v___x_4616_);
return v___x_4619_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__halfSqrt3(void){
_start:
{
lean_object* v___x_4620_; 
v___x_4620_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__halfSqrt3___closed__0, &lp_ariori___private_ArioriFull_0__halfSqrt3___closed__0_once, _init_lp_ariori___private_ArioriFull_0__halfSqrt3___closed__0);
return v___x_4620_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__negHalfSqrt3___closed__0(void){
_start:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v___x_4621_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_4622_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_4623_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_4624_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4624_, 0, v___x_4623_);
lean_ctor_set(v___x_4624_, 1, v___x_4622_);
lean_ctor_set(v___x_4624_, 2, v___x_4621_);
return v___x_4624_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__negHalfSqrt3(void){
_start:
{
lean_object* v___x_4625_; 
v___x_4625_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__negHalfSqrt3___closed__0, &lp_ariori___private_ArioriFull_0__negHalfSqrt3___closed__0_once, _init_lp_ariori___private_ArioriFull_0__negHalfSqrt3___closed__0);
return v___x_4625_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__threeHalves___closed__0(void){
_start:
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4626_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_4627_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_4628_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_4629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4629_, 0, v___x_4628_);
lean_ctor_set(v___x_4629_, 1, v___x_4627_);
lean_ctor_set(v___x_4629_, 2, v___x_4626_);
return v___x_4629_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__threeHalves(void){
_start:
{
lean_object* v___x_4630_; 
v___x_4630_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__threeHalves___closed__0, &lp_ariori___private_ArioriFull_0__threeHalves___closed__0_once, _init_lp_ariori___private_ArioriFull_0__threeHalves___closed__0);
return v___x_4630_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptA___closed__0(void){
_start:
{
lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___x_4631_ = lean_obj_once(&lp_ariori_VesicaNumber_zero___closed__0, &lp_ariori_VesicaNumber_zero___closed__0_once, _init_lp_ariori_VesicaNumber_zero___closed__0);
v___x_4632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4632_, 0, v___x_4631_);
lean_ctor_set(v___x_4632_, 1, v___x_4631_);
return v___x_4632_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptA(void){
_start:
{
lean_object* v___x_4633_; 
v___x_4633_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptA___closed__0, &lp_ariori___private_ArioriFull_0__ptA___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptA___closed__0);
return v___x_4633_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptB___closed__0(void){
_start:
{
lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; 
v___x_4634_ = lean_obj_once(&lp_ariori_VesicaNumber_zero___closed__0, &lp_ariori_VesicaNumber_zero___closed__0_once, _init_lp_ariori_VesicaNumber_zero___closed__0);
v___x_4635_ = lean_obj_once(&lp_ariori_VesicaNumber_one___closed__0, &lp_ariori_VesicaNumber_one___closed__0_once, _init_lp_ariori_VesicaNumber_one___closed__0);
v___x_4636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4635_);
lean_ctor_set(v___x_4636_, 1, v___x_4634_);
return v___x_4636_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptB(void){
_start:
{
lean_object* v___x_4637_; 
v___x_4637_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptB___closed__0, &lp_ariori___private_ArioriFull_0__ptB___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptB___closed__0);
return v___x_4637_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptTop___closed__0(void){
_start:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4638_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4639_ = lp_ariori___private_ArioriFull_0__half;
v___x_4640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4640_, 0, v___x_4639_);
lean_ctor_set(v___x_4640_, 1, v___x_4638_);
return v___x_4640_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptTop(void){
_start:
{
lean_object* v___x_4641_; 
v___x_4641_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptTop___closed__0, &lp_ariori___private_ArioriFull_0__ptTop___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptTop___closed__0);
return v___x_4641_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptBot___closed__0(void){
_start:
{
lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v___x_4642_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4643_ = lp_ariori___private_ArioriFull_0__half;
v___x_4644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4644_, 0, v___x_4643_);
lean_ctor_set(v___x_4644_, 1, v___x_4642_);
return v___x_4644_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptBot(void){
_start:
{
lean_object* v___x_4645_; 
v___x_4645_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptBot___closed__0, &lp_ariori___private_ArioriFull_0__ptBot___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptBot___closed__0);
return v___x_4645_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP3___closed__0(void){
_start:
{
lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4646_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4647_ = lp_ariori___private_ArioriFull_0__negHalf;
v___x_4648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4648_, 0, v___x_4647_);
lean_ctor_set(v___x_4648_, 1, v___x_4646_);
return v___x_4648_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP3(void){
_start:
{
lean_object* v___x_4649_; 
v___x_4649_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptP3___closed__0, &lp_ariori___private_ArioriFull_0__ptP3___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptP3___closed__0);
return v___x_4649_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP4___closed__0(void){
_start:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4650_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4651_ = lp_ariori___private_ArioriFull_0__threeHalves;
v___x_4652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4652_, 0, v___x_4651_);
lean_ctor_set(v___x_4652_, 1, v___x_4650_);
return v___x_4652_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP4(void){
_start:
{
lean_object* v___x_4653_; 
v___x_4653_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptP4___closed__0, &lp_ariori___private_ArioriFull_0__ptP4___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptP4___closed__0);
return v___x_4653_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP5___closed__0(void){
_start:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4654_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4655_ = lp_ariori___private_ArioriFull_0__negHalf;
v___x_4656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4656_, 0, v___x_4655_);
lean_ctor_set(v___x_4656_, 1, v___x_4654_);
return v___x_4656_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP5(void){
_start:
{
lean_object* v___x_4657_; 
v___x_4657_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptP5___closed__0, &lp_ariori___private_ArioriFull_0__ptP5___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptP5___closed__0);
return v___x_4657_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP6___closed__0(void){
_start:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4658_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4659_ = lp_ariori___private_ArioriFull_0__threeHalves;
v___x_4660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4660_, 0, v___x_4659_);
lean_ctor_set(v___x_4660_, 1, v___x_4658_);
return v___x_4660_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptP6(void){
_start:
{
lean_object* v___x_4661_; 
v___x_4661_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptP6___closed__0, &lp_ariori___private_ArioriFull_0__ptP6___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptP6___closed__0);
return v___x_4661_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC1___closed__0(void){
_start:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; 
v___x_4662_ = lp_ariori___private_ArioriFull_0__half;
v___x_4663_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4664_, 0, v___x_4663_);
lean_ctor_set(v___x_4664_, 1, v___x_4662_);
return v___x_4664_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC1(void){
_start:
{
lean_object* v___x_4665_; 
v___x_4665_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptC1___closed__0, &lp_ariori___private_ArioriFull_0__ptC1___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptC1___closed__0);
return v___x_4665_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC2___closed__0(void){
_start:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; 
v___x_4666_ = lp_ariori___private_ArioriFull_0__negHalf;
v___x_4667_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4668_, 0, v___x_4667_);
lean_ctor_set(v___x_4668_, 1, v___x_4666_);
return v___x_4668_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC2(void){
_start:
{
lean_object* v___x_4669_; 
v___x_4669_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptC2___closed__0, &lp_ariori___private_ArioriFull_0__ptC2___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptC2___closed__0);
return v___x_4669_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC3___closed__0(void){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4670_ = lp_ariori___private_ArioriFull_0__negHalf;
v___x_4671_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4671_);
lean_ctor_set(v___x_4672_, 1, v___x_4670_);
return v___x_4672_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC3(void){
_start:
{
lean_object* v___x_4673_; 
v___x_4673_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptC3___closed__0, &lp_ariori___private_ArioriFull_0__ptC3___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptC3___closed__0);
return v___x_4673_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC4___closed__0(void){
_start:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; 
v___x_4674_ = lp_ariori___private_ArioriFull_0__half;
v___x_4675_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4676_, 0, v___x_4675_);
lean_ctor_set(v___x_4676_, 1, v___x_4674_);
return v___x_4676_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptC4(void){
_start:
{
lean_object* v___x_4677_; 
v___x_4677_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptC4___closed__0, &lp_ariori___private_ArioriFull_0__ptC4___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptC4___closed__0);
return v___x_4677_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptK___closed__0(void){
_start:
{
lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; 
v___x_4678_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4679_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4680_, 0, v___x_4679_);
lean_ctor_set(v___x_4680_, 1, v___x_4678_);
return v___x_4680_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptK(void){
_start:
{
lean_object* v___x_4681_; 
v___x_4681_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptK___closed__0, &lp_ariori___private_ArioriFull_0__ptK___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptK___closed__0);
return v___x_4681_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptL___closed__0(void){
_start:
{
lean_object* v___x_4682_; lean_object* v___x_4683_; 
v___x_4682_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4683_, 0, v___x_4682_);
lean_ctor_set(v___x_4683_, 1, v___x_4682_);
return v___x_4683_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptL(void){
_start:
{
lean_object* v___x_4684_; 
v___x_4684_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptL___closed__0, &lp_ariori___private_ArioriFull_0__ptL___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptL___closed__0);
return v___x_4684_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptM___closed__0(void){
_start:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4685_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4686_, 0, v___x_4685_);
lean_ctor_set(v___x_4686_, 1, v___x_4685_);
return v___x_4686_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptM(void){
_start:
{
lean_object* v___x_4687_; 
v___x_4687_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptM___closed__0, &lp_ariori___private_ArioriFull_0__ptM___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptM___closed__0);
return v___x_4687_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptN___closed__0(void){
_start:
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4688_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4689_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4689_);
lean_ctor_set(v___x_4690_, 1, v___x_4688_);
return v___x_4690_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptN(void){
_start:
{
lean_object* v___x_4691_; 
v___x_4691_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptN___closed__0, &lp_ariori___private_ArioriFull_0__ptN___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptN___closed__0);
return v___x_4691_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptX17___closed__0(void){
_start:
{
lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4692_ = lean_obj_once(&lp_ariori_VesicaNumber_zero___closed__0, &lp_ariori_VesicaNumber_zero___closed__0_once, _init_lp_ariori_VesicaNumber_zero___closed__0);
v___x_4693_ = lp_ariori___private_ArioriFull_0__halfSqrt3;
v___x_4694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4694_, 0, v___x_4693_);
lean_ctor_set(v___x_4694_, 1, v___x_4692_);
return v___x_4694_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptX17(void){
_start:
{
lean_object* v___x_4695_; 
v___x_4695_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptX17___closed__0, &lp_ariori___private_ArioriFull_0__ptX17___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptX17___closed__0);
return v___x_4695_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__0(void){
_start:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; 
v___x_4696_ = lean_box(0);
v___x_4697_ = lp_ariori___private_ArioriFull_0__ptX17;
v___x_4698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4698_, 0, v___x_4697_);
lean_ctor_set(v___x_4698_, 1, v___x_4696_);
return v___x_4698_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__1(void){
_start:
{
lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; 
v___x_4699_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__0, &lp_ariori___private_ArioriFull_0__gen1Points___closed__0_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__0);
v___x_4700_ = lp_ariori___private_ArioriFull_0__ptN;
v___x_4701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4701_, 0, v___x_4700_);
lean_ctor_set(v___x_4701_, 1, v___x_4699_);
return v___x_4701_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__2(void){
_start:
{
lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; 
v___x_4702_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__1, &lp_ariori___private_ArioriFull_0__gen1Points___closed__1_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__1);
v___x_4703_ = lp_ariori___private_ArioriFull_0__ptM;
v___x_4704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4703_);
lean_ctor_set(v___x_4704_, 1, v___x_4702_);
return v___x_4704_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__3(void){
_start:
{
lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; 
v___x_4705_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__2, &lp_ariori___private_ArioriFull_0__gen1Points___closed__2_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__2);
v___x_4706_ = lp_ariori___private_ArioriFull_0__ptL;
v___x_4707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4707_, 0, v___x_4706_);
lean_ctor_set(v___x_4707_, 1, v___x_4705_);
return v___x_4707_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__4(void){
_start:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
v___x_4708_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__3, &lp_ariori___private_ArioriFull_0__gen1Points___closed__3_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__3);
v___x_4709_ = lp_ariori___private_ArioriFull_0__ptK;
v___x_4710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4710_, 0, v___x_4709_);
lean_ctor_set(v___x_4710_, 1, v___x_4708_);
return v___x_4710_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__5(void){
_start:
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; 
v___x_4711_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__4, &lp_ariori___private_ArioriFull_0__gen1Points___closed__4_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__4);
v___x_4712_ = lp_ariori___private_ArioriFull_0__ptC4;
v___x_4713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4713_, 0, v___x_4712_);
lean_ctor_set(v___x_4713_, 1, v___x_4711_);
return v___x_4713_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__6(void){
_start:
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4714_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__5, &lp_ariori___private_ArioriFull_0__gen1Points___closed__5_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__5);
v___x_4715_ = lp_ariori___private_ArioriFull_0__ptC3;
v___x_4716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4716_, 0, v___x_4715_);
lean_ctor_set(v___x_4716_, 1, v___x_4714_);
return v___x_4716_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__7(void){
_start:
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4717_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__6, &lp_ariori___private_ArioriFull_0__gen1Points___closed__6_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__6);
v___x_4718_ = lp_ariori___private_ArioriFull_0__ptC2;
v___x_4719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4719_, 0, v___x_4718_);
lean_ctor_set(v___x_4719_, 1, v___x_4717_);
return v___x_4719_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__8(void){
_start:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; 
v___x_4720_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__7, &lp_ariori___private_ArioriFull_0__gen1Points___closed__7_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__7);
v___x_4721_ = lp_ariori___private_ArioriFull_0__ptC1;
v___x_4722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4722_, 0, v___x_4721_);
lean_ctor_set(v___x_4722_, 1, v___x_4720_);
return v___x_4722_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__9(void){
_start:
{
lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; 
v___x_4723_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__8, &lp_ariori___private_ArioriFull_0__gen1Points___closed__8_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__8);
v___x_4724_ = lp_ariori___private_ArioriFull_0__ptP6;
v___x_4725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4724_);
lean_ctor_set(v___x_4725_, 1, v___x_4723_);
return v___x_4725_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__10(void){
_start:
{
lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; 
v___x_4726_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__9, &lp_ariori___private_ArioriFull_0__gen1Points___closed__9_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__9);
v___x_4727_ = lp_ariori___private_ArioriFull_0__ptP5;
v___x_4728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4727_);
lean_ctor_set(v___x_4728_, 1, v___x_4726_);
return v___x_4728_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__11(void){
_start:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; 
v___x_4729_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__10, &lp_ariori___private_ArioriFull_0__gen1Points___closed__10_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__10);
v___x_4730_ = lp_ariori___private_ArioriFull_0__ptP4;
v___x_4731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4730_);
lean_ctor_set(v___x_4731_, 1, v___x_4729_);
return v___x_4731_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__12(void){
_start:
{
lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
v___x_4732_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__11, &lp_ariori___private_ArioriFull_0__gen1Points___closed__11_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__11);
v___x_4733_ = lp_ariori___private_ArioriFull_0__ptP3;
v___x_4734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4734_, 0, v___x_4733_);
lean_ctor_set(v___x_4734_, 1, v___x_4732_);
return v___x_4734_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__13(void){
_start:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; 
v___x_4735_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__12, &lp_ariori___private_ArioriFull_0__gen1Points___closed__12_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__12);
v___x_4736_ = lp_ariori___private_ArioriFull_0__ptBot;
v___x_4737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4737_, 0, v___x_4736_);
lean_ctor_set(v___x_4737_, 1, v___x_4735_);
return v___x_4737_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__14(void){
_start:
{
lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; 
v___x_4738_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__13, &lp_ariori___private_ArioriFull_0__gen1Points___closed__13_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__13);
v___x_4739_ = lp_ariori___private_ArioriFull_0__ptTop;
v___x_4740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4740_, 0, v___x_4739_);
lean_ctor_set(v___x_4740_, 1, v___x_4738_);
return v___x_4740_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__15(void){
_start:
{
lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; 
v___x_4741_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__14, &lp_ariori___private_ArioriFull_0__gen1Points___closed__14_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__14);
v___x_4742_ = lp_ariori___private_ArioriFull_0__ptB;
v___x_4743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4742_);
lean_ctor_set(v___x_4743_, 1, v___x_4741_);
return v___x_4743_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__16(void){
_start:
{
lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; 
v___x_4744_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__15, &lp_ariori___private_ArioriFull_0__gen1Points___closed__15_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__15);
v___x_4745_ = lp_ariori___private_ArioriFull_0__ptA;
v___x_4746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4746_, 0, v___x_4745_);
lean_ctor_set(v___x_4746_, 1, v___x_4744_);
return v___x_4746_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__gen1Points(void){
_start:
{
lean_object* v___x_4747_; 
v___x_4747_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__gen1Points___closed__16, &lp_ariori___private_ArioriFull_0__gen1Points___closed__16_once, _init_lp_ariori___private_ArioriFull_0__gen1Points___closed__16);
return v___x_4747_;
}
}
LEAN_EXPORT uint8_t lp_ariori___private_ArioriFull_0__allDistinct_check___lam__0(lean_object* v_head_4748_, lean_object* v_q_4749_){
_start:
{
uint8_t v___x_4750_; 
v___x_4750_ = lp_ariori_instBEqPoint_beq(v_head_4748_, v_q_4749_);
if (v___x_4750_ == 0)
{
uint8_t v___x_4751_; 
v___x_4751_ = 1;
return v___x_4751_;
}
else
{
uint8_t v___x_4752_; 
v___x_4752_ = 0;
return v___x_4752_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__allDistinct_check___lam__0___boxed(lean_object* v_head_4753_, lean_object* v_q_4754_){
_start:
{
uint8_t v_res_4755_; lean_object* v_r_4756_; 
v_res_4755_ = lp_ariori___private_ArioriFull_0__allDistinct_check___lam__0(v_head_4753_, v_q_4754_);
lean_dec_ref(v_q_4754_);
lean_dec_ref(v_head_4753_);
v_r_4756_ = lean_box(v_res_4755_);
return v_r_4756_;
}
}
LEAN_EXPORT uint8_t lp_ariori___private_ArioriFull_0__allDistinct_check(lean_object* v_a_4757_){
_start:
{
if (lean_obj_tag(v_a_4757_) == 0)
{
uint8_t v___x_4758_; 
v___x_4758_ = 1;
return v___x_4758_;
}
else
{
lean_object* v_head_4759_; lean_object* v_tail_4760_; lean_object* v___f_4761_; uint8_t v___x_4762_; 
v_head_4759_ = lean_ctor_get(v_a_4757_, 0);
lean_inc(v_head_4759_);
v_tail_4760_ = lean_ctor_get(v_a_4757_, 1);
lean_inc_n(v_tail_4760_, 2);
lean_dec_ref(v_a_4757_);
v___f_4761_ = lean_alloc_closure((void*)(lp_ariori___private_ArioriFull_0__allDistinct_check___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4761_, 0, v_head_4759_);
v___x_4762_ = l_List_all___redArg(v_tail_4760_, v___f_4761_);
if (v___x_4762_ == 0)
{
lean_dec(v_tail_4760_);
return v___x_4762_;
}
else
{
v_a_4757_ = v_tail_4760_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__allDistinct_check___boxed(lean_object* v_a_4764_){
_start:
{
uint8_t v_res_4765_; lean_object* v_r_4766_; 
v_res_4765_ = lp_ariori___private_ArioriFull_0__allDistinct_check(v_a_4764_);
v_r_4766_ = lean_box(v_res_4765_);
return v_r_4766_;
}
}
LEAN_EXPORT uint8_t lp_ariori___private_ArioriFull_0__allDistinct(lean_object* v_pts_4767_){
_start:
{
uint8_t v___x_4768_; 
v___x_4768_ = lp_ariori___private_ArioriFull_0__allDistinct_check(v_pts_4767_);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__allDistinct___boxed(lean_object* v_pts_4769_){
_start:
{
uint8_t v_res_4770_; lean_object* v_r_4771_; 
v_res_4770_ = lp_ariori___private_ArioriFull_0__allDistinct(v_pts_4769_);
v_r_4771_ = lean_box(v_res_4770_);
return v_r_4771_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptX17mirror___closed__0(void){
_start:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; 
v___x_4772_ = lean_obj_once(&lp_ariori_VesicaNumber_zero___closed__0, &lp_ariori_VesicaNumber_zero___closed__0_once, _init_lp_ariori_VesicaNumber_zero___closed__0);
v___x_4773_ = lp_ariori___private_ArioriFull_0__negHalfSqrt3;
v___x_4774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4774_, 0, v___x_4773_);
lean_ctor_set(v___x_4774_, 1, v___x_4772_);
return v___x_4774_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__ptX17mirror(void){
_start:
{
lean_object* v___x_4775_; 
v___x_4775_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__ptX17mirror___closed__0, &lp_ariori___private_ArioriFull_0__ptX17mirror___closed__0_once, _init_lp_ariori___private_ArioriFull_0__ptX17mirror___closed__0);
return v___x_4775_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__d__C1C2___closed__0(void){
_start:
{
lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4776_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4777_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_4778_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_4779_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4779_, 0, v___x_4778_);
lean_ctor_set(v___x_4779_, 1, v___x_4777_);
lean_ctor_set(v___x_4779_, 2, v___x_4776_);
return v___x_4779_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__d__C1C2(void){
_start:
{
lean_object* v___x_4780_; 
v___x_4780_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__d__C1C2___closed__0, &lp_ariori___private_ArioriFull_0__d__C1C2___closed__0_once, _init_lp_ariori___private_ArioriFull_0__d__C1C2___closed__0);
return v___x_4780_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__d__C1C3(void){
_start:
{
lean_object* v___x_4781_; 
v___x_4781_ = lean_obj_once(&lp_ariori_VesicaNumber_one___closed__0, &lp_ariori_VesicaNumber_one___closed__0_once, _init_lp_ariori_VesicaNumber_one___closed__0);
return v___x_4781_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__d__C1C4(void){
_start:
{
lean_object* v___x_4782_; 
v___x_4782_ = lean_obj_once(&lp_ariori_VesicaNumber_sqrt3___closed__0, &lp_ariori_VesicaNumber_sqrt3___closed__0_once, _init_lp_ariori_VesicaNumber_sqrt3___closed__0);
return v___x_4782_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__d__C2C3(void){
_start:
{
lean_object* v___x_4783_; 
v___x_4783_ = lean_obj_once(&lp_ariori_VesicaNumber_sqrt3___closed__0, &lp_ariori_VesicaNumber_sqrt3___closed__0_once, _init_lp_ariori_VesicaNumber_sqrt3___closed__0);
return v___x_4783_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__d__C2C4(void){
_start:
{
lean_object* v___x_4784_; 
v___x_4784_ = lean_obj_once(&lp_ariori_VesicaNumber_one___closed__0, &lp_ariori_VesicaNumber_one___closed__0_once, _init_lp_ariori_VesicaNumber_one___closed__0);
return v___x_4784_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__d__C3C4(void){
_start:
{
lean_object* v___x_4785_; 
v___x_4785_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__d__C1C2___closed__0, &lp_ariori___private_ArioriFull_0__d__C1C2___closed__0_once, _init_lp_ariori___private_ArioriFull_0__d__C1C2___closed__0);
return v___x_4785_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam0___closed__0(void){
_start:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; 
v___x_4786_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4787_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_4788_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
lean_ctor_set(v___x_4788_, 1, v___x_4786_);
lean_ctor_set(v___x_4788_, 2, v___x_4786_);
return v___x_4788_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam0(void){
_start:
{
lean_object* v___x_4789_; 
v___x_4789_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__lam0___closed__0, &lp_ariori___private_ArioriFull_0__lam0___closed__0_once, _init_lp_ariori___private_ArioriFull_0__lam0___closed__0);
return v___x_4789_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam1___closed__0(void){
_start:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4790_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_4791_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4792_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4792_, 0, v___x_4791_);
lean_ctor_set(v___x_4792_, 1, v___x_4790_);
lean_ctor_set(v___x_4792_, 2, v___x_4791_);
return v___x_4792_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam1(void){
_start:
{
lean_object* v___x_4793_; 
v___x_4793_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__lam1___closed__0, &lp_ariori___private_ArioriFull_0__lam1___closed__0_once, _init_lp_ariori___private_ArioriFull_0__lam1___closed__0);
return v___x_4793_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam2___closed__0(void){
_start:
{
lean_object* v___x_4794_; lean_object* v___x_4795_; 
v___x_4794_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_4795_ = lean_int_neg(v___x_4794_);
return v___x_4795_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam2___closed__1(void){
_start:
{
lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; 
v___x_4796_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4797_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__lam2___closed__0, &lp_ariori___private_ArioriFull_0__lam2___closed__0_once, _init_lp_ariori___private_ArioriFull_0__lam2___closed__0);
v___x_4798_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4797_);
lean_ctor_set(v___x_4798_, 1, v___x_4796_);
lean_ctor_set(v___x_4798_, 2, v___x_4796_);
return v___x_4798_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam2(void){
_start:
{
lean_object* v___x_4799_; 
v___x_4799_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__lam2___closed__1, &lp_ariori___private_ArioriFull_0__lam2___closed__1_once, _init_lp_ariori___private_ArioriFull_0__lam2___closed__1);
return v___x_4799_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam3___closed__0(void){
_start:
{
lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; 
v___x_4800_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4801_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_4802_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4801_);
lean_ctor_set(v___x_4802_, 1, v___x_4801_);
lean_ctor_set(v___x_4802_, 2, v___x_4800_);
return v___x_4802_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__lam3(void){
_start:
{
lean_object* v___x_4803_; 
v___x_4803_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__lam3___closed__0, &lp_ariori___private_ArioriFull_0__lam3___closed__0_once, _init_lp_ariori___private_ArioriFull_0__lam3___closed__0);
return v___x_4803_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__det4___closed__0(void){
_start:
{
lean_object* v___x_4804_; 
v___x_4804_ = l_Array_instInhabited(lean_box(0));
return v___x_4804_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__det4(lean_object* v_m_4805_){
_start:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v_a_4810_; lean_object* v___x_4811_; lean_object* v_b_4812_; lean_object* v___x_4813_; lean_object* v_c_4814_; lean_object* v___x_4815_; lean_object* v_d_4816_; lean_object* v___x_4817_; lean_object* v_e_4818_; lean_object* v_f_4819_; lean_object* v_g_4820_; lean_object* v_h_4821_; lean_object* v___x_4822_; lean_object* v_i_4823_; lean_object* v_j_4824_; lean_object* v_k_4825_; lean_object* v_l_4826_; lean_object* v___x_4827_; lean_object* v_mm_4828_; lean_object* v_n_4829_; lean_object* v_o_4830_; lean_object* v_p_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v_c00_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; lean_object* v_c01_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v_c02_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v_c03_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; 
v___x_4806_ = lp_ariori_VesicaNumber_zero;
v___x_4807_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__det4___closed__0, &lp_ariori___private_ArioriFull_0__det4___closed__0_once, _init_lp_ariori___private_ArioriFull_0__det4___closed__0);
v___x_4808_ = lean_unsigned_to_nat(0u);
v___x_4809_ = lean_array_get_borrowed(v___x_4807_, v_m_4805_, v___x_4808_);
v_a_4810_ = lean_array_get_borrowed(v___x_4806_, v___x_4809_, v___x_4808_);
v___x_4811_ = lean_unsigned_to_nat(1u);
v_b_4812_ = lean_array_get_borrowed(v___x_4806_, v___x_4809_, v___x_4811_);
v___x_4813_ = lean_unsigned_to_nat(2u);
v_c_4814_ = lean_array_get_borrowed(v___x_4806_, v___x_4809_, v___x_4813_);
v___x_4815_ = lean_unsigned_to_nat(3u);
v_d_4816_ = lean_array_get_borrowed(v___x_4806_, v___x_4809_, v___x_4815_);
v___x_4817_ = lean_array_get_borrowed(v___x_4807_, v_m_4805_, v___x_4811_);
v_e_4818_ = lean_array_get_borrowed(v___x_4806_, v___x_4817_, v___x_4808_);
v_f_4819_ = lean_array_get_borrowed(v___x_4806_, v___x_4817_, v___x_4811_);
v_g_4820_ = lean_array_get_borrowed(v___x_4806_, v___x_4817_, v___x_4813_);
v_h_4821_ = lean_array_get_borrowed(v___x_4806_, v___x_4817_, v___x_4815_);
v___x_4822_ = lean_array_get_borrowed(v___x_4807_, v_m_4805_, v___x_4813_);
v_i_4823_ = lean_array_get_borrowed(v___x_4806_, v___x_4822_, v___x_4808_);
v_j_4824_ = lean_array_get_borrowed(v___x_4806_, v___x_4822_, v___x_4811_);
v_k_4825_ = lean_array_get_borrowed(v___x_4806_, v___x_4822_, v___x_4813_);
v_l_4826_ = lean_array_get_borrowed(v___x_4806_, v___x_4822_, v___x_4815_);
v___x_4827_ = lean_array_get_borrowed(v___x_4807_, v_m_4805_, v___x_4815_);
v_mm_4828_ = lean_array_get_borrowed(v___x_4806_, v___x_4827_, v___x_4808_);
v_n_4829_ = lean_array_get_borrowed(v___x_4806_, v___x_4827_, v___x_4811_);
v_o_4830_ = lean_array_get_borrowed(v___x_4806_, v___x_4827_, v___x_4813_);
v_p_4831_ = lean_array_get_borrowed(v___x_4806_, v___x_4827_, v___x_4815_);
v___x_4832_ = lp_ariori_VesicaNumber_mul(v_k_4825_, v_p_4831_);
v___x_4833_ = lp_ariori_VesicaNumber_mul(v_l_4826_, v_o_4830_);
v___x_4834_ = lp_ariori_VesicaNumber_sub(v___x_4832_, v___x_4833_);
lean_dec_ref(v___x_4833_);
lean_dec_ref(v___x_4832_);
v___x_4835_ = lp_ariori_VesicaNumber_mul(v_f_4819_, v___x_4834_);
v___x_4836_ = lp_ariori_VesicaNumber_mul(v_j_4824_, v_p_4831_);
v___x_4837_ = lp_ariori_VesicaNumber_mul(v_l_4826_, v_n_4829_);
v___x_4838_ = lp_ariori_VesicaNumber_sub(v___x_4836_, v___x_4837_);
lean_dec_ref(v___x_4837_);
lean_dec_ref(v___x_4836_);
v___x_4839_ = lp_ariori_VesicaNumber_mul(v_g_4820_, v___x_4838_);
v___x_4840_ = lp_ariori_VesicaNumber_sub(v___x_4835_, v___x_4839_);
lean_dec_ref(v___x_4839_);
lean_dec_ref(v___x_4835_);
v___x_4841_ = lp_ariori_VesicaNumber_mul(v_j_4824_, v_o_4830_);
v___x_4842_ = lp_ariori_VesicaNumber_mul(v_k_4825_, v_n_4829_);
v___x_4843_ = lp_ariori_VesicaNumber_sub(v___x_4841_, v___x_4842_);
lean_dec_ref(v___x_4842_);
lean_dec_ref(v___x_4841_);
v___x_4844_ = lp_ariori_VesicaNumber_mul(v_h_4821_, v___x_4843_);
v_c00_4845_ = lp_ariori_VesicaNumber_add(v___x_4840_, v___x_4844_);
lean_dec_ref(v___x_4844_);
lean_dec_ref(v___x_4840_);
v___x_4846_ = lp_ariori_VesicaNumber_mul(v_e_4818_, v___x_4834_);
lean_dec_ref(v___x_4834_);
v___x_4847_ = lp_ariori_VesicaNumber_mul(v_i_4823_, v_p_4831_);
v___x_4848_ = lp_ariori_VesicaNumber_mul(v_l_4826_, v_mm_4828_);
v___x_4849_ = lp_ariori_VesicaNumber_sub(v___x_4847_, v___x_4848_);
lean_dec_ref(v___x_4848_);
lean_dec_ref(v___x_4847_);
v___x_4850_ = lp_ariori_VesicaNumber_mul(v_g_4820_, v___x_4849_);
v___x_4851_ = lp_ariori_VesicaNumber_sub(v___x_4846_, v___x_4850_);
lean_dec_ref(v___x_4850_);
lean_dec_ref(v___x_4846_);
v___x_4852_ = lp_ariori_VesicaNumber_mul(v_i_4823_, v_o_4830_);
v___x_4853_ = lp_ariori_VesicaNumber_mul(v_k_4825_, v_mm_4828_);
v___x_4854_ = lp_ariori_VesicaNumber_sub(v___x_4852_, v___x_4853_);
lean_dec_ref(v___x_4853_);
lean_dec_ref(v___x_4852_);
v___x_4855_ = lp_ariori_VesicaNumber_mul(v_h_4821_, v___x_4854_);
v_c01_4856_ = lp_ariori_VesicaNumber_add(v___x_4851_, v___x_4855_);
lean_dec_ref(v___x_4855_);
lean_dec_ref(v___x_4851_);
v___x_4857_ = lp_ariori_VesicaNumber_mul(v_e_4818_, v___x_4838_);
lean_dec_ref(v___x_4838_);
v___x_4858_ = lp_ariori_VesicaNumber_mul(v_f_4819_, v___x_4849_);
lean_dec_ref(v___x_4849_);
v___x_4859_ = lp_ariori_VesicaNumber_sub(v___x_4857_, v___x_4858_);
lean_dec_ref(v___x_4858_);
lean_dec_ref(v___x_4857_);
v___x_4860_ = lp_ariori_VesicaNumber_mul(v_i_4823_, v_n_4829_);
v___x_4861_ = lp_ariori_VesicaNumber_mul(v_j_4824_, v_mm_4828_);
v___x_4862_ = lp_ariori_VesicaNumber_sub(v___x_4860_, v___x_4861_);
lean_dec_ref(v___x_4861_);
lean_dec_ref(v___x_4860_);
v___x_4863_ = lp_ariori_VesicaNumber_mul(v_h_4821_, v___x_4862_);
v_c02_4864_ = lp_ariori_VesicaNumber_add(v___x_4859_, v___x_4863_);
lean_dec_ref(v___x_4863_);
lean_dec_ref(v___x_4859_);
v___x_4865_ = lp_ariori_VesicaNumber_mul(v_e_4818_, v___x_4843_);
lean_dec_ref(v___x_4843_);
v___x_4866_ = lp_ariori_VesicaNumber_mul(v_f_4819_, v___x_4854_);
lean_dec_ref(v___x_4854_);
v___x_4867_ = lp_ariori_VesicaNumber_sub(v___x_4865_, v___x_4866_);
lean_dec_ref(v___x_4866_);
lean_dec_ref(v___x_4865_);
v___x_4868_ = lp_ariori_VesicaNumber_mul(v_g_4820_, v___x_4862_);
lean_dec_ref(v___x_4862_);
v_c03_4869_ = lp_ariori_VesicaNumber_add(v___x_4867_, v___x_4868_);
lean_dec_ref(v___x_4868_);
lean_dec_ref(v___x_4867_);
v___x_4870_ = lp_ariori_VesicaNumber_mul(v_a_4810_, v_c00_4845_);
lean_dec_ref(v_c00_4845_);
v___x_4871_ = lp_ariori_VesicaNumber_mul(v_b_4812_, v_c01_4856_);
lean_dec_ref(v_c01_4856_);
v___x_4872_ = lp_ariori_VesicaNumber_sub(v___x_4870_, v___x_4871_);
lean_dec_ref(v___x_4871_);
lean_dec_ref(v___x_4870_);
v___x_4873_ = lp_ariori_VesicaNumber_mul(v_c_4814_, v_c02_4864_);
lean_dec_ref(v_c02_4864_);
v___x_4874_ = lp_ariori_VesicaNumber_add(v___x_4872_, v___x_4873_);
lean_dec_ref(v___x_4873_);
lean_dec_ref(v___x_4872_);
v___x_4875_ = lp_ariori_VesicaNumber_mul(v_d_4816_, v_c03_4869_);
lean_dec_ref(v_c03_4869_);
v___x_4876_ = lp_ariori_VesicaNumber_sub(v___x_4874_, v___x_4875_);
lean_dec_ref(v___x_4875_);
lean_dec_ref(v___x_4874_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__det4___boxed(lean_object* v_m_4877_){
_start:
{
lean_object* v_res_4878_; 
v_res_4878_ = lp_ariori___private_ArioriFull_0__det4(v_m_4877_);
lean_dec_ref(v_m_4877_);
return v_res_4878_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__0(void){
_start:
{
lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; 
v___x_4879_ = lp_ariori___private_ArioriFull_0__d__C1C2;
v___x_4880_ = lean_unsigned_to_nat(4u);
v___x_4881_ = lean_mk_empty_array_with_capacity(v___x_4880_);
v___x_4882_ = lean_array_push(v___x_4881_, v___x_4879_);
return v___x_4882_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__1(void){
_start:
{
lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v___x_4883_ = lp_ariori___private_ArioriFull_0__d__C1C3;
v___x_4884_ = lean_unsigned_to_nat(4u);
v___x_4885_ = lean_mk_empty_array_with_capacity(v___x_4884_);
v___x_4886_ = lean_array_push(v___x_4885_, v___x_4883_);
return v___x_4886_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__2(void){
_start:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4887_ = lp_ariori___private_ArioriFull_0__d__C2C3;
v___x_4888_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__1, &lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__1_once, _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__1);
v___x_4889_ = lean_array_push(v___x_4888_, v___x_4887_);
return v___x_4889_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__3(void){
_start:
{
lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; 
v___x_4890_ = lp_ariori___private_ArioriFull_0__d__C1C4;
v___x_4891_ = lean_unsigned_to_nat(4u);
v___x_4892_ = lean_mk_empty_array_with_capacity(v___x_4891_);
v___x_4893_ = lean_array_push(v___x_4892_, v___x_4890_);
return v___x_4893_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__4(void){
_start:
{
lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; 
v___x_4894_ = lp_ariori___private_ArioriFull_0__d__C2C4;
v___x_4895_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__3, &lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__3_once, _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__3);
v___x_4896_ = lean_array_push(v___x_4895_, v___x_4894_);
return v___x_4896_;
}
}
static lean_object* _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__5(void){
_start:
{
lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___x_4897_ = lp_ariori___private_ArioriFull_0__d__C3C4;
v___x_4898_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__4, &lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__4_once, _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__4);
v___x_4899_ = lean_array_push(v___x_4898_, v___x_4897_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda(lean_object* v_lam_4900_){
_start:
{
lean_object* v_nl_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; 
v_nl_4901_ = lp_ariori_VesicaNumber_neg(v_lam_4900_);
v___x_4902_ = lp_ariori___private_ArioriFull_0__d__C1C2;
v___x_4903_ = lp_ariori___private_ArioriFull_0__d__C1C3;
v___x_4904_ = lp_ariori___private_ArioriFull_0__d__C1C4;
v___x_4905_ = lean_unsigned_to_nat(4u);
v___x_4906_ = lean_mk_empty_array_with_capacity(v___x_4905_);
lean_inc_ref_n(v_nl_4901_, 3);
lean_inc_ref(v___x_4906_);
v___x_4907_ = lean_array_push(v___x_4906_, v_nl_4901_);
v___x_4908_ = lean_array_push(v___x_4907_, v___x_4902_);
v___x_4909_ = lean_array_push(v___x_4908_, v___x_4903_);
v___x_4910_ = lean_array_push(v___x_4909_, v___x_4904_);
v___x_4911_ = lp_ariori___private_ArioriFull_0__d__C2C3;
v___x_4912_ = lp_ariori___private_ArioriFull_0__d__C2C4;
v___x_4913_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__0, &lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__0_once, _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__0);
v___x_4914_ = lean_array_push(v___x_4913_, v_nl_4901_);
v___x_4915_ = lean_array_push(v___x_4914_, v___x_4911_);
v___x_4916_ = lean_array_push(v___x_4915_, v___x_4912_);
v___x_4917_ = lp_ariori___private_ArioriFull_0__d__C3C4;
v___x_4918_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__2, &lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__2_once, _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__2);
v___x_4919_ = lean_array_push(v___x_4918_, v_nl_4901_);
v___x_4920_ = lean_array_push(v___x_4919_, v___x_4917_);
v___x_4921_ = lean_obj_once(&lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__5, &lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__5_once, _init_lp_ariori___private_ArioriFull_0__spacetimeDetMinusLambda___closed__5);
v___x_4922_ = lean_array_push(v___x_4921_, v_nl_4901_);
v___x_4923_ = lean_array_push(v___x_4906_, v___x_4910_);
v___x_4924_ = lean_array_push(v___x_4923_, v___x_4916_);
v___x_4925_ = lean_array_push(v___x_4924_, v___x_4920_);
v___x_4926_ = lean_array_push(v___x_4925_, v___x_4922_);
v___x_4927_ = lp_ariori___private_ArioriFull_0__det4(v___x_4926_);
lean_dec_ref(v___x_4926_);
return v___x_4927_;
}
}
static lean_object* _init_lp_ariori_nodePointAtRadius___closed__0(void){
_start:
{
lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v_halfRoot3_4931_; 
v___x_4928_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_4929_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_4930_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v_halfRoot3_4931_ = lp_ariori_VesicaNumber_mk_x27(v___x_4930_, v___x_4929_, v___x_4928_);
return v_halfRoot3_4931_;
}
}
LEAN_EXPORT lean_object* lp_ariori_nodePointAtRadius(lean_object* v_r_4932_, uint8_t v_n_4933_){
_start:
{
lean_object* v_half_4934_; lean_object* v_halfRoot3_4935_; lean_object* v_threeHalves_4936_; 
v_half_4934_ = lean_obj_once(&lp_ariori_gen1Foundation___closed__0, &lp_ariori_gen1Foundation___closed__0_once, _init_lp_ariori_gen1Foundation___closed__0);
v_halfRoot3_4935_ = lean_obj_once(&lp_ariori_nodePointAtRadius___closed__0, &lp_ariori_nodePointAtRadius___closed__0_once, _init_lp_ariori_nodePointAtRadius___closed__0);
v_threeHalves_4936_ = lean_obj_once(&lp_ariori_gen1Foundation___closed__2, &lp_ariori_gen1Foundation___closed__2_once, _init_lp_ariori_gen1Foundation___closed__2);
switch(v_n_4933_)
{
case 0:
{
lean_object* v___x_4937_; 
lean_dec_ref(v_r_4932_);
v___x_4937_ = lean_obj_once(&lp_ariori_instInhabitedPoint_default___closed__0, &lp_ariori_instInhabitedPoint_default___closed__0_once, _init_lp_ariori_instInhabitedPoint_default___closed__0);
return v___x_4937_;
}
case 1:
{
lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4938_ = lp_ariori_VesicaNumber_zero;
v___x_4939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4939_, 0, v_r_4932_);
lean_ctor_set(v___x_4939_, 1, v___x_4938_);
return v___x_4939_;
}
case 2:
{
lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4940_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
v___x_4941_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4942_, 0, v___x_4940_);
lean_ctor_set(v___x_4942_, 1, v___x_4941_);
return v___x_4942_;
}
case 3:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; 
v___x_4943_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
v___x_4944_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4945_ = lp_ariori_VesicaNumber_neg(v___x_4944_);
v___x_4946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4946_, 0, v___x_4943_);
lean_ctor_set(v___x_4946_, 1, v___x_4945_);
return v___x_4946_;
}
case 4:
{
lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; 
v___x_4947_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
v___x_4948_ = lp_ariori_VesicaNumber_neg(v___x_4947_);
v___x_4949_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4950_, 0, v___x_4948_);
lean_ctor_set(v___x_4950_, 1, v___x_4949_);
return v___x_4950_;
}
case 5:
{
lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; 
v___x_4951_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_threeHalves_4936_);
v___x_4952_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4953_, 0, v___x_4951_);
lean_ctor_set(v___x_4953_, 1, v___x_4952_);
return v___x_4953_;
}
case 6:
{
lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v___x_4954_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
v___x_4955_ = lp_ariori_VesicaNumber_neg(v___x_4954_);
v___x_4956_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4957_ = lp_ariori_VesicaNumber_neg(v___x_4956_);
v___x_4958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4955_);
lean_ctor_set(v___x_4958_, 1, v___x_4957_);
return v___x_4958_;
}
case 7:
{
lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4959_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_threeHalves_4936_);
v___x_4960_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4961_ = lp_ariori_VesicaNumber_neg(v___x_4960_);
v___x_4962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4962_, 0, v___x_4959_);
lean_ctor_set(v___x_4962_, 1, v___x_4961_);
return v___x_4962_;
}
case 8:
{
lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; 
v___x_4963_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
v___x_4964_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
lean_dec_ref(v_r_4932_);
v___x_4965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4965_, 0, v___x_4963_);
lean_ctor_set(v___x_4965_, 1, v___x_4964_);
return v___x_4965_;
}
case 9:
{
lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; 
v___x_4966_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
v___x_4967_ = lp_ariori_VesicaNumber_neg(v___x_4966_);
v___x_4968_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
lean_dec_ref(v_r_4932_);
v___x_4969_ = lp_ariori_VesicaNumber_neg(v___x_4968_);
v___x_4970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4970_, 0, v___x_4967_);
lean_ctor_set(v___x_4970_, 1, v___x_4969_);
return v___x_4970_;
}
case 10:
{
lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4971_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
v___x_4972_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
lean_dec_ref(v_r_4932_);
v___x_4973_ = lp_ariori_VesicaNumber_neg(v___x_4972_);
v___x_4974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4971_);
lean_ctor_set(v___x_4974_, 1, v___x_4973_);
return v___x_4974_;
}
case 11:
{
lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4975_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
v___x_4976_ = lp_ariori_VesicaNumber_neg(v___x_4975_);
v___x_4977_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_half_4934_);
lean_dec_ref(v_r_4932_);
v___x_4978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4978_, 0, v___x_4976_);
lean_ctor_set(v___x_4978_, 1, v___x_4977_);
return v___x_4978_;
}
case 12:
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; 
v___x_4979_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
lean_inc_ref(v___x_4979_);
v___x_4980_ = lp_ariori_VesicaNumber_neg(v___x_4979_);
v___x_4981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4981_, 0, v___x_4980_);
lean_ctor_set(v___x_4981_, 1, v___x_4979_);
return v___x_4981_;
}
case 13:
{
lean_object* v___x_4982_; lean_object* v___x_4983_; 
v___x_4982_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
lean_inc_ref(v___x_4982_);
v___x_4983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4983_, 0, v___x_4982_);
lean_ctor_set(v___x_4983_, 1, v___x_4982_);
return v___x_4983_;
}
case 14:
{
lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; 
v___x_4984_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4985_ = lp_ariori_VesicaNumber_neg(v___x_4984_);
lean_inc_ref(v___x_4985_);
v___x_4986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4986_, 0, v___x_4985_);
lean_ctor_set(v___x_4986_, 1, v___x_4985_);
return v___x_4986_;
}
case 15:
{
lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; 
v___x_4987_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
lean_inc_ref(v___x_4987_);
v___x_4988_ = lp_ariori_VesicaNumber_neg(v___x_4987_);
v___x_4989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4987_);
lean_ctor_set(v___x_4989_, 1, v___x_4988_);
return v___x_4989_;
}
default: 
{
lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; 
v___x_4990_ = lp_ariori_VesicaNumber_mul(v_r_4932_, v_halfRoot3_4935_);
lean_dec_ref(v_r_4932_);
v___x_4991_ = lp_ariori_VesicaNumber_zero;
v___x_4992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4990_);
lean_ctor_set(v___x_4992_, 1, v___x_4991_);
return v___x_4992_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_nodePointAtRadius___boxed(lean_object* v_r_4993_, lean_object* v_n_4994_){
_start:
{
uint8_t v_n_boxed_4995_; lean_object* v_res_4996_; 
v_n_boxed_4995_ = lean_unbox(v_n_4994_);
v_res_4996_ = lp_ariori_nodePointAtRadius(v_r_4993_, v_n_boxed_4995_);
return v_res_4996_;
}
}
static lean_object* _init_lp_ariori_interactionTriangles(void){
_start:
{
lean_object* v___x_4997_; 
v___x_4997_ = lp_ariori_findTriangles;
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* lp_ariori_distSqOverRSq(lean_object* v_r_4998_, lean_object* v_p_4999_, lean_object* v_q_5000_){
_start:
{
lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; 
v___x_5001_ = lp_ariori_Point_distSq(v_p_4999_, v_q_5000_);
v___x_5002_ = lp_ariori_VesicaNumber_sq(v_r_4998_);
v___x_5003_ = lp_ariori_VesicaNumber_div(v___x_5001_, v___x_5002_);
lean_dec_ref(v___x_5002_);
lean_dec_ref(v___x_5001_);
return v___x_5003_;
}
}
LEAN_EXPORT lean_object* lp_ariori_distSqOverRSq___boxed(lean_object* v_r_5004_, lean_object* v_p_5005_, lean_object* v_q_5006_){
_start:
{
lean_object* v_res_5007_; 
v_res_5007_ = lp_ariori_distSqOverRSq(v_r_5004_, v_p_5005_, v_q_5006_);
lean_dec_ref(v_q_5006_);
lean_dec_ref(v_p_5005_);
lean_dec_ref(v_r_5004_);
return v_res_5007_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00centralityPotentialSq_spec__0(lean_object* v_r_5008_, lean_object* v_pi_5009_, lean_object* v_x_5010_, lean_object* v_x_5011_){
_start:
{
if (lean_obj_tag(v_x_5011_) == 0)
{
lean_dec_ref(v_r_5008_);
return v_x_5010_;
}
else
{
lean_object* v_head_5012_; lean_object* v_tail_5013_; uint8_t v___x_5014_; lean_object* v_pj_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
v_head_5012_ = lean_ctor_get(v_x_5011_, 0);
v_tail_5013_ = lean_ctor_get(v_x_5011_, 1);
v___x_5014_ = lean_unbox(v_head_5012_);
lean_inc_ref(v_r_5008_);
v_pj_5015_ = lp_ariori_nodePointAtRadius(v_r_5008_, v___x_5014_);
v___x_5016_ = lp_ariori_distSqOverRSq(v_r_5008_, v_pi_5009_, v_pj_5015_);
lean_dec_ref(v_pj_5015_);
v___x_5017_ = lp_ariori_VesicaNumber_add(v_x_5010_, v___x_5016_);
lean_dec_ref(v___x_5016_);
lean_dec_ref(v_x_5010_);
v_x_5010_ = v___x_5017_;
v_x_5011_ = v_tail_5013_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00centralityPotentialSq_spec__0___boxed(lean_object* v_r_5019_, lean_object* v_pi_5020_, lean_object* v_x_5021_, lean_object* v_x_5022_){
_start:
{
lean_object* v_res_5023_; 
v_res_5023_ = lp_ariori_List_foldl___at___00centralityPotentialSq_spec__0(v_r_5019_, v_pi_5020_, v_x_5021_, v_x_5022_);
lean_dec(v_x_5022_);
lean_dec_ref(v_pi_5020_);
return v_res_5023_;
}
}
LEAN_EXPORT lean_object* lp_ariori_centralityPotentialSq(lean_object* v_r_5024_, uint8_t v_n_5025_){
_start:
{
lean_object* v_pi_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; 
lean_inc_ref(v_r_5024_);
v_pi_5026_ = lp_ariori_nodePointAtRadius(v_r_5024_, v_n_5025_);
v___x_5027_ = lp_ariori_VesicaNumber_zero;
v___x_5028_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5029_ = lp_ariori_List_foldl___at___00centralityPotentialSq_spec__0(v_r_5024_, v_pi_5026_, v___x_5027_, v___x_5028_);
lean_dec_ref(v_pi_5026_);
return v___x_5029_;
}
}
LEAN_EXPORT lean_object* lp_ariori_centralityPotentialSq___boxed(lean_object* v_r_5030_, lean_object* v_n_5031_){
_start:
{
uint8_t v_n_boxed_5032_; lean_object* v_res_5033_; 
v_n_boxed_5032_ = lean_unbox(v_n_5031_);
v_res_5033_ = lp_ariori_centralityPotentialSq(v_r_5030_, v_n_boxed_5032_);
return v_res_5033_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00centralityPotentialsExact_spec__0(lean_object* v_r_5034_, lean_object* v_a_5035_, lean_object* v_a_5036_){
_start:
{
if (lean_obj_tag(v_a_5035_) == 0)
{
lean_object* v___x_5037_; 
lean_dec_ref(v_r_5034_);
v___x_5037_ = l_List_reverse___redArg(v_a_5036_);
return v___x_5037_;
}
else
{
lean_object* v_head_5038_; lean_object* v_tail_5039_; lean_object* v___x_5041_; uint8_t v_isShared_5042_; uint8_t v_isSharedCheck_5050_; 
v_head_5038_ = lean_ctor_get(v_a_5035_, 0);
v_tail_5039_ = lean_ctor_get(v_a_5035_, 1);
v_isSharedCheck_5050_ = !lean_is_exclusive(v_a_5035_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5041_ = v_a_5035_;
v_isShared_5042_ = v_isSharedCheck_5050_;
goto v_resetjp_5040_;
}
else
{
lean_inc(v_tail_5039_);
lean_inc(v_head_5038_);
lean_dec(v_a_5035_);
v___x_5041_ = lean_box(0);
v_isShared_5042_ = v_isSharedCheck_5050_;
goto v_resetjp_5040_;
}
v_resetjp_5040_:
{
uint8_t v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5047_; 
v___x_5043_ = lean_unbox(v_head_5038_);
lean_inc_ref(v_r_5034_);
v___x_5044_ = lp_ariori_centralityPotentialSq(v_r_5034_, v___x_5043_);
v___x_5045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5045_, 0, v_head_5038_);
lean_ctor_set(v___x_5045_, 1, v___x_5044_);
if (v_isShared_5042_ == 0)
{
lean_ctor_set(v___x_5041_, 1, v_a_5036_);
lean_ctor_set(v___x_5041_, 0, v___x_5045_);
v___x_5047_ = v___x_5041_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5049_; 
v_reuseFailAlloc_5049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5049_, 0, v___x_5045_);
lean_ctor_set(v_reuseFailAlloc_5049_, 1, v_a_5036_);
v___x_5047_ = v_reuseFailAlloc_5049_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
v_a_5035_ = v_tail_5039_;
v_a_5036_ = v___x_5047_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_centralityPotentialsExact(lean_object* v_r_5051_){
_start:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; 
v___x_5052_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5053_ = lean_box(0);
v___x_5054_ = lp_ariori_List_mapTR_loop___at___00centralityPotentialsExact_spec__0(v_r_5051_, v___x_5052_, v___x_5053_);
return v___x_5054_;
}
}
static lean_object* _init_lp_ariori_extractLagrangian___closed__0(void){
_start:
{
lean_object* v___x_5055_; lean_object* v___x_5056_; 
v___x_5055_ = ((lean_object*)(lp_ariori_gen1Edges));
v___x_5056_ = l_List_lengthTR___redArg(v___x_5055_);
return v___x_5056_;
}
}
static lean_object* _init_lp_ariori_extractLagrangian___closed__1(void){
_start:
{
lean_object* v___x_5057_; lean_object* v___x_5058_; 
v___x_5057_ = lp_ariori_laplacianMatrix;
v___x_5058_ = lp_ariori_matrixRank(v___x_5057_);
return v___x_5058_;
}
}
static lean_object* _init_lp_ariori_extractLagrangian___closed__2(void){
_start:
{
lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
v___x_5059_ = lean_obj_once(&lp_ariori_extractLagrangian___closed__1, &lp_ariori_extractLagrangian___closed__1_once, _init_lp_ariori_extractLagrangian___closed__1);
v___x_5060_ = lean_unsigned_to_nat(17u);
v___x_5061_ = lean_nat_sub(v___x_5060_, v___x_5059_);
return v___x_5061_;
}
}
LEAN_EXPORT lean_object* lp_ariori_extractLagrangian(lean_object* v_r_5062_){
_start:
{
lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; 
v___x_5063_ = lean_obj_once(&lp_ariori_extractLagrangian___closed__0, &lp_ariori_extractLagrangian___closed__0_once, _init_lp_ariori_extractLagrangian___closed__0);
v___x_5064_ = lp_ariori_handshakingSum;
v___x_5065_ = lean_obj_once(&lp_ariori_extractLagrangian___closed__2, &lp_ariori_extractLagrangian___closed__2_once, _init_lp_ariori_extractLagrangian___closed__2);
v___x_5066_ = lp_ariori_centralityPotentialsExact(v_r_5062_);
v___x_5067_ = lp_ariori_findTriangles;
v___x_5068_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5068_, 0, v___x_5063_);
lean_ctor_set(v___x_5068_, 1, v___x_5064_);
lean_ctor_set(v___x_5068_, 2, v___x_5065_);
lean_ctor_set(v___x_5068_, 3, v___x_5066_);
lean_ctor_set(v___x_5068_, 4, v___x_5067_);
return v___x_5068_;
}
}
LEAN_EXPORT lean_object* lp_ariori_constField(uint8_t v_x_5069_){
_start:
{
lean_object* v___x_5070_; 
v___x_5070_ = lp_ariori_VesicaNumber_one;
return v___x_5070_;
}
}
LEAN_EXPORT lean_object* lp_ariori_constField___boxed(lean_object* v_x_5071_){
_start:
{
uint8_t v_x_4__boxed_5072_; lean_object* v_res_5073_; 
v_x_4__boxed_5072_ = lean_unbox(v_x_5071_);
v_res_5073_ = lp_ariori_constField(v_x_4__boxed_5072_);
return v_res_5073_;
}
}
LEAN_EXPORT lean_object* lp_ariori_zeroField(uint8_t v_x_5074_){
_start:
{
lean_object* v___x_5075_; 
v___x_5075_ = lp_ariori_VesicaNumber_zero;
return v___x_5075_;
}
}
LEAN_EXPORT lean_object* lp_ariori_zeroField___boxed(lean_object* v_x_5076_){
_start:
{
uint8_t v_x_4__boxed_5077_; lean_object* v_res_5078_; 
v_x_4__boxed_5077_ = lean_unbox(v_x_5076_);
v_res_5078_ = lp_ariori_zeroField(v_x_4__boxed_5077_);
return v_res_5078_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00laplacianApply_spec__0(lean_object* v_00_u03c6_5079_, lean_object* v_x_5080_, lean_object* v_x_5081_){
_start:
{
if (lean_obj_tag(v_x_5081_) == 0)
{
lean_dec_ref(v_00_u03c6_5079_);
return v_x_5080_;
}
else
{
lean_object* v_head_5082_; lean_object* v_tail_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; 
v_head_5082_ = lean_ctor_get(v_x_5081_, 0);
lean_inc(v_head_5082_);
v_tail_5083_ = lean_ctor_get(v_x_5081_, 1);
lean_inc(v_tail_5083_);
lean_dec_ref(v_x_5081_);
lean_inc_ref(v_00_u03c6_5079_);
v___x_5084_ = lean_apply_1(v_00_u03c6_5079_, v_head_5082_);
v___x_5085_ = lp_ariori_VesicaNumber_add(v_x_5080_, v___x_5084_);
lean_dec_ref(v___x_5084_);
lean_dec_ref(v_x_5080_);
v_x_5080_ = v___x_5085_;
v_x_5081_ = v_tail_5083_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_laplacianApply(lean_object* v_00_u03c6_5087_, uint8_t v_n_5088_){
_start:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v_neighborSum_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v_deg_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; 
v___x_5089_ = lp_ariori_VesicaNumber_zero;
v___x_5090_ = lp_ariori_neighbors(v_n_5088_);
lean_inc_ref(v_00_u03c6_5087_);
v_neighborSum_5091_ = lp_ariori_List_foldl___at___00laplacianApply_spec__0(v_00_u03c6_5087_, v___x_5089_, v___x_5090_);
v___x_5092_ = lp_ariori_degree(v_n_5088_);
v___x_5093_ = lean_nat_to_int(v___x_5092_);
v_deg_5094_ = lp_ariori_VesicaNumber_ofInt(v___x_5093_);
v___x_5095_ = lean_box(v_n_5088_);
v___x_5096_ = lean_apply_1(v_00_u03c6_5087_, v___x_5095_);
v___x_5097_ = lp_ariori_VesicaNumber_mul(v_deg_5094_, v___x_5096_);
lean_dec_ref(v___x_5096_);
lean_dec_ref(v_deg_5094_);
v___x_5098_ = lp_ariori_VesicaNumber_sub(v___x_5097_, v_neighborSum_5091_);
lean_dec_ref(v_neighborSum_5091_);
lean_dec_ref(v___x_5097_);
return v___x_5098_;
}
}
LEAN_EXPORT lean_object* lp_ariori_laplacianApply___boxed(lean_object* v_00_u03c6_5099_, lean_object* v_n_5100_){
_start:
{
uint8_t v_n_boxed_5101_; lean_object* v_res_5102_; 
v_n_boxed_5101_ = lean_unbox(v_n_5100_);
v_res_5102_ = lp_ariori_laplacianApply(v_00_u03c6_5099_, v_n_boxed_5101_);
return v_res_5102_;
}
}
LEAN_EXPORT lean_object* lp_ariori_laplacianApplyConstZero___lam__0(uint8_t v___y_5103_){
_start:
{
lean_object* v___x_5104_; 
v___x_5104_ = lp_ariori_VesicaNumber_one;
return v___x_5104_;
}
}
LEAN_EXPORT lean_object* lp_ariori_laplacianApplyConstZero___lam__0___boxed(lean_object* v___y_5105_){
_start:
{
uint8_t v___y_15__boxed_5106_; lean_object* v_res_5107_; 
v___y_15__boxed_5106_ = lean_unbox(v___y_5105_);
v_res_5107_ = lp_ariori_laplacianApplyConstZero___lam__0(v___y_15__boxed_5106_);
return v_res_5107_;
}
}
LEAN_EXPORT uint8_t lp_ariori_laplacianApplyConstZero___lam__1(lean_object* v___f_5108_, uint8_t v_n_5109_){
_start:
{
lean_object* v___x_5110_; uint8_t v___x_5111_; 
v___x_5110_ = lp_ariori_laplacianApply(v___f_5108_, v_n_5109_);
v___x_5111_ = lp_ariori_VesicaNumber_isZero(v___x_5110_);
lean_dec_ref(v___x_5110_);
return v___x_5111_;
}
}
LEAN_EXPORT lean_object* lp_ariori_laplacianApplyConstZero___lam__1___boxed(lean_object* v___f_5112_, lean_object* v_n_5113_){
_start:
{
uint8_t v_n_boxed_5114_; uint8_t v_res_5115_; lean_object* v_r_5116_; 
v_n_boxed_5114_ = lean_unbox(v_n_5113_);
v_res_5115_ = lp_ariori_laplacianApplyConstZero___lam__1(v___f_5112_, v_n_boxed_5114_);
v_r_5116_ = lean_box(v_res_5115_);
return v_r_5116_;
}
}
static uint8_t _init_lp_ariori_laplacianApplyConstZero___closed__2(void){
_start:
{
lean_object* v___f_5120_; lean_object* v___x_5121_; uint8_t v___x_5122_; 
v___f_5120_ = ((lean_object*)(lp_ariori_laplacianApplyConstZero___closed__1));
v___x_5121_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5122_ = l_List_all___redArg(v___x_5121_, v___f_5120_);
return v___x_5122_;
}
}
static uint8_t _init_lp_ariori_laplacianApplyConstZero(void){
_start:
{
uint8_t v___x_5123_; 
v___x_5123_ = lean_uint8_once(&lp_ariori_laplacianApplyConstZero___closed__2, &lp_ariori_laplacianApplyConstZero___closed__2_once, _init_lp_ariori_laplacianApplyConstZero___closed__2);
return v___x_5123_;
}
}
LEAN_EXPORT uint8_t lp_ariori_neighborCountMatchesDegree___lam__0(uint8_t v_n_5124_){
_start:
{
lean_object* v___x_5125_; lean_object* v___x_5126_; uint8_t v___x_5127_; 
v___x_5125_ = lp_ariori_neighborMultisetCount(v_n_5124_);
v___x_5126_ = lp_ariori_degree(v_n_5124_);
v___x_5127_ = lean_nat_dec_eq(v___x_5125_, v___x_5126_);
lean_dec(v___x_5126_);
lean_dec(v___x_5125_);
return v___x_5127_;
}
}
LEAN_EXPORT lean_object* lp_ariori_neighborCountMatchesDegree___lam__0___boxed(lean_object* v_n_5128_){
_start:
{
uint8_t v_n_boxed_5129_; uint8_t v_res_5130_; lean_object* v_r_5131_; 
v_n_boxed_5129_ = lean_unbox(v_n_5128_);
v_res_5130_ = lp_ariori_neighborCountMatchesDegree___lam__0(v_n_boxed_5129_);
v_r_5131_ = lean_box(v_res_5130_);
return v_r_5131_;
}
}
static uint8_t _init_lp_ariori_neighborCountMatchesDegree___closed__1(void){
_start:
{
lean_object* v___f_5133_; lean_object* v___x_5134_; uint8_t v___x_5135_; 
v___f_5133_ = ((lean_object*)(lp_ariori_neighborCountMatchesDegree___closed__0));
v___x_5134_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5135_ = l_List_all___redArg(v___x_5134_, v___f_5133_);
return v___x_5135_;
}
}
static uint8_t _init_lp_ariori_neighborCountMatchesDegree(void){
_start:
{
uint8_t v___x_5136_; 
v___x_5136_ = lean_uint8_once(&lp_ariori_neighborCountMatchesDegree___closed__1, &lp_ariori_neighborCountMatchesDegree___closed__1_once, _init_lp_ariori_neighborCountMatchesDegree___closed__1);
return v___x_5136_;
}
}
LEAN_EXPORT uint8_t lp_ariori_constKernelFromDegreeMatchAll___lam__1(lean_object* v___f_5137_, uint8_t v_n_5138_){
_start:
{
lean_object* v___x_5139_; lean_object* v___x_5140_; uint8_t v___x_5141_; 
v___x_5139_ = lp_ariori_degree(v_n_5138_);
v___x_5140_ = lp_ariori_neighborMultisetCount(v_n_5138_);
v___x_5141_ = lean_nat_dec_eq(v___x_5139_, v___x_5140_);
lean_dec(v___x_5140_);
lean_dec(v___x_5139_);
if (v___x_5141_ == 0)
{
uint8_t v___x_5142_; 
lean_dec_ref(v___f_5137_);
v___x_5142_ = 1;
return v___x_5142_;
}
else
{
lean_object* v___x_5143_; uint8_t v___x_5144_; 
v___x_5143_ = lp_ariori_laplacianApply(v___f_5137_, v_n_5138_);
v___x_5144_ = lp_ariori_VesicaNumber_isZero(v___x_5143_);
lean_dec_ref(v___x_5143_);
return v___x_5144_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_constKernelFromDegreeMatchAll___lam__1___boxed(lean_object* v___f_5145_, lean_object* v_n_5146_){
_start:
{
uint8_t v_n_boxed_5147_; uint8_t v_res_5148_; lean_object* v_r_5149_; 
v_n_boxed_5147_ = lean_unbox(v_n_5146_);
v_res_5148_ = lp_ariori_constKernelFromDegreeMatchAll___lam__1(v___f_5145_, v_n_boxed_5147_);
v_r_5149_ = lean_box(v_res_5148_);
return v_r_5149_;
}
}
static uint8_t _init_lp_ariori_constKernelFromDegreeMatchAll___closed__1(void){
_start:
{
lean_object* v___f_5152_; lean_object* v___x_5153_; uint8_t v___x_5154_; 
v___f_5152_ = ((lean_object*)(lp_ariori_constKernelFromDegreeMatchAll___closed__0));
v___x_5153_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5154_ = l_List_all___redArg(v___x_5153_, v___f_5152_);
return v___x_5154_;
}
}
static uint8_t _init_lp_ariori_constKernelFromDegreeMatchAll(void){
_start:
{
uint8_t v___x_5155_; 
v___x_5155_ = lean_uint8_once(&lp_ariori_constKernelFromDegreeMatchAll___closed__1, &lp_ariori_constKernelFromDegreeMatchAll___closed__1_once, _init_lp_ariori_constKernelFromDegreeMatchAll___closed__1);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00kineticTerm_spec__0(lean_object* v_00_u03c6_5156_, lean_object* v_x_5157_, lean_object* v_x_5158_){
_start:
{
if (lean_obj_tag(v_x_5158_) == 0)
{
lean_dec_ref(v_00_u03c6_5156_);
return v_x_5157_;
}
else
{
lean_object* v_head_5159_; lean_object* v_tail_5160_; lean_object* v___x_5161_; uint8_t v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; 
v_head_5159_ = lean_ctor_get(v_x_5158_, 0);
lean_inc_n(v_head_5159_, 2);
v_tail_5160_ = lean_ctor_get(v_x_5158_, 1);
lean_inc(v_tail_5160_);
lean_dec_ref(v_x_5158_);
lean_inc_ref_n(v_00_u03c6_5156_, 2);
v___x_5161_ = lean_apply_1(v_00_u03c6_5156_, v_head_5159_);
v___x_5162_ = lean_unbox(v_head_5159_);
lean_dec(v_head_5159_);
v___x_5163_ = lp_ariori_laplacianApply(v_00_u03c6_5156_, v___x_5162_);
v___x_5164_ = lp_ariori_VesicaNumber_mul(v___x_5161_, v___x_5163_);
lean_dec_ref(v___x_5163_);
lean_dec_ref(v___x_5161_);
v___x_5165_ = lp_ariori_VesicaNumber_add(v_x_5157_, v___x_5164_);
lean_dec_ref(v___x_5164_);
lean_dec_ref(v_x_5157_);
v_x_5157_ = v___x_5165_;
v_x_5158_ = v_tail_5160_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_kineticTerm(lean_object* v_00_u03c6_5167_){
_start:
{
lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; 
v___x_5168_ = lp_ariori_VesicaNumber_zero;
v___x_5169_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5170_ = lp_ariori_List_foldl___at___00kineticTerm_spec__0(v_00_u03c6_5167_, v___x_5168_, v___x_5169_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00massTerm_spec__0(lean_object* v_00_u03c6_5171_, lean_object* v_rad_5172_, lean_object* v_x_5173_, lean_object* v_x_5174_){
_start:
{
if (lean_obj_tag(v_x_5174_) == 0)
{
lean_dec_ref(v_rad_5172_);
lean_dec_ref(v_00_u03c6_5171_);
return v_x_5173_;
}
else
{
lean_object* v_head_5175_; lean_object* v_tail_5176_; lean_object* v___x_5177_; uint8_t v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; 
v_head_5175_ = lean_ctor_get(v_x_5174_, 0);
lean_inc_n(v_head_5175_, 2);
v_tail_5176_ = lean_ctor_get(v_x_5174_, 1);
lean_inc(v_tail_5176_);
lean_dec_ref(v_x_5174_);
lean_inc_ref(v_00_u03c6_5171_);
v___x_5177_ = lean_apply_1(v_00_u03c6_5171_, v_head_5175_);
v___x_5178_ = lean_unbox(v_head_5175_);
lean_dec(v_head_5175_);
lean_inc_ref(v_rad_5172_);
v___x_5179_ = lp_ariori_centralityPotentialSq(v_rad_5172_, v___x_5178_);
v___x_5180_ = lp_ariori_VesicaNumber_mul(v___x_5177_, v___x_5179_);
lean_dec_ref(v___x_5179_);
v___x_5181_ = lp_ariori_VesicaNumber_mul(v___x_5177_, v___x_5180_);
lean_dec_ref(v___x_5180_);
lean_dec_ref(v___x_5177_);
v___x_5182_ = lp_ariori_VesicaNumber_add(v_x_5173_, v___x_5181_);
lean_dec_ref(v___x_5181_);
lean_dec_ref(v_x_5173_);
v_x_5173_ = v___x_5182_;
v_x_5174_ = v_tail_5176_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_massTerm(lean_object* v_rad_5184_, lean_object* v_00_u03c6_5185_){
_start:
{
lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5186_ = lp_ariori_VesicaNumber_zero;
v___x_5187_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5188_ = lp_ariori_List_foldl___at___00massTerm_spec__0(v_00_u03c6_5185_, v_rad_5184_, v___x_5186_, v___x_5187_);
return v___x_5188_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00triangleCubic_spec__0(lean_object* v_00_u03c6_5189_, lean_object* v_x_5190_, lean_object* v_x_5191_){
_start:
{
if (lean_obj_tag(v_x_5191_) == 0)
{
lean_dec_ref(v_00_u03c6_5189_);
return v_x_5190_;
}
else
{
lean_object* v_head_5192_; lean_object* v_snd_5193_; lean_object* v_tail_5194_; lean_object* v_fst_5195_; lean_object* v_fst_5196_; lean_object* v_snd_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; 
v_head_5192_ = lean_ctor_get(v_x_5191_, 0);
lean_inc(v_head_5192_);
v_snd_5193_ = lean_ctor_get(v_head_5192_, 1);
lean_inc(v_snd_5193_);
v_tail_5194_ = lean_ctor_get(v_x_5191_, 1);
lean_inc(v_tail_5194_);
lean_dec_ref(v_x_5191_);
v_fst_5195_ = lean_ctor_get(v_head_5192_, 0);
lean_inc(v_fst_5195_);
lean_dec(v_head_5192_);
v_fst_5196_ = lean_ctor_get(v_snd_5193_, 0);
lean_inc(v_fst_5196_);
v_snd_5197_ = lean_ctor_get(v_snd_5193_, 1);
lean_inc(v_snd_5197_);
lean_dec(v_snd_5193_);
lean_inc_ref_n(v_00_u03c6_5189_, 3);
v___x_5198_ = lean_apply_1(v_00_u03c6_5189_, v_fst_5195_);
v___x_5199_ = lean_apply_1(v_00_u03c6_5189_, v_fst_5196_);
v___x_5200_ = lean_apply_1(v_00_u03c6_5189_, v_snd_5197_);
v___x_5201_ = lp_ariori_VesicaNumber_mul(v___x_5199_, v___x_5200_);
lean_dec_ref(v___x_5200_);
lean_dec_ref(v___x_5199_);
v___x_5202_ = lp_ariori_VesicaNumber_mul(v___x_5198_, v___x_5201_);
lean_dec_ref(v___x_5201_);
lean_dec_ref(v___x_5198_);
v___x_5203_ = lp_ariori_VesicaNumber_add(v_x_5190_, v___x_5202_);
lean_dec_ref(v___x_5202_);
lean_dec_ref(v_x_5190_);
v_x_5190_ = v___x_5203_;
v_x_5191_ = v_tail_5194_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_triangleCubic(lean_object* v_00_u03c6_5205_){
_start:
{
lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; 
v___x_5206_ = lp_ariori_VesicaNumber_zero;
v___x_5207_ = lp_ariori_findTriangles;
v___x_5208_ = lp_ariori_List_foldl___at___00triangleCubic_spec__0(v_00_u03c6_5205_, v___x_5206_, v___x_5207_);
return v___x_5208_;
}
}
static lean_object* _init_lp_ariori_discreteAction___closed__0(void){
_start:
{
lean_object* v___x_5209_; lean_object* v_half_5210_; 
v___x_5209_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v_half_5210_ = lp_ariori_VesicaNumber_ofInt(v___x_5209_);
return v_half_5210_;
}
}
static lean_object* _init_lp_ariori_discreteAction___closed__1(void){
_start:
{
lean_object* v___x_5211_; lean_object* v_sixth_5212_; 
v___x_5211_ = lean_obj_once(&lp_ariori_instReprSegment_repr___redArg___closed__4, &lp_ariori_instReprSegment_repr___redArg___closed__4_once, _init_lp_ariori_instReprSegment_repr___redArg___closed__4);
v_sixth_5212_ = lp_ariori_VesicaNumber_ofInt(v___x_5211_);
return v_sixth_5212_;
}
}
LEAN_EXPORT lean_object* lp_ariori_discreteAction(lean_object* v_rad_5213_, lean_object* v_00_u03c6_5214_, lean_object* v_g_5215_){
_start:
{
lean_object* v_kin_5216_; lean_object* v_mass_5217_; lean_object* v_cubic_5218_; lean_object* v_half_5219_; lean_object* v_sixth_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; 
lean_inc_ref_n(v_00_u03c6_5214_, 2);
v_kin_5216_ = lp_ariori_kineticTerm(v_00_u03c6_5214_);
v_mass_5217_ = lp_ariori_massTerm(v_rad_5213_, v_00_u03c6_5214_);
v_cubic_5218_ = lp_ariori_triangleCubic(v_00_u03c6_5214_);
v_half_5219_ = lean_obj_once(&lp_ariori_discreteAction___closed__0, &lp_ariori_discreteAction___closed__0_once, _init_lp_ariori_discreteAction___closed__0);
v_sixth_5220_ = lean_obj_once(&lp_ariori_discreteAction___closed__1, &lp_ariori_discreteAction___closed__1_once, _init_lp_ariori_discreteAction___closed__1);
v___x_5221_ = lp_ariori_VesicaNumber_div(v_kin_5216_, v_half_5219_);
lean_dec_ref(v_kin_5216_);
v___x_5222_ = lp_ariori_VesicaNumber_div(v_mass_5217_, v_half_5219_);
lean_dec_ref(v_mass_5217_);
v___x_5223_ = lp_ariori_VesicaNumber_sub(v___x_5221_, v___x_5222_);
lean_dec_ref(v___x_5222_);
lean_dec_ref(v___x_5221_);
v___x_5224_ = lp_ariori_VesicaNumber_mul(v_g_5215_, v_cubic_5218_);
lean_dec_ref(v_cubic_5218_);
v___x_5225_ = lp_ariori_VesicaNumber_div(v___x_5224_, v_sixth_5220_);
lean_dec_ref(v___x_5224_);
v___x_5226_ = lp_ariori_VesicaNumber_sub(v___x_5223_, v___x_5225_);
lean_dec_ref(v___x_5225_);
lean_dec_ref(v___x_5223_);
return v___x_5226_;
}
}
LEAN_EXPORT lean_object* lp_ariori_discreteAction___boxed(lean_object* v_rad_5227_, lean_object* v_00_u03c6_5228_, lean_object* v_g_5229_){
_start:
{
lean_object* v_res_5230_; 
v_res_5230_ = lp_ariori_discreteAction(v_rad_5227_, v_00_u03c6_5228_, v_g_5229_);
lean_dec_ref(v_g_5229_);
return v_res_5230_;
}
}
static lean_object* _init_lp_ariori_testField___closed__0(void){
_start:
{
lean_object* v___x_5231_; lean_object* v___x_5232_; 
v___x_5231_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_5232_ = lp_ariori_VesicaNumber_ofInt(v___x_5231_);
return v___x_5232_;
}
}
static lean_object* _init_lp_ariori_testField___closed__1(void){
_start:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5233_ = lean_obj_once(&lp_ariori_lineCircleIntersect___closed__0, &lp_ariori_lineCircleIntersect___closed__0_once, _init_lp_ariori_lineCircleIntersect___closed__0);
v___x_5234_ = lp_ariori_VesicaNumber_ofInt(v___x_5233_);
return v___x_5234_;
}
}
static lean_object* _init_lp_ariori_testField___closed__2(void){
_start:
{
lean_object* v___x_5235_; lean_object* v___x_5236_; 
v___x_5235_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__7, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__7_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__7);
v___x_5236_ = lp_ariori_VesicaNumber_ofInt(v___x_5235_);
return v___x_5236_;
}
}
static lean_object* _init_lp_ariori_testField___closed__3(void){
_start:
{
lean_object* v___x_5237_; lean_object* v___x_5238_; 
v___x_5237_ = lean_unsigned_to_nat(7u);
v___x_5238_ = lean_nat_to_int(v___x_5237_);
return v___x_5238_;
}
}
static lean_object* _init_lp_ariori_testField___closed__4(void){
_start:
{
lean_object* v___x_5239_; lean_object* v___x_5240_; 
v___x_5239_ = lean_obj_once(&lp_ariori_testField___closed__3, &lp_ariori_testField___closed__3_once, _init_lp_ariori_testField___closed__3);
v___x_5240_ = lp_ariori_VesicaNumber_ofInt(v___x_5239_);
return v___x_5240_;
}
}
static lean_object* _init_lp_ariori_testField___closed__5(void){
_start:
{
lean_object* v___x_5241_; lean_object* v___x_5242_; 
v___x_5241_ = lean_unsigned_to_nat(8u);
v___x_5242_ = lean_nat_to_int(v___x_5241_);
return v___x_5242_;
}
}
static lean_object* _init_lp_ariori_testField___closed__6(void){
_start:
{
lean_object* v___x_5243_; lean_object* v___x_5244_; 
v___x_5243_ = lean_obj_once(&lp_ariori_testField___closed__5, &lp_ariori_testField___closed__5_once, _init_lp_ariori_testField___closed__5);
v___x_5244_ = lp_ariori_VesicaNumber_ofInt(v___x_5243_);
return v___x_5244_;
}
}
static lean_object* _init_lp_ariori_testField___closed__7(void){
_start:
{
lean_object* v___x_5245_; lean_object* v___x_5246_; 
v___x_5245_ = lean_unsigned_to_nat(9u);
v___x_5246_ = lean_nat_to_int(v___x_5245_);
return v___x_5246_;
}
}
static lean_object* _init_lp_ariori_testField___closed__8(void){
_start:
{
lean_object* v___x_5247_; lean_object* v___x_5248_; 
v___x_5247_ = lean_obj_once(&lp_ariori_testField___closed__7, &lp_ariori_testField___closed__7_once, _init_lp_ariori_testField___closed__7);
v___x_5248_ = lp_ariori_VesicaNumber_ofInt(v___x_5247_);
return v___x_5248_;
}
}
static lean_object* _init_lp_ariori_testField___closed__9(void){
_start:
{
lean_object* v___x_5249_; lean_object* v___x_5250_; 
v___x_5249_ = lean_obj_once(&lp_ariori_instReprSquareConstruction_repr___redArg___closed__28, &lp_ariori_instReprSquareConstruction_repr___redArg___closed__28_once, _init_lp_ariori_instReprSquareConstruction_repr___redArg___closed__28);
v___x_5250_ = lp_ariori_VesicaNumber_ofInt(v___x_5249_);
return v___x_5250_;
}
}
static lean_object* _init_lp_ariori_testField___closed__10(void){
_start:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; 
v___x_5251_ = lean_unsigned_to_nat(11u);
v___x_5252_ = lean_nat_to_int(v___x_5251_);
return v___x_5252_;
}
}
static lean_object* _init_lp_ariori_testField___closed__11(void){
_start:
{
lean_object* v___x_5253_; lean_object* v___x_5254_; 
v___x_5253_ = lean_obj_once(&lp_ariori_testField___closed__10, &lp_ariori_testField___closed__10_once, _init_lp_ariori_testField___closed__10);
v___x_5254_ = lp_ariori_VesicaNumber_ofInt(v___x_5253_);
return v___x_5254_;
}
}
static lean_object* _init_lp_ariori_testField___closed__12(void){
_start:
{
lean_object* v___x_5255_; lean_object* v___x_5256_; 
v___x_5255_ = lean_unsigned_to_nat(12u);
v___x_5256_ = lean_nat_to_int(v___x_5255_);
return v___x_5256_;
}
}
static lean_object* _init_lp_ariori_testField___closed__13(void){
_start:
{
lean_object* v___x_5257_; lean_object* v___x_5258_; 
v___x_5257_ = lean_obj_once(&lp_ariori_testField___closed__12, &lp_ariori_testField___closed__12_once, _init_lp_ariori_testField___closed__12);
v___x_5258_ = lp_ariori_VesicaNumber_ofInt(v___x_5257_);
return v___x_5258_;
}
}
static lean_object* _init_lp_ariori_testField___closed__14(void){
_start:
{
lean_object* v___x_5259_; lean_object* v___x_5260_; 
v___x_5259_ = lean_unsigned_to_nat(13u);
v___x_5260_ = lean_nat_to_int(v___x_5259_);
return v___x_5260_;
}
}
static lean_object* _init_lp_ariori_testField___closed__15(void){
_start:
{
lean_object* v___x_5261_; lean_object* v___x_5262_; 
v___x_5261_ = lean_obj_once(&lp_ariori_testField___closed__14, &lp_ariori_testField___closed__14_once, _init_lp_ariori_testField___closed__14);
v___x_5262_ = lp_ariori_VesicaNumber_ofInt(v___x_5261_);
return v___x_5262_;
}
}
static lean_object* _init_lp_ariori_testField___closed__16(void){
_start:
{
lean_object* v___x_5263_; lean_object* v___x_5264_; 
v___x_5263_ = lean_unsigned_to_nat(14u);
v___x_5264_ = lean_nat_to_int(v___x_5263_);
return v___x_5264_;
}
}
static lean_object* _init_lp_ariori_testField___closed__17(void){
_start:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5265_ = lean_obj_once(&lp_ariori_testField___closed__16, &lp_ariori_testField___closed__16_once, _init_lp_ariori_testField___closed__16);
v___x_5266_ = lp_ariori_VesicaNumber_ofInt(v___x_5265_);
return v___x_5266_;
}
}
static lean_object* _init_lp_ariori_testField___closed__18(void){
_start:
{
lean_object* v___x_5267_; lean_object* v___x_5268_; 
v___x_5267_ = lean_unsigned_to_nat(15u);
v___x_5268_ = lean_nat_to_int(v___x_5267_);
return v___x_5268_;
}
}
static lean_object* _init_lp_ariori_testField___closed__19(void){
_start:
{
lean_object* v___x_5269_; lean_object* v___x_5270_; 
v___x_5269_ = lean_obj_once(&lp_ariori_testField___closed__18, &lp_ariori_testField___closed__18_once, _init_lp_ariori_testField___closed__18);
v___x_5270_ = lp_ariori_VesicaNumber_ofInt(v___x_5269_);
return v___x_5270_;
}
}
static lean_object* _init_lp_ariori_testField___closed__20(void){
_start:
{
lean_object* v___x_5271_; lean_object* v___x_5272_; 
v___x_5271_ = lean_unsigned_to_nat(16u);
v___x_5272_ = lean_nat_to_int(v___x_5271_);
return v___x_5272_;
}
}
static lean_object* _init_lp_ariori_testField___closed__21(void){
_start:
{
lean_object* v___x_5273_; lean_object* v___x_5274_; 
v___x_5273_ = lean_obj_once(&lp_ariori_testField___closed__20, &lp_ariori_testField___closed__20_once, _init_lp_ariori_testField___closed__20);
v___x_5274_ = lp_ariori_VesicaNumber_ofInt(v___x_5273_);
return v___x_5274_;
}
}
static lean_object* _init_lp_ariori_testField___closed__22(void){
_start:
{
lean_object* v___x_5275_; lean_object* v___x_5276_; 
v___x_5275_ = lean_unsigned_to_nat(17u);
v___x_5276_ = lean_nat_to_int(v___x_5275_);
return v___x_5276_;
}
}
static lean_object* _init_lp_ariori_testField___closed__23(void){
_start:
{
lean_object* v___x_5277_; lean_object* v___x_5278_; 
v___x_5277_ = lean_obj_once(&lp_ariori_testField___closed__22, &lp_ariori_testField___closed__22_once, _init_lp_ariori_testField___closed__22);
v___x_5278_ = lp_ariori_VesicaNumber_ofInt(v___x_5277_);
return v___x_5278_;
}
}
LEAN_EXPORT lean_object* lp_ariori_testField(uint8_t v_n_5279_){
_start:
{
switch(v_n_5279_)
{
case 0:
{
lean_object* v___x_5280_; 
v___x_5280_ = lp_ariori_VesicaNumber_one;
return v___x_5280_;
}
case 1:
{
lean_object* v___x_5281_; 
v___x_5281_ = lean_obj_once(&lp_ariori_discreteAction___closed__0, &lp_ariori_discreteAction___closed__0_once, _init_lp_ariori_discreteAction___closed__0);
return v___x_5281_;
}
case 2:
{
lean_object* v___x_5282_; 
v___x_5282_ = lean_obj_once(&lp_ariori_testField___closed__0, &lp_ariori_testField___closed__0_once, _init_lp_ariori_testField___closed__0);
return v___x_5282_;
}
case 3:
{
lean_object* v___x_5283_; 
v___x_5283_ = lean_obj_once(&lp_ariori_testField___closed__1, &lp_ariori_testField___closed__1_once, _init_lp_ariori_testField___closed__1);
return v___x_5283_;
}
case 4:
{
lean_object* v___x_5284_; 
v___x_5284_ = lean_obj_once(&lp_ariori_testField___closed__2, &lp_ariori_testField___closed__2_once, _init_lp_ariori_testField___closed__2);
return v___x_5284_;
}
case 5:
{
lean_object* v___x_5285_; 
v___x_5285_ = lean_obj_once(&lp_ariori_discreteAction___closed__1, &lp_ariori_discreteAction___closed__1_once, _init_lp_ariori_discreteAction___closed__1);
return v___x_5285_;
}
case 6:
{
lean_object* v___x_5286_; 
v___x_5286_ = lean_obj_once(&lp_ariori_testField___closed__4, &lp_ariori_testField___closed__4_once, _init_lp_ariori_testField___closed__4);
return v___x_5286_;
}
case 7:
{
lean_object* v___x_5287_; 
v___x_5287_ = lean_obj_once(&lp_ariori_testField___closed__6, &lp_ariori_testField___closed__6_once, _init_lp_ariori_testField___closed__6);
return v___x_5287_;
}
case 8:
{
lean_object* v___x_5288_; 
v___x_5288_ = lean_obj_once(&lp_ariori_testField___closed__8, &lp_ariori_testField___closed__8_once, _init_lp_ariori_testField___closed__8);
return v___x_5288_;
}
case 9:
{
lean_object* v___x_5289_; 
v___x_5289_ = lean_obj_once(&lp_ariori_testField___closed__9, &lp_ariori_testField___closed__9_once, _init_lp_ariori_testField___closed__9);
return v___x_5289_;
}
case 10:
{
lean_object* v___x_5290_; 
v___x_5290_ = lean_obj_once(&lp_ariori_testField___closed__11, &lp_ariori_testField___closed__11_once, _init_lp_ariori_testField___closed__11);
return v___x_5290_;
}
case 11:
{
lean_object* v___x_5291_; 
v___x_5291_ = lean_obj_once(&lp_ariori_testField___closed__13, &lp_ariori_testField___closed__13_once, _init_lp_ariori_testField___closed__13);
return v___x_5291_;
}
case 12:
{
lean_object* v___x_5292_; 
v___x_5292_ = lean_obj_once(&lp_ariori_testField___closed__15, &lp_ariori_testField___closed__15_once, _init_lp_ariori_testField___closed__15);
return v___x_5292_;
}
case 13:
{
lean_object* v___x_5293_; 
v___x_5293_ = lean_obj_once(&lp_ariori_testField___closed__17, &lp_ariori_testField___closed__17_once, _init_lp_ariori_testField___closed__17);
return v___x_5293_;
}
case 14:
{
lean_object* v___x_5294_; 
v___x_5294_ = lean_obj_once(&lp_ariori_testField___closed__19, &lp_ariori_testField___closed__19_once, _init_lp_ariori_testField___closed__19);
return v___x_5294_;
}
case 15:
{
lean_object* v___x_5295_; 
v___x_5295_ = lean_obj_once(&lp_ariori_testField___closed__21, &lp_ariori_testField___closed__21_once, _init_lp_ariori_testField___closed__21);
return v___x_5295_;
}
default: 
{
lean_object* v___x_5296_; 
v___x_5296_ = lean_obj_once(&lp_ariori_testField___closed__23, &lp_ariori_testField___closed__23_once, _init_lp_ariori_testField___closed__23);
return v___x_5296_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_testField___boxed(lean_object* v_n_5297_){
_start:
{
uint8_t v_n_boxed_5298_; lean_object* v_res_5299_; 
v_n_boxed_5298_ = lean_unbox(v_n_5297_);
v_res_5299_ = lp_ariori_testField(v_n_boxed_5298_);
return v_res_5299_;
}
}
LEAN_EXPORT uint8_t lp_ariori_kineticTermInvariantUnder(lean_object* v_00_u03c3_5300_, lean_object* v_00_u03c6_5301_){
_start:
{
lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; uint8_t v___x_5305_; 
lean_inc_ref(v_00_u03c6_5301_);
v___x_5302_ = lean_alloc_closure((void*)(lp_ariori_relabelField___boxed), 3, 2);
lean_closure_set(v___x_5302_, 0, v_00_u03c3_5300_);
lean_closure_set(v___x_5302_, 1, v_00_u03c6_5301_);
v___x_5303_ = lp_ariori_kineticTerm(v___x_5302_);
v___x_5304_ = lp_ariori_kineticTerm(v_00_u03c6_5301_);
v___x_5305_ = lp_ariori_VesicaNumber_beq(v___x_5303_, v___x_5304_);
lean_dec_ref(v___x_5304_);
lean_dec_ref(v___x_5303_);
return v___x_5305_;
}
}
LEAN_EXPORT lean_object* lp_ariori_kineticTermInvariantUnder___boxed(lean_object* v_00_u03c3_5306_, lean_object* v_00_u03c6_5307_){
_start:
{
uint8_t v_res_5308_; lean_object* v_r_5309_; 
v_res_5308_ = lp_ariori_kineticTermInvariantUnder(v_00_u03c3_5306_, v_00_u03c6_5307_);
v_r_5309_ = lean_box(v_res_5308_);
return v_r_5309_;
}
}
LEAN_EXPORT uint8_t lp_ariori_massTermInvariantUnder(lean_object* v_00_u03c3_5310_, lean_object* v_rad_5311_, lean_object* v_00_u03c6_5312_){
_start:
{
lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; uint8_t v___x_5316_; 
lean_inc_ref(v_00_u03c6_5312_);
v___x_5313_ = lean_alloc_closure((void*)(lp_ariori_relabelField___boxed), 3, 2);
lean_closure_set(v___x_5313_, 0, v_00_u03c3_5310_);
lean_closure_set(v___x_5313_, 1, v_00_u03c6_5312_);
lean_inc_ref(v_rad_5311_);
v___x_5314_ = lp_ariori_massTerm(v_rad_5311_, v___x_5313_);
v___x_5315_ = lp_ariori_massTerm(v_rad_5311_, v_00_u03c6_5312_);
v___x_5316_ = lp_ariori_VesicaNumber_beq(v___x_5314_, v___x_5315_);
lean_dec_ref(v___x_5315_);
lean_dec_ref(v___x_5314_);
return v___x_5316_;
}
}
LEAN_EXPORT lean_object* lp_ariori_massTermInvariantUnder___boxed(lean_object* v_00_u03c3_5317_, lean_object* v_rad_5318_, lean_object* v_00_u03c6_5319_){
_start:
{
uint8_t v_res_5320_; lean_object* v_r_5321_; 
v_res_5320_ = lp_ariori_massTermInvariantUnder(v_00_u03c3_5317_, v_rad_5318_, v_00_u03c6_5319_);
v_r_5321_ = lean_box(v_res_5320_);
return v_r_5321_;
}
}
LEAN_EXPORT uint8_t lp_ariori_centralityInvariantUnderMirror___lam__0(uint8_t v_n_5322_){
_start:
{
lean_object* v___x_5323_; lean_object* v___x_5324_; uint8_t v___x_5325_; lean_object* v___x_5326_; uint8_t v___x_5327_; 
v___x_5323_ = lp_ariori___private_ArioriFull_0__r;
v___x_5324_ = lp_ariori_centralityPotentialSq(v___x_5323_, v_n_5322_);
v___x_5325_ = lp_ariori_mirrorAutomorphism(v_n_5322_);
v___x_5326_ = lp_ariori_centralityPotentialSq(v___x_5323_, v___x_5325_);
v___x_5327_ = lp_ariori_VesicaNumber_beq(v___x_5324_, v___x_5326_);
lean_dec_ref(v___x_5326_);
lean_dec_ref(v___x_5324_);
return v___x_5327_;
}
}
LEAN_EXPORT lean_object* lp_ariori_centralityInvariantUnderMirror___lam__0___boxed(lean_object* v_n_5328_){
_start:
{
uint8_t v_n_boxed_5329_; uint8_t v_res_5330_; lean_object* v_r_5331_; 
v_n_boxed_5329_ = lean_unbox(v_n_5328_);
v_res_5330_ = lp_ariori_centralityInvariantUnderMirror___lam__0(v_n_boxed_5329_);
v_r_5331_ = lean_box(v_res_5330_);
return v_r_5331_;
}
}
static uint8_t _init_lp_ariori_centralityInvariantUnderMirror___closed__1(void){
_start:
{
lean_object* v___f_5333_; lean_object* v___x_5334_; uint8_t v___x_5335_; 
v___f_5333_ = ((lean_object*)(lp_ariori_centralityInvariantUnderMirror___closed__0));
v___x_5334_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5335_ = l_List_all___redArg(v___x_5334_, v___f_5333_);
return v___x_5335_;
}
}
static uint8_t _init_lp_ariori_centralityInvariantUnderMirror(void){
_start:
{
uint8_t v___x_5336_; 
v___x_5336_ = lean_uint8_once(&lp_ariori_centralityInvariantUnderMirror___closed__1, &lp_ariori_centralityInvariantUnderMirror___closed__1_once, _init_lp_ariori_centralityInvariantUnderMirror___closed__1);
return v___x_5336_;
}
}
LEAN_EXPORT uint8_t lp_ariori_triangleCubicInvariantUnder(lean_object* v_00_u03c3_5337_, lean_object* v_00_u03c6_5338_){
_start:
{
lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; uint8_t v___x_5342_; 
lean_inc_ref(v_00_u03c6_5338_);
v___x_5339_ = lean_alloc_closure((void*)(lp_ariori_relabelField___boxed), 3, 2);
lean_closure_set(v___x_5339_, 0, v_00_u03c3_5337_);
lean_closure_set(v___x_5339_, 1, v_00_u03c6_5338_);
v___x_5340_ = lp_ariori_triangleCubic(v___x_5339_);
v___x_5341_ = lp_ariori_triangleCubic(v_00_u03c6_5338_);
v___x_5342_ = lp_ariori_VesicaNumber_beq(v___x_5340_, v___x_5341_);
lean_dec_ref(v___x_5341_);
lean_dec_ref(v___x_5340_);
return v___x_5342_;
}
}
LEAN_EXPORT lean_object* lp_ariori_triangleCubicInvariantUnder___boxed(lean_object* v_00_u03c3_5343_, lean_object* v_00_u03c6_5344_){
_start:
{
uint8_t v_res_5345_; lean_object* v_r_5346_; 
v_res_5345_ = lp_ariori_triangleCubicInvariantUnder(v_00_u03c3_5343_, v_00_u03c6_5344_);
v_r_5346_ = lean_box(v_res_5345_);
return v_r_5346_;
}
}
LEAN_EXPORT uint8_t lp_ariori_discreteActionInvariantUnder(lean_object* v_00_u03c3_5347_, lean_object* v_rad_5348_, lean_object* v_00_u03c6_5349_, lean_object* v_g_5350_){
_start:
{
lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; uint8_t v___x_5354_; 
lean_inc_ref(v_00_u03c6_5349_);
v___x_5351_ = lean_alloc_closure((void*)(lp_ariori_relabelField___boxed), 3, 2);
lean_closure_set(v___x_5351_, 0, v_00_u03c3_5347_);
lean_closure_set(v___x_5351_, 1, v_00_u03c6_5349_);
lean_inc_ref(v_rad_5348_);
v___x_5352_ = lp_ariori_discreteAction(v_rad_5348_, v___x_5351_, v_g_5350_);
v___x_5353_ = lp_ariori_discreteAction(v_rad_5348_, v_00_u03c6_5349_, v_g_5350_);
v___x_5354_ = lp_ariori_VesicaNumber_beq(v___x_5352_, v___x_5353_);
lean_dec_ref(v___x_5353_);
lean_dec_ref(v___x_5352_);
return v___x_5354_;
}
}
LEAN_EXPORT lean_object* lp_ariori_discreteActionInvariantUnder___boxed(lean_object* v_00_u03c3_5355_, lean_object* v_rad_5356_, lean_object* v_00_u03c6_5357_, lean_object* v_g_5358_){
_start:
{
uint8_t v_res_5359_; lean_object* v_r_5360_; 
v_res_5359_ = lp_ariori_discreteActionInvariantUnder(v_00_u03c3_5355_, v_rad_5356_, v_00_u03c6_5357_, v_g_5358_);
lean_dec_ref(v_g_5358_);
v_r_5360_ = lean_box(v_res_5359_);
return v_r_5360_;
}
}
LEAN_EXPORT uint8_t lp_ariori_gen1AutomorphismGroupOk___lam__0(uint8_t v___y_5361_){
_start:
{
return v___y_5361_;
}
}
LEAN_EXPORT lean_object* lp_ariori_gen1AutomorphismGroupOk___lam__0___boxed(lean_object* v___y_5362_){
_start:
{
uint8_t v___y_175__boxed_5363_; uint8_t v_res_5364_; lean_object* v_r_5365_; 
v___y_175__boxed_5363_ = lean_unbox(v___y_5362_);
v_res_5364_ = lp_ariori_gen1AutomorphismGroupOk___lam__0(v___y_175__boxed_5363_);
v_r_5365_ = lean_box(v_res_5364_);
return v_r_5365_;
}
}
static uint8_t _init_lp_ariori_gen1AutomorphismGroupOk___closed__1(void){
_start:
{
lean_object* v___f_5367_; uint8_t v___x_5368_; 
v___f_5367_ = ((lean_object*)(lp_ariori_gen1AutomorphismGroupOk___closed__0));
v___x_5368_ = lp_ariori_isGraphAutomorphism(v___f_5367_);
return v___x_5368_;
}
}
static uint8_t _init_lp_ariori_gen1AutomorphismGroupOk___closed__3(void){
_start:
{
lean_object* v___x_5370_; uint8_t v___x_5371_; 
v___x_5370_ = ((lean_object*)(lp_ariori_gen1AutomorphismGroupOk___closed__2));
v___x_5371_ = lp_ariori_isGraphAutomorphism(v___x_5370_);
return v___x_5371_;
}
}
static uint8_t _init_lp_ariori_gen1AutomorphismGroupOk___closed__5(void){
_start:
{
lean_object* v___x_5373_; uint8_t v___x_5374_; 
v___x_5373_ = ((lean_object*)(lp_ariori_gen1AutomorphismGroupOk___closed__4));
v___x_5374_ = lp_ariori_isGraphAutomorphism(v___x_5373_);
return v___x_5374_;
}
}
static uint8_t _init_lp_ariori_gen1AutomorphismGroupOk___closed__6(void){
_start:
{
lean_object* v___x_5375_; uint8_t v___x_5376_; 
v___x_5375_ = ((lean_object*)(lp_ariori_gen1AutomorphismGroupOk___closed__2));
v___x_5376_ = lp_ariori_graphAutomorphismInjective(v___x_5375_);
return v___x_5376_;
}
}
static uint8_t _init_lp_ariori_gen1AutomorphismGroupOk(void){
_start:
{
uint8_t v___x_5377_; 
v___x_5377_ = lean_uint8_once(&lp_ariori_gen1AutomorphismGroupOk___closed__1, &lp_ariori_gen1AutomorphismGroupOk___closed__1_once, _init_lp_ariori_gen1AutomorphismGroupOk___closed__1);
if (v___x_5377_ == 0)
{
return v___x_5377_;
}
else
{
uint8_t v___x_5378_; 
v___x_5378_ = lean_uint8_once(&lp_ariori_gen1AutomorphismGroupOk___closed__3, &lp_ariori_gen1AutomorphismGroupOk___closed__3_once, _init_lp_ariori_gen1AutomorphismGroupOk___closed__3);
if (v___x_5378_ == 0)
{
return v___x_5378_;
}
else
{
uint8_t v___x_5379_; 
v___x_5379_ = lean_uint8_once(&lp_ariori_gen1AutomorphismGroupOk___closed__5, &lp_ariori_gen1AutomorphismGroupOk___closed__5_once, _init_lp_ariori_gen1AutomorphismGroupOk___closed__5);
if (v___x_5379_ == 0)
{
uint8_t v___x_5380_; 
v___x_5380_ = lean_uint8_once(&lp_ariori_gen1AutomorphismGroupOk___closed__6, &lp_ariori_gen1AutomorphismGroupOk___closed__6_once, _init_lp_ariori_gen1AutomorphismGroupOk___closed__6);
return v___x_5380_;
}
else
{
uint8_t v___x_5381_; 
v___x_5381_ = 0;
return v___x_5381_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_ariori_applyGen1Auto(uint8_t v_a_5382_, uint8_t v_a_5383_){
_start:
{
if (v_a_5382_ == 0)
{
return v_a_5383_;
}
else
{
uint8_t v___x_5384_; 
v___x_5384_ = lp_ariori_mirrorAutomorphism(v_a_5383_);
return v___x_5384_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_applyGen1Auto___boxed(lean_object* v_a_5385_, lean_object* v_a_5386_){
_start:
{
uint8_t v_a_boxed_5387_; uint8_t v_a_71__boxed_5388_; uint8_t v_res_5389_; lean_object* v_r_5390_; 
v_a_boxed_5387_ = lean_unbox(v_a_5385_);
v_a_71__boxed_5388_ = lean_unbox(v_a_5386_);
v_res_5389_ = lp_ariori_applyGen1Auto(v_a_boxed_5387_, v_a_71__boxed_5388_);
v_r_5390_ = lean_box(v_res_5389_);
return v_r_5390_;
}
}
LEAN_EXPORT uint8_t lp_ariori_mirrorInvolutiveOk___lam__0(uint8_t v_n_5391_){
_start:
{
uint8_t v___x_5392_; uint8_t v___x_5393_; uint8_t v___x_5394_; 
v___x_5392_ = lp_ariori_mirrorAutomorphism(v_n_5391_);
v___x_5393_ = lp_ariori_mirrorAutomorphism(v___x_5392_);
v___x_5394_ = lp_ariori_instBEqNodeLabel_beq(v___x_5393_, v_n_5391_);
return v___x_5394_;
}
}
LEAN_EXPORT lean_object* lp_ariori_mirrorInvolutiveOk___lam__0___boxed(lean_object* v_n_5395_){
_start:
{
uint8_t v_n_boxed_5396_; uint8_t v_res_5397_; lean_object* v_r_5398_; 
v_n_boxed_5396_ = lean_unbox(v_n_5395_);
v_res_5397_ = lp_ariori_mirrorInvolutiveOk___lam__0(v_n_boxed_5396_);
v_r_5398_ = lean_box(v_res_5397_);
return v_r_5398_;
}
}
static uint8_t _init_lp_ariori_mirrorInvolutiveOk___closed__1(void){
_start:
{
lean_object* v___f_5400_; lean_object* v___x_5401_; uint8_t v___x_5402_; 
v___f_5400_ = ((lean_object*)(lp_ariori_mirrorInvolutiveOk___closed__0));
v___x_5401_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5402_ = l_List_all___redArg(v___x_5401_, v___f_5400_);
return v___x_5402_;
}
}
static uint8_t _init_lp_ariori_mirrorInvolutiveOk(void){
_start:
{
uint8_t v___x_5403_; 
v___x_5403_ = lean_uint8_once(&lp_ariori_mirrorInvolutiveOk___closed__1, &lp_ariori_mirrorInvolutiveOk___closed__1_once, _init_lp_ariori_mirrorInvolutiveOk___closed__1);
return v___x_5403_;
}
}
LEAN_EXPORT uint8_t lp_ariori_discreteActionInvariantGen1Auto(uint8_t v_a_5405_){
_start:
{
lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; uint8_t v___x_5411_; 
v___x_5406_ = lean_box(v_a_5405_);
v___x_5407_ = lean_alloc_closure((void*)(lp_ariori_applyGen1Auto___boxed), 2, 1);
lean_closure_set(v___x_5407_, 0, v___x_5406_);
v___x_5408_ = lp_ariori___private_ArioriFull_0__r;
v___x_5409_ = ((lean_object*)(lp_ariori_discreteActionInvariantGen1Auto___closed__0));
v___x_5410_ = lp_ariori_VesicaNumber_one;
v___x_5411_ = lp_ariori_discreteActionInvariantUnder(v___x_5407_, v___x_5408_, v___x_5409_, v___x_5410_);
return v___x_5411_;
}
}
LEAN_EXPORT lean_object* lp_ariori_discreteActionInvariantGen1Auto___boxed(lean_object* v_a_5412_){
_start:
{
uint8_t v_a_boxed_5413_; uint8_t v_res_5414_; lean_object* v_r_5415_; 
v_a_boxed_5413_ = lean_unbox(v_a_5412_);
v_res_5414_ = lp_ariori_discreteActionInvariantGen1Auto(v_a_boxed_5413_);
v_r_5415_ = lean_box(v_res_5414_);
return v_r_5415_;
}
}
LEAN_EXPORT uint8_t lp_ariori_discreteActionInvariantSigma(lean_object* v_00_u03c3_5416_){
_start:
{
lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; uint8_t v___x_5420_; 
v___x_5417_ = lp_ariori___private_ArioriFull_0__r;
v___x_5418_ = ((lean_object*)(lp_ariori_discreteActionInvariantGen1Auto___closed__0));
v___x_5419_ = lp_ariori_VesicaNumber_one;
v___x_5420_ = lp_ariori_discreteActionInvariantUnder(v_00_u03c3_5416_, v___x_5417_, v___x_5418_, v___x_5419_);
return v___x_5420_;
}
}
LEAN_EXPORT lean_object* lp_ariori_discreteActionInvariantSigma___boxed(lean_object* v_00_u03c3_5421_){
_start:
{
uint8_t v_res_5422_; lean_object* v_r_5423_; 
v_res_5422_ = lp_ariori_discreteActionInvariantSigma(v_00_u03c3_5421_);
v_r_5423_ = lean_box(v_res_5422_);
return v_r_5423_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter___redArg(lean_object* v_remaining_5424_, lean_object* v_h__1_5425_, lean_object* v_h__2_5426_){
_start:
{
lean_object* v_zero_5427_; uint8_t v_isZero_5428_; 
v_zero_5427_ = lean_unsigned_to_nat(0u);
v_isZero_5428_ = lean_nat_dec_eq(v_remaining_5424_, v_zero_5427_);
if (v_isZero_5428_ == 1)
{
lean_object* v___x_5429_; lean_object* v___x_5430_; 
lean_dec(v_h__2_5426_);
v___x_5429_ = lean_box(0);
v___x_5430_ = lean_apply_1(v_h__1_5425_, v___x_5429_);
return v___x_5430_;
}
else
{
lean_object* v_one_5431_; lean_object* v_n_5432_; lean_object* v___x_5433_; 
lean_dec(v_h__1_5425_);
v_one_5431_ = lean_unsigned_to_nat(1u);
v_n_5432_ = lean_nat_sub(v_remaining_5424_, v_one_5431_);
v___x_5433_ = lean_apply_1(v_h__2_5426_, v_n_5432_);
return v___x_5433_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter___redArg___boxed(lean_object* v_remaining_5434_, lean_object* v_h__1_5435_, lean_object* v_h__2_5436_){
_start:
{
lean_object* v_res_5437_; 
v_res_5437_ = lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter___redArg(v_remaining_5434_, v_h__1_5435_, v_h__2_5436_);
lean_dec(v_remaining_5434_);
return v_res_5437_;
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter(lean_object* v_motive_5438_, lean_object* v_remaining_5439_, lean_object* v_h__1_5440_, lean_object* v_h__2_5441_){
_start:
{
lean_object* v_zero_5442_; uint8_t v_isZero_5443_; 
v_zero_5442_ = lean_unsigned_to_nat(0u);
v_isZero_5443_ = lean_nat_dec_eq(v_remaining_5439_, v_zero_5442_);
if (v_isZero_5443_ == 1)
{
lean_object* v___x_5444_; lean_object* v___x_5445_; 
lean_dec(v_h__2_5441_);
v___x_5444_ = lean_box(0);
v___x_5445_ = lean_apply_1(v_h__1_5440_, v___x_5444_);
return v___x_5445_;
}
else
{
lean_object* v_one_5446_; lean_object* v_n_5447_; lean_object* v___x_5448_; 
lean_dec(v_h__1_5440_);
v_one_5446_ = lean_unsigned_to_nat(1u);
v_n_5447_ = lean_nat_sub(v_remaining_5439_, v_one_5446_);
v___x_5448_ = lean_apply_1(v_h__2_5441_, v_n_5447_);
return v___x_5448_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter___boxed(lean_object* v_motive_5449_, lean_object* v_remaining_5450_, lean_object* v_h__1_5451_, lean_object* v_h__2_5452_){
_start:
{
lean_object* v_res_5453_; 
v_res_5453_ = lp_ariori___private_ArioriFull_0__recursionLoop_match__1_splitter(v_motive_5449_, v_remaining_5450_, v_h__1_5451_, v_h__2_5452_);
lean_dec(v_remaining_5450_);
return v_res_5453_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00boundaryLeaves_spec__0(lean_object* v_a_5454_, lean_object* v_a_5455_){
_start:
{
if (lean_obj_tag(v_a_5454_) == 0)
{
lean_object* v___x_5456_; 
v___x_5456_ = l_List_reverse___redArg(v_a_5455_);
return v___x_5456_;
}
else
{
lean_object* v_head_5457_; lean_object* v_tail_5458_; lean_object* v___x_5460_; uint8_t v_isShared_5461_; uint8_t v_isSharedCheck_5471_; 
v_head_5457_ = lean_ctor_get(v_a_5454_, 0);
v_tail_5458_ = lean_ctor_get(v_a_5454_, 1);
v_isSharedCheck_5471_ = !lean_is_exclusive(v_a_5454_);
if (v_isSharedCheck_5471_ == 0)
{
v___x_5460_ = v_a_5454_;
v_isShared_5461_ = v_isSharedCheck_5471_;
goto v_resetjp_5459_;
}
else
{
lean_inc(v_tail_5458_);
lean_inc(v_head_5457_);
lean_dec(v_a_5454_);
v___x_5460_ = lean_box(0);
v_isShared_5461_ = v_isSharedCheck_5471_;
goto v_resetjp_5459_;
}
v_resetjp_5459_:
{
uint8_t v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; uint8_t v___x_5465_; 
v___x_5462_ = lean_unbox(v_head_5457_);
v___x_5463_ = lp_ariori_degree(v___x_5462_);
v___x_5464_ = lean_unsigned_to_nat(1u);
v___x_5465_ = lean_nat_dec_eq(v___x_5463_, v___x_5464_);
lean_dec(v___x_5463_);
if (v___x_5465_ == 0)
{
lean_del_object(v___x_5460_);
lean_dec(v_head_5457_);
v_a_5454_ = v_tail_5458_;
goto _start;
}
else
{
lean_object* v___x_5468_; 
if (v_isShared_5461_ == 0)
{
lean_ctor_set(v___x_5460_, 1, v_a_5455_);
v___x_5468_ = v___x_5460_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5470_; 
v_reuseFailAlloc_5470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5470_, 0, v_head_5457_);
lean_ctor_set(v_reuseFailAlloc_5470_, 1, v_a_5455_);
v___x_5468_ = v_reuseFailAlloc_5470_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
v_a_5454_ = v_tail_5458_;
v_a_5455_ = v___x_5468_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_ariori_boundaryLeaves___closed__0(void){
_start:
{
lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; 
v___x_5472_ = lean_box(0);
v___x_5473_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5474_ = lp_ariori_List_filterTR_loop___at___00boundaryLeaves_spec__0(v___x_5473_, v___x_5472_);
return v___x_5474_;
}
}
static lean_object* _init_lp_ariori_boundaryLeaves(void){
_start:
{
lean_object* v___x_5475_; 
v___x_5475_ = lean_obj_once(&lp_ariori_boundaryLeaves___closed__0, &lp_ariori_boundaryLeaves___closed__0_once, _init_lp_ariori_boundaryLeaves___closed__0);
return v___x_5475_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00boundaryConfined_spec__0(lean_object* v_a_5476_, lean_object* v_a_5477_){
_start:
{
if (lean_obj_tag(v_a_5476_) == 0)
{
lean_object* v___x_5478_; 
v___x_5478_ = l_List_reverse___redArg(v_a_5477_);
return v___x_5478_;
}
else
{
lean_object* v_head_5479_; lean_object* v_tail_5480_; lean_object* v___x_5482_; uint8_t v_isShared_5483_; uint8_t v_isSharedCheck_5493_; 
v_head_5479_ = lean_ctor_get(v_a_5476_, 0);
v_tail_5480_ = lean_ctor_get(v_a_5476_, 1);
v_isSharedCheck_5493_ = !lean_is_exclusive(v_a_5476_);
if (v_isSharedCheck_5493_ == 0)
{
v___x_5482_ = v_a_5476_;
v_isShared_5483_ = v_isSharedCheck_5493_;
goto v_resetjp_5481_;
}
else
{
lean_inc(v_tail_5480_);
lean_inc(v_head_5479_);
lean_dec(v_a_5476_);
v___x_5482_ = lean_box(0);
v_isShared_5483_ = v_isSharedCheck_5493_;
goto v_resetjp_5481_;
}
v_resetjp_5481_:
{
uint8_t v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; uint8_t v___x_5487_; 
v___x_5484_ = lean_unbox(v_head_5479_);
v___x_5485_ = lp_ariori_degree(v___x_5484_);
v___x_5486_ = lean_unsigned_to_nat(2u);
v___x_5487_ = lean_nat_dec_eq(v___x_5485_, v___x_5486_);
lean_dec(v___x_5485_);
if (v___x_5487_ == 0)
{
lean_del_object(v___x_5482_);
lean_dec(v_head_5479_);
v_a_5476_ = v_tail_5480_;
goto _start;
}
else
{
lean_object* v___x_5490_; 
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v_a_5477_);
v___x_5490_ = v___x_5482_;
goto v_reusejp_5489_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_head_5479_);
lean_ctor_set(v_reuseFailAlloc_5492_, 1, v_a_5477_);
v___x_5490_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5489_;
}
v_reusejp_5489_:
{
v_a_5476_ = v_tail_5480_;
v_a_5477_ = v___x_5490_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_ariori_boundaryConfined___closed__0(void){
_start:
{
lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; 
v___x_5494_ = lean_box(0);
v___x_5495_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5496_ = lp_ariori_List_filterTR_loop___at___00boundaryConfined_spec__0(v___x_5495_, v___x_5494_);
return v___x_5496_;
}
}
static lean_object* _init_lp_ariori_boundaryConfined(void){
_start:
{
lean_object* v___x_5497_; 
v___x_5497_ = lean_obj_once(&lp_ariori_boundaryConfined___closed__0, &lp_ariori_boundaryConfined___closed__0_once, _init_lp_ariori_boundaryConfined___closed__0);
return v___x_5497_;
}
}
static lean_object* _init_lp_ariori_C2__simplices(void){
_start:
{
lean_object* v___x_5498_; 
v___x_5498_ = lp_ariori_findTriangles;
return v___x_5498_;
}
}
static lean_object* _init_lp_ariori_C1__X17__distSq___closed__0(void){
_start:
{
lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; 
v___x_5499_ = lp_ariori___private_ArioriFull_0__ptX17;
v___x_5500_ = lp_ariori___private_ArioriFull_0__ptC1;
v___x_5501_ = lp_ariori_Point_distSq(v___x_5500_, v___x_5499_);
return v___x_5501_;
}
}
static lean_object* _init_lp_ariori_C1__X17__distSq(void){
_start:
{
lean_object* v___x_5502_; 
v___x_5502_ = lean_obj_once(&lp_ariori_C1__X17__distSq___closed__0, &lp_ariori_C1__X17__distSq___closed__0_once, _init_lp_ariori_C1__X17__distSq___closed__0);
return v___x_5502_;
}
}
static lean_object* _init_lp_ariori_C2__X17__distSq___closed__0(void){
_start:
{
lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; 
v___x_5503_ = lp_ariori___private_ArioriFull_0__ptX17;
v___x_5504_ = lp_ariori___private_ArioriFull_0__ptC2;
v___x_5505_ = lp_ariori_Point_distSq(v___x_5504_, v___x_5503_);
return v___x_5505_;
}
}
static lean_object* _init_lp_ariori_C2__X17__distSq(void){
_start:
{
lean_object* v___x_5506_; 
v___x_5506_ = lean_obj_once(&lp_ariori_C2__X17__distSq___closed__0, &lp_ariori_C2__X17__distSq___closed__0_once, _init_lp_ariori_C2__X17__distSq___closed__0);
return v___x_5506_;
}
}
static lean_object* _init_lp_ariori_C3__X17__distSq___closed__0(void){
_start:
{
lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; 
v___x_5507_ = lp_ariori___private_ArioriFull_0__ptX17;
v___x_5508_ = lp_ariori___private_ArioriFull_0__ptC3;
v___x_5509_ = lp_ariori_Point_distSq(v___x_5508_, v___x_5507_);
return v___x_5509_;
}
}
static lean_object* _init_lp_ariori_C3__X17__distSq(void){
_start:
{
lean_object* v___x_5510_; 
v___x_5510_ = lean_obj_once(&lp_ariori_C3__X17__distSq___closed__0, &lp_ariori_C3__X17__distSq___closed__0_once, _init_lp_ariori_C3__X17__distSq___closed__0);
return v___x_5510_;
}
}
static lean_object* _init_lp_ariori_C4__X17__distSq___closed__0(void){
_start:
{
lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; 
v___x_5511_ = lp_ariori___private_ArioriFull_0__ptX17;
v___x_5512_ = lp_ariori___private_ArioriFull_0__ptC4;
v___x_5513_ = lp_ariori_Point_distSq(v___x_5512_, v___x_5511_);
return v___x_5513_;
}
}
static lean_object* _init_lp_ariori_C4__X17__distSq(void){
_start:
{
lean_object* v___x_5514_; 
v___x_5514_ = lean_obj_once(&lp_ariori_C4__X17__distSq___closed__0, &lp_ariori_C4__X17__distSq___closed__0_once, _init_lp_ariori_C4__X17__distSq___closed__0);
return v___x_5514_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00trianglesContainingEdge_spec__0(uint8_t v_v_5515_, uint8_t v_u_5516_, lean_object* v_a_5517_, lean_object* v_a_5518_){
_start:
{
if (lean_obj_tag(v_a_5517_) == 0)
{
lean_object* v___x_5519_; 
v___x_5519_ = l_List_reverse___redArg(v_a_5518_);
return v___x_5519_;
}
else
{
lean_object* v_head_5520_; lean_object* v_tail_5521_; lean_object* v___x_5523_; uint8_t v_isShared_5524_; uint8_t v_isSharedCheck_5549_; 
v_head_5520_ = lean_ctor_get(v_a_5517_, 0);
v_tail_5521_ = lean_ctor_get(v_a_5517_, 1);
v_isSharedCheck_5549_ = !lean_is_exclusive(v_a_5517_);
if (v_isSharedCheck_5549_ == 0)
{
v___x_5523_ = v_a_5517_;
v_isShared_5524_ = v_isSharedCheck_5549_;
goto v_resetjp_5522_;
}
else
{
lean_inc(v_tail_5521_);
lean_inc(v_head_5520_);
lean_dec(v_a_5517_);
v___x_5523_ = lean_box(0);
v_isShared_5524_ = v_isSharedCheck_5549_;
goto v_resetjp_5522_;
}
v_resetjp_5522_:
{
uint8_t v___y_5526_; lean_object* v_snd_5532_; lean_object* v_fst_5533_; lean_object* v_fst_5534_; lean_object* v_snd_5535_; uint8_t v___x_5543_; uint8_t v___x_5544_; 
v_snd_5532_ = lean_ctor_get(v_head_5520_, 1);
v_fst_5533_ = lean_ctor_get(v_head_5520_, 0);
v_fst_5534_ = lean_ctor_get(v_snd_5532_, 0);
v_snd_5535_ = lean_ctor_get(v_snd_5532_, 1);
v___x_5543_ = lean_unbox(v_fst_5533_);
v___x_5544_ = lp_ariori_instBEqNodeLabel_beq(v___x_5543_, v_u_5516_);
if (v___x_5544_ == 0)
{
uint8_t v___x_5545_; uint8_t v___x_5546_; 
v___x_5545_ = lean_unbox(v_fst_5534_);
v___x_5546_ = lp_ariori_instBEqNodeLabel_beq(v___x_5545_, v_u_5516_);
if (v___x_5546_ == 0)
{
uint8_t v___x_5547_; uint8_t v___x_5548_; 
v___x_5547_ = lean_unbox(v_snd_5535_);
v___x_5548_ = lp_ariori_instBEqNodeLabel_beq(v___x_5547_, v_u_5516_);
if (v___x_5548_ == 0)
{
v___y_5526_ = v___x_5548_;
goto v___jp_5525_;
}
else
{
goto v___jp_5536_;
}
}
else
{
goto v___jp_5536_;
}
}
else
{
goto v___jp_5536_;
}
v___jp_5525_:
{
if (v___y_5526_ == 0)
{
lean_del_object(v___x_5523_);
lean_dec(v_head_5520_);
v_a_5517_ = v_tail_5521_;
goto _start;
}
else
{
lean_object* v___x_5529_; 
if (v_isShared_5524_ == 0)
{
lean_ctor_set(v___x_5523_, 1, v_a_5518_);
v___x_5529_ = v___x_5523_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v_head_5520_);
lean_ctor_set(v_reuseFailAlloc_5531_, 1, v_a_5518_);
v___x_5529_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
v_a_5517_ = v_tail_5521_;
v_a_5518_ = v___x_5529_;
goto _start;
}
}
}
v___jp_5536_:
{
uint8_t v___x_5537_; uint8_t v___x_5538_; 
v___x_5537_ = lean_unbox(v_fst_5533_);
v___x_5538_ = lp_ariori_instBEqNodeLabel_beq(v___x_5537_, v_v_5515_);
if (v___x_5538_ == 0)
{
uint8_t v___x_5539_; uint8_t v___x_5540_; 
v___x_5539_ = lean_unbox(v_fst_5534_);
v___x_5540_ = lp_ariori_instBEqNodeLabel_beq(v___x_5539_, v_v_5515_);
if (v___x_5540_ == 0)
{
uint8_t v___x_5541_; uint8_t v___x_5542_; 
v___x_5541_ = lean_unbox(v_snd_5535_);
v___x_5542_ = lp_ariori_instBEqNodeLabel_beq(v___x_5541_, v_v_5515_);
v___y_5526_ = v___x_5542_;
goto v___jp_5525_;
}
else
{
v___y_5526_ = v___x_5540_;
goto v___jp_5525_;
}
}
else
{
v___y_5526_ = v___x_5538_;
goto v___jp_5525_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_filterTR_loop___at___00trianglesContainingEdge_spec__0___boxed(lean_object* v_v_5550_, lean_object* v_u_5551_, lean_object* v_a_5552_, lean_object* v_a_5553_){
_start:
{
uint8_t v_v_boxed_5554_; uint8_t v_u_boxed_5555_; lean_object* v_res_5556_; 
v_v_boxed_5554_ = lean_unbox(v_v_5550_);
v_u_boxed_5555_ = lean_unbox(v_u_5551_);
v_res_5556_ = lp_ariori_List_filterTR_loop___at___00trianglesContainingEdge_spec__0(v_v_boxed_5554_, v_u_boxed_5555_, v_a_5552_, v_a_5553_);
return v_res_5556_;
}
}
LEAN_EXPORT lean_object* lp_ariori_trianglesContainingEdge(uint8_t v_u_5557_, uint8_t v_v_5558_){
_start:
{
lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; 
v___x_5559_ = lp_ariori_findTriangles;
v___x_5560_ = lean_box(0);
v___x_5561_ = lp_ariori_List_filterTR_loop___at___00trianglesContainingEdge_spec__0(v_v_5558_, v_u_5557_, v___x_5559_, v___x_5560_);
v___x_5562_ = l_List_lengthTR___redArg(v___x_5561_);
lean_dec(v___x_5561_);
return v___x_5562_;
}
}
LEAN_EXPORT lean_object* lp_ariori_trianglesContainingEdge___boxed(lean_object* v_u_5563_, lean_object* v_v_5564_){
_start:
{
uint8_t v_u_boxed_5565_; uint8_t v_v_boxed_5566_; lean_object* v_res_5567_; 
v_u_boxed_5565_ = lean_unbox(v_u_5563_);
v_v_boxed_5566_ = lean_unbox(v_v_5564_);
v_res_5567_ = lp_ariori_trianglesContainingEdge(v_u_boxed_5565_, v_v_boxed_5566_);
return v_res_5567_;
}
}
LEAN_EXPORT lean_object* lp_ariori_formanRicci(uint8_t v_u_5568_, uint8_t v_v_5569_){
_start:
{
lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; 
v___x_5570_ = lean_obj_once(&lp_ariori_lineCircleIntersect___closed__0, &lp_ariori_lineCircleIntersect___closed__0_once, _init_lp_ariori_lineCircleIntersect___closed__0);
v___x_5571_ = lp_ariori_degree(v_u_5568_);
v___x_5572_ = lean_nat_to_int(v___x_5571_);
v___x_5573_ = lean_int_sub(v___x_5570_, v___x_5572_);
lean_dec(v___x_5572_);
v___x_5574_ = lp_ariori_degree(v_v_5569_);
v___x_5575_ = lean_nat_to_int(v___x_5574_);
v___x_5576_ = lean_int_sub(v___x_5573_, v___x_5575_);
lean_dec(v___x_5575_);
lean_dec(v___x_5573_);
v___x_5577_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_5578_ = lp_ariori_trianglesContainingEdge(v_u_5568_, v_v_5569_);
v___x_5579_ = lean_nat_to_int(v___x_5578_);
v___x_5580_ = lean_int_mul(v___x_5577_, v___x_5579_);
lean_dec(v___x_5579_);
v___x_5581_ = lean_int_add(v___x_5576_, v___x_5580_);
lean_dec(v___x_5580_);
lean_dec(v___x_5576_);
return v___x_5581_;
}
}
LEAN_EXPORT lean_object* lp_ariori_formanRicci___boxed(lean_object* v_u_5582_, lean_object* v_v_5583_){
_start:
{
uint8_t v_u_boxed_5584_; uint8_t v_v_boxed_5585_; lean_object* v_res_5586_; 
v_u_boxed_5584_ = lean_unbox(v_u_5582_);
v_v_boxed_5585_ = lean_unbox(v_v_5583_);
v_res_5586_ = lp_ariori_formanRicci(v_u_boxed_5584_, v_v_boxed_5585_);
return v_res_5586_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00discreteEinsteinHilbertAction_spec__0(lean_object* v_x_5587_, lean_object* v_x_5588_){
_start:
{
if (lean_obj_tag(v_x_5588_) == 0)
{
return v_x_5587_;
}
else
{
lean_object* v_head_5589_; lean_object* v_tail_5590_; lean_object* v_fst_5591_; lean_object* v_snd_5592_; uint8_t v___x_5593_; uint8_t v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; 
v_head_5589_ = lean_ctor_get(v_x_5588_, 0);
v_tail_5590_ = lean_ctor_get(v_x_5588_, 1);
v_fst_5591_ = lean_ctor_get(v_head_5589_, 0);
v_snd_5592_ = lean_ctor_get(v_head_5589_, 1);
v___x_5593_ = lean_unbox(v_fst_5591_);
v___x_5594_ = lean_unbox(v_snd_5592_);
v___x_5595_ = lp_ariori_formanRicci(v___x_5593_, v___x_5594_);
v___x_5596_ = lean_int_add(v_x_5587_, v___x_5595_);
lean_dec(v___x_5595_);
lean_dec(v_x_5587_);
v_x_5587_ = v___x_5596_;
v_x_5588_ = v_tail_5590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00discreteEinsteinHilbertAction_spec__0___boxed(lean_object* v_x_5598_, lean_object* v_x_5599_){
_start:
{
lean_object* v_res_5600_; 
v_res_5600_ = lp_ariori_List_foldl___at___00discreteEinsteinHilbertAction_spec__0(v_x_5598_, v_x_5599_);
lean_dec(v_x_5599_);
return v_res_5600_;
}
}
static lean_object* _init_lp_ariori_discreteEinsteinHilbertAction___closed__0(void){
_start:
{
lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; 
v___x_5601_ = ((lean_object*)(lp_ariori_gen1Edges));
v___x_5602_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_5603_ = lp_ariori_List_foldl___at___00discreteEinsteinHilbertAction_spec__0(v___x_5602_, v___x_5601_);
return v___x_5603_;
}
}
static lean_object* _init_lp_ariori_discreteEinsteinHilbertAction(void){
_start:
{
lean_object* v___x_5604_; 
v___x_5604_ = lean_obj_once(&lp_ariori_discreteEinsteinHilbertAction___closed__0, &lp_ariori_discreteEinsteinHilbertAction___closed__0_once, _init_lp_ariori_discreteEinsteinHilbertAction___closed__0);
return v___x_5604_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00parityTrace_spec__0(lean_object* v_x_5605_, lean_object* v_x_5606_){
_start:
{
if (lean_obj_tag(v_x_5606_) == 0)
{
return v_x_5605_;
}
else
{
lean_object* v_head_5607_; lean_object* v_tail_5608_; uint8_t v___x_5609_; uint8_t v___x_5610_; uint8_t v___x_5611_; uint8_t v___x_5612_; 
v_head_5607_ = lean_ctor_get(v_x_5606_, 0);
v_tail_5608_ = lean_ctor_get(v_x_5606_, 1);
v___x_5609_ = lean_unbox(v_head_5607_);
v___x_5610_ = lp_ariori_mirrorAutomorphism(v___x_5609_);
v___x_5611_ = lean_unbox(v_head_5607_);
v___x_5612_ = lp_ariori_instBEqNodeLabel_beq(v___x_5610_, v___x_5611_);
if (v___x_5612_ == 0)
{
v_x_5606_ = v_tail_5608_;
goto _start;
}
else
{
lean_object* v___x_5614_; lean_object* v___x_5615_; 
v___x_5614_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_5615_ = lean_int_add(v_x_5605_, v___x_5614_);
lean_dec(v_x_5605_);
v_x_5605_ = v___x_5615_;
v_x_5606_ = v_tail_5608_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00parityTrace_spec__0___boxed(lean_object* v_x_5617_, lean_object* v_x_5618_){
_start:
{
lean_object* v_res_5619_; 
v_res_5619_ = lp_ariori_List_foldl___at___00parityTrace_spec__0(v_x_5617_, v_x_5618_);
lean_dec(v_x_5618_);
return v_res_5619_;
}
}
static lean_object* _init_lp_ariori_parityTrace___closed__0(void){
_start:
{
lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; 
v___x_5620_ = ((lean_object*)(lp_ariori_allNodes));
v___x_5621_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_5622_ = lp_ariori_List_foldl___at___00parityTrace_spec__0(v___x_5621_, v___x_5620_);
return v___x_5622_;
}
}
static lean_object* _init_lp_ariori_parityTrace(void){
_start:
{
lean_object* v___x_5623_; 
v___x_5623_ = lean_obj_once(&lp_ariori_parityTrace___closed__0, &lp_ariori_parityTrace___closed__0_once, _init_lp_ariori_parityTrace___closed__0);
return v___x_5623_;
}
}
LEAN_EXPORT uint8_t lp_ariori_edgeIndex___lam__0(lean_object* v_e_5624_, lean_object* v_x_5625_){
_start:
{
lean_object* v_fst_5626_; lean_object* v_snd_5627_; lean_object* v_fst_5628_; lean_object* v_snd_5629_; uint8_t v___x_5630_; uint8_t v___x_5631_; uint8_t v___x_5632_; 
v_fst_5626_ = lean_ctor_get(v_x_5625_, 0);
v_snd_5627_ = lean_ctor_get(v_x_5625_, 1);
v_fst_5628_ = lean_ctor_get(v_e_5624_, 0);
v_snd_5629_ = lean_ctor_get(v_e_5624_, 1);
v___x_5630_ = lean_unbox(v_fst_5626_);
v___x_5631_ = lean_unbox(v_fst_5628_);
v___x_5632_ = lp_ariori_instBEqNodeLabel_beq(v___x_5630_, v___x_5631_);
if (v___x_5632_ == 0)
{
return v___x_5632_;
}
else
{
uint8_t v___x_5633_; uint8_t v___x_5634_; uint8_t v___x_5635_; 
v___x_5633_ = lean_unbox(v_snd_5627_);
v___x_5634_ = lean_unbox(v_snd_5629_);
v___x_5635_ = lp_ariori_instBEqNodeLabel_beq(v___x_5633_, v___x_5634_);
return v___x_5635_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_edgeIndex___lam__0___boxed(lean_object* v_e_5636_, lean_object* v_x_5637_){
_start:
{
uint8_t v_res_5638_; lean_object* v_r_5639_; 
v_res_5638_ = lp_ariori_edgeIndex___lam__0(v_e_5636_, v_x_5637_);
lean_dec_ref(v_x_5637_);
lean_dec_ref(v_e_5636_);
v_r_5639_ = lean_box(v_res_5638_);
return v_r_5639_;
}
}
LEAN_EXPORT uint8_t lp_ariori_edgeIndex___lam__1(lean_object* v_e_5640_, lean_object* v_x_5641_){
_start:
{
lean_object* v_fst_5642_; lean_object* v_snd_5643_; lean_object* v_fst_5644_; lean_object* v_snd_5645_; uint8_t v___x_5646_; uint8_t v___x_5647_; uint8_t v___x_5648_; 
v_fst_5642_ = lean_ctor_get(v_x_5641_, 0);
v_snd_5643_ = lean_ctor_get(v_x_5641_, 1);
v_fst_5644_ = lean_ctor_get(v_e_5640_, 0);
v_snd_5645_ = lean_ctor_get(v_e_5640_, 1);
v___x_5646_ = lean_unbox(v_fst_5642_);
v___x_5647_ = lean_unbox(v_snd_5645_);
v___x_5648_ = lp_ariori_instBEqNodeLabel_beq(v___x_5646_, v___x_5647_);
if (v___x_5648_ == 0)
{
return v___x_5648_;
}
else
{
uint8_t v___x_5649_; uint8_t v___x_5650_; uint8_t v___x_5651_; 
v___x_5649_ = lean_unbox(v_snd_5643_);
v___x_5650_ = lean_unbox(v_fst_5644_);
v___x_5651_ = lp_ariori_instBEqNodeLabel_beq(v___x_5649_, v___x_5650_);
return v___x_5651_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_edgeIndex___lam__1___boxed(lean_object* v_e_5652_, lean_object* v_x_5653_){
_start:
{
uint8_t v_res_5654_; lean_object* v_r_5655_; 
v_res_5654_ = lp_ariori_edgeIndex___lam__1(v_e_5652_, v_x_5653_);
lean_dec_ref(v_x_5653_);
lean_dec_ref(v_e_5652_);
v_r_5655_ = lean_box(v_res_5654_);
return v_r_5655_;
}
}
LEAN_EXPORT lean_object* lp_ariori_edgeIndex(lean_object* v_e_5656_){
_start:
{
lean_object* v___f_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; 
lean_inc_ref(v_e_5656_);
v___f_5657_ = lean_alloc_closure((void*)(lp_ariori_edgeIndex___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5657_, 0, v_e_5656_);
v___x_5658_ = ((lean_object*)(lp_ariori_gen1Edges));
v___x_5659_ = l_List_findIdx_x3f___redArg(v___f_5657_, v___x_5658_);
if (lean_obj_tag(v___x_5659_) == 0)
{
lean_object* v___f_5660_; lean_object* v___x_5661_; 
v___f_5660_ = lean_alloc_closure((void*)(lp_ariori_edgeIndex___lam__1___boxed), 2, 1);
lean_closure_set(v___f_5660_, 0, v_e_5656_);
v___x_5661_ = l_List_findIdx_x3f___redArg(v___f_5660_, v___x_5658_);
if (lean_obj_tag(v___x_5661_) == 0)
{
lean_object* v___x_5662_; 
v___x_5662_ = lean_unsigned_to_nat(99u);
return v___x_5662_;
}
else
{
lean_object* v_val_5663_; 
v_val_5663_ = lean_ctor_get(v___x_5661_, 0);
lean_inc(v_val_5663_);
lean_dec_ref(v___x_5661_);
return v_val_5663_;
}
}
else
{
lean_object* v_val_5664_; 
lean_dec_ref(v_e_5656_);
v_val_5664_ = lean_ctor_get(v___x_5659_, 0);
lean_inc(v_val_5664_);
lean_dec_ref(v___x_5659_);
return v_val_5664_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00triangleAsEdgeVector_spec__0(lean_object* v_e1_5665_, lean_object* v_e2_5666_, lean_object* v_e3_5667_, lean_object* v_a_5668_, lean_object* v_a_5669_){
_start:
{
if (lean_obj_tag(v_a_5668_) == 0)
{
lean_object* v___x_5670_; 
v___x_5670_ = l_List_reverse___redArg(v_a_5669_);
return v___x_5670_;
}
else
{
lean_object* v_head_5671_; lean_object* v_tail_5672_; lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5688_; 
v_head_5671_ = lean_ctor_get(v_a_5668_, 0);
v_tail_5672_ = lean_ctor_get(v_a_5668_, 1);
v_isSharedCheck_5688_ = !lean_is_exclusive(v_a_5668_);
if (v_isSharedCheck_5688_ == 0)
{
v___x_5674_ = v_a_5668_;
v_isShared_5675_ = v_isSharedCheck_5688_;
goto v_resetjp_5673_;
}
else
{
lean_inc(v_tail_5672_);
lean_inc(v_head_5671_);
lean_dec(v_a_5668_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5688_;
goto v_resetjp_5673_;
}
v_resetjp_5673_:
{
lean_object* v___y_5677_; uint8_t v___x_5684_; 
v___x_5684_ = lean_nat_dec_eq(v_head_5671_, v_e1_5665_);
if (v___x_5684_ == 0)
{
uint8_t v___x_5685_; 
v___x_5685_ = lean_nat_dec_eq(v_head_5671_, v_e2_5666_);
if (v___x_5685_ == 0)
{
uint8_t v___x_5686_; 
v___x_5686_ = lean_nat_dec_eq(v_head_5671_, v_e3_5667_);
lean_dec(v_head_5671_);
if (v___x_5686_ == 0)
{
lean_object* v___x_5687_; 
v___x_5687_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___y_5677_ = v___x_5687_;
goto v___jp_5676_;
}
else
{
goto v___jp_5682_;
}
}
else
{
lean_dec(v_head_5671_);
goto v___jp_5682_;
}
}
else
{
lean_dec(v_head_5671_);
goto v___jp_5682_;
}
v___jp_5676_:
{
lean_object* v___x_5679_; 
lean_inc(v___y_5677_);
if (v_isShared_5675_ == 0)
{
lean_ctor_set(v___x_5674_, 1, v_a_5669_);
lean_ctor_set(v___x_5674_, 0, v___y_5677_);
v___x_5679_ = v___x_5674_;
goto v_reusejp_5678_;
}
else
{
lean_object* v_reuseFailAlloc_5681_; 
v_reuseFailAlloc_5681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5681_, 0, v___y_5677_);
lean_ctor_set(v_reuseFailAlloc_5681_, 1, v_a_5669_);
v___x_5679_ = v_reuseFailAlloc_5681_;
goto v_reusejp_5678_;
}
v_reusejp_5678_:
{
v_a_5668_ = v_tail_5672_;
v_a_5669_ = v___x_5679_;
goto _start;
}
}
v___jp_5682_:
{
lean_object* v___x_5683_; 
v___x_5683_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___y_5677_ = v___x_5683_;
goto v___jp_5676_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_mapTR_loop___at___00triangleAsEdgeVector_spec__0___boxed(lean_object* v_e1_5689_, lean_object* v_e2_5690_, lean_object* v_e3_5691_, lean_object* v_a_5692_, lean_object* v_a_5693_){
_start:
{
lean_object* v_res_5694_; 
v_res_5694_ = lp_ariori_List_mapTR_loop___at___00triangleAsEdgeVector_spec__0(v_e1_5689_, v_e2_5690_, v_e3_5691_, v_a_5692_, v_a_5693_);
lean_dec(v_e3_5691_);
lean_dec(v_e2_5690_);
lean_dec(v_e1_5689_);
return v_res_5694_;
}
}
static lean_object* _init_lp_ariori_triangleAsEdgeVector___closed__0(void){
_start:
{
lean_object* v___x_5695_; lean_object* v___x_5696_; 
v___x_5695_ = lean_unsigned_to_nat(21u);
v___x_5696_ = l_List_range(v___x_5695_);
return v___x_5696_;
}
}
LEAN_EXPORT lean_object* lp_ariori_triangleAsEdgeVector(lean_object* v_t_5697_){
_start:
{
lean_object* v_snd_5698_; lean_object* v_fst_5699_; lean_object* v___x_5701_; uint8_t v_isShared_5702_; uint8_t v_isSharedCheck_5715_; 
v_snd_5698_ = lean_ctor_get(v_t_5697_, 1);
v_fst_5699_ = lean_ctor_get(v_t_5697_, 0);
v_isSharedCheck_5715_ = !lean_is_exclusive(v_t_5697_);
if (v_isSharedCheck_5715_ == 0)
{
v___x_5701_ = v_t_5697_;
v_isShared_5702_ = v_isSharedCheck_5715_;
goto v_resetjp_5700_;
}
else
{
lean_inc(v_snd_5698_);
lean_inc(v_fst_5699_);
lean_dec(v_t_5697_);
v___x_5701_ = lean_box(0);
v_isShared_5702_ = v_isSharedCheck_5715_;
goto v_resetjp_5700_;
}
v_resetjp_5700_:
{
lean_object* v_fst_5703_; lean_object* v_snd_5704_; lean_object* v___x_5706_; 
v_fst_5703_ = lean_ctor_get(v_snd_5698_, 0);
v_snd_5704_ = lean_ctor_get(v_snd_5698_, 1);
lean_inc(v_snd_5704_);
lean_inc(v_fst_5703_);
lean_inc(v_fst_5699_);
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 1, v_fst_5703_);
v___x_5706_ = v___x_5701_;
goto v_reusejp_5705_;
}
else
{
lean_object* v_reuseFailAlloc_5714_; 
v_reuseFailAlloc_5714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5714_, 0, v_fst_5699_);
lean_ctor_set(v_reuseFailAlloc_5714_, 1, v_fst_5703_);
v___x_5706_ = v_reuseFailAlloc_5714_;
goto v_reusejp_5705_;
}
v_reusejp_5705_:
{
lean_object* v_e1_5707_; lean_object* v_e2_5708_; lean_object* v___x_5709_; lean_object* v_e3_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; 
v_e1_5707_ = lp_ariori_edgeIndex(v___x_5706_);
v_e2_5708_ = lp_ariori_edgeIndex(v_snd_5698_);
v___x_5709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5709_, 0, v_snd_5704_);
lean_ctor_set(v___x_5709_, 1, v_fst_5699_);
v_e3_5710_ = lp_ariori_edgeIndex(v___x_5709_);
v___x_5711_ = lean_obj_once(&lp_ariori_triangleAsEdgeVector___closed__0, &lp_ariori_triangleAsEdgeVector___closed__0_once, _init_lp_ariori_triangleAsEdgeVector___closed__0);
v___x_5712_ = lean_box(0);
v___x_5713_ = lp_ariori_List_mapTR_loop___at___00triangleAsEdgeVector_spec__0(v_e1_5707_, v_e2_5708_, v_e3_5710_, v___x_5711_, v___x_5712_);
lean_dec(v_e3_5710_);
lean_dec(v_e2_5708_);
lean_dec(v_e1_5707_);
return v___x_5713_;
}
}
}
}
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__0(lean_object* v___x_5716_, lean_object* v_v1_5717_, lean_object* v_a_5718_, lean_object* v_v2_5719_, lean_object* v_b_5720_, lean_object* v_v3_5721_, lean_object* v_c_5722_, lean_object* v___x_5723_, lean_object* v_i_5724_){
_start:
{
lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; uint8_t v___x_5733_; 
lean_inc_n(v_i_5724_, 2);
v___x_5725_ = l_List_get_x21Internal___redArg(v___x_5716_, v_v1_5717_, v_i_5724_);
v___x_5726_ = lean_int_mul(v_a_5718_, v___x_5725_);
lean_dec(v___x_5725_);
v___x_5727_ = l_List_get_x21Internal___redArg(v___x_5716_, v_v2_5719_, v_i_5724_);
v___x_5728_ = lean_int_mul(v_b_5720_, v___x_5727_);
lean_dec(v___x_5727_);
v___x_5729_ = lean_int_add(v___x_5726_, v___x_5728_);
lean_dec(v___x_5728_);
lean_dec(v___x_5726_);
v___x_5730_ = l_List_get_x21Internal___redArg(v___x_5716_, v_v3_5721_, v_i_5724_);
v___x_5731_ = lean_int_mul(v_c_5722_, v___x_5730_);
lean_dec(v___x_5730_);
v___x_5732_ = lean_int_add(v___x_5729_, v___x_5731_);
lean_dec(v___x_5731_);
lean_dec(v___x_5729_);
v___x_5733_ = lean_int_dec_eq(v___x_5732_, v___x_5723_);
lean_dec(v___x_5732_);
return v___x_5733_;
}
}
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__0___boxed(lean_object* v___x_5734_, lean_object* v_v1_5735_, lean_object* v_a_5736_, lean_object* v_v2_5737_, lean_object* v_b_5738_, lean_object* v_v3_5739_, lean_object* v_c_5740_, lean_object* v___x_5741_, lean_object* v_i_5742_){
_start:
{
uint8_t v_res_5743_; lean_object* v_r_5744_; 
v_res_5743_ = lp_ariori_trianglesIndependent___lam__0(v___x_5734_, v_v1_5735_, v_a_5736_, v_v2_5737_, v_b_5738_, v_v3_5739_, v_c_5740_, v___x_5741_, v_i_5742_);
lean_dec(v___x_5741_);
lean_dec(v_c_5740_);
lean_dec(v_v3_5739_);
lean_dec(v_b_5738_);
lean_dec(v_v2_5737_);
lean_dec(v_a_5736_);
lean_dec(v_v1_5735_);
lean_dec(v___x_5734_);
v_r_5744_ = lean_box(v_res_5743_);
return v_r_5744_;
}
}
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__1(lean_object* v___x_5745_, lean_object* v_v1_5746_, lean_object* v_a_5747_, lean_object* v_v2_5748_, lean_object* v_b_5749_, lean_object* v_v3_5750_, lean_object* v___x_5751_, lean_object* v_c_5752_){
_start:
{
lean_object* v___f_5753_; lean_object* v___x_5754_; uint8_t v___x_5755_; 
lean_inc(v___x_5751_);
lean_inc(v_c_5752_);
lean_inc(v_b_5749_);
lean_inc(v_a_5747_);
v___f_5753_ = lean_alloc_closure((void*)(lp_ariori_trianglesIndependent___lam__0___boxed), 9, 8);
lean_closure_set(v___f_5753_, 0, v___x_5745_);
lean_closure_set(v___f_5753_, 1, v_v1_5746_);
lean_closure_set(v___f_5753_, 2, v_a_5747_);
lean_closure_set(v___f_5753_, 3, v_v2_5748_);
lean_closure_set(v___f_5753_, 4, v_b_5749_);
lean_closure_set(v___f_5753_, 5, v_v3_5750_);
lean_closure_set(v___f_5753_, 6, v_c_5752_);
lean_closure_set(v___f_5753_, 7, v___x_5751_);
v___x_5754_ = lean_obj_once(&lp_ariori_triangleAsEdgeVector___closed__0, &lp_ariori_triangleAsEdgeVector___closed__0_once, _init_lp_ariori_triangleAsEdgeVector___closed__0);
v___x_5755_ = l_List_all___redArg(v___x_5754_, v___f_5753_);
if (v___x_5755_ == 0)
{
uint8_t v___x_5756_; 
lean_dec(v_c_5752_);
lean_dec(v___x_5751_);
lean_dec(v_b_5749_);
lean_dec(v_a_5747_);
v___x_5756_ = 1;
return v___x_5756_;
}
else
{
uint8_t v___x_5757_; 
v___x_5757_ = lean_int_dec_eq(v_a_5747_, v___x_5751_);
lean_dec(v_a_5747_);
if (v___x_5757_ == 0)
{
lean_dec(v_c_5752_);
lean_dec(v___x_5751_);
lean_dec(v_b_5749_);
return v___x_5757_;
}
else
{
uint8_t v___x_5758_; 
v___x_5758_ = lean_int_dec_eq(v_b_5749_, v___x_5751_);
lean_dec(v_b_5749_);
if (v___x_5758_ == 0)
{
lean_dec(v_c_5752_);
lean_dec(v___x_5751_);
return v___x_5758_;
}
else
{
uint8_t v___x_5759_; 
v___x_5759_ = lean_int_dec_eq(v_c_5752_, v___x_5751_);
lean_dec(v___x_5751_);
lean_dec(v_c_5752_);
if (v___x_5759_ == 0)
{
return v___x_5759_;
}
else
{
return v___x_5757_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__1___boxed(lean_object* v___x_5760_, lean_object* v_v1_5761_, lean_object* v_a_5762_, lean_object* v_v2_5763_, lean_object* v_b_5764_, lean_object* v_v3_5765_, lean_object* v___x_5766_, lean_object* v_c_5767_){
_start:
{
uint8_t v_res_5768_; lean_object* v_r_5769_; 
v_res_5768_ = lp_ariori_trianglesIndependent___lam__1(v___x_5760_, v_v1_5761_, v_a_5762_, v_v2_5763_, v_b_5764_, v_v3_5765_, v___x_5766_, v_c_5767_);
v_r_5769_ = lean_box(v_res_5768_);
return v_r_5769_;
}
}
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__2(lean_object* v___x_5770_, lean_object* v_v1_5771_, lean_object* v_a_5772_, lean_object* v_v2_5773_, lean_object* v_v3_5774_, lean_object* v___x_5775_, lean_object* v_checkRange_5776_, lean_object* v_b_5777_){
_start:
{
lean_object* v___f_5778_; uint8_t v___x_5779_; 
v___f_5778_ = lean_alloc_closure((void*)(lp_ariori_trianglesIndependent___lam__1___boxed), 8, 7);
lean_closure_set(v___f_5778_, 0, v___x_5770_);
lean_closure_set(v___f_5778_, 1, v_v1_5771_);
lean_closure_set(v___f_5778_, 2, v_a_5772_);
lean_closure_set(v___f_5778_, 3, v_v2_5773_);
lean_closure_set(v___f_5778_, 4, v_b_5777_);
lean_closure_set(v___f_5778_, 5, v_v3_5774_);
lean_closure_set(v___f_5778_, 6, v___x_5775_);
v___x_5779_ = l_List_all___redArg(v_checkRange_5776_, v___f_5778_);
return v___x_5779_;
}
}
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__2___boxed(lean_object* v___x_5780_, lean_object* v_v1_5781_, lean_object* v_a_5782_, lean_object* v_v2_5783_, lean_object* v_v3_5784_, lean_object* v___x_5785_, lean_object* v_checkRange_5786_, lean_object* v_b_5787_){
_start:
{
uint8_t v_res_5788_; lean_object* v_r_5789_; 
v_res_5788_ = lp_ariori_trianglesIndependent___lam__2(v___x_5780_, v_v1_5781_, v_a_5782_, v_v2_5783_, v_v3_5784_, v___x_5785_, v_checkRange_5786_, v_b_5787_);
v_r_5789_ = lean_box(v_res_5788_);
return v_r_5789_;
}
}
LEAN_EXPORT uint8_t lp_ariori_trianglesIndependent___lam__3(lean_object* v___x_5790_, lean_object* v_v1_5791_, lean_object* v_v2_5792_, lean_object* v_v3_5793_, lean_object* v___x_5794_, lean_object* v_checkRange_5795_, lean_object* v_a_5796_){
_start:
{
lean_object* v___f_5797_; uint8_t v___x_5798_; 
lean_inc(v_checkRange_5795_);
v___f_5797_ = lean_alloc_closure((void*)(lp_ariori_trianglesIndependent___lam__2___boxed), 8, 7);
lean_closure_set(v___f_5797_, 0, v___x_5790_);
lean_closure_set(v___f_5797_, 1, v_v1_5791_);
lean_closure_set(v___f_5797_, 2, v_a_5796_);
lean_closure_set(v___f_5797_, 3, v_v2_5792_);
lean_closure_set(v___f_5797_, 4, v_v3_5793_);
lean_closure_set(v___f_5797_, 5, v___x_5794_);
lean_closure_set(v___f_5797_, 6, v_checkRange_5795_);
v___x_5798_ = l_List_all___redArg(v_checkRange_5795_, v___f_5797_);
return v___x_5798_;
}
}
LEAN_EXPORT lean_object* lp_ariori_trianglesIndependent___lam__3___boxed(lean_object* v___x_5799_, lean_object* v_v1_5800_, lean_object* v_v2_5801_, lean_object* v_v3_5802_, lean_object* v___x_5803_, lean_object* v_checkRange_5804_, lean_object* v_a_5805_){
_start:
{
uint8_t v_res_5806_; lean_object* v_r_5807_; 
v_res_5806_ = lp_ariori_trianglesIndependent___lam__3(v___x_5799_, v_v1_5800_, v_v2_5801_, v_v3_5802_, v___x_5803_, v_checkRange_5804_, v_a_5805_);
v_r_5807_ = lean_box(v_res_5806_);
return v_r_5807_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__2(void){
_start:
{
lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; lean_object* v___x_5819_; 
v___x_5816_ = lean_unsigned_to_nat(0u);
v___x_5817_ = lp_ariori_findTriangles;
v___x_5818_ = ((lean_object*)(lp_ariori_trianglesIndependent___closed__1));
v___x_5819_ = l_List_get_x21Internal___redArg(v___x_5818_, v___x_5817_, v___x_5816_);
return v___x_5819_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__3(void){
_start:
{
lean_object* v___x_5820_; lean_object* v_v1_5821_; 
v___x_5820_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__2, &lp_ariori_trianglesIndependent___closed__2_once, _init_lp_ariori_trianglesIndependent___closed__2);
v_v1_5821_ = lp_ariori_triangleAsEdgeVector(v___x_5820_);
return v_v1_5821_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__4(void){
_start:
{
lean_object* v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; 
v___x_5822_ = lean_unsigned_to_nat(1u);
v___x_5823_ = lp_ariori_findTriangles;
v___x_5824_ = ((lean_object*)(lp_ariori_trianglesIndependent___closed__1));
v___x_5825_ = l_List_get_x21Internal___redArg(v___x_5824_, v___x_5823_, v___x_5822_);
return v___x_5825_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__5(void){
_start:
{
lean_object* v___x_5826_; lean_object* v_v2_5827_; 
v___x_5826_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__4, &lp_ariori_trianglesIndependent___closed__4_once, _init_lp_ariori_trianglesIndependent___closed__4);
v_v2_5827_ = lp_ariori_triangleAsEdgeVector(v___x_5826_);
return v_v2_5827_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__6(void){
_start:
{
lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; 
v___x_5828_ = lean_unsigned_to_nat(2u);
v___x_5829_ = lp_ariori_findTriangles;
v___x_5830_ = ((lean_object*)(lp_ariori_trianglesIndependent___closed__1));
v___x_5831_ = l_List_get_x21Internal___redArg(v___x_5830_, v___x_5829_, v___x_5828_);
return v___x_5831_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__7(void){
_start:
{
lean_object* v___x_5832_; lean_object* v_v3_5833_; 
v___x_5832_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__6, &lp_ariori_trianglesIndependent___closed__6_once, _init_lp_ariori_trianglesIndependent___closed__6);
v_v3_5833_ = lp_ariori_triangleAsEdgeVector(v___x_5832_);
return v_v3_5833_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__8(void){
_start:
{
lean_object* v___x_5834_; lean_object* v___x_5835_; 
v___x_5834_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_5835_ = lean_int_neg(v___x_5834_);
return v___x_5835_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__9(void){
_start:
{
lean_object* v___x_5836_; lean_object* v___x_5837_; lean_object* v___x_5838_; 
v___x_5836_ = lean_box(0);
v___x_5837_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_5838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5838_, 0, v___x_5837_);
lean_ctor_set(v___x_5838_, 1, v___x_5836_);
return v___x_5838_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__10(void){
_start:
{
lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; 
v___x_5839_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__9, &lp_ariori_trianglesIndependent___closed__9_once, _init_lp_ariori_trianglesIndependent___closed__9);
v___x_5840_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_5841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5841_, 0, v___x_5840_);
lean_ctor_set(v___x_5841_, 1, v___x_5839_);
return v___x_5841_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__11(void){
_start:
{
lean_object* v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; 
v___x_5842_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__10, &lp_ariori_trianglesIndependent___closed__10_once, _init_lp_ariori_trianglesIndependent___closed__10);
v___x_5843_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_5844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5844_, 0, v___x_5843_);
lean_ctor_set(v___x_5844_, 1, v___x_5842_);
return v___x_5844_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__12(void){
_start:
{
lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; 
v___x_5845_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__11, &lp_ariori_trianglesIndependent___closed__11_once, _init_lp_ariori_trianglesIndependent___closed__11);
v___x_5846_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_5847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5847_, 0, v___x_5846_);
lean_ctor_set(v___x_5847_, 1, v___x_5845_);
return v___x_5847_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__13(void){
_start:
{
lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v_checkRange_5850_; 
v___x_5848_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__12, &lp_ariori_trianglesIndependent___closed__12_once, _init_lp_ariori_trianglesIndependent___closed__12);
v___x_5849_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__8, &lp_ariori_trianglesIndependent___closed__8_once, _init_lp_ariori_trianglesIndependent___closed__8);
v_checkRange_5850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_checkRange_5850_, 0, v___x_5849_);
lean_ctor_set(v_checkRange_5850_, 1, v___x_5848_);
return v_checkRange_5850_;
}
}
static lean_object* _init_lp_ariori_trianglesIndependent___closed__14(void){
_start:
{
lean_object* v_checkRange_5851_; lean_object* v___x_5852_; lean_object* v_v3_5853_; lean_object* v_v2_5854_; lean_object* v_v1_5855_; lean_object* v___x_5856_; lean_object* v___f_5857_; 
v_checkRange_5851_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__13, &lp_ariori_trianglesIndependent___closed__13_once, _init_lp_ariori_trianglesIndependent___closed__13);
v___x_5852_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v_v3_5853_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__7, &lp_ariori_trianglesIndependent___closed__7_once, _init_lp_ariori_trianglesIndependent___closed__7);
v_v2_5854_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__5, &lp_ariori_trianglesIndependent___closed__5_once, _init_lp_ariori_trianglesIndependent___closed__5);
v_v1_5855_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__3, &lp_ariori_trianglesIndependent___closed__3_once, _init_lp_ariori_trianglesIndependent___closed__3);
v___x_5856_ = l_Int_instInhabited;
v___f_5857_ = lean_alloc_closure((void*)(lp_ariori_trianglesIndependent___lam__3___boxed), 7, 6);
lean_closure_set(v___f_5857_, 0, v___x_5856_);
lean_closure_set(v___f_5857_, 1, v_v1_5855_);
lean_closure_set(v___f_5857_, 2, v_v2_5854_);
lean_closure_set(v___f_5857_, 3, v_v3_5853_);
lean_closure_set(v___f_5857_, 4, v___x_5852_);
lean_closure_set(v___f_5857_, 5, v_checkRange_5851_);
return v___f_5857_;
}
}
static uint8_t _init_lp_ariori_trianglesIndependent___closed__15(void){
_start:
{
lean_object* v___f_5858_; lean_object* v_checkRange_5859_; uint8_t v___x_5860_; 
v___f_5858_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__14, &lp_ariori_trianglesIndependent___closed__14_once, _init_lp_ariori_trianglesIndependent___closed__14);
v_checkRange_5859_ = lean_obj_once(&lp_ariori_trianglesIndependent___closed__13, &lp_ariori_trianglesIndependent___closed__13_once, _init_lp_ariori_trianglesIndependent___closed__13);
v___x_5860_ = l_List_all___redArg(v_checkRange_5859_, v___f_5858_);
return v___x_5860_;
}
}
static uint8_t _init_lp_ariori_trianglesIndependent(void){
_start:
{
uint8_t v___x_5861_; 
v___x_5861_ = lean_uint8_once(&lp_ariori_trianglesIndependent___closed__15, &lp_ariori_trianglesIndependent___closed__15_once, _init_lp_ariori_trianglesIndependent___closed__15);
return v___x_5861_;
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionScale(lean_object* v_r_5862_){
_start:
{
lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; lean_object* v___x_5866_; 
v___x_5863_ = lp_ariori_VesicaNumber_sqrt3;
v___x_5864_ = lp_ariori_VesicaNumber_mul(v_r_5862_, v___x_5863_);
v___x_5865_ = lean_obj_once(&lp_ariori_gen1Foundation___closed__0, &lp_ariori_gen1Foundation___closed__0_once, _init_lp_ariori_gen1Foundation___closed__0);
v___x_5866_ = lp_ariori_VesicaNumber_mul(v___x_5864_, v___x_5865_);
lean_dec_ref(v___x_5864_);
return v___x_5866_;
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionScale___boxed(lean_object* v_r_5867_){
_start:
{
lean_object* v_res_5868_; 
v_res_5868_ = lp_ariori_recursionScale(v_r_5867_);
lean_dec_ref(v_r_5867_);
return v_res_5868_;
}
}
static lean_object* _init_lp_ariori_recursionInverse___closed__0(void){
_start:
{
lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; 
v___x_5869_ = lean_obj_once(&lp_ariori_VesicaNumber_mul___closed__0, &lp_ariori_VesicaNumber_mul___closed__0_once, _init_lp_ariori_VesicaNumber_mul___closed__0);
v___x_5870_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_5871_ = lean_obj_once(&lp_ariori_VesicaNumber_sq___closed__0, &lp_ariori_VesicaNumber_sq___closed__0_once, _init_lp_ariori_VesicaNumber_sq___closed__0);
v___x_5872_ = lp_ariori_VesicaNumber_mk_x27(v___x_5871_, v___x_5870_, v___x_5869_);
return v___x_5872_;
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionInverse(lean_object* v_r_5873_){
_start:
{
lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; 
v___x_5874_ = lp_ariori_VesicaNumber_sqrt3;
v___x_5875_ = lp_ariori_VesicaNumber_mul(v_r_5873_, v___x_5874_);
v___x_5876_ = lean_obj_once(&lp_ariori_recursionInverse___closed__0, &lp_ariori_recursionInverse___closed__0_once, _init_lp_ariori_recursionInverse___closed__0);
v___x_5877_ = lp_ariori_VesicaNumber_mul(v___x_5875_, v___x_5876_);
lean_dec_ref(v___x_5875_);
return v___x_5877_;
}
}
LEAN_EXPORT lean_object* lp_ariori_recursionInverse___boxed(lean_object* v_r_5878_){
_start:
{
lean_object* v_res_5879_; 
v_res_5879_ = lp_ariori_recursionInverse(v_r_5878_);
lean_dec_ref(v_r_5878_);
return v_res_5879_;
}
}
LEAN_EXPORT lean_object* lp_ariori_expansionCount(lean_object* v_gen_5880_){
_start:
{
lean_object* v___x_5881_; uint8_t v___x_5882_; 
v___x_5881_ = lean_unsigned_to_nat(0u);
v___x_5882_ = lean_nat_dec_eq(v_gen_5880_, v___x_5881_);
if (v___x_5882_ == 0)
{
lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; 
v___x_5883_ = lean_unsigned_to_nat(17u);
v___x_5884_ = lean_unsigned_to_nat(21u);
v___x_5885_ = lean_nat_pow(v___x_5884_, v_gen_5880_);
v___x_5886_ = lean_nat_mul(v___x_5883_, v___x_5885_);
lean_dec(v___x_5885_);
return v___x_5886_;
}
else
{
lean_object* v___x_5887_; 
v___x_5887_ = lean_unsigned_to_nat(17u);
return v___x_5887_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_expansionCount___boxed(lean_object* v_gen_5888_){
_start:
{
lean_object* v_res_5889_; 
v_res_5889_ = lp_ariori_expansionCount(v_gen_5888_);
lean_dec(v_gen_5888_);
return v_res_5889_;
}
}
LEAN_EXPORT uint8_t lp_ariori_isPositiveLength(lean_object* v_v_5890_){
_start:
{
lean_object* v___x_5891_; uint8_t v___x_5892_; 
v___x_5891_ = lp_ariori_VesicaNumber_zero;
v___x_5892_ = lp_ariori_vGt(v_v_5890_, v___x_5891_);
return v___x_5892_;
}
}
LEAN_EXPORT lean_object* lp_ariori_isPositiveLength___boxed(lean_object* v_v_5893_){
_start:
{
uint8_t v_res_5894_; lean_object* v_r_5895_; 
v_res_5894_ = lp_ariori_isPositiveLength(v_v_5893_);
lean_dec_ref(v_v_5893_);
v_r_5895_ = lean_box(v_res_5894_);
return v_r_5895_;
}
}
LEAN_EXPORT lean_object* lp_ariori_B1(lean_object* v_eIdx_5896_, uint8_t v_n_5897_){
_start:
{
lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v_fst_5901_; lean_object* v_snd_5902_; uint8_t v___x_5903_; uint8_t v___x_5904_; 
v___x_5898_ = ((lean_object*)(lp_ariori_trianglesIndependent___closed__0));
v___x_5899_ = ((lean_object*)(lp_ariori_gen1Edges));
v___x_5900_ = l_List_get_x21Internal___redArg(v___x_5898_, v___x_5899_, v_eIdx_5896_);
v_fst_5901_ = lean_ctor_get(v___x_5900_, 0);
lean_inc(v_fst_5901_);
v_snd_5902_ = lean_ctor_get(v___x_5900_, 1);
lean_inc(v_snd_5902_);
lean_dec(v___x_5900_);
v___x_5903_ = lean_unbox(v_snd_5902_);
lean_dec(v_snd_5902_);
v___x_5904_ = lp_ariori_instBEqNodeLabel_beq(v_n_5897_, v___x_5903_);
if (v___x_5904_ == 0)
{
uint8_t v___x_5905_; uint8_t v___x_5906_; 
v___x_5905_ = lean_unbox(v_fst_5901_);
lean_dec(v_fst_5901_);
v___x_5906_ = lp_ariori_instBEqNodeLabel_beq(v_n_5897_, v___x_5905_);
if (v___x_5906_ == 0)
{
lean_object* v___x_5907_; 
v___x_5907_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
return v___x_5907_;
}
else
{
lean_object* v___x_5908_; 
v___x_5908_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
return v___x_5908_;
}
}
else
{
lean_object* v___x_5909_; 
lean_dec(v_fst_5901_);
v___x_5909_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
return v___x_5909_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_B1___boxed(lean_object* v_eIdx_5910_, lean_object* v_n_5911_){
_start:
{
uint8_t v_n_boxed_5912_; lean_object* v_res_5913_; 
v_n_boxed_5912_ = lean_unbox(v_n_5911_);
v_res_5913_ = lp_ariori_B1(v_eIdx_5910_, v_n_boxed_5912_);
return v_res_5913_;
}
}
LEAN_EXPORT uint8_t lp_ariori_B2___lam__0(lean_object* v_eIdx_5914_, lean_object* v_x_5915_){
_start:
{
lean_object* v_fst_5916_; uint8_t v___x_5917_; 
v_fst_5916_ = lean_ctor_get(v_x_5915_, 0);
v___x_5917_ = lean_nat_dec_eq(v_fst_5916_, v_eIdx_5914_);
return v___x_5917_;
}
}
LEAN_EXPORT lean_object* lp_ariori_B2___lam__0___boxed(lean_object* v_eIdx_5918_, lean_object* v_x_5919_){
_start:
{
uint8_t v_res_5920_; lean_object* v_r_5921_; 
v_res_5920_ = lp_ariori_B2___lam__0(v_eIdx_5918_, v_x_5919_);
lean_dec_ref(v_x_5919_);
lean_dec(v_eIdx_5918_);
v_r_5921_ = lean_box(v_res_5920_);
return v_r_5921_;
}
}
static lean_object* _init_lp_ariori_B2___closed__0(void){
_start:
{
lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; 
v___x_5922_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_5923_ = lean_unsigned_to_nat(8u);
v___x_5924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5924_, 0, v___x_5923_);
lean_ctor_set(v___x_5924_, 1, v___x_5922_);
return v___x_5924_;
}
}
static lean_object* _init_lp_ariori_B2___closed__1(void){
_start:
{
lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; 
v___x_5925_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_5926_ = lean_unsigned_to_nat(5u);
v___x_5927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5927_, 0, v___x_5926_);
lean_ctor_set(v___x_5927_, 1, v___x_5925_);
return v___x_5927_;
}
}
static lean_object* _init_lp_ariori_B2___closed__2(void){
_start:
{
lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; 
v___x_5928_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_5929_ = lean_unsigned_to_nat(0u);
v___x_5930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5930_, 0, v___x_5929_);
lean_ctor_set(v___x_5930_, 1, v___x_5928_);
return v___x_5930_;
}
}
static lean_object* _init_lp_ariori_B2___closed__3(void){
_start:
{
lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; 
v___x_5931_ = lean_box(0);
v___x_5932_ = lean_obj_once(&lp_ariori_B2___closed__2, &lp_ariori_B2___closed__2_once, _init_lp_ariori_B2___closed__2);
v___x_5933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5933_, 0, v___x_5932_);
lean_ctor_set(v___x_5933_, 1, v___x_5931_);
return v___x_5933_;
}
}
static lean_object* _init_lp_ariori_B2___closed__4(void){
_start:
{
lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; 
v___x_5934_ = lean_obj_once(&lp_ariori_B2___closed__3, &lp_ariori_B2___closed__3_once, _init_lp_ariori_B2___closed__3);
v___x_5935_ = lean_obj_once(&lp_ariori_B2___closed__1, &lp_ariori_B2___closed__1_once, _init_lp_ariori_B2___closed__1);
v___x_5936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5936_, 0, v___x_5935_);
lean_ctor_set(v___x_5936_, 1, v___x_5934_);
return v___x_5936_;
}
}
static lean_object* _init_lp_ariori_B2___closed__5(void){
_start:
{
lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; 
v___x_5937_ = lean_obj_once(&lp_ariori_B2___closed__4, &lp_ariori_B2___closed__4_once, _init_lp_ariori_B2___closed__4);
v___x_5938_ = lean_obj_once(&lp_ariori_B2___closed__0, &lp_ariori_B2___closed__0_once, _init_lp_ariori_B2___closed__0);
v___x_5939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5939_, 0, v___x_5938_);
lean_ctor_set(v___x_5939_, 1, v___x_5937_);
return v___x_5939_;
}
}
static lean_object* _init_lp_ariori_B2___closed__6(void){
_start:
{
lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; 
v___x_5940_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_5941_ = lean_unsigned_to_nat(10u);
v___x_5942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5942_, 0, v___x_5941_);
lean_ctor_set(v___x_5942_, 1, v___x_5940_);
return v___x_5942_;
}
}
static lean_object* _init_lp_ariori_B2___closed__7(void){
_start:
{
lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; 
v___x_5943_ = lean_obj_once(&lp_ariori_VesicaNumber_formatExact___closed__5, &lp_ariori_VesicaNumber_formatExact___closed__5_once, _init_lp_ariori_VesicaNumber_formatExact___closed__5);
v___x_5944_ = lean_unsigned_to_nat(6u);
v___x_5945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5945_, 0, v___x_5944_);
lean_ctor_set(v___x_5945_, 1, v___x_5943_);
return v___x_5945_;
}
}
static lean_object* _init_lp_ariori_B2___closed__8(void){
_start:
{
lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; 
v___x_5946_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_5947_ = lean_unsigned_to_nat(7u);
v___x_5948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5948_, 0, v___x_5947_);
lean_ctor_set(v___x_5948_, 1, v___x_5946_);
return v___x_5948_;
}
}
static lean_object* _init_lp_ariori_B2___closed__9(void){
_start:
{
lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; 
v___x_5949_ = lean_box(0);
v___x_5950_ = lean_obj_once(&lp_ariori_B2___closed__8, &lp_ariori_B2___closed__8_once, _init_lp_ariori_B2___closed__8);
v___x_5951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5951_, 0, v___x_5950_);
lean_ctor_set(v___x_5951_, 1, v___x_5949_);
return v___x_5951_;
}
}
static lean_object* _init_lp_ariori_B2___closed__10(void){
_start:
{
lean_object* v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; 
v___x_5952_ = lean_obj_once(&lp_ariori_B2___closed__9, &lp_ariori_B2___closed__9_once, _init_lp_ariori_B2___closed__9);
v___x_5953_ = lean_obj_once(&lp_ariori_B2___closed__7, &lp_ariori_B2___closed__7_once, _init_lp_ariori_B2___closed__7);
v___x_5954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5954_, 0, v___x_5953_);
lean_ctor_set(v___x_5954_, 1, v___x_5952_);
return v___x_5954_;
}
}
static lean_object* _init_lp_ariori_B2___closed__11(void){
_start:
{
lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; 
v___x_5955_ = lean_obj_once(&lp_ariori_B2___closed__10, &lp_ariori_B2___closed__10_once, _init_lp_ariori_B2___closed__10);
v___x_5956_ = lean_obj_once(&lp_ariori_B2___closed__6, &lp_ariori_B2___closed__6_once, _init_lp_ariori_B2___closed__6);
v___x_5957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5957_, 0, v___x_5956_);
lean_ctor_set(v___x_5957_, 1, v___x_5955_);
return v___x_5957_;
}
}
static lean_object* _init_lp_ariori_B2___closed__12(void){
_start:
{
lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; 
v___x_5958_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_5959_ = lean_unsigned_to_nat(11u);
v___x_5960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5959_);
lean_ctor_set(v___x_5960_, 1, v___x_5958_);
return v___x_5960_;
}
}
static lean_object* _init_lp_ariori_B2___closed__13(void){
_start:
{
lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; 
v___x_5961_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_5962_ = lean_unsigned_to_nat(4u);
v___x_5963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5963_, 0, v___x_5962_);
lean_ctor_set(v___x_5963_, 1, v___x_5961_);
return v___x_5963_;
}
}
static lean_object* _init_lp_ariori_B2___closed__14(void){
_start:
{
lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; 
v___x_5964_ = lean_obj_once(&lp_ariori_B2___closed__3, &lp_ariori_B2___closed__3_once, _init_lp_ariori_B2___closed__3);
v___x_5965_ = lean_obj_once(&lp_ariori_B2___closed__13, &lp_ariori_B2___closed__13_once, _init_lp_ariori_B2___closed__13);
v___x_5966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5965_);
lean_ctor_set(v___x_5966_, 1, v___x_5964_);
return v___x_5966_;
}
}
static lean_object* _init_lp_ariori_B2___closed__15(void){
_start:
{
lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; 
v___x_5967_ = lean_obj_once(&lp_ariori_B2___closed__14, &lp_ariori_B2___closed__14_once, _init_lp_ariori_B2___closed__14);
v___x_5968_ = lean_obj_once(&lp_ariori_B2___closed__12, &lp_ariori_B2___closed__12_once, _init_lp_ariori_B2___closed__12);
v___x_5969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5969_, 0, v___x_5968_);
lean_ctor_set(v___x_5969_, 1, v___x_5967_);
return v___x_5969_;
}
}
LEAN_EXPORT lean_object* lp_ariori_B2(lean_object* v_eIdx_5970_, lean_object* v_tIdx_5971_){
_start:
{
lean_object* v___f_5972_; lean_object* v___x_5973_; lean_object* v___y_5975_; uint8_t v___x_5980_; 
v___f_5972_ = lean_alloc_closure((void*)(lp_ariori_B2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5972_, 0, v_eIdx_5970_);
v___x_5973_ = lean_unsigned_to_nat(0u);
v___x_5980_ = lean_nat_dec_eq(v_tIdx_5971_, v___x_5973_);
if (v___x_5980_ == 0)
{
lean_object* v___x_5981_; uint8_t v___x_5982_; 
v___x_5981_ = lean_unsigned_to_nat(1u);
v___x_5982_ = lean_nat_dec_eq(v_tIdx_5971_, v___x_5981_);
if (v___x_5982_ == 0)
{
lean_object* v___x_5983_; uint8_t v___x_5984_; 
v___x_5983_ = lean_unsigned_to_nat(2u);
v___x_5984_ = lean_nat_dec_eq(v_tIdx_5971_, v___x_5983_);
if (v___x_5984_ == 0)
{
lean_object* v___x_5985_; 
v___x_5985_ = lean_box(0);
v___y_5975_ = v___x_5985_;
goto v___jp_5974_;
}
else
{
lean_object* v___x_5986_; 
v___x_5986_ = lean_obj_once(&lp_ariori_B2___closed__5, &lp_ariori_B2___closed__5_once, _init_lp_ariori_B2___closed__5);
v___y_5975_ = v___x_5986_;
goto v___jp_5974_;
}
}
else
{
lean_object* v___x_5987_; 
v___x_5987_ = lean_obj_once(&lp_ariori_B2___closed__11, &lp_ariori_B2___closed__11_once, _init_lp_ariori_B2___closed__11);
v___y_5975_ = v___x_5987_;
goto v___jp_5974_;
}
}
else
{
lean_object* v___x_5988_; 
v___x_5988_ = lean_obj_once(&lp_ariori_B2___closed__15, &lp_ariori_B2___closed__15_once, _init_lp_ariori_B2___closed__15);
v___y_5975_ = v___x_5988_;
goto v___jp_5974_;
}
v___jp_5974_:
{
lean_object* v___x_5976_; 
lean_inc(v___y_5975_);
v___x_5976_ = l_List_find_x3f___redArg(v___f_5972_, v___y_5975_);
if (lean_obj_tag(v___x_5976_) == 0)
{
lean_object* v___x_5977_; 
v___x_5977_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
return v___x_5977_;
}
else
{
lean_object* v_val_5978_; lean_object* v_snd_5979_; 
v_val_5978_ = lean_ctor_get(v___x_5976_, 0);
lean_inc(v_val_5978_);
lean_dec_ref(v___x_5976_);
v_snd_5979_ = lean_ctor_get(v_val_5978_, 1);
lean_inc(v_snd_5979_);
lean_dec(v_val_5978_);
return v_snd_5979_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_B2___boxed(lean_object* v_eIdx_5989_, lean_object* v_tIdx_5990_){
_start:
{
lean_object* v_res_5991_; 
v_res_5991_ = lp_ariori_B2(v_eIdx_5989_, v_tIdx_5990_);
lean_dec(v_tIdx_5990_);
return v_res_5991_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00boundary__of__boundary_spec__0(uint8_t v_n_5992_, lean_object* v_tIdx_5993_, lean_object* v_x_5994_, lean_object* v_x_5995_){
_start:
{
if (lean_obj_tag(v_x_5995_) == 0)
{
return v_x_5994_;
}
else
{
lean_object* v_head_5996_; lean_object* v_tail_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; 
v_head_5996_ = lean_ctor_get(v_x_5995_, 0);
lean_inc_n(v_head_5996_, 2);
v_tail_5997_ = lean_ctor_get(v_x_5995_, 1);
lean_inc(v_tail_5997_);
lean_dec_ref(v_x_5995_);
v___x_5998_ = lp_ariori_B1(v_head_5996_, v_n_5992_);
v___x_5999_ = lp_ariori_B2(v_head_5996_, v_tIdx_5993_);
v___x_6000_ = lean_int_mul(v___x_5998_, v___x_5999_);
lean_dec(v___x_5999_);
lean_dec(v___x_5998_);
v___x_6001_ = lean_int_add(v_x_5994_, v___x_6000_);
lean_dec(v___x_6000_);
lean_dec(v_x_5994_);
v_x_5994_ = v___x_6001_;
v_x_5995_ = v_tail_5997_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00boundary__of__boundary_spec__0___boxed(lean_object* v_n_6003_, lean_object* v_tIdx_6004_, lean_object* v_x_6005_, lean_object* v_x_6006_){
_start:
{
uint8_t v_n_boxed_6007_; lean_object* v_res_6008_; 
v_n_boxed_6007_ = lean_unbox(v_n_6003_);
v_res_6008_ = lp_ariori_List_foldl___at___00boundary__of__boundary_spec__0(v_n_boxed_6007_, v_tIdx_6004_, v_x_6005_, v_x_6006_);
lean_dec(v_tIdx_6004_);
return v_res_6008_;
}
}
LEAN_EXPORT lean_object* lp_ariori_boundary__of__boundary(uint8_t v_n_6009_, lean_object* v_tIdx_6010_){
_start:
{
lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; 
v___x_6011_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_6012_ = lean_obj_once(&lp_ariori_triangleAsEdgeVector___closed__0, &lp_ariori_triangleAsEdgeVector___closed__0_once, _init_lp_ariori_triangleAsEdgeVector___closed__0);
v___x_6013_ = lp_ariori_List_foldl___at___00boundary__of__boundary_spec__0(v_n_6009_, v_tIdx_6010_, v___x_6011_, v___x_6012_);
return v___x_6013_;
}
}
LEAN_EXPORT lean_object* lp_ariori_boundary__of__boundary___boxed(lean_object* v_n_6014_, lean_object* v_tIdx_6015_){
_start:
{
uint8_t v_n_boxed_6016_; lean_object* v_res_6017_; 
v_n_boxed_6016_ = lean_unbox(v_n_6014_);
v_res_6017_ = lp_ariori_boundary__of__boundary(v_n_boxed_6016_, v_tIdx_6015_);
lean_dec(v_tIdx_6015_);
return v_res_6017_;
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00HodgeLaplacian2_spec__0(lean_object* v_t1_6018_, lean_object* v_t2_6019_, lean_object* v_x_6020_, lean_object* v_x_6021_){
_start:
{
if (lean_obj_tag(v_x_6021_) == 0)
{
return v_x_6020_;
}
else
{
lean_object* v_head_6022_; lean_object* v_tail_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; 
v_head_6022_ = lean_ctor_get(v_x_6021_, 0);
lean_inc_n(v_head_6022_, 2);
v_tail_6023_ = lean_ctor_get(v_x_6021_, 1);
lean_inc(v_tail_6023_);
lean_dec_ref(v_x_6021_);
v___x_6024_ = lp_ariori_B2(v_head_6022_, v_t1_6018_);
v___x_6025_ = lp_ariori_B2(v_head_6022_, v_t2_6019_);
v___x_6026_ = lean_int_mul(v___x_6024_, v___x_6025_);
lean_dec(v___x_6025_);
lean_dec(v___x_6024_);
v___x_6027_ = lean_int_add(v_x_6020_, v___x_6026_);
lean_dec(v___x_6026_);
lean_dec(v_x_6020_);
v_x_6020_ = v___x_6027_;
v_x_6021_ = v_tail_6023_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_List_foldl___at___00HodgeLaplacian2_spec__0___boxed(lean_object* v_t1_6029_, lean_object* v_t2_6030_, lean_object* v_x_6031_, lean_object* v_x_6032_){
_start:
{
lean_object* v_res_6033_; 
v_res_6033_ = lp_ariori_List_foldl___at___00HodgeLaplacian2_spec__0(v_t1_6029_, v_t2_6030_, v_x_6031_, v_x_6032_);
lean_dec(v_t2_6030_);
lean_dec(v_t1_6029_);
return v_res_6033_;
}
}
LEAN_EXPORT lean_object* lp_ariori_HodgeLaplacian2(lean_object* v_t1_6034_, lean_object* v_t2_6035_){
_start:
{
lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; 
v___x_6036_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_6037_ = lean_obj_once(&lp_ariori_triangleAsEdgeVector___closed__0, &lp_ariori_triangleAsEdgeVector___closed__0_once, _init_lp_ariori_triangleAsEdgeVector___closed__0);
v___x_6038_ = lp_ariori_List_foldl___at___00HodgeLaplacian2_spec__0(v_t1_6034_, v_t2_6035_, v___x_6036_, v___x_6037_);
return v___x_6038_;
}
}
LEAN_EXPORT lean_object* lp_ariori_HodgeLaplacian2___boxed(lean_object* v_t1_6039_, lean_object* v_t2_6040_){
_start:
{
lean_object* v_res_6041_; 
v_res_6041_ = lp_ariori_HodgeLaplacian2(v_t1_6039_, v_t2_6040_);
lean_dec(v_t2_6040_);
lean_dec(v_t1_6039_);
return v_res_6041_;
}
}
LEAN_EXPORT uint8_t lp_ariori_isUniqueSimpleLieAlgebraDimension(lean_object* v_dim_6042_){
_start:
{
lean_object* v___x_6043_; uint8_t v___x_6044_; uint8_t v___x_6045_; 
v___x_6043_ = lean_unsigned_to_nat(3u);
v___x_6044_ = lean_nat_dec_eq(v_dim_6042_, v___x_6043_);
v___x_6045_ = 1;
if (v___x_6044_ == 0)
{
lean_object* v___x_6046_; uint8_t v___x_6047_; 
v___x_6046_ = lean_unsigned_to_nat(8u);
v___x_6047_ = lean_nat_dec_eq(v_dim_6042_, v___x_6046_);
if (v___x_6047_ == 0)
{
return v___x_6047_;
}
else
{
return v___x_6045_;
}
}
else
{
return v___x_6045_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_isUniqueSimpleLieAlgebraDimension___boxed(lean_object* v_dim_6048_){
_start:
{
uint8_t v_res_6049_; lean_object* v_r_6050_; 
v_res_6049_ = lp_ariori_isUniqueSimpleLieAlgebraDimension(v_dim_6048_);
lean_dec(v_dim_6048_);
v_r_6050_ = lean_box(v_res_6049_);
return v_r_6050_;
}
}
static lean_object* _init_lp_ariori_galoisTraceAmplitude___closed__0(void){
_start:
{
lean_object* v___x_6051_; lean_object* v___x_6052_; 
v___x_6051_ = lp_ariori_VesicaNumber_zero;
v___x_6052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6052_, 0, v___x_6051_);
return v___x_6052_;
}
}
LEAN_EXPORT lean_object* lp_ariori_galoisTraceAmplitude(lean_object* v_d__sq_6053_){
_start:
{
lean_object* v___x_6054_; 
v___x_6054_ = lp_ariori_VesicaNumber_vesicaSqrt(v_d__sq_6053_);
if (lean_obj_tag(v___x_6054_) == 0)
{
lean_object* v___x_6055_; 
v___x_6055_ = lean_obj_once(&lp_ariori_galoisTraceAmplitude___closed__0, &lp_ariori_galoisTraceAmplitude___closed__0_once, _init_lp_ariori_galoisTraceAmplitude___closed__0);
return v___x_6055_;
}
else
{
return v___x_6054_;
}
}
}
LEAN_EXPORT lean_object* lp_ariori_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object* v_s_6056_){
_start:
{
lean_object* v___x_6058_; lean_object* v_putStr_6059_; lean_object* v___x_6060_; 
v___x_6058_ = lean_get_stdout();
v_putStr_6059_ = lean_ctor_get(v___x_6058_, 4);
lean_inc_ref(v_putStr_6059_);
lean_dec_ref(v___x_6058_);
v___x_6060_ = lean_apply_2(v_putStr_6059_, v_s_6056_, lean_box(0));
return v___x_6060_;
}
}
LEAN_EXPORT lean_object* lp_ariori_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object* v_s_6061_, lean_object* v_a_6062_){
_start:
{
lean_object* v_res_6063_; 
v_res_6063_ = lp_ariori_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v_s_6061_);
return v_res_6063_;
}
}
LEAN_EXPORT lean_object* lp_ariori_IO_println___at___00main_spec__0(lean_object* v_s_6064_){
_start:
{
uint32_t v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; 
v___x_6066_ = 10;
v___x_6067_ = lean_string_push(v_s_6064_, v___x_6066_);
v___x_6068_ = lp_ariori_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v___x_6067_);
return v___x_6068_;
}
}
LEAN_EXPORT lean_object* lp_ariori_IO_println___at___00main_spec__0___boxed(lean_object* v_s_6069_, lean_object* v_a_6070_){
_start:
{
lean_object* v_res_6071_; 
v_res_6071_ = lp_ariori_IO_println___at___00main_spec__0(v_s_6069_);
return v_res_6071_;
}
}
static lean_object* _init_lp_ariori_main___closed__1(void){
_start:
{
lean_object* v___x_6073_; lean_object* v___x_6074_; 
v___x_6073_ = lp_ariori_discreteEinsteinHilbertAction;
v___x_6074_ = l_Int_repr(v___x_6073_);
return v___x_6074_;
}
}
static lean_object* _init_lp_ariori_main___closed__2(void){
_start:
{
lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; 
v___x_6075_ = lean_obj_once(&lp_ariori_main___closed__1, &lp_ariori_main___closed__1_once, _init_lp_ariori_main___closed__1);
v___x_6076_ = ((lean_object*)(lp_ariori_main___closed__0));
v___x_6077_ = lean_string_append(v___x_6076_, v___x_6075_);
return v___x_6077_;
}
}
static lean_object* _init_lp_ariori_main___closed__6(void){
_start:
{
lean_object* v___x_6081_; lean_object* v___x_6082_; 
v___x_6081_ = lean_unsigned_to_nat(100u);
v___x_6082_ = lean_nat_to_int(v___x_6081_);
return v___x_6082_;
}
}
static lean_object* _init_lp_ariori_main___closed__7(void){
_start:
{
lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; 
v___x_6083_ = lean_obj_once(&lp_ariori_VesicaNumber_normalize___closed__0, &lp_ariori_VesicaNumber_normalize___closed__0_once, _init_lp_ariori_VesicaNumber_normalize___closed__0);
v___x_6084_ = lean_obj_once(&lp_ariori_instReprVesicaNumber_repr___redArg___closed__15, &lp_ariori_instReprVesicaNumber_repr___redArg___closed__15_once, _init_lp_ariori_instReprVesicaNumber_repr___redArg___closed__15);
v___x_6085_ = lean_obj_once(&lp_ariori_main___closed__6, &lp_ariori_main___closed__6_once, _init_lp_ariori_main___closed__6);
v___x_6086_ = lp_ariori_VesicaNumber_mk_x27(v___x_6085_, v___x_6084_, v___x_6083_);
return v___x_6086_;
}
}
static lean_object* _init_lp_ariori_main___closed__9(void){
_start:
{
lean_object* v___x_6088_; lean_object* v___x_6089_; 
v___x_6088_ = lean_obj_once(&lp_ariori_main___closed__7, &lp_ariori_main___closed__7_once, _init_lp_ariori_main___closed__7);
v___x_6089_ = lp_ariori_VesicaNumber_formatExact(v___x_6088_);
return v___x_6089_;
}
}
static lean_object* _init_lp_ariori_main___closed__10(void){
_start:
{
lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; 
v___x_6090_ = lean_obj_once(&lp_ariori_main___closed__9, &lp_ariori_main___closed__9_once, _init_lp_ariori_main___closed__9);
v___x_6091_ = ((lean_object*)(lp_ariori_main___closed__8));
v___x_6092_ = lean_string_append(v___x_6091_, v___x_6090_);
return v___x_6092_;
}
}
static lean_object* _init_lp_ariori_main___closed__11(void){
_start:
{
lean_object* v___x_6093_; lean_object* v___x_6094_; 
v___x_6093_ = lean_obj_once(&lp_ariori_main___closed__7, &lp_ariori_main___closed__7_once, _init_lp_ariori_main___closed__7);
v___x_6094_ = lp_ariori_processSeed(v___x_6093_);
return v___x_6094_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_6105_; lean_object* v___x_6106_; 
v___x_6105_ = ((lean_object*)(lp_ariori_main___closed__4));
v___x_6106_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6105_);
if (lean_obj_tag(v___x_6106_) == 0)
{
lean_object* v___x_6107_; lean_object* v___x_6108_; 
lean_dec_ref(v___x_6106_);
v___x_6107_ = ((lean_object*)(lp_ariori_main___closed__5));
v___x_6108_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6107_);
if (lean_obj_tag(v___x_6108_) == 0)
{
lean_object* v___x_6109_; 
lean_dec_ref(v___x_6108_);
v___x_6109_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6105_);
if (lean_obj_tag(v___x_6109_) == 0)
{
lean_object* v___x_6110_; lean_object* v___x_6111_; 
lean_dec_ref(v___x_6109_);
v___x_6110_ = lean_obj_once(&lp_ariori_main___closed__10, &lp_ariori_main___closed__10_once, _init_lp_ariori_main___closed__10);
v___x_6111_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6110_);
if (lean_obj_tag(v___x_6111_) == 0)
{
lean_object* v___x_6112_; 
lean_dec_ref(v___x_6111_);
v___x_6112_ = lean_obj_once(&lp_ariori_main___closed__11, &lp_ariori_main___closed__11_once, _init_lp_ariori_main___closed__11);
if (lean_obj_tag(v___x_6112_) == 0)
{
lean_object* v___x_6113_; lean_object* v___x_6114_; 
v___x_6113_ = ((lean_object*)(lp_ariori_main___closed__12));
v___x_6114_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6113_);
if (lean_obj_tag(v___x_6114_) == 0)
{
lean_dec_ref(v___x_6114_);
goto v___jp_6100_;
}
else
{
return v___x_6114_;
}
}
else
{
lean_object* v_val_6115_; lean_object* v_points_6116_; lean_object* v_segments_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; 
v_val_6115_ = lean_ctor_get(v___x_6112_, 0);
v_points_6116_ = lean_ctor_get(v_val_6115_, 0);
v_segments_6117_ = lean_ctor_get(v_val_6115_, 1);
v___x_6118_ = ((lean_object*)(lp_ariori_main___closed__13));
v___x_6119_ = l_List_lengthTR___redArg(v_points_6116_);
v___x_6120_ = l_Nat_reprFast(v___x_6119_);
v___x_6121_ = lean_string_append(v___x_6118_, v___x_6120_);
lean_dec_ref(v___x_6120_);
v___x_6122_ = ((lean_object*)(lp_ariori_main___closed__14));
v___x_6123_ = lean_string_append(v___x_6121_, v___x_6122_);
v___x_6124_ = l_List_lengthTR___redArg(v_segments_6117_);
v___x_6125_ = l_Nat_reprFast(v___x_6124_);
v___x_6126_ = lean_string_append(v___x_6123_, v___x_6125_);
lean_dec_ref(v___x_6125_);
v___x_6127_ = ((lean_object*)(lp_ariori_main___closed__15));
v___x_6128_ = lean_string_append(v___x_6126_, v___x_6127_);
v___x_6129_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6128_);
if (lean_obj_tag(v___x_6129_) == 0)
{
lean_dec_ref(v___x_6129_);
goto v___jp_6100_;
}
else
{
return v___x_6129_;
}
}
}
else
{
return v___x_6111_;
}
}
else
{
return v___x_6109_;
}
}
else
{
return v___x_6108_;
}
}
else
{
return v___x_6106_;
}
v___jp_6100_:
{
lean_object* v___x_6101_; lean_object* v___x_6102_; 
v___x_6101_ = lean_obj_once(&lp_ariori_main___closed__2, &lp_ariori_main___closed__2_once, _init_lp_ariori_main___closed__2);
v___x_6102_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6101_);
if (lean_obj_tag(v___x_6102_) == 0)
{
lean_object* v___x_6103_; lean_object* v___x_6104_; 
lean_dec_ref(v___x_6102_);
v___x_6103_ = ((lean_object*)(lp_ariori_main___closed__3));
v___x_6104_ = lp_ariori_IO_println___at___00main_spec__0(v___x_6103_);
return v___x_6104_;
}
else
{
return v___x_6102_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ariori_main___boxed(lean_object* v_a_6130_){
_start:
{
lean_object* v_res_6131_; 
v_res_6131_ = _lean_main();
return v_res_6131_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ariori_ArioriFull(uint8_t builtin) {
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
lp_ariori_VesicaNumber_zero = _init_lp_ariori_VesicaNumber_zero();
lean_mark_persistent(lp_ariori_VesicaNumber_zero);
lp_ariori_VesicaNumber_one = _init_lp_ariori_VesicaNumber_one();
lean_mark_persistent(lp_ariori_VesicaNumber_one);
lp_ariori_VesicaNumber_sqrt3 = _init_lp_ariori_VesicaNumber_sqrt3();
lean_mark_persistent(lp_ariori_VesicaNumber_sqrt3);
lp_ariori_VesicaNumber_instOfNatOfNatNat = _init_lp_ariori_VesicaNumber_instOfNatOfNatNat();
lean_mark_persistent(lp_ariori_VesicaNumber_instOfNatOfNatNat);
lp_ariori_VesicaNumber_instOfNatOfNatNat__1 = _init_lp_ariori_VesicaNumber_instOfNatOfNatNat__1();
lean_mark_persistent(lp_ariori_VesicaNumber_instOfNatOfNatNat__1);
lp_ariori_VesicaNumber_instInhabited = _init_lp_ariori_VesicaNumber_instInhabited();
lean_mark_persistent(lp_ariori_VesicaNumber_instInhabited);
lp_ariori_instInhabitedPoint_default = _init_lp_ariori_instInhabitedPoint_default();
lean_mark_persistent(lp_ariori_instInhabitedPoint_default);
lp_ariori_instInhabitedPoint = _init_lp_ariori_instInhabitedPoint();
lean_mark_persistent(lp_ariori_instInhabitedPoint);
lp_ariori_instInhabitedSegment_default = _init_lp_ariori_instInhabitedSegment_default();
lean_mark_persistent(lp_ariori_instInhabitedSegment_default);
lp_ariori_instInhabitedSegment = _init_lp_ariori_instInhabitedSegment();
lean_mark_persistent(lp_ariori_instInhabitedSegment);
lp_ariori_instInhabitedSquareConstruction_default = _init_lp_ariori_instInhabitedSquareConstruction_default();
lean_mark_persistent(lp_ariori_instInhabitedSquareConstruction_default);
lp_ariori_instInhabitedSquareConstruction = _init_lp_ariori_instInhabitedSquareConstruction();
lean_mark_persistent(lp_ariori_instInhabitedSquareConstruction);
lp_ariori_instInhabitedNodeLabel_default = _init_lp_ariori_instInhabitedNodeLabel_default();
lp_ariori_instInhabitedNodeLabel = _init_lp_ariori_instInhabitedNodeLabel();
lp_ariori_countTriangles = _init_lp_ariori_countTriangles();
lean_mark_persistent(lp_ariori_countTriangles);
lp_ariori_findTriangles = _init_lp_ariori_findTriangles();
lean_mark_persistent(lp_ariori_findTriangles);
lp_ariori_handshakingSum = _init_lp_ariori_handshakingSum();
lean_mark_persistent(lp_ariori_handshakingSum);
lp_ariori_degreeMatchesNeighbors = _init_lp_ariori_degreeMatchesNeighbors();
lp_ariori_laplacianRowSumsZero = _init_lp_ariori_laplacianRowSumsZero();
lp_ariori_gen1Connected = _init_lp_ariori_gen1Connected();
lp_ariori_neighborsHasEdgeAgreeAll = _init_lp_ariori_neighborsHasEdgeAgreeAll();
lp_ariori_laplacianMatrix = _init_lp_ariori_laplacianMatrix();
lean_mark_persistent(lp_ariori_laplacianMatrix);
lp_ariori_laplacianMatrixFloat = _init_lp_ariori_laplacianMatrixFloat();
lean_mark_persistent(lp_ariori_laplacianMatrixFloat);
lp_ariori_floatAt___boxed__const__1 = _init_lp_ariori_floatAt___boxed__const__1();
lean_mark_persistent(lp_ariori_floatAt___boxed__const__1);
lp_ariori_gen1AutomorphismCount = _init_lp_ariori_gen1AutomorphismCount();
lean_mark_persistent(lp_ariori_gen1AutomorphismCount);
lp_ariori_gen1AutomorphismAssignments = _init_lp_ariori_gen1AutomorphismAssignments();
lean_mark_persistent(lp_ariori_gen1AutomorphismAssignments);
lp_ariori_mirrorAssignment = _init_lp_ariori_mirrorAssignment();
lean_mark_persistent(lp_ariori_mirrorAssignment);
lp_ariori___private_ArioriFull_0__r = _init_lp_ariori___private_ArioriFull_0__r();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__r);
lp_ariori___private_ArioriFull_0__half = _init_lp_ariori___private_ArioriFull_0__half();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__half);
lp_ariori___private_ArioriFull_0__negHalf = _init_lp_ariori___private_ArioriFull_0__negHalf();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__negHalf);
lp_ariori___private_ArioriFull_0__halfSqrt3 = _init_lp_ariori___private_ArioriFull_0__halfSqrt3();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__halfSqrt3);
lp_ariori___private_ArioriFull_0__negHalfSqrt3 = _init_lp_ariori___private_ArioriFull_0__negHalfSqrt3();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__negHalfSqrt3);
lp_ariori___private_ArioriFull_0__threeHalves = _init_lp_ariori___private_ArioriFull_0__threeHalves();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__threeHalves);
lp_ariori___private_ArioriFull_0__ptA = _init_lp_ariori___private_ArioriFull_0__ptA();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptA);
lp_ariori___private_ArioriFull_0__ptB = _init_lp_ariori___private_ArioriFull_0__ptB();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptB);
lp_ariori___private_ArioriFull_0__ptTop = _init_lp_ariori___private_ArioriFull_0__ptTop();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptTop);
lp_ariori___private_ArioriFull_0__ptBot = _init_lp_ariori___private_ArioriFull_0__ptBot();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptBot);
lp_ariori___private_ArioriFull_0__ptP3 = _init_lp_ariori___private_ArioriFull_0__ptP3();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptP3);
lp_ariori___private_ArioriFull_0__ptP4 = _init_lp_ariori___private_ArioriFull_0__ptP4();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptP4);
lp_ariori___private_ArioriFull_0__ptP5 = _init_lp_ariori___private_ArioriFull_0__ptP5();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptP5);
lp_ariori___private_ArioriFull_0__ptP6 = _init_lp_ariori___private_ArioriFull_0__ptP6();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptP6);
lp_ariori___private_ArioriFull_0__ptC1 = _init_lp_ariori___private_ArioriFull_0__ptC1();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptC1);
lp_ariori___private_ArioriFull_0__ptC2 = _init_lp_ariori___private_ArioriFull_0__ptC2();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptC2);
lp_ariori___private_ArioriFull_0__ptC3 = _init_lp_ariori___private_ArioriFull_0__ptC3();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptC3);
lp_ariori___private_ArioriFull_0__ptC4 = _init_lp_ariori___private_ArioriFull_0__ptC4();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptC4);
lp_ariori___private_ArioriFull_0__ptK = _init_lp_ariori___private_ArioriFull_0__ptK();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptK);
lp_ariori___private_ArioriFull_0__ptL = _init_lp_ariori___private_ArioriFull_0__ptL();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptL);
lp_ariori___private_ArioriFull_0__ptM = _init_lp_ariori___private_ArioriFull_0__ptM();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptM);
lp_ariori___private_ArioriFull_0__ptN = _init_lp_ariori___private_ArioriFull_0__ptN();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptN);
lp_ariori___private_ArioriFull_0__ptX17 = _init_lp_ariori___private_ArioriFull_0__ptX17();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptX17);
lp_ariori___private_ArioriFull_0__gen1Points = _init_lp_ariori___private_ArioriFull_0__gen1Points();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__gen1Points);
lp_ariori___private_ArioriFull_0__ptX17mirror = _init_lp_ariori___private_ArioriFull_0__ptX17mirror();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__ptX17mirror);
lp_ariori___private_ArioriFull_0__d__C1C2 = _init_lp_ariori___private_ArioriFull_0__d__C1C2();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__d__C1C2);
lp_ariori___private_ArioriFull_0__d__C1C3 = _init_lp_ariori___private_ArioriFull_0__d__C1C3();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__d__C1C3);
lp_ariori___private_ArioriFull_0__d__C1C4 = _init_lp_ariori___private_ArioriFull_0__d__C1C4();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__d__C1C4);
lp_ariori___private_ArioriFull_0__d__C2C3 = _init_lp_ariori___private_ArioriFull_0__d__C2C3();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__d__C2C3);
lp_ariori___private_ArioriFull_0__d__C2C4 = _init_lp_ariori___private_ArioriFull_0__d__C2C4();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__d__C2C4);
lp_ariori___private_ArioriFull_0__d__C3C4 = _init_lp_ariori___private_ArioriFull_0__d__C3C4();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__d__C3C4);
lp_ariori___private_ArioriFull_0__lam0 = _init_lp_ariori___private_ArioriFull_0__lam0();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__lam0);
lp_ariori___private_ArioriFull_0__lam1 = _init_lp_ariori___private_ArioriFull_0__lam1();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__lam1);
lp_ariori___private_ArioriFull_0__lam2 = _init_lp_ariori___private_ArioriFull_0__lam2();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__lam2);
lp_ariori___private_ArioriFull_0__lam3 = _init_lp_ariori___private_ArioriFull_0__lam3();
lean_mark_persistent(lp_ariori___private_ArioriFull_0__lam3);
lp_ariori_interactionTriangles = _init_lp_ariori_interactionTriangles();
lean_mark_persistent(lp_ariori_interactionTriangles);
lp_ariori_laplacianApplyConstZero = _init_lp_ariori_laplacianApplyConstZero();
lp_ariori_neighborCountMatchesDegree = _init_lp_ariori_neighborCountMatchesDegree();
lp_ariori_constKernelFromDegreeMatchAll = _init_lp_ariori_constKernelFromDegreeMatchAll();
lp_ariori_centralityInvariantUnderMirror = _init_lp_ariori_centralityInvariantUnderMirror();
lp_ariori_gen1AutomorphismGroupOk = _init_lp_ariori_gen1AutomorphismGroupOk();
lp_ariori_mirrorInvolutiveOk = _init_lp_ariori_mirrorInvolutiveOk();
lp_ariori_boundaryLeaves = _init_lp_ariori_boundaryLeaves();
lean_mark_persistent(lp_ariori_boundaryLeaves);
lp_ariori_boundaryConfined = _init_lp_ariori_boundaryConfined();
lean_mark_persistent(lp_ariori_boundaryConfined);
lp_ariori_C2__simplices = _init_lp_ariori_C2__simplices();
lean_mark_persistent(lp_ariori_C2__simplices);
lp_ariori_C1__X17__distSq = _init_lp_ariori_C1__X17__distSq();
lean_mark_persistent(lp_ariori_C1__X17__distSq);
lp_ariori_C2__X17__distSq = _init_lp_ariori_C2__X17__distSq();
lean_mark_persistent(lp_ariori_C2__X17__distSq);
lp_ariori_C3__X17__distSq = _init_lp_ariori_C3__X17__distSq();
lean_mark_persistent(lp_ariori_C3__X17__distSq);
lp_ariori_C4__X17__distSq = _init_lp_ariori_C4__X17__distSq();
lean_mark_persistent(lp_ariori_C4__X17__distSq);
lp_ariori_discreteEinsteinHilbertAction = _init_lp_ariori_discreteEinsteinHilbertAction();
lean_mark_persistent(lp_ariori_discreteEinsteinHilbertAction);
lp_ariori_parityTrace = _init_lp_ariori_parityTrace();
lean_mark_persistent(lp_ariori_parityTrace);
lp_ariori_trianglesIndependent = _init_lp_ariori_trianglesIndependent();
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
  res = initialize_ariori_ArioriFull(1 /* builtin */);
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
