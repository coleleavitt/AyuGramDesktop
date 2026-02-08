// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_HAPTIC_IMPL_HPP_
#define _GI_SIGXCPUFEEDBACK_HAPTIC_IMPL_HPP_

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace base {

// GDBusInterfaceInfo* /*none*/ sigxcpu_feedback_haptic_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ sigxcpu_feedback_haptic_interface_info ();
Gio::DBusInterfaceInfo_Ref base::HapticBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint sigxcpu_feedback_haptic_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint sigxcpu_feedback_haptic_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void sigxcpu_feedback_haptic_call_vibrate (SigxcpuFeedbackHaptic* proxy /*none*/, const gchar* arg_app_id /*none*/, GVariant* arg_pattern /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void sigxcpu_feedback_haptic_call_vibrate (::SigxcpuFeedbackHaptic* proxy /*none*/, const char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HapticBase::call_vibrate (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HapticBase::call_vibrate (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean sigxcpu_feedback_haptic_call_vibrate_finish (SigxcpuFeedbackHaptic* proxy /*none*/, gboolean* out_success, GAsyncResult* res /*none*/, GError ** error);
// gboolean sigxcpu_feedback_haptic_call_vibrate_finish (::SigxcpuFeedbackHaptic* proxy /*none*/, gboolean* out_success, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HapticBase::call_vibrate_finish (bool * out_success, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, gboolean* out_success, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_success_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (gboolean*) (out_success ? &out_success_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_success) *out_success = out_success_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HapticBase::call_vibrate_finish (bool * out_success, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, gboolean* out_success, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_success_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (gboolean*) (out_success ? &out_success_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_success) *out_success = out_success_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool>> base::HapticBase::call_vibrate_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, gboolean* out_success, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_success_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (gboolean*) (&out_success_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_success_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::HapticBase::call_vibrate_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, gboolean* out_success, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_success_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (gboolean*) (&out_success_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_success_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean sigxcpu_feedback_haptic_call_vibrate_sync (SigxcpuFeedbackHaptic* proxy /*none*/, const gchar* arg_app_id /*none*/, GVariant* arg_pattern /*none*/, gboolean* out_success, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean sigxcpu_feedback_haptic_call_vibrate_sync (::SigxcpuFeedbackHaptic* proxy /*none*/, const char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/, gboolean* out_success, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (out_success ? &out_success_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_success) *out_success = out_success_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (out_success ? &out_success_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_success) *out_success = out_success_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (out_success ? &out_success_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_success) *out_success = out_success_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (out_success ? &out_success_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_success) *out_success = out_success_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool>> base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (&out_success_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_success_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, bool>> base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (&out_success_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_success_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (&out_success_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_success_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::HapticBase::call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* proxy, const char* arg_app_id, ::GVariant* arg_pattern, gboolean* out_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_call_vibrate_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_success_o {};
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c), (gboolean*) (&out_success_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_success_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void sigxcpu_feedback_haptic_complete_vibrate (SigxcpuFeedbackHaptic* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean success);
// void sigxcpu_feedback_haptic_complete_vibrate (::SigxcpuFeedbackHaptic* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean success);
void base::HapticBase::complete_vibrate (Gio::DBusMethodInvocation invocation, gboolean success) noexcept
{
  typedef void (*call_wrap_t) (::SigxcpuFeedbackHaptic* object, ::GDBusMethodInvocation* invocation, gboolean success);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_haptic_complete_vibrate;
  auto success_to_c = success;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gboolean) (success_to_c));
}



} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/haptic_extra_def_impl.hpp>)
#include <sigxcpufeedback/haptic_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/haptic_extra_impl.hpp>)
#include <sigxcpufeedback/haptic_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {

void HapticIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::SigxcpuFeedbackHapticIface *methods = (::SigxcpuFeedbackHapticIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_vibrate) methods->handle_vibrate = (decltype (methods->handle_vibrate)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_app_id, GLib::Variant arg_pattern), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_vibrate_>;
}

// gboolean Haptic::handle_vibrate (SigxcpuFeedbackHaptic* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_app_id /*none*/, GVariant* arg_pattern /*none*/);
// gboolean Haptic::handle_vibrate (::SigxcpuFeedbackHaptic* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/);
bool HapticIfaceClassImpl::handle_vibrate_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_app_id, GLib::Variant arg_pattern) noexcept
{
  if (!get_struct_()->handle_vibrate) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::SigxcpuFeedbackHaptic* object, ::GDBusMethodInvocation* invocation, const char* arg_app_id, ::GVariant* arg_pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_vibrate;
  auto arg_pattern_to_c = gi::unwrap (arg_pattern, gi::transfer_none);
  auto arg_app_id_to_c = gi::unwrap (arg_app_id, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackHaptic*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_app_id_to_c), (::GVariant*) (arg_pattern_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi

#endif
