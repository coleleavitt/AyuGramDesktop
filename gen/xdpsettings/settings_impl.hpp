// AUTO-GENERATED

#ifndef _GI_XDPSETTINGS_SETTINGS_IMPL_HPP_
#define _GI_XDPSETTINGS_SETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpSettings {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdp_settings_settings_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_settings_settings_interface_info ();
Gio::DBusInterfaceInfo_Ref base::SettingsBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdp_settings_settings_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_settings_settings_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_settings_settings_call_read (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_settings_settings_call_read (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// void xdp_settings_settings_call_read_all (XdpSettingsSettings* proxy /*none*/, const gchar* const* arg_namespaces /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_settings_settings_call_read_all (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespaces /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_namespaces in pointer depth (2 vs 1)

// gboolean xdp_settings_settings_call_read_all_finish (XdpSettingsSettings* proxy /*none*/, GVariant** out_value /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_settings_settings_call_read_all_finish (::XdpSettingsSettings* proxy /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_read_all_finish (GLib::Variant * out_value, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_read_all_finish (GLib::Variant * out_value, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::SettingsBase::call_read_all_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (&out_value_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::SettingsBase::call_read_all_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_all_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (&out_value_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdp_settings_settings_call_read_all_sync (XdpSettingsSettings* proxy /*none*/, const gchar* const* arg_namespaces /*none*/, GVariant** out_value /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_settings_settings_call_read_all_sync (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespaces /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_namespaces in pointer depth (2 vs 1)

// gboolean xdp_settings_settings_call_read_finish (XdpSettingsSettings* proxy /*none*/, GVariant** out_value /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_settings_settings_call_read_finish (::XdpSettingsSettings* proxy /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
// IGNORE; deprecated

// void xdp_settings_settings_call_read_one (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_settings_settings_call_read_one (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SettingsBase::call_read_one (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SettingsBase::call_read_one (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_settings_settings_call_read_one_finish (XdpSettingsSettings* proxy /*none*/, GVariant** out_value /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_settings_settings_call_read_one_finish (::XdpSettingsSettings* proxy /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_read_one_finish (GLib::Variant * out_value, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_read_one_finish (GLib::Variant * out_value, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::SettingsBase::call_read_one_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (&out_value_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::SettingsBase::call_read_one_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, ::GVariant** out_value, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_value_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GVariant**) (&out_value_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdp_settings_settings_call_read_one_sync (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant** out_value /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_settings_settings_call_read_one_sync (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (out_value ? &out_value_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_value) *out_value = gi::wrap (out_value_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (&out_value_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, GLib::Variant>> base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (&out_value_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (&out_value_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::SettingsBase::call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* proxy, const char* arg_namespace, const char* arg_key, ::GVariant** out_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_call_read_one_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_value_o {};
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant**) (&out_value_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_value_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdp_settings_settings_call_read_sync (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant** out_value /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_settings_settings_call_read_sync (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; deprecated

// void xdp_settings_settings_complete_read (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* value /*none*/);
// void xdp_settings_settings_complete_read (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* value /*none*/);
// IGNORE; deprecated

// void xdp_settings_settings_complete_read_all (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* value /*none*/);
// void xdp_settings_settings_complete_read_all (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* value /*none*/);
void base::SettingsBase::complete_read_all (Gio::DBusMethodInvocation invocation, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::XdpSettingsSettings* object, ::GDBusMethodInvocation* invocation, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_complete_read_all;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (value_to_c));
}

// void xdp_settings_settings_complete_read_one (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* value /*none*/);
// void xdp_settings_settings_complete_read_one (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* value /*none*/);
void base::SettingsBase::complete_read_one (Gio::DBusMethodInvocation invocation, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::XdpSettingsSettings* object, ::GDBusMethodInvocation* invocation, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_complete_read_one;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (value_to_c));
}

// void xdp_settings_settings_emit_setting_changed (XdpSettingsSettings* object /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant* arg_value /*none*/);
// void xdp_settings_settings_emit_setting_changed (::XdpSettingsSettings* object /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant* arg_value /*none*/);
void base::SettingsBase::emit_setting_changed (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant arg_value) noexcept
{
  typedef void (*call_wrap_t) (::XdpSettingsSettings* object, const char* arg_namespace, const char* arg_key, ::GVariant* arg_value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_emit_setting_changed;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant*) (arg_value_to_c));
}

// guint xdp_settings_settings_get_version (XdpSettingsSettings* object /*none*/);
// guint xdp_settings_settings_get_version (::XdpSettingsSettings* object /*none*/);
guint base::SettingsBase::get_version () noexcept
{
  typedef guint (*call_wrap_t) (::XdpSettingsSettings* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_get_version;
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()));
  return _temp_ret;
}

// void xdp_settings_settings_set_version (XdpSettingsSettings* object /*none*/, guint value);
// void xdp_settings_settings_set_version (::XdpSettingsSettings* object /*none*/, guint value);
void base::SettingsBase::set_version (guint value) noexcept
{
  typedef void (*call_wrap_t) (::XdpSettingsSettings* object, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_settings_set_version;
  auto value_to_c = value;
  call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (guint) (value_to_c));
}






} // namespace base

} // namespace XdpSettings

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpsettings/settings_extra_def_impl.hpp>)
#include <xdpsettings/settings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpsettings/settings_extra_impl.hpp>)
#include <xdpsettings/settings_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpSettings {

namespace impl {

namespace internal {

void SettingsIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpSettingsSettingsIface *methods = (::XdpSettingsSettingsIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_read) methods->handle_read = (decltype (methods->handle_read)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_read_>;
  if (init_data.handle_read_all && factory) methods->handle_read_all = (decltype (methods->handle_read_all)) gi::detail::method_wrapper<self, gboolean (*) (::GDBusMethodInvocation* invocation, const gchar* const* arg_namespaces), std::nullptr_t>::wrapper<&self::handle_read_all_>;
  if (init_data.handle_read_one) methods->handle_read_one = (decltype (methods->handle_read_one)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_read_one_>;
  if (init_data.setting_changed) methods->setting_changed = (decltype (methods->setting_changed)) gi::detail::method_wrapper<self, void (*) (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant arg_value), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::setting_changed_>;
}

// gboolean Settings::handle_read (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/);
// gboolean Settings::handle_read (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/);
bool SettingsIfaceClassImpl::handle_read_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept
{
  if (!get_struct_()->handle_read) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_namespace, const char* arg_key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_read;
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c));
  return _temp_ret;
}

// gboolean Settings::handle_read_all (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_namespaces /*none*/);
// gboolean Settings::handle_read_all (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespaces /*none*/);
// SKIP; inconsistent arg_namespaces in pointer depth (2 vs 1)
gboolean SettingsIfaceClassImpl::handle_read_all_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_namespaces) noexcept
{
  if (!get_struct_()->handle_read_all) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings*, ::GDBusMethodInvocation*, const gchar* const*);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_read_all;
  auto result_ = call_wrap_v (gobj_(), invocation, arg_namespaces);
  return result_;
}

// gboolean Settings::handle_read_one (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/);
// gboolean Settings::handle_read_one (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/);
bool SettingsIfaceClassImpl::handle_read_one_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept
{
  if (!get_struct_()->handle_read_one) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpSettingsSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_namespace, const char* arg_key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_read_one;
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c));
  return _temp_ret;
}

// void Settings::setting_changed (XdpSettingsSettings* object /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant* arg_value /*none*/);
// void Settings::setting_changed (::XdpSettingsSettings* object /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant* arg_value /*none*/);
void SettingsIfaceClassImpl::setting_changed_ (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant arg_value) noexcept
{
  if (!get_struct_()->setting_changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdpSettingsSettings* object, const char* arg_namespace, const char* arg_key, ::GVariant* arg_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->setting_changed;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_key_to_c = gi::unwrap (arg_key, gi::transfer_none);
  auto arg_namespace_to_c = gi::unwrap (arg_namespace, gi::transfer_none);
  call_wrap_v ((::XdpSettingsSettings*) (gobj_()), (const char*) (arg_namespace_to_c), (const char*) (arg_key_to_c), (::GVariant*) (arg_value_to_c));
}

} // namespace internal

} // namespace impl

} // namespace XdpSettings

} // namespace repository

} // namespace gi

#endif
