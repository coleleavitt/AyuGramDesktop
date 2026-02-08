// AUTO-GENERATED

#ifndef _GI_WEBVIEW_MASTER_IMPL_HPP_
#define _GI_WEBVIEW_MASTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Webview {

namespace base {

// GDBusInterfaceInfo* /*none*/ webview_master_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ webview_master_interface_info ();
Gio::DBusInterfaceInfo_Ref base::MasterBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint webview_master_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint webview_master_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void webview_master_call_get_start_data (WebviewMaster* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_get_start_data (::WebviewMaster* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MasterBase::call_get_start_data (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MasterBase::call_get_start_data (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_master_call_get_start_data_finish (WebviewMaster* proxy /*none*/, gchar** out_appId /*full,out,opt*/, gchar** out_waylandDisplay /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_get_start_data_finish (::WebviewMaster* proxy /*none*/, char** out_appId /*full,out,opt*/, char** out_waylandDisplay /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MasterBase::call_get_start_data_finish (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (out_appId ? &out_appId_o : nullptr), (char**) (out_waylandDisplay ? &out_waylandDisplay_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_waylandDisplay) *out_waylandDisplay = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  if (out_appId) *out_appId = gi::wrap (out_appId_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_get_start_data_finish (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (out_appId ? &out_appId_o : nullptr), (char**) (out_waylandDisplay ? &out_waylandDisplay_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_waylandDisplay) *out_waylandDisplay = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  if (out_appId) *out_appId = gi::wrap (out_appId_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, gi::cstring>> base::MasterBase::call_get_start_data_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (&out_appId_o), (char**) (&out_waylandDisplay_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_appId_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::MasterBase::call_get_start_data_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (&out_appId_o), (char**) (&out_waylandDisplay_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_appId_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean webview_master_call_get_start_data_sync (WebviewMaster* proxy /*none*/, gchar** out_appId /*full,out,opt*/, gchar** out_waylandDisplay /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_get_start_data_sync (::WebviewMaster* proxy /*none*/, char** out_appId /*full,out,opt*/, char** out_waylandDisplay /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MasterBase::call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (out_appId ? &out_appId_o : nullptr), (char**) (out_waylandDisplay ? &out_waylandDisplay_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_waylandDisplay) *out_waylandDisplay = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  if (out_appId) *out_appId = gi::wrap (out_appId_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MasterBase::call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (out_appId ? &out_appId_o : nullptr), (char**) (out_waylandDisplay ? &out_waylandDisplay_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_waylandDisplay) *out_waylandDisplay = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  if (out_appId) *out_appId = gi::wrap (out_appId_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (out_appId ? &out_appId_o : nullptr), (char**) (out_waylandDisplay ? &out_waylandDisplay_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_waylandDisplay) *out_waylandDisplay = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  if (out_appId) *out_appId = gi::wrap (out_appId_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MasterBase::call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (out_appId ? &out_appId_o : nullptr), (char**) (out_waylandDisplay ? &out_waylandDisplay_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_waylandDisplay) *out_waylandDisplay = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  if (out_appId) *out_appId = gi::wrap (out_appId_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, gi::cstring>> base::MasterBase::call_get_start_data_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (&out_appId_o), (char**) (&out_waylandDisplay_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_appId_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
gi::result<std::tuple<bool, gi::cstring, gi::cstring>> base::MasterBase::call_get_start_data_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (&out_appId_o), (char**) (&out_waylandDisplay_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_appId_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::MasterBase::call_get_start_data_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (&out_appId_o), (char**) (&out_waylandDisplay_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_appId_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, gi::cstring> base::MasterBase::call_get_start_data_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, char** out_appId, char** out_waylandDisplay, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_get_start_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_waylandDisplay_o {};
  char* out_appId_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (char**) (&out_appId_o), (char**) (&out_waylandDisplay_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_appId_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_waylandDisplay_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void webview_master_call_message_received (WebviewMaster* proxy /*none*/, const gchar* arg_message /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_message_received (::WebviewMaster* proxy /*none*/, const char* arg_message /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MasterBase::call_message_received (const gi::cstring_v arg_message, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_message, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_message_to_c = gi::unwrap (arg_message, gi::transfer_none);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_message_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MasterBase::call_message_received (const gi::cstring_v arg_message, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_message, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_message_to_c = gi::unwrap (arg_message, gi::transfer_none);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_message_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_master_call_message_received_finish (WebviewMaster* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_message_received_finish (::WebviewMaster* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MasterBase::call_message_received_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_message_received_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_master_call_message_received_sync (WebviewMaster* proxy /*none*/, const gchar* arg_message /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_message_received_sync (::WebviewMaster* proxy /*none*/, const char* arg_message /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MasterBase::call_message_received_sync (const gi::cstring_v arg_message, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_message, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_message_to_c = gi::unwrap (arg_message, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_message_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MasterBase::call_message_received_sync (const gi::cstring_v arg_message) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_message, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received_sync;
  auto cancellable_to_c = nullptr;
  auto arg_message_to_c = gi::unwrap (arg_message, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_message_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_message_received_sync (const gi::cstring_v arg_message, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_message, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_message_to_c = gi::unwrap (arg_message, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_message_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MasterBase::call_message_received_sync (const gi::cstring_v arg_message, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_message, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_message_received_sync;
  auto cancellable_to_c = nullptr;
  auto arg_message_to_c = gi::unwrap (arg_message, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_message_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_master_call_navigation_done (WebviewMaster* proxy /*none*/, gboolean arg_success, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_navigation_done (::WebviewMaster* proxy /*none*/, gboolean arg_success, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MasterBase::call_navigation_done (gboolean arg_success, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, gboolean arg_success, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_success_to_c = arg_success;
  call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean) (arg_success_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MasterBase::call_navigation_done (gboolean arg_success, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, gboolean arg_success, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_success_to_c = arg_success;
  call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean) (arg_success_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_master_call_navigation_done_finish (WebviewMaster* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_navigation_done_finish (::WebviewMaster* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MasterBase::call_navigation_done_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_done_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_master_call_navigation_done_sync (WebviewMaster* proxy /*none*/, gboolean arg_success, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_navigation_done_sync (::WebviewMaster* proxy /*none*/, gboolean arg_success, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MasterBase::call_navigation_done_sync (gboolean arg_success, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean arg_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_success_to_c = arg_success;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean) (arg_success_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MasterBase::call_navigation_done_sync (gboolean arg_success) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean arg_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done_sync;
  auto cancellable_to_c = nullptr;
  auto arg_success_to_c = arg_success;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean) (arg_success_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_done_sync (gboolean arg_success, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean arg_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_success_to_c = arg_success;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean) (arg_success_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_done_sync (gboolean arg_success, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean arg_success, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_done_sync;
  auto cancellable_to_c = nullptr;
  auto arg_success_to_c = arg_success;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean) (arg_success_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_master_call_navigation_started (WebviewMaster* proxy /*none*/, const gchar* arg_uri /*none*/, gboolean arg_newWindow, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_navigation_started (::WebviewMaster* proxy /*none*/, const char* arg_uri /*none*/, gboolean arg_newWindow, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MasterBase::call_navigation_started (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MasterBase::call_navigation_started (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_master_call_navigation_started_finish (WebviewMaster* proxy /*none*/, gboolean* out_result, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_navigation_started_finish (::WebviewMaster* proxy /*none*/, gboolean* out_result, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MasterBase::call_navigation_started_finish (bool * out_result, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_started_finish (bool * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool>> base::MasterBase::call_navigation_started_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (&out_result_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::MasterBase::call_navigation_started_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (&out_result_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean webview_master_call_navigation_started_sync (WebviewMaster* proxy /*none*/, const gchar* arg_uri /*none*/, gboolean arg_newWindow, gboolean* out_result, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_navigation_started_sync (::WebviewMaster* proxy /*none*/, const char* arg_uri /*none*/, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = out_result_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = out_result_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool>> base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, bool>> base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::MasterBase::call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_uri, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_started_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_result_o {};
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c), (gboolean*) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_result_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void webview_master_call_navigation_state_update (WebviewMaster* proxy /*none*/, const gchar* arg_url /*none*/, const gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_navigation_state_update (::WebviewMaster* proxy /*none*/, const char* arg_url /*none*/, const char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MasterBase::call_navigation_state_update (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_url, const char* arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_canGoForward_to_c = arg_canGoForward;
  auto arg_canGoBack_to_c = arg_canGoBack;
  auto arg_title_to_c = gi::unwrap (arg_title, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_url_to_c), (const char*) (arg_title_to_c), (gboolean) (arg_canGoBack_to_c), (gboolean) (arg_canGoForward_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MasterBase::call_navigation_state_update (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_url, const char* arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_canGoForward_to_c = arg_canGoForward;
  auto arg_canGoBack_to_c = arg_canGoBack;
  auto arg_title_to_c = gi::unwrap (arg_title, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_url_to_c), (const char*) (arg_title_to_c), (gboolean) (arg_canGoBack_to_c), (gboolean) (arg_canGoForward_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_master_call_navigation_state_update_finish (WebviewMaster* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_navigation_state_update_finish (::WebviewMaster* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MasterBase::call_navigation_state_update_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_state_update_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean webview_master_call_navigation_state_update_sync (WebviewMaster* proxy /*none*/, const gchar* arg_url /*none*/, const gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_navigation_state_update_sync (::WebviewMaster* proxy /*none*/, const char* arg_url /*none*/, const char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MasterBase::call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_url, const char* arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_canGoForward_to_c = arg_canGoForward;
  auto arg_canGoBack_to_c = arg_canGoBack;
  auto arg_title_to_c = gi::unwrap (arg_title, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_url_to_c), (const char*) (arg_title_to_c), (gboolean) (arg_canGoBack_to_c), (gboolean) (arg_canGoForward_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MasterBase::call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_url, const char* arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update_sync;
  auto cancellable_to_c = nullptr;
  auto arg_canGoForward_to_c = arg_canGoForward;
  auto arg_canGoBack_to_c = arg_canGoBack;
  auto arg_title_to_c = gi::unwrap (arg_title, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_url_to_c), (const char*) (arg_title_to_c), (gboolean) (arg_canGoBack_to_c), (gboolean) (arg_canGoForward_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_url, const char* arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_canGoForward_to_c = arg_canGoForward;
  auto arg_canGoBack_to_c = arg_canGoBack;
  auto arg_title_to_c = gi::unwrap (arg_title, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_url_to_c), (const char*) (arg_title_to_c), (gboolean) (arg_canGoBack_to_c), (gboolean) (arg_canGoForward_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MasterBase::call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, const char* arg_url, const char* arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_navigation_state_update_sync;
  auto cancellable_to_c = nullptr;
  auto arg_canGoForward_to_c = arg_canGoForward;
  auto arg_canGoBack_to_c = arg_canGoBack;
  auto arg_title_to_c = gi::unwrap (arg_title, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (const char*) (arg_url_to_c), (const char*) (arg_title_to_c), (gboolean) (arg_canGoBack_to_c), (gboolean) (arg_canGoForward_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void webview_master_call_script_dialog (WebviewMaster* proxy /*none*/, gint arg_type, const gchar* arg_text /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_script_dialog (::WebviewMaster* proxy /*none*/, gint arg_type, const char* arg_text /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MasterBase::call_script_dialog (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MasterBase::call_script_dialog (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webview_master_call_script_dialog_finish (WebviewMaster* proxy /*none*/, gboolean* out_accepted, gchar** out_text /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_script_dialog_finish (::WebviewMaster* proxy /*none*/, gboolean* out_accepted, char** out_text /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MasterBase::call_script_dialog_finish (bool * out_accepted, gi::cstring * out_text, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_accepted, char** out_text, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (out_accepted ? &out_accepted_o : nullptr), (char**) (out_text ? &out_text_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_text) *out_text = gi::wrap (out_text_o, gi::transfer_full);
  if (out_accepted) *out_accepted = out_accepted_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_script_dialog_finish (bool * out_accepted, gi::cstring * out_text, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_accepted, char** out_text, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (out_accepted ? &out_accepted_o : nullptr), (char**) (out_text ? &out_text_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_text) *out_text = gi::wrap (out_text_o, gi::transfer_full);
  if (out_accepted) *out_accepted = out_accepted_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool, gi::cstring>> base::MasterBase::call_script_dialog_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_accepted, char** out_text, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (&out_accepted_o), (char**) (&out_text_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_accepted_o;
  auto &&tmp_return_3 = gi::wrap (out_text_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, bool, gi::cstring> base::MasterBase::call_script_dialog_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gboolean* out_accepted, char** out_text, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gboolean*) (&out_accepted_o), (char**) (&out_text_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_accepted_o;
  auto &&tmp_return_3 = gi::wrap (out_text_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean webview_master_call_script_dialog_sync (WebviewMaster* proxy /*none*/, gint arg_type, const gchar* arg_text /*none*/, const gchar* arg_value /*none*/, gboolean* out_accepted, gchar** out_text /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_script_dialog_sync (::WebviewMaster* proxy /*none*/, gint arg_type, const char* arg_text /*none*/, const char* arg_value /*none*/, gboolean* out_accepted, char** out_text /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (out_accepted ? &out_accepted_o : nullptr), (char**) (out_text ? &out_text_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_text) *out_text = gi::wrap (out_text_o, gi::transfer_full);
  if (out_accepted) *out_accepted = out_accepted_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = nullptr;
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (out_accepted ? &out_accepted_o : nullptr), (char**) (out_text ? &out_text_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_text) *out_text = gi::wrap (out_text_o, gi::transfer_full);
  if (out_accepted) *out_accepted = out_accepted_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (out_accepted ? &out_accepted_o : nullptr), (char**) (out_text ? &out_text_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_text) *out_text = gi::wrap (out_text_o, gi::transfer_full);
  if (out_accepted) *out_accepted = out_accepted_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = nullptr;
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (out_accepted ? &out_accepted_o : nullptr), (char**) (out_text ? &out_text_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_text) *out_text = gi::wrap (out_text_o, gi::transfer_full);
  if (out_accepted) *out_accepted = out_accepted_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool, gi::cstring>> base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (&out_accepted_o), (char**) (&out_text_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_accepted_o;
  auto &&tmp_return_3 = gi::wrap (out_text_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
gi::result<std::tuple<bool, bool, gi::cstring>> base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = nullptr;
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (&out_accepted_o), (char**) (&out_text_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_accepted_o;
  auto &&tmp_return_3 = gi::wrap (out_text_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, bool, gi::cstring> base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (&out_accepted_o), (char**) (&out_text_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_accepted_o;
  auto &&tmp_return_3 = gi::wrap (out_text_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, bool, gi::cstring> base::MasterBase::call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebviewMaster* proxy, gint arg_type, const char* arg_text, const char* arg_value, gboolean* out_accepted, char** out_text, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_call_script_dialog_sync;
  auto cancellable_to_c = nullptr;
  char* out_text_o {};
  gboolean out_accepted_o {};
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c), (gboolean*) (&out_accepted_o), (char**) (&out_text_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_accepted_o;
  auto &&tmp_return_3 = gi::wrap (out_text_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void webview_master_complete_get_start_data (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* appId /*none*/, const gchar* waylandDisplay /*none*/);
// void webview_master_complete_get_start_data (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* appId /*none*/, const char* waylandDisplay /*none*/);
void base::MasterBase::complete_get_start_data (Gio::DBusMethodInvocation invocation, const gi::cstring_v appId, const gi::cstring_v waylandDisplay) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, const char* appId, const char* waylandDisplay);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_complete_get_start_data;
  auto waylandDisplay_to_c = gi::unwrap (waylandDisplay, gi::transfer_none);
  auto appId_to_c = gi::unwrap (appId, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (appId_to_c), (const char*) (waylandDisplay_to_c));
}

// void webview_master_complete_message_received (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_master_complete_message_received (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MasterBase::complete_message_received (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_complete_message_received;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_master_complete_navigation_done (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_master_complete_navigation_done (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MasterBase::complete_navigation_done (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_complete_navigation_done;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_master_complete_navigation_started (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean result);
// void webview_master_complete_navigation_started (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean result);
void base::MasterBase::complete_navigation_started (Gio::DBusMethodInvocation invocation, gboolean result) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, gboolean result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_complete_navigation_started;
  auto result_to_c = result;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gboolean) (result_to_c));
}

// void webview_master_complete_navigation_state_update (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_master_complete_navigation_state_update (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MasterBase::complete_navigation_state_update (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_complete_navigation_state_update;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void webview_master_complete_script_dialog (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean accepted, const gchar* text /*none*/);
// void webview_master_complete_script_dialog (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean accepted, const char* text /*none*/);
void base::MasterBase::complete_script_dialog (Gio::DBusMethodInvocation invocation, gboolean accepted, const gi::cstring_v text) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, gboolean accepted, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_complete_script_dialog;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto accepted_to_c = accepted;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gboolean) (accepted_to_c), (const char*) (text_to_c));
}

// void webview_master_emit_data_server_started (WebviewMaster* object /*none*/, guint16 arg_port, const gchar* arg_password /*none*/);
// void webview_master_emit_data_server_started (::WebviewMaster* object /*none*/, guint16 arg_port, const char* arg_password /*none*/);
void base::MasterBase::emit_data_server_started (guint16 arg_port, const gi::cstring_v arg_password) noexcept
{
  typedef void (*call_wrap_t) (::WebviewMaster* object, guint16 arg_port, const char* arg_password);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_master_emit_data_server_started;
  auto arg_password_to_c = gi::unwrap (arg_password, gi::transfer_none);
  auto arg_port_to_c = arg_port;
  call_wrap_v ((::WebviewMaster*) (gobj_()), (guint16) (arg_port_to_c), (const char*) (arg_password_to_c));
}









} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/master_extra_def_impl.hpp>)
#include <webview/master_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/master_extra_impl.hpp>)
#include <webview/master_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {

void MasterIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::WebviewMasterIface *methods = (::WebviewMasterIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.data_server_started) methods->data_server_started = (decltype (methods->data_server_started)) gi::detail::method_wrapper<self, void (*) (guint16 arg_port, const gi::cstring_v arg_password), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::data_server_started_>;
  if (init_data.handle_get_start_data) methods->handle_get_start_data = (decltype (methods->handle_get_start_data)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_start_data_>;
  if (init_data.handle_message_received) methods->handle_message_received = (decltype (methods->handle_message_received)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_message), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_message_received_>;
  if (init_data.handle_navigation_done) methods->handle_navigation_done = (decltype (methods->handle_navigation_done)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, gboolean arg_success), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_navigation_done_>;
  if (init_data.handle_navigation_started) methods->handle_navigation_started = (decltype (methods->handle_navigation_started)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_uri, gboolean arg_newWindow), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_navigation_started_>;
  if (init_data.handle_navigation_state_update) methods->handle_navigation_state_update = (decltype (methods->handle_navigation_state_update)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_navigation_state_update_>;
  if (init_data.handle_script_dialog) methods->handle_script_dialog = (decltype (methods->handle_script_dialog)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_script_dialog_>;
}

// void Master::data_server_started (WebviewMaster* object /*none*/, guint16 arg_port, const gchar* arg_password /*none*/);
// void Master::data_server_started (::WebviewMaster* object /*none*/, guint16 arg_port, const char* arg_password /*none*/);
void MasterIfaceClassImpl::data_server_started_ (guint16 arg_port, const gi::cstring_v arg_password) noexcept
{
  if (!get_struct_()->data_server_started) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::WebviewMaster* object, guint16 arg_port, const char* arg_password);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->data_server_started;
  auto arg_password_to_c = gi::unwrap (arg_password, gi::transfer_none);
  auto arg_port_to_c = arg_port;
  call_wrap_v ((::WebviewMaster*) (gobj_()), (guint16) (arg_port_to_c), (const char*) (arg_password_to_c));
}

// gboolean Master::handle_get_start_data (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Master::handle_get_start_data (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MasterIfaceClassImpl::handle_get_start_data_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_start_data) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_start_data;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean Master::handle_message_received (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_message /*none*/);
// gboolean Master::handle_message_received (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_message /*none*/);
bool MasterIfaceClassImpl::handle_message_received_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_message) noexcept
{
  if (!get_struct_()->handle_message_received) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, const char* arg_message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_message_received;
  auto arg_message_to_c = gi::unwrap (arg_message, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_message_to_c));
  return _temp_ret;
}

// gboolean Master::handle_navigation_done (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gboolean arg_success);
// gboolean Master::handle_navigation_done (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gboolean arg_success);
bool MasterIfaceClassImpl::handle_navigation_done_ (Gio::DBusMethodInvocation invocation, gboolean arg_success) noexcept
{
  if (!get_struct_()->handle_navigation_done) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, gboolean arg_success);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_navigation_done;
  auto arg_success_to_c = arg_success;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gboolean) (arg_success_to_c));
  return _temp_ret;
}

// gboolean Master::handle_navigation_started (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_uri /*none*/, gboolean arg_newWindow);
// gboolean Master::handle_navigation_started (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_uri /*none*/, gboolean arg_newWindow);
bool MasterIfaceClassImpl::handle_navigation_started_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_uri, gboolean arg_newWindow) noexcept
{
  if (!get_struct_()->handle_navigation_started) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, const char* arg_uri, gboolean arg_newWindow);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_navigation_started;
  auto arg_newWindow_to_c = arg_newWindow;
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_uri_to_c), (gboolean) (arg_newWindow_to_c));
  return _temp_ret;
}

// gboolean Master::handle_navigation_state_update (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_url /*none*/, const gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
// gboolean Master::handle_navigation_state_update (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_url /*none*/, const char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
bool MasterIfaceClassImpl::handle_navigation_state_update_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward) noexcept
{
  if (!get_struct_()->handle_navigation_state_update) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, const char* arg_url, const char* arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_navigation_state_update;
  auto arg_canGoForward_to_c = arg_canGoForward;
  auto arg_canGoBack_to_c = arg_canGoBack;
  auto arg_title_to_c = gi::unwrap (arg_title, gi::transfer_none);
  auto arg_url_to_c = gi::unwrap (arg_url, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_url_to_c), (const char*) (arg_title_to_c), (gboolean) (arg_canGoBack_to_c), (gboolean) (arg_canGoForward_to_c));
  return _temp_ret;
}

// gboolean Master::handle_script_dialog (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint arg_type, const gchar* arg_text /*none*/, const gchar* arg_value /*none*/);
// gboolean Master::handle_script_dialog (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint arg_type, const char* arg_text /*none*/, const char* arg_value /*none*/);
bool MasterIfaceClassImpl::handle_script_dialog_ (Gio::DBusMethodInvocation invocation, gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value) noexcept
{
  if (!get_struct_()->handle_script_dialog) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::WebviewMaster* object, ::GDBusMethodInvocation* invocation, gint arg_type, const char* arg_text, const char* arg_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_script_dialog;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_type_to_c = arg_type;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::WebviewMaster*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gint) (arg_type_to_c), (const char*) (arg_text_to_c), (const char*) (arg_value_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
