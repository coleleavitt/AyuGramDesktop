// AUTO-GENERATED

#ifndef _GI_WEBVIEW_HELPER_IMPL_HPP_
#define _GI_WEBVIEW_HELPER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Webview {

namespace base {

// GDBusInterfaceInfo* /*none*/ webview_helper_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ webview_helper_interface_info ();
Gio::DBusInterfaceInfo_Ref base::HelperBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint webview_helper_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint webview_helper_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void webview_helper_call_create (WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gchar* arg_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_create (::WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_create (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_path_to_c = gi::unwrap (arg_path, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto arg_debug_to_c = arg_debug;
  call_wrap_v ((::WebviewHelper*) (gobj_()), (gboolean) (arg_debug_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (const char*) (arg_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_create (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_path_to_c = gi::unwrap (arg_path, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto arg_debug_to_c = arg_debug;
  call_wrap_v ((::WebviewHelper*) (gobj_()), (gboolean) (arg_debug_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (const char*) (arg_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_create_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_create_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_create_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_create_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_helper_call_create_sync (WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gchar* arg_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_create_sync (::WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_path_to_c = gi::unwrap (arg_path, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto arg_debug_to_c = arg_debug;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gboolean) (arg_debug_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (const char*) (arg_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create_sync;
  auto cancellable_to_c = nullptr;
  auto arg_path_to_c = gi::unwrap (arg_path, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto arg_debug_to_c = arg_debug;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gboolean) (arg_debug_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (const char*) (arg_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_path_to_c = gi::unwrap (arg_path, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto arg_debug_to_c = arg_debug;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gboolean) (arg_debug_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (const char*) (arg_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_create_sync;
  auto cancellable_to_c = nullptr;
  auto arg_path_to_c = gi::unwrap (arg_path, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto arg_debug_to_c = arg_debug;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gboolean) (arg_debug_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (const char*) (arg_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_helper_call_eval (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_eval (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_eval (const gi::cstring_v arg_js, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_eval (const gi::cstring_v arg_js, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_eval_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_eval_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_eval_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_eval_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_helper_call_eval_sync (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_eval_sync (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_eval_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_eval_sync (const gi::cstring_v arg_js) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval_sync;
  auto cancellable_to_c = nullptr;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_eval_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_eval_sync (const gi::cstring_v arg_js, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_eval_sync;
  auto cancellable_to_c = nullptr;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_helper_call_get_win_id (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_get_win_id (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_get_win_id (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_get_win_id (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_get_win_id_finish (WebviewHelper* proxy /*none*/, guint64* out_result, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_get_win_id_finish (::WebviewHelper* proxy /*none*/, guint64* out_result, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_get_win_id_finish (guint64 * out_result, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_get_win_id_finish (guint64 * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint64>> base::HelperBase::call_get_win_id_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (&out_result_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint64> base::HelperBase::call_get_win_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (&out_result_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean webview_helper_call_get_win_id_sync (WebviewHelper* proxy /*none*/, guint64* out_result, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_get_win_id_sync (::WebviewHelper* proxy /*none*/, guint64* out_result, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_get_win_id_sync (guint64 * out_result, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_get_win_id_sync (guint64 * out_result) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_get_win_id_sync (guint64 * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_get_win_id_sync (guint64 * out_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint64>> base::HelperBase::call_get_win_id_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint64>> base::HelperBase::call_get_win_id_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint64> base::HelperBase::call_get_win_id_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint64> base::HelperBase::call_get_win_id_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, guint64* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_get_win_id_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (guint64*) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void webview_helper_call_init (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_init (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_init (const gi::cstring_v arg_js, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_init (const gi::cstring_v arg_js, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_init_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_init_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_init_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_init_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_helper_call_init_sync (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_init_sync (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_init_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_init_sync (const gi::cstring_v arg_js) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init_sync;
  auto cancellable_to_c = nullptr;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_init_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_init_sync (const gi::cstring_v arg_js, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_js, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_init_sync;
  auto cancellable_to_c = nullptr;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_js_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_helper_call_navigate (WebviewHelper* proxy /*none*/, const gchar* arg_url /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_navigate (::WebviewHelper* proxy /*none*/, const char* arg_url /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_navigate (const gi::cstring_v arg_url, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_url, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_url_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_navigate (const gi::cstring_v arg_url, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_url, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_url_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_navigate_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_navigate_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_navigate_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_navigate_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_helper_call_navigate_sync (WebviewHelper* proxy /*none*/, const gchar* arg_url /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_navigate_sync (::WebviewHelper* proxy /*none*/, const char* arg_url /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_navigate_sync (const gi::cstring_v arg_url, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_url, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_url_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_navigate_sync (const gi::cstring_v arg_url) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_url, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate_sync;
  auto cancellable_to_c = nullptr;
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_url_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_navigate_sync (const gi::cstring_v arg_url, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_url, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_url_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_navigate_sync (const gi::cstring_v arg_url, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, const char* arg_url, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_navigate_sync;
  auto cancellable_to_c = nullptr;
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (const char*) (arg_url_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_helper_call_reload (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_reload (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_reload (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_reload (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_reload_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_reload_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_reload_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_reload_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_helper_call_reload_sync (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_reload_sync (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_reload_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_reload_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_reload_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_reload_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_reload_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_helper_call_resolve (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_resolve (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_resolve (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_resolve (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_resolve_finish (WebviewHelper* proxy /*none*/, gint* out_result, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_resolve_finish (::WebviewHelper* proxy /*none*/, gint* out_result, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_resolve_finish (gint * out_result, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gint out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_resolve_finish (gint * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gint out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gint>> base::HelperBase::call_resolve_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gint out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (&out_result_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gint> base::HelperBase::call_resolve_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gint out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (&out_result_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean webview_helper_call_resolve_sync (WebviewHelper* proxy /*none*/, gint* out_result, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_resolve_sync (::WebviewHelper* proxy /*none*/, gint* out_result, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_resolve_sync (gint * out_result, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gint out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_resolve_sync (gint * out_result) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = nullptr;
  gint out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_resolve_sync (gint * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gint out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_resolve_sync (gint * out_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = nullptr;
  gint out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gint>> base::HelperBase::call_resolve_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gint out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gint>> base::HelperBase::call_resolve_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = nullptr;
  gint out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gint> base::HelperBase::call_resolve_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gint out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gint> base::HelperBase::call_resolve_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_resolve_sync;
  auto cancellable_to_c = nullptr;
  gint out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint*) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void webview_helper_call_set_opaque_bg (WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_set_opaque_bg (::WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::HelperBase::call_set_opaque_bg (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  call_wrap_v ((::WebviewHelper*) (gobj_()), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::HelperBase::call_set_opaque_bg (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* proxy, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  call_wrap_v ((::WebviewHelper*) (gobj_()), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_helper_call_set_opaque_bg_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_set_opaque_bg_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::HelperBase::call_set_opaque_bg_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_set_opaque_bg_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_helper_call_set_opaque_bg_sync (WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_set_opaque_bg_sync (::WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::HelperBase::call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::HelperBase::call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg_sync;
  auto cancellable_to_c = nullptr;
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::HelperBase::call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::HelperBase::call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewHelper* proxy, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_call_set_opaque_bg_sync;
  auto cancellable_to_c = nullptr;
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_helper_complete_create (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_create (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::HelperBase::complete_create (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_create;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_helper_complete_eval (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_eval (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::HelperBase::complete_eval (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_eval;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_helper_complete_get_win_id (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint64 result);
// void webview_helper_complete_get_win_id (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint64 result);
void base::HelperBase::complete_get_win_id (Gio::DBusMethodInvocation invocation, guint64 result) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation, guint64 result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_get_win_id;
  auto result_to_c = result;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint64) (result_to_c));
}

// void webview_helper_complete_init (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_init (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::HelperBase::complete_init (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_init;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_helper_complete_navigate (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_navigate (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::HelperBase::complete_navigate (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_navigate;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_helper_complete_reload (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_reload (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::HelperBase::complete_reload (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_reload;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_helper_complete_resolve (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gint result);
// void webview_helper_complete_resolve (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gint result);
void base::HelperBase::complete_resolve (Gio::DBusMethodInvocation invocation, gint result) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation, gint result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_resolve;
  auto result_to_c = result;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gint) (result_to_c));
}

// void webview_helper_complete_set_opaque_bg (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_set_opaque_bg (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::HelperBase::complete_set_opaque_bg (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_complete_set_opaque_bg;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_helper_emit_started (WebviewHelper* object /*none*/);
// void webview_helper_emit_started (::WebviewHelper* object /*none*/);
void base::HelperBase::emit_started () noexcept
{
  typedef void (*call_wrap_t) (::WebviewHelper* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_helper_emit_started;
  call_wrap_v ((::WebviewHelper*) (gobj_()));
}











} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/helper_extra_def_impl.hpp>)
#include <webview/helper_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/helper_extra_impl.hpp>)
#include <webview/helper_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {

void HelperIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::WebviewHelperIface *methods = (::WebviewHelperIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_create) methods->handle_create = (decltype (methods->handle_create)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_create_>;
  if (init_data.handle_eval) methods->handle_eval = (decltype (methods->handle_eval)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_eval_>;
  if (init_data.handle_get_win_id) methods->handle_get_win_id = (decltype (methods->handle_get_win_id)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_win_id_>;
  if (init_data.handle_init) methods->handle_init = (decltype (methods->handle_init)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_init_>;
  if (init_data.handle_navigate) methods->handle_navigate = (decltype (methods->handle_navigate)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_navigate_>;
  if (init_data.handle_reload) methods->handle_reload = (decltype (methods->handle_reload)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_reload_>;
  if (init_data.handle_resolve) methods->handle_resolve = (decltype (methods->handle_resolve)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_resolve_>;
  if (init_data.handle_set_opaque_bg) methods->handle_set_opaque_bg = (decltype (methods->handle_set_opaque_bg)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, gint arg_r, gint arg_g, gint arg_b, gint arg_a), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_set_opaque_bg_>;
  if (init_data.started) methods->started = (decltype (methods->started)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::started_>;
}

// gboolean Helper::handle_create (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gchar* arg_path /*none*/);
// gboolean Helper::handle_create (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path /*none*/);
bool HelperIfaceClassImpl::handle_create_ (Gio::DBusMethodInvocation invocation, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path) noexcept
{
  if (!get_struct_()->handle_create) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_create;
  auto arg_path_to_c = gi::unwrap (arg_path, gi::transfer_none);
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto arg_debug_to_c = arg_debug;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gboolean) (arg_debug_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c), (const char*) (arg_path_to_c));
  return _temp_ret;
}

// gboolean Helper::handle_eval (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_js /*none*/);
// gboolean Helper::handle_eval (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_js /*none*/);
bool HelperIfaceClassImpl::handle_eval_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js) noexcept
{
  if (!get_struct_()->handle_eval) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation, const char* arg_js);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_eval;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_js_to_c));
  return _temp_ret;
}

// gboolean Helper::handle_get_win_id (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_get_win_id (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool HelperIfaceClassImpl::handle_get_win_id_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_win_id) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_win_id;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean Helper::handle_init (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_js /*none*/);
// gboolean Helper::handle_init (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_js /*none*/);
bool HelperIfaceClassImpl::handle_init_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js) noexcept
{
  if (!get_struct_()->handle_init) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation, const char* arg_js);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_init;
  auto arg_js_to_c = gi::unwrap (arg_js, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_js_to_c));
  return _temp_ret;
}

// gboolean Helper::handle_navigate (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_url /*none*/);
// gboolean Helper::handle_navigate (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_url /*none*/);
bool HelperIfaceClassImpl::handle_navigate_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url) noexcept
{
  if (!get_struct_()->handle_navigate) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation, const char* arg_url);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_navigate;
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_url_to_c));
  return _temp_ret;
}

// gboolean Helper::handle_reload (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_reload (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool HelperIfaceClassImpl::handle_reload_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_reload) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_reload;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean Helper::handle_resolve (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_resolve (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool HelperIfaceClassImpl::handle_resolve_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_resolve) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_resolve;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean Helper::handle_set_opaque_bg (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
// gboolean Helper::handle_set_opaque_bg (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
bool HelperIfaceClassImpl::handle_set_opaque_bg_ (Gio::DBusMethodInvocation invocation, gint arg_r, gint arg_g, gint arg_b, gint arg_a) noexcept
{
  if (!get_struct_()->handle_set_opaque_bg) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewHelper* object, ::GDBusMethodInvocation* invocation, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_set_opaque_bg;
  auto arg_a_to_c = arg_a;
  auto arg_b_to_c = arg_b;
  auto arg_g_to_c = arg_g;
  auto arg_r_to_c = arg_r;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewHelper*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gint) (arg_r_to_c), (gint) (arg_g_to_c), (gint) (arg_b_to_c), (gint) (arg_a_to_c));
  return _temp_ret;
}

// void Helper::started (WebviewHelper* object /*none*/);
// void Helper::started (::WebviewHelper* object /*none*/);
void HelperIfaceClassImpl::started_ () noexcept
{
  if (!get_struct_()->started) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::WebviewHelper* object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->started;
  call_wrap_v ((::WebviewHelper*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
