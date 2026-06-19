// Lean compiler output
// Module: SpectralMain
// Imports: public import Init public meta import Init public import Spectral public import SpectralAnalytic
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
lean_object* lp_spectral_Spectral_Analytic_spectralMain();
lean_object* lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern uint8_t lp_spectral_Spectral_combinatorialCertificateOk;
extern uint8_t lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk;
LEAN_EXPORT uint8_t lp_spectral_spectralPaperCertificateOk;
static const lean_string_object lp_spectral_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "\n  Combined certificate (combinatorial + finite analytic):"};
static const lean_object* lp_spectral_main___closed__0 = (const lean_object*)&lp_spectral_main___closed__0_value;
static const lean_string_object lp_spectral_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "    spectralPaperCertificateOk = "};
static const lean_object* lp_spectral_main___closed__1 = (const lean_object*)&lp_spectral_main___closed__1_value;
static const lean_string_object lp_spectral_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "    [OK] spectral_full_certificate"};
static const lean_object* lp_spectral_main___closed__2 = (const lean_object*)&lp_spectral_main___closed__2_value;
static const lean_string_object lp_spectral_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_spectral_main___closed__3 = (const lean_object*)&lp_spectral_main___closed__3_value;
static const lean_string_object lp_spectral_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_spectral_main___closed__4 = (const lean_object*)&lp_spectral_main___closed__4_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_spectral_main___boxed(lean_object*);
static uint8_t _init_lp_spectral_spectralPaperCertificateOk(void){
_start:
{
uint8_t v___x_1_; 
v___x_1_ = lp_spectral_Spectral_combinatorialCertificateOk;
if (v___x_1_ == 0)
{
return v___x_1_;
}
else
{
uint8_t v___x_2_; 
v___x_2_ = lp_spectral_Spectral_Analytic_Certified_finiteAnalyticCertificateOk;
return v___x_2_;
}
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lp_spectral_Spectral_Analytic_spectralMain();
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v___x_10_; lean_object* v___x_11_; 
lean_dec_ref(v___x_9_);
v___x_10_ = ((lean_object*)(lp_spectral_main___closed__0));
v___x_11_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_12_; lean_object* v___y_14_; uint8_t v___x_19_; 
lean_dec_ref(v___x_11_);
v___x_12_ = ((lean_object*)(lp_spectral_main___closed__1));
v___x_19_ = lp_spectral_spectralPaperCertificateOk;
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
v___x_20_ = ((lean_object*)(lp_spectral_main___closed__3));
v___y_14_ = v___x_20_;
goto v___jp_13_;
}
else
{
lean_object* v___x_21_; 
v___x_21_ = ((lean_object*)(lp_spectral_main___closed__4));
v___y_14_ = v___x_21_;
goto v___jp_13_;
}
v___jp_13_:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_string_append(v___x_12_, v___y_14_);
v___x_16_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_15_);
if (lean_obj_tag(v___x_16_) == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
lean_dec_ref(v___x_16_);
v___x_17_ = ((lean_object*)(lp_spectral_main___closed__2));
v___x_18_ = lp_spectral_IO_println___at___00Spectral_spectralMain_spec__0(v___x_17_);
return v___x_18_;
}
else
{
return v___x_16_;
}
}
}
else
{
return v___x_11_;
}
}
else
{
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* lp_spectral_main___boxed(lean_object* v_a_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = _lean_main();
return v_res_23_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_spectral_Spectral(uint8_t builtin);
lean_object* initialize_spectral_SpectralAnalytic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_spectral_SpectralMain(uint8_t builtin) {
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
res = initialize_spectral_SpectralAnalytic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_spectral_spectralPaperCertificateOk = _init_lp_spectral_spectralPaperCertificateOk();
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
  res = initialize_spectral_SpectralMain(1 /* builtin */);
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
