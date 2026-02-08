// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPEER_IMPL_HPP_
#define _GI_XDGDBUS_DBUSPEER_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_peer_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_peer_interface_info ();
Gio::DBusInterfaceInfo_Ref base::DBusPeerBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdg_dbus_dbus_peer_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_peer_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_peer_call_get_machine_id (XdgDBusDBusPeer* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_peer_call_get_machine_id (::XdgDBusDBusPeer* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusPeerBase::call_get_machine_id (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusPeerBase::call_get_machine_id (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_peer_call_get_machine_id_finish (XdgDBusDBusPeer* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_get_machine_id_finish (::XdgDBusDBusPeer* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusPeerBase::call_get_machine_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPeerBase::call_get_machine_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusPeerBase::call_get_machine_id_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusPeerBase::call_get_machine_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_peer_call_get_machine_id_sync (XdgDBusDBusPeer* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_get_machine_id_sync (::XdgDBusDBusPeer* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusPeerBase::call_get_machine_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusPeerBase::call_get_machine_id_sync (gi::cstring * out_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPeerBase::call_get_machine_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusPeerBase::call_get_machine_id_sync (gi::cstring * out_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusPeerBase::call_get_machine_id_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusPeerBase::call_get_machine_id_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusPeerBase::call_get_machine_id_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusPeerBase::call_get_machine_id_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_get_machine_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_peer_call_ping (XdgDBusDBusPeer* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_peer_call_ping (::XdgDBusDBusPeer* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusPeerBase::call_ping (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusPeerBase::call_ping (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_peer_call_ping_finish (XdgDBusDBusPeer* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_ping_finish (::XdgDBusDBusPeer* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusPeerBase::call_ping_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPeerBase::call_ping_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_dbus_dbus_peer_call_ping_sync (XdgDBusDBusPeer* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_ping_sync (::XdgDBusDBusPeer* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusPeerBase::call_ping_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusPeerBase::call_ping_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPeerBase::call_ping_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusPeerBase::call_ping_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_call_ping_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_dbus_dbus_peer_complete_get_machine_id (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_peer_complete_get_machine_id (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
void base::DBusPeerBase::complete_get_machine_id (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg0) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusPeer* object, ::GDBusMethodInvocation* invocation, const char* unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_complete_get_machine_id;
  auto unnamed_arg0_to_c = gi::unwrap (unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (unnamed_arg0_to_c));
}

// void xdg_dbus_dbus_peer_complete_ping (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_peer_complete_ping (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::DBusPeerBase::complete_ping (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusPeer* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_peer_complete_ping;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}




} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeer_extra_def_impl.hpp>)
#include <xdgdbus/dbuspeer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeer_extra_impl.hpp>)
#include <xdgdbus/dbuspeer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusPeerIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgDBusDBusPeerIface *methods = (::XdgDBusDBusPeerIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_get_machine_id) methods->handle_get_machine_id = (decltype (methods->handle_get_machine_id)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_machine_id_>;
  if (init_data.handle_ping) methods->handle_ping = (decltype (methods->handle_ping)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_ping_>;
}

// gboolean DBusPeer::handle_get_machine_id (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusPeer::handle_get_machine_id (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusPeerIfaceClassImpl::handle_get_machine_id_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_machine_id) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_machine_id;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean DBusPeer::handle_ping (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusPeer::handle_ping (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusPeerIfaceClassImpl::handle_ping_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_ping) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusPeer* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_ping;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusPeer*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
