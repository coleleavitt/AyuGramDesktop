// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUS_IMPL_HPP_
#define _GI_XDGDBUS_DBUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_interface_info ();
Gio::DBusInterfaceInfo_Ref base::DBusBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdg_dbus_dbus_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_call_add_match (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_add_match (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_add_match (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_add_match (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_add_match_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_add_match_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_add_match_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_add_match_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_dbus_dbus_call_add_match_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_add_match_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_add_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_add_match_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_add_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_add_match_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_add_match_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_dbus_dbus_call_get_adt_audit_session_data (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_adt_audit_session_data (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_get_adt_audit_session_data (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_get_adt_audit_session_data (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_adt_audit_session_data_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_adt_audit_session_data_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_adt_audit_session_data_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_adt_audit_session_data_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_adt_audit_session_data_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_get_connection_credentials (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_credentials (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_get_connection_credentials (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_get_connection_credentials (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_get_connection_credentials_finish (XdgDBusDBus* proxy /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_credentials_finish (::XdgDBusDBus* proxy /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_credentials_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_credentials_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusBase::call_get_connection_credentials_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusBase::call_get_connection_credentials_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_get_connection_credentials_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_credentials_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusBase::call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_credentials_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_get_connection_selinux_security_context (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_selinux_security_context (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_get_connection_selinux_security_context (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_get_connection_selinux_security_context (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_selinux_security_context_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_selinux_security_context_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_connection_selinux_security_context_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_connection_selinux_security_context_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_selinux_security_context_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_get_connection_unix_process_id (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_unix_process_id (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_get_connection_unix_process_id (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_get_connection_unix_process_id (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_unix_process_id_finish (guint * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_unix_process_id_finish (guint * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_get_connection_unix_process_id_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_get_connection_unix_process_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_process_id_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_get_connection_unix_user (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_unix_user (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_get_connection_unix_user (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_get_connection_unix_user (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_get_connection_unix_user_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_user_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_unix_user_finish (guint * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_unix_user_finish (guint * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_get_connection_unix_user_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_get_connection_unix_user_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_get_connection_unix_user_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_user_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_connection_unix_user_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_get_id (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_id (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_get_id (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_get_id (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_get_id_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_id_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_id_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_get_id_sync (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_id_sync (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_get_id_sync (gi::cstring * out_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_get_id_sync (gi::cstring * out_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_id_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_id_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_id_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_id_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_id_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_get_name_owner (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_name_owner (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_get_name_owner (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_get_name_owner (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_get_name_owner_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_name_owner_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_name_owner_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_name_owner_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_name_owner_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_name_owner_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_get_name_owner_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_name_owner_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_get_name_owner_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_hello (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_hello (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_hello (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_hello (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_hello_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_hello_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_hello_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_hello_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_hello_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_hello_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_hello_sync (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_hello_sync (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_hello_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_hello_sync (gi::cstring * out_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_hello_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_hello_sync (gi::cstring * out_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_hello_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::DBusBase::call_hello_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_hello_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::DBusBase::call_hello_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_hello_sync;
  auto cancellable_to_c = nullptr;
  char* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_list_activatable_names (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_list_activatable_names (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_list_activatable_names (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_list_activatable_names (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_list_activatable_names_finish (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_activatable_names_finish (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_list_activatable_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_list_activatable_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_activatable_names_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_activatable_names_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_list_activatable_names_sync (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_activatable_names_sync (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_activatable_names_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_activatable_names_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_activatable_names_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_activatable_names_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_activatable_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_list_names (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_list_names (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_list_names (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_list_names (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_list_names_finish (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_names_finish (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_list_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_list_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_names_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_names_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_list_names_sync (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_names_sync (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_names_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_names_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_names_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_names_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_names_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_list_queued_owners (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_list_queued_owners (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_list_queued_owners (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_list_queued_owners (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_list_queued_owners_finish (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_queued_owners_finish (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_list_queued_owners_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_list_queued_owners_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_queued_owners_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_queued_owners_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, char*** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (char***) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_list_queued_owners_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar*** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_queued_owners_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char*** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::DBusBase::call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, char*** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_list_queued_owners_sync;
  auto cancellable_to_c = nullptr;
  char** out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (char***) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_name_has_owner (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_name_has_owner (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_name_has_owner (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_name_has_owner (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_name_has_owner_finish (XdgDBusDBus* proxy /*none*/, gboolean* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_name_has_owner_finish (::XdgDBusDBus* proxy /*none*/, gboolean* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_name_has_owner_finish (bool * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, gboolean* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (gboolean*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_name_has_owner_finish (bool * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, gboolean* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (gboolean*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool>> base::DBusBase::call_name_has_owner_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, gboolean* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (gboolean*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::DBusBase::call_name_has_owner_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, gboolean* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (gboolean*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_name_has_owner_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gboolean* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_name_has_owner_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, gboolean* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, bool>> base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, bool>> base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, bool> base::DBusBase::call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, gboolean* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_name_has_owner_sync;
  auto cancellable_to_c = nullptr;
  gboolean out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (gboolean*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_release_name (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_release_name (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_release_name (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_release_name (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_release_name_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_release_name_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_release_name_finish (guint * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_release_name_finish (guint * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_release_name_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_release_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_release_name_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_release_name_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = out_unnamed_arg1_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint* out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_release_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint*) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg1_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_reload_config (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_reload_config (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_reload_config (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_reload_config (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_reload_config_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_reload_config_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_reload_config_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_reload_config_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_dbus_dbus_call_reload_config_sync (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_reload_config_sync (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_reload_config_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_reload_config_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_reload_config_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_reload_config_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_reload_config_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_dbus_dbus_call_remove_match (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_remove_match (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_remove_match (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_remove_match (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_remove_match_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_remove_match_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_remove_match_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_remove_match_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_dbus_dbus_call_remove_match_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_remove_match_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_remove_match_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_dbus_dbus_call_request_name (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_request_name (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_request_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_request_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_request_name_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_request_name_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_request_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_request_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_request_name_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg2_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_request_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg2_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_request_name_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_request_name_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_request_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_start_service_by_name (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_start_service_by_name (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_start_service_by_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_start_service_by_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_start_service_by_name_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_start_service_by_name_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_start_service_by_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_start_service_by_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_start_service_by_name_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg2_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_start_service_by_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, guint* out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (guint*) (&out_unnamed_arg2_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_call_start_service_by_name_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_start_service_by_name_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = out_unnamed_arg2_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::DBusBase::call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, const char* arg_unnamed_arg0, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_start_service_by_name_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c), (guint*) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg2_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_call_update_activation_environment (XdgDBusDBus* proxy /*none*/, GVariant* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_update_activation_environment (::XdgDBusDBus* proxy /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusBase::call_update_activation_environment (GLib::Variant arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusBase::call_update_activation_environment (GLib::Variant arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_call_update_activation_environment_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_update_activation_environment_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusBase::call_update_activation_environment_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_update_activation_environment_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_dbus_dbus_call_update_activation_environment_sync (XdgDBusDBus* proxy /*none*/, GVariant* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_update_activation_environment_sync (::XdgDBusDBus* proxy /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusBase::call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusBase::call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusBase::call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusBase::call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* proxy, ::GVariant* arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_call_update_activation_environment_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GVariant*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_dbus_dbus_complete_add_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_add_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::DBusBase::complete_add_match (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_add_match;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_dbus_dbus_complete_get_adt_audit_session_data (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_adt_audit_session_data (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
void base::DBusBase::complete_get_adt_audit_session_data (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_get_adt_audit_session_data;
  auto unnamed_arg1_to_c = gi::unwrap (unnamed_arg1, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_get_connection_credentials (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_connection_credentials (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg1 /*none*/);
void base::DBusBase::complete_get_connection_credentials (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, ::GVariant* unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_get_connection_credentials;
  auto unnamed_arg1_to_c = gi::unwrap (unnamed_arg1, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_get_connection_selinux_security_context (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_connection_selinux_security_context (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
void base::DBusBase::complete_get_connection_selinux_security_context (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_get_connection_selinux_security_context;
  auto unnamed_arg1_to_c = gi::unwrap (unnamed_arg1, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_get_connection_unix_process_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
// void xdg_dbus_dbus_complete_get_connection_unix_process_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
void base::DBusBase::complete_get_connection_unix_process_id (Gio::DBusMethodInvocation invocation, guint unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, guint unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_get_connection_unix_process_id;
  auto unnamed_arg1_to_c = unnamed_arg1;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_get_connection_unix_user (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
// void xdg_dbus_dbus_complete_get_connection_unix_user (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
void base::DBusBase::complete_get_connection_unix_user (Gio::DBusMethodInvocation invocation, guint unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, guint unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_get_connection_unix_user;
  auto unnamed_arg1_to_c = unnamed_arg1;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_get_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_get_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
void base::DBusBase::complete_get_id (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg0) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_get_id;
  auto unnamed_arg0_to_c = gi::unwrap (unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (unnamed_arg0_to_c));
}

// void xdg_dbus_dbus_complete_get_name_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_name_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
void base::DBusBase::complete_get_name_owner (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_get_name_owner;
  auto unnamed_arg1_to_c = gi::unwrap (unnamed_arg1, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_hello (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_hello (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
void base::DBusBase::complete_hello (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg0) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_hello;
  auto unnamed_arg0_to_c = gi::unwrap (unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (unnamed_arg0_to_c));
}

// void xdg_dbus_dbus_complete_list_activatable_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_list_activatable_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
// SKIP; inconsistent unnamed_arg0 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_complete_list_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_list_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
// SKIP; inconsistent unnamed_arg0 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_complete_list_queued_owners (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_list_queued_owners (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
// SKIP; inconsistent unnamed_arg1 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_complete_name_has_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean unnamed_arg1);
// void xdg_dbus_dbus_complete_name_has_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean unnamed_arg1);
void base::DBusBase::complete_name_has_owner (Gio::DBusMethodInvocation invocation, gboolean unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, gboolean unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_name_has_owner;
  auto unnamed_arg1_to_c = unnamed_arg1;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gboolean) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_release_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
// void xdg_dbus_dbus_complete_release_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
void base::DBusBase::complete_release_name (Gio::DBusMethodInvocation invocation, guint unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, guint unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_release_name;
  auto unnamed_arg1_to_c = unnamed_arg1;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_complete_reload_config (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_reload_config (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::DBusBase::complete_reload_config (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_reload_config;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_dbus_dbus_complete_remove_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_remove_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::DBusBase::complete_remove_match (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_remove_match;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_dbus_dbus_complete_request_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
// void xdg_dbus_dbus_complete_request_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
void base::DBusBase::complete_request_name (Gio::DBusMethodInvocation invocation, guint unnamed_arg2) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, guint unnamed_arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_request_name;
  auto unnamed_arg2_to_c = unnamed_arg2;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (unnamed_arg2_to_c));
}

// void xdg_dbus_dbus_complete_start_service_by_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
// void xdg_dbus_dbus_complete_start_service_by_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
void base::DBusBase::complete_start_service_by_name (Gio::DBusMethodInvocation invocation, guint unnamed_arg2) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, guint unnamed_arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_start_service_by_name;
  auto unnamed_arg2_to_c = unnamed_arg2;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (unnamed_arg2_to_c));
}

// void xdg_dbus_dbus_complete_update_activation_environment (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_update_activation_environment (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::DBusBase::complete_update_activation_environment (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_complete_update_activation_environment;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// gchar** /*full,nullable*/ xdg_dbus_dbus_dup_features (XdgDBusDBus* object /*none*/);
// char** /*full,nullable*/ xdg_dbus_dbus_dup_features (::XdgDBusDBus* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::DBusBase::dup_features () noexcept
{
  typedef char** (*call_wrap_t) (::XdgDBusDBus* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_dup_features;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full,nullable*/ xdg_dbus_dbus_dup_interfaces (XdgDBusDBus* object /*none*/);
// char** /*full,nullable*/ xdg_dbus_dbus_dup_interfaces (::XdgDBusDBus* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::DBusBase::dup_interfaces () noexcept
{
  typedef char** (*call_wrap_t) (::XdgDBusDBus* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_dup_interfaces;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void xdg_dbus_dbus_emit_name_acquired (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_emit_name_acquired (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
void base::DBusBase::emit_name_acquired (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_emit_name_acquired;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c));
}

// void xdg_dbus_dbus_emit_name_lost (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_emit_name_lost (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
void base::DBusBase::emit_name_lost (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_emit_name_lost;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c));
}

// void xdg_dbus_dbus_emit_name_owner_changed (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, const gchar* arg_unnamed_arg2 /*none*/);
// void xdg_dbus_dbus_emit_name_owner_changed (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, const char* arg_unnamed_arg2 /*none*/);
void base::DBusBase::emit_name_owner_changed (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, const gi::cstring_v arg_unnamed_arg2) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, const char* arg_unnamed_arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_emit_name_owner_changed;
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (const char*) (arg_unnamed_arg2_to_c));
}

// const gchar* const* /*none,nullable*/ xdg_dbus_dbus_get_features (XdgDBusDBus* object /*none*/);
// const char** /*none,nullable*/ xdg_dbus_dbus_get_features (::XdgDBusDBus* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::DBusBase::get_features () noexcept
{
  typedef const char** (*call_wrap_t) (::XdgDBusDBus* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_get_features;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const gchar* const* /*none,nullable*/ xdg_dbus_dbus_get_interfaces (XdgDBusDBus* object /*none*/);
// const char** /*none,nullable*/ xdg_dbus_dbus_get_interfaces (::XdgDBusDBus* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::DBusBase::get_interfaces () noexcept
{
  typedef const char** (*call_wrap_t) (::XdgDBusDBus* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_get_interfaces;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// void xdg_dbus_dbus_set_features (XdgDBusDBus* object /*none*/, const gchar* const* value /*none*/);
// void xdg_dbus_dbus_set_features (::XdgDBusDBus* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)

// void xdg_dbus_dbus_set_interfaces (XdgDBusDBus* object /*none*/, const gchar* const* value /*none*/);
// void xdg_dbus_dbus_set_interfaces (::XdgDBusDBus* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)
























} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbus_extra_def_impl.hpp>)
#include <xdgdbus/dbus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbus_extra_impl.hpp>)
#include <xdgdbus/dbus_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgDBusDBusIface *methods = (::XdgDBusDBusIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_add_match) methods->handle_add_match = (decltype (methods->handle_add_match)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_add_match_>;
  if (init_data.handle_get_adt_audit_session_data) methods->handle_get_adt_audit_session_data = (decltype (methods->handle_get_adt_audit_session_data)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_adt_audit_session_data_>;
  if (init_data.handle_get_connection_credentials) methods->handle_get_connection_credentials = (decltype (methods->handle_get_connection_credentials)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_connection_credentials_>;
  if (init_data.handle_get_connection_selinux_security_context) methods->handle_get_connection_selinux_security_context = (decltype (methods->handle_get_connection_selinux_security_context)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_connection_selinux_security_context_>;
  if (init_data.handle_get_connection_unix_process_id) methods->handle_get_connection_unix_process_id = (decltype (methods->handle_get_connection_unix_process_id)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_connection_unix_process_id_>;
  if (init_data.handle_get_connection_unix_user) methods->handle_get_connection_unix_user = (decltype (methods->handle_get_connection_unix_user)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_connection_unix_user_>;
  if (init_data.handle_get_id) methods->handle_get_id = (decltype (methods->handle_get_id)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_id_>;
  if (init_data.handle_get_name_owner) methods->handle_get_name_owner = (decltype (methods->handle_get_name_owner)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_name_owner_>;
  if (init_data.handle_hello) methods->handle_hello = (decltype (methods->handle_hello)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_hello_>;
  if (init_data.handle_list_activatable_names) methods->handle_list_activatable_names = (decltype (methods->handle_list_activatable_names)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_list_activatable_names_>;
  if (init_data.handle_list_names) methods->handle_list_names = (decltype (methods->handle_list_names)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_list_names_>;
  if (init_data.handle_list_queued_owners) methods->handle_list_queued_owners = (decltype (methods->handle_list_queued_owners)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_list_queued_owners_>;
  if (init_data.handle_name_has_owner) methods->handle_name_has_owner = (decltype (methods->handle_name_has_owner)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_name_has_owner_>;
  if (init_data.handle_release_name) methods->handle_release_name = (decltype (methods->handle_release_name)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_release_name_>;
  if (init_data.handle_reload_config) methods->handle_reload_config = (decltype (methods->handle_reload_config)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_reload_config_>;
  if (init_data.handle_remove_match) methods->handle_remove_match = (decltype (methods->handle_remove_match)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_remove_match_>;
  if (init_data.handle_request_name) methods->handle_request_name = (decltype (methods->handle_request_name)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_request_name_>;
  if (init_data.handle_start_service_by_name) methods->handle_start_service_by_name = (decltype (methods->handle_start_service_by_name)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_start_service_by_name_>;
  if (init_data.handle_update_activation_environment) methods->handle_update_activation_environment = (decltype (methods->handle_update_activation_environment)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, GLib::Variant arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_update_activation_environment_>;
  if (init_data.name_acquired) methods->name_acquired = (decltype (methods->name_acquired)) gi::detail::method_wrapper<self, void (*) (const gi::cstring_v arg_unnamed_arg0), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::name_acquired_>;
  if (init_data.name_lost) methods->name_lost = (decltype (methods->name_lost)) gi::detail::method_wrapper<self, void (*) (const gi::cstring_v arg_unnamed_arg0), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::name_lost_>;
  if (init_data.name_owner_changed) methods->name_owner_changed = (decltype (methods->name_owner_changed)) gi::detail::method_wrapper<self, void (*) (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, const gi::cstring_v arg_unnamed_arg2), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::name_owner_changed_>;
}

// gboolean DBus::handle_add_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_add_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_add_match_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_add_match) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_add_match;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_get_adt_audit_session_data (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_adt_audit_session_data (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_get_adt_audit_session_data_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_adt_audit_session_data) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_adt_audit_session_data;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_get_connection_credentials (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_credentials (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_get_connection_credentials_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_connection_credentials) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_connection_credentials;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_get_connection_selinux_security_context (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_selinux_security_context (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_get_connection_selinux_security_context_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_connection_selinux_security_context) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_connection_selinux_security_context;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_get_connection_unix_process_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_unix_process_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_get_connection_unix_process_id_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_connection_unix_process_id) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_connection_unix_process_id;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_get_connection_unix_user (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_unix_user (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_get_connection_unix_user_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_connection_unix_user) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_connection_unix_user;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_get_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_get_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusIfaceClassImpl::handle_get_id_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_id) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_id;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_get_name_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_name_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_get_name_owner_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_name_owner) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_name_owner;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_hello (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_hello (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusIfaceClassImpl::handle_hello_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_hello) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_hello;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_list_activatable_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_list_activatable_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusIfaceClassImpl::handle_list_activatable_names_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_list_activatable_names) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_list_activatable_names;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_list_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_list_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusIfaceClassImpl::handle_list_names_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_list_names) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_list_names;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_list_queued_owners (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_list_queued_owners (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_list_queued_owners_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_list_queued_owners) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_list_queued_owners;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_name_has_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_name_has_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_name_has_owner_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_name_has_owner) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_name_has_owner;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_release_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_release_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_release_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_release_name) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_release_name;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_reload_config (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_reload_config (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusIfaceClassImpl::handle_reload_config_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_reload_config) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_reload_config;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_remove_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_remove_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_remove_match_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_remove_match) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_remove_match;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_request_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBus::handle_request_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
bool DBusIfaceClassImpl::handle_request_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept
{
  if (!get_struct_()->handle_request_name) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0, guint arg_unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_request_name;
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_start_service_by_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBus::handle_start_service_by_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
bool DBusIfaceClassImpl::handle_start_service_by_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept
{
  if (!get_struct_()->handle_start_service_by_name) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0, guint arg_unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_start_service_by_name;
  auto arg_unnamed_arg1_to_c = arg_unnamed_arg1;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c), (guint) (arg_unnamed_arg1_to_c));
  return _temp_ret;
}

// gboolean DBus::handle_update_activation_environment (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GVariant* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_update_activation_environment (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/);
bool DBusIfaceClassImpl::handle_update_activation_environment_ (Gio::DBusMethodInvocation invocation, GLib::Variant arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_update_activation_environment) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBus* object, ::GDBusMethodInvocation* invocation, ::GVariant* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_update_activation_environment;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// void DBus::name_acquired (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void DBus::name_acquired (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
void DBusIfaceClassImpl::name_acquired_ (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->name_acquired) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->name_acquired;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c));
}

// void DBus::name_lost (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void DBus::name_lost (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
void DBusIfaceClassImpl::name_lost_ (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->name_lost) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->name_lost;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c));
}

// void DBus::name_owner_changed (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, const gchar* arg_unnamed_arg2 /*none*/);
// void DBus::name_owner_changed (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, const char* arg_unnamed_arg2 /*none*/);
void DBusIfaceClassImpl::name_owner_changed_ (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, const gi::cstring_v arg_unnamed_arg2) noexcept
{
  if (!get_struct_()->name_owner_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgDBusDBus* object, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, const char* arg_unnamed_arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->name_owner_changed;
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBus*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (const char*) (arg_unnamed_arg2_to_c));
}

} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
