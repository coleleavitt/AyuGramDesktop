// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_INHIBIT_IMPL_HPP_
#define _GI_XDPINHIBIT_INHIBIT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdp_inhibit_inhibit_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_inhibit_inhibit_interface_info ();
Gio::DBusInterfaceInfo_Ref base::InhibitBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdp_inhibit_inhibit_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_inhibit_inhibit_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_inhibit_inhibit_call_create_monitor (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_inhibit_inhibit_call_create_monitor (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InhibitBase::call_create_monitor (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InhibitBase::call_create_monitor (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_inhibit_inhibit_call_create_monitor_finish (XdpInhibitInhibit* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_create_monitor_finish (::XdpInhibitInhibit* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::InhibitBase::call_create_monitor_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::InhibitBase::call_create_monitor_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::InhibitBase::call_create_monitor_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::InhibitBase::call_create_monitor_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdp_inhibit_inhibit_call_create_monitor_sync (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_create_monitor_sync (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::InhibitBase::call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_create_monitor_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdp_inhibit_inhibit_call_inhibit (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, guint arg_flags, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_inhibit_inhibit_call_inhibit (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InhibitBase::call_inhibit (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InhibitBase::call_inhibit (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_inhibit_inhibit_call_inhibit_finish (XdpInhibitInhibit* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_inhibit_finish (::XdpInhibitInhibit* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::InhibitBase::call_inhibit_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::InhibitBase::call_inhibit_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::InhibitBase::call_inhibit_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::InhibitBase::call_inhibit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdp_inhibit_inhibit_call_inhibit_sync (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, guint arg_flags, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_inhibit_sync (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::InhibitBase::call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_window, guint arg_flags, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdp_inhibit_inhibit_call_query_end_response (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_session_handle /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_inhibit_inhibit_call_query_end_response (::XdpInhibitInhibit* proxy /*none*/, const char* arg_session_handle /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::InhibitBase::call_query_end_response (const gi::cstring_v arg_session_handle, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_session_handle, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InhibitBase::call_query_end_response (const gi::cstring_v arg_session_handle, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_session_handle, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_inhibit_inhibit_call_query_end_response_finish (XdpInhibitInhibit* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_query_end_response_finish (::XdpInhibitInhibit* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::InhibitBase::call_query_end_response_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::InhibitBase::call_query_end_response_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdp_inhibit_inhibit_call_query_end_response_sync (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_session_handle /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_query_end_response_sync (::XdpInhibitInhibit* proxy /*none*/, const char* arg_session_handle /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::InhibitBase::call_query_end_response_sync (const gi::cstring_v arg_session_handle, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_session_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::InhibitBase::call_query_end_response_sync (const gi::cstring_v arg_session_handle) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_session_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response_sync;
  auto cancellable_to_c = nullptr;
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::InhibitBase::call_query_end_response_sync (const gi::cstring_v arg_session_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_session_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::InhibitBase::call_query_end_response_sync (const gi::cstring_v arg_session_handle, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* proxy, const char* arg_session_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_call_query_end_response_sync;
  auto cancellable_to_c = nullptr;
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdp_inhibit_inhibit_complete_create_monitor (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_inhibit_inhibit_complete_create_monitor (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
void base::InhibitBase::complete_create_monitor (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* object, ::GDBusMethodInvocation* invocation, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_complete_create_monitor;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (handle_to_c));
}

// void xdp_inhibit_inhibit_complete_inhibit (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_inhibit_inhibit_complete_inhibit (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
void base::InhibitBase::complete_inhibit (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* object, ::GDBusMethodInvocation* invocation, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_complete_inhibit;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (handle_to_c));
}

// void xdp_inhibit_inhibit_complete_query_end_response (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdp_inhibit_inhibit_complete_query_end_response (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::InhibitBase::complete_query_end_response (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_complete_query_end_response;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdp_inhibit_inhibit_emit_state_changed (XdpInhibitInhibit* object /*none*/, const gchar* arg_session_handle /*none*/, GVariant* arg_state /*none*/);
// void xdp_inhibit_inhibit_emit_state_changed (::XdpInhibitInhibit* object /*none*/, const char* arg_session_handle /*none*/, ::GVariant* arg_state /*none*/);
void base::InhibitBase::emit_state_changed (const gi::cstring_v arg_session_handle, GLib::Variant arg_state) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* object, const char* arg_session_handle, ::GVariant* arg_state);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_emit_state_changed;
  auto arg_state_to_c = gi::unwrap (arg_state, gi::transfer_none);
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GVariant*) (arg_state_to_c));
}

// guint xdp_inhibit_inhibit_get_version (XdpInhibitInhibit* object /*none*/);
// guint xdp_inhibit_inhibit_get_version (::XdpInhibitInhibit* object /*none*/);
guint base::InhibitBase::get_version () noexcept
{
  typedef guint (*call_wrap_t) (::XdpInhibitInhibit* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_get_version;
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()));
  return _temp_ret;
}

// void xdp_inhibit_inhibit_set_version (XdpInhibitInhibit* object /*none*/, guint value);
// void xdp_inhibit_inhibit_set_version (::XdpInhibitInhibit* object /*none*/, guint value);
void base::InhibitBase::set_version (guint value) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* object, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_inhibit_set_version;
  auto value_to_c = value;
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (guint) (value_to_c));
}






} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibit_extra_def_impl.hpp>)
#include <xdpinhibit/inhibit_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibit_extra_impl.hpp>)
#include <xdpinhibit/inhibit_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {

void InhibitIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpInhibitInhibitIface *methods = (::XdpInhibitInhibitIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_create_monitor) methods->handle_create_monitor = (decltype (methods->handle_create_monitor)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, GLib::Variant arg_options), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_create_monitor_>;
  if (init_data.handle_inhibit) methods->handle_inhibit = (decltype (methods->handle_inhibit)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_inhibit_>;
  if (init_data.handle_query_end_response) methods->handle_query_end_response = (decltype (methods->handle_query_end_response)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_session_handle), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_query_end_response_>;
  if (init_data.state_changed) methods->state_changed = (decltype (methods->state_changed)) gi::detail::method_wrapper<self, void (*) (const gi::cstring_v arg_session_handle, GLib::Variant arg_state), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::state_changed_>;
}

// gboolean Inhibit::handle_create_monitor (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_window /*none*/, GVariant* arg_options /*none*/);
// gboolean Inhibit::handle_create_monitor (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_window /*none*/, ::GVariant* arg_options /*none*/);
bool InhibitIfaceClassImpl::handle_create_monitor_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, GLib::Variant arg_options) noexcept
{
  if (!get_struct_()->handle_create_monitor) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* object, ::GDBusMethodInvocation* invocation, const char* arg_window, ::GVariant* arg_options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_create_monitor;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_window_to_c), (::GVariant*) (arg_options_to_c));
  return _temp_ret;
}

// gboolean Inhibit::handle_inhibit (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_window /*none*/, guint arg_flags, GVariant* arg_options /*none*/);
// gboolean Inhibit::handle_inhibit (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/);
bool InhibitIfaceClassImpl::handle_inhibit_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options) noexcept
{
  if (!get_struct_()->handle_inhibit) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* object, ::GDBusMethodInvocation* invocation, const char* arg_window, guint arg_flags, ::GVariant* arg_options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_inhibit;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_flags_to_c = arg_flags;
  auto arg_window_to_c = gi::unwrap (arg_window, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_window_to_c), (guint) (arg_flags_to_c), (::GVariant*) (arg_options_to_c));
  return _temp_ret;
}

// gboolean Inhibit::handle_query_end_response (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_session_handle /*none*/);
// gboolean Inhibit::handle_query_end_response (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_session_handle /*none*/);
bool InhibitIfaceClassImpl::handle_query_end_response_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_session_handle) noexcept
{
  if (!get_struct_()->handle_query_end_response) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpInhibitInhibit* object, ::GDBusMethodInvocation* invocation, const char* arg_session_handle);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_query_end_response;
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_session_handle_to_c));
  return _temp_ret;
}

// void Inhibit::state_changed (XdpInhibitInhibit* object /*none*/, const gchar* arg_session_handle /*none*/, GVariant* arg_state /*none*/);
// void Inhibit::state_changed (::XdpInhibitInhibit* object /*none*/, const char* arg_session_handle /*none*/, ::GVariant* arg_state /*none*/);
void InhibitIfaceClassImpl::state_changed_ (const gi::cstring_v arg_session_handle, GLib::Variant arg_state) noexcept
{
  if (!get_struct_()->state_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdpInhibitInhibit* object, const char* arg_session_handle, ::GVariant* arg_state);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->state_changed;
  auto arg_state_to_c = gi::unwrap (arg_state, gi::transfer_none);
  auto arg_session_handle_to_c = gi::unwrap (arg_session_handle, gi::transfer_none);
  call_wrap_v ((::XdpInhibitInhibit*) (gobj_()), (const char*) (arg_session_handle_to_c), (::GVariant*) (arg_state_to_c));
}

} // namespace internal

} // namespace impl

} // namespace XdpInhibit

} // namespace repository

} // namespace gi

#endif
