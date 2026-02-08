// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_BACKGROUND_IMPL_HPP_
#define _GI_XDPBACKGROUND_BACKGROUND_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpBackground {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdp_background_background_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_background_background_interface_info ();
Gio::DBusInterfaceInfo_Ref base::BackgroundBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdp_background_background_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_background_background_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_background_background_call_request_background (XdpBackgroundBackground* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_background_background_call_request_background (::XdpBackgroundBackground* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::BackgroundBase::call_request_background (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::BackgroundBase::call_request_background (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_background_background_call_request_background_finish (XdpBackgroundBackground* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_background_background_call_request_background_finish (::XdpBackgroundBackground* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::BackgroundBase::call_request_background_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::BackgroundBase::call_request_background_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::BackgroundBase::call_request_background_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::BackgroundBase::call_request_background_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdp_background_background_call_request_background_sync (XdpBackgroundBackground* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_background_background_call_request_background_sync (::XdpBackgroundBackground* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::BackgroundBase::call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, const char* arg_parent_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_request_background_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdp_background_background_call_set_status (XdpBackgroundBackground* proxy /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_background_background_call_set_status (::XdpBackgroundBackground* proxy /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::BackgroundBase::call_set_status (GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::BackgroundBase::call_set_status (GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_background_background_call_set_status_finish (XdpBackgroundBackground* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_background_background_call_set_status_finish (::XdpBackgroundBackground* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::BackgroundBase::call_set_status_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::BackgroundBase::call_set_status_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdp_background_background_call_set_status_sync (XdpBackgroundBackground* proxy /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_background_background_call_set_status_sync (::XdpBackgroundBackground* proxy /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::BackgroundBase::call_set_status_sync (GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GVariant* arg_options, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::BackgroundBase::call_set_status_sync (GLib::Variant arg_options) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GVariant* arg_options, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status_sync;
  auto cancellable_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::BackgroundBase::call_set_status_sync (GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GVariant* arg_options, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::BackgroundBase::call_set_status_sync (GLib::Variant arg_options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* proxy, ::GVariant* arg_options, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_call_set_status_sync;
  auto cancellable_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdp_background_background_complete_request_background (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_background_background_complete_request_background (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
void base::BackgroundBase::complete_request_background (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundBackground* object, ::GDBusMethodInvocation* invocation, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_complete_request_background;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (handle_to_c));
}

// void xdp_background_background_complete_set_status (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdp_background_background_complete_set_status (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::BackgroundBase::complete_set_status (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundBackground* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_complete_set_status;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// guint xdp_background_background_get_version (XdpBackgroundBackground* object /*none*/);
// guint xdp_background_background_get_version (::XdpBackgroundBackground* object /*none*/);
guint base::BackgroundBase::get_version () noexcept
{
  typedef guint (*call_wrap_t) (::XdpBackgroundBackground* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_get_version;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()));
  return _temp_ret;
}

// void xdp_background_background_set_version (XdpBackgroundBackground* object /*none*/, guint value);
// void xdp_background_background_set_version (::XdpBackgroundBackground* object /*none*/, guint value);
void base::BackgroundBase::set_version (guint value) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundBackground* object, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_background_set_version;
  auto value_to_c = value;
  call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (guint) (value_to_c));
}




} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/background_extra_def_impl.hpp>)
#include <xdpbackground/background_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/background_extra_impl.hpp>)
#include <xdpbackground/background_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {

void BackgroundIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpBackgroundBackgroundIface *methods = (::XdpBackgroundBackgroundIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_request_background) methods->handle_request_background = (decltype (methods->handle_request_background)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, GLib::Variant arg_options), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_request_background_>;
  if (init_data.handle_set_status) methods->handle_set_status = (decltype (methods->handle_set_status)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, GLib::Variant arg_options), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_set_status_>;
}

// gboolean Background::handle_request_background (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_options /*none*/);
// gboolean Background::handle_request_background (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/);
bool BackgroundIfaceClassImpl::handle_request_background_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, GLib::Variant arg_options) noexcept
{
  if (!get_struct_()->handle_request_background) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* object, ::GDBusMethodInvocation* invocation, const char* arg_parent_window, ::GVariant* arg_options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_request_background;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_options_to_c));
  return _temp_ret;
}

// gboolean Background::handle_set_status (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GVariant* arg_options /*none*/);
// gboolean Background::handle_set_status (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_options /*none*/);
bool BackgroundIfaceClassImpl::handle_set_status_ (Gio::DBusMethodInvocation invocation, GLib::Variant arg_options) noexcept
{
  if (!get_struct_()->handle_set_status) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpBackgroundBackground* object, ::GDBusMethodInvocation* invocation, ::GVariant* arg_options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_set_status;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpBackgroundBackground*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (arg_options_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
