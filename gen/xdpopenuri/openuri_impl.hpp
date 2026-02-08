// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OPENURI_IMPL_HPP_
#define _GI_XDPOPENURI_OPENURI_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdp_open_uri_open_uri_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_open_uri_open_uri_interface_info ();
Gio::DBusInterfaceInfo_Ref base::OpenURIBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdp_open_uri_open_uri_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_open_uri_open_uri_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_open_uri_open_uri_call_open_directory (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_call_open_directory (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OpenURIBase::call_open_directory (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OpenURIBase::call_open_directory (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_open_uri_open_uri_call_open_directory_finish (XdpOpenURIOpenURI* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_directory_finish (::XdpOpenURIOpenURI* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::OpenURIBase::call_open_directory_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_directory_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> base::OpenURIBase::call_open_directory_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, Gio::UnixFDList> base::OpenURIBase::call_open_directory_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean xdp_open_uri_open_uri_call_open_directory_sync (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_directory_sync (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, Gio::UnixFDList> base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, Gio::UnixFDList> base::OpenURIBase::call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_directory_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void xdp_open_uri_open_uri_call_open_file (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_call_open_file (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OpenURIBase::call_open_file (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OpenURIBase::call_open_file (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_open_uri_open_uri_call_open_file_finish (XdpOpenURIOpenURI* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_file_finish (::XdpOpenURIOpenURI* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::OpenURIBase::call_open_file_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_file_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> base::OpenURIBase::call_open_file_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, Gio::UnixFDList> base::OpenURIBase::call_open_file_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// gboolean xdp_open_uri_open_uri_call_open_file_sync (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_file_sync (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, Gio::UnixFDList> base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}
std::tuple<bool, gi::cstring, Gio::UnixFDList> base::OpenURIBase::call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options, ::GUnixFDList* fd_list, char** out_handle, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_file_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  char* out_handle_o {};
  auto fd_list_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c), (::GUnixFDList*) (fd_list_to_c), (char**) (&out_handle_o), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_fd_list_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}

// void xdp_open_uri_open_uri_call_open_uri (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, const gchar* arg_uri /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_call_open_uri (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, const char* arg_uri /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::OpenURIBase::call_open_uri (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OpenURIBase::call_open_uri (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_open_uri_open_uri_call_open_uri_finish (XdpOpenURIOpenURI* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_uri_finish (::XdpOpenURIOpenURI* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::OpenURIBase::call_open_uri_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_uri_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (out_handle ? &out_handle_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::OpenURIBase::call_open_uri_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::OpenURIBase::call_open_uri_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, char** out_handle, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_handle_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (char**) (&out_handle_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdp_open_uri_open_uri_call_open_uri_sync (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, const gchar* arg_uri /*none*/, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_uri_sync (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, const char* arg_uri /*none*/, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (out_handle ? &out_handle_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_handle) *out_handle = gi::wrap (out_handle_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::OpenURIBase::call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* proxy, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options, char** out_handle, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_call_open_uri_sync;
  auto cancellable_to_c = nullptr;
  char* out_handle_o {};
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c), (char**) (&out_handle_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_handle_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdp_open_uri_open_uri_complete_open_directory (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GUnixFDList* fd_list /*none,nullable*/, const gchar* handle /*none*/);
// void xdp_open_uri_open_uri_complete_open_directory (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GUnixFDList* fd_list /*none,nullable*/, const char* handle /*none*/);
void base::OpenURIBase::complete_open_directory (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, ::GUnixFDList* fd_list, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_complete_open_directory;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GUnixFDList*) (fd_list_to_c), (const char*) (handle_to_c));
}
void base::OpenURIBase::complete_open_directory (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, ::GUnixFDList* fd_list, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_complete_open_directory;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto fd_list_to_c = nullptr;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GUnixFDList*) (fd_list_to_c), (const char*) (handle_to_c));
}

// void xdp_open_uri_open_uri_complete_open_file (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GUnixFDList* fd_list /*none,nullable*/, const gchar* handle /*none*/);
// void xdp_open_uri_open_uri_complete_open_file (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GUnixFDList* fd_list /*none,nullable*/, const char* handle /*none*/);
void base::OpenURIBase::complete_open_file (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, ::GUnixFDList* fd_list, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_complete_open_file;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GUnixFDList*) (fd_list_to_c), (const char*) (handle_to_c));
}
void base::OpenURIBase::complete_open_file (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, ::GUnixFDList* fd_list, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_complete_open_file;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto fd_list_to_c = nullptr;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GUnixFDList*) (fd_list_to_c), (const char*) (handle_to_c));
}

// void xdp_open_uri_open_uri_complete_open_uri (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_open_uri_open_uri_complete_open_uri (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
void base::OpenURIBase::complete_open_uri (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, const char* handle);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_complete_open_uri;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (handle_to_c));
}

// guint xdp_open_uri_open_uri_get_version (XdpOpenURIOpenURI* object /*none*/);
// guint xdp_open_uri_open_uri_get_version (::XdpOpenURIOpenURI* object /*none*/);
guint base::OpenURIBase::get_version () noexcept
{
  typedef guint (*call_wrap_t) (::XdpOpenURIOpenURI* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_get_version;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()));
  return _temp_ret;
}

// void xdp_open_uri_open_uri_set_version (XdpOpenURIOpenURI* object /*none*/, guint value);
// void xdp_open_uri_open_uri_set_version (::XdpOpenURIOpenURI* object /*none*/, guint value);
void base::OpenURIBase::set_version (guint value) noexcept
{
  typedef void (*call_wrap_t) (::XdpOpenURIOpenURI* object, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_open_uri_set_version;
  auto value_to_c = value;
  call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (guint) (value_to_c));
}





} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuri_extra_def_impl.hpp>)
#include <xdpopenuri/openuri_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuri_extra_impl.hpp>)
#include <xdpopenuri/openuri_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {

void OpenURIIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpOpenURIOpenURIIface *methods = (::XdpOpenURIOpenURIIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_open_directory) methods->handle_open_directory = (decltype (methods->handle_open_directory)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_open_directory_>;
  if (init_data.handle_open_file) methods->handle_open_file = (decltype (methods->handle_open_file)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_open_file_>;
  if (init_data.handle_open_uri) methods->handle_open_uri = (decltype (methods->handle_open_uri)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_open_uri_>;
}

// gboolean OpenURI::handle_open_directory (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GUnixFDList* fd_list /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_directory (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
bool OpenURIIfaceClassImpl::handle_open_directory_ (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept
{
  if (!get_struct_()->handle_open_directory) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, ::GUnixFDList* fd_list, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_open_directory;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GUnixFDList*) (fd_list_to_c), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c));
  return _temp_ret;
}

// gboolean OpenURI::handle_open_file (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GUnixFDList* fd_list /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_file (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
bool OpenURIIfaceClassImpl::handle_open_file_ (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept
{
  if (!get_struct_()->handle_open_file) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, ::GUnixFDList* fd_list, const char* arg_parent_window, ::GVariant* arg_fd, ::GVariant* arg_options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_open_file;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_fd_to_c = gi::unwrap (arg_fd, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GUnixFDList*) (fd_list_to_c), (const char*) (arg_parent_window_to_c), (::GVariant*) (arg_fd_to_c), (::GVariant*) (arg_options_to_c));
  return _temp_ret;
}

// gboolean OpenURI::handle_open_uri (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_parent_window /*none*/, const gchar* arg_uri /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_uri (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_parent_window /*none*/, const char* arg_uri /*none*/, ::GVariant* arg_options /*none*/);
bool OpenURIIfaceClassImpl::handle_open_uri_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options) noexcept
{
  if (!get_struct_()->handle_open_uri) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpOpenURIOpenURI* object, ::GDBusMethodInvocation* invocation, const char* arg_parent_window, const char* arg_uri, ::GVariant* arg_options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_open_uri;
  auto arg_options_to_c = gi::unwrap (arg_options, gi::transfer_none);
  auto arg_uri_to_c = gi::unwrap (arg_uri, gi::transfer_none);
  auto arg_parent_window_to_c = gi::unwrap (arg_parent_window, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpOpenURIOpenURI*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_parent_window_to_c), (const char*) (arg_uri_to_c), (::GVariant*) (arg_options_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
