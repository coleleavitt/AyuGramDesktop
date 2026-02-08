// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPROPERTIES_IMPL_HPP_
#define _GI_XDGDBUS_DBUSPROPERTIES_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_properties_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_properties_interface_info ();
Gio::DBusInterfaceInfo_Ref base::DBusPropertiesBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdg_dbus_dbus_properties_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_properties_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_properties_call_get (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_properties_call_get (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusPropertiesBase::call_get (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusPropertiesBase::call_get (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void xdg_dbus_dbus_properties_call_get_all (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_properties_call_get_all (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusPropertiesBase::call_get_all (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusPropertiesBase::call_get_all (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_properties_call_get_all_finish (XdgDBusDBusProperties* proxy /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_all_finish (::XdgDBusDBusProperties* proxy /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusPropertiesBase::call_get_all_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_get_all_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusPropertiesBase::call_get_all_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusPropertiesBase::call_get_all_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_properties_call_get_all_sync (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_all_sync (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusPropertiesBase::call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_all_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_properties_call_get_finish (XdgDBusDBusProperties* proxy /*none*/, GVariant** out_unnamed_arg2 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_finish (::XdgDBusDBusProperties* proxy /*none*/, ::GVariant** out_unnamed_arg2 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusPropertiesBase::call_get_finish (GLib::Variant * out_unnamed_arg2, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_get_finish (GLib::Variant * out_unnamed_arg2, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusPropertiesBase::call_get_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (&out_unnamed_arg2_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusPropertiesBase::call_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GVariant** out_unnamed_arg2, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GVariant**) (&out_unnamed_arg2_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_properties_call_get_sync (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant** out_unnamed_arg2 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_sync (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant** out_unnamed_arg2 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg2) *out_unnamed_arg2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (out_unnamed_arg2 ? &out_unnamed_arg2_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg2) *out_unnamed_arg2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusPropertiesBase::call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant** out_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_get_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg2_o {};
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant**) (&out_unnamed_arg2_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg2_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_properties_call_set (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant* arg_unnamed_arg2 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_properties_call_set (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusPropertiesBase::call_set (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant* arg_unnamed_arg2, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant*) (arg_unnamed_arg2_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusPropertiesBase::call_set (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant* arg_unnamed_arg2, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant*) (arg_unnamed_arg2_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_properties_call_set_finish (XdgDBusDBusProperties* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_set_finish (::XdgDBusDBusProperties* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusPropertiesBase::call_set_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_set_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_dbus_dbus_properties_call_set_sync (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant* arg_unnamed_arg2 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_set_sync (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusPropertiesBase::call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant* arg_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant*) (arg_unnamed_arg2_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusPropertiesBase::call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant* arg_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant*) (arg_unnamed_arg2_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant* arg_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant*) (arg_unnamed_arg2_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusPropertiesBase::call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* proxy, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant* arg_unnamed_arg2, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_call_set_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant*) (arg_unnamed_arg2_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_dbus_dbus_properties_complete_get (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg2 /*none*/);
// void xdg_dbus_dbus_properties_complete_get (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg2 /*none*/);
void base::DBusPropertiesBase::complete_get (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg2) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* object, ::GDBusMethodInvocation* invocation, ::GVariant* unnamed_arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_complete_get;
  auto unnamed_arg2_to_c = gi::unwrap (unnamed_arg2, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (unnamed_arg2_to_c));
}

// void xdg_dbus_dbus_properties_complete_get_all (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_properties_complete_get_all (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg1 /*none*/);
void base::DBusPropertiesBase::complete_get_all (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* object, ::GDBusMethodInvocation* invocation, ::GVariant* unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_complete_get_all;
  auto unnamed_arg1_to_c = gi::unwrap (unnamed_arg1, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_properties_complete_set (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_properties_complete_set (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::DBusPropertiesBase::complete_set (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_properties_complete_set;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_dbus_dbus_properties_emit_properties_changed (XdgDBusDBusProperties* object /*none*/, const gchar* arg_interface_name /*none*/, GVariant* arg_changed_properties /*none*/, const gchar* const* arg_invalidated_properties /*none*/);
// void xdg_dbus_dbus_properties_emit_properties_changed (::XdgDBusDBusProperties* object /*none*/, const char* arg_interface_name /*none*/, ::GVariant* arg_changed_properties /*none*/, const char* arg_invalidated_properties /*none*/);
// SKIP; inconsistent arg_invalidated_properties in pointer depth (2 vs 1)






} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusproperties_extra_def_impl.hpp>)
#include <xdgdbus/dbusproperties_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusproperties_extra_impl.hpp>)
#include <xdgdbus/dbusproperties_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusPropertiesIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgDBusDBusPropertiesIface *methods = (::XdgDBusDBusPropertiesIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_get) methods->handle_get = (decltype (methods->handle_get)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_>;
  if (init_data.handle_get_all) methods->handle_get_all = (decltype (methods->handle_get_all)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_all_>;
  if (init_data.handle_set) methods->handle_set = (decltype (methods->handle_set)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_set_>;
  if (init_data.properties_changed && factory) methods->properties_changed = (decltype (methods->properties_changed)) gi::detail::method_wrapper<self, void (*) (const gchar* arg_interface_name, ::GVariant* arg_changed_properties, const gchar* const* arg_invalidated_properties), std::nullptr_t>::wrapper<&self::properties_changed_>;
}

// gboolean DBusProperties::handle_get (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/);
// gboolean DBusProperties::handle_get (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/);
bool DBusPropertiesIfaceClassImpl::handle_get_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1) noexcept
{
  if (!get_struct_()->handle_get) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get;
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c));
  return _temp_ret;
}

// gboolean DBusProperties::handle_get_all (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBusProperties::handle_get_all (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusPropertiesIfaceClassImpl::handle_get_all_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_all) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_all;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBusProperties::handle_set (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant* arg_unnamed_arg2 /*none*/);
// gboolean DBusProperties::handle_set (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/);
bool DBusPropertiesIfaceClassImpl::handle_set_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2) noexcept
{
  if (!get_struct_()->handle_set) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusProperties* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0, const char* arg_unnamed_arg1, ::GVariant* arg_unnamed_arg2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_set;
  auto arg_unnamed_arg2_to_c = gi::unwrap (arg_unnamed_arg2, gi::transfer_none);
  auto arg_unnamed_arg1_to_c = gi::unwrap (arg_unnamed_arg1, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusProperties*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c), (const char*) (arg_unnamed_arg1_to_c), (::GVariant*) (arg_unnamed_arg2_to_c));
  return _temp_ret;
}

// void DBusProperties::properties_changed (XdgDBusDBusProperties* object /*none*/, const gchar* arg_interface_name /*none*/, GVariant* arg_changed_properties /*none*/, const gchar* const* arg_invalidated_properties /*none*/);
// void DBusProperties::properties_changed (::XdgDBusDBusProperties* object /*none*/, const char* arg_interface_name /*none*/, ::GVariant* arg_changed_properties /*none*/, const char* arg_invalidated_properties /*none*/);
// SKIP; inconsistent arg_invalidated_properties in pointer depth (2 vs 1)
void DBusPropertiesIfaceClassImpl::properties_changed_ (const gchar* arg_interface_name, ::GVariant* arg_changed_properties, const gchar* const* arg_invalidated_properties) noexcept
{
  if (!get_struct_()->properties_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgDBusDBusProperties*, const gchar*, ::GVariant*, const gchar* const*);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->properties_changed;
  call_wrap_v (gobj_(), arg_interface_name, arg_changed_properties, arg_invalidated_properties);
}

} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
