// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_SETTINGS_IMPL_HPP_
#define _GI_SNAPCRAFT_SETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Snapcraft {

namespace base {

// GDBusInterfaceInfo* /*none*/ snapcraft_settings_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ snapcraft_settings_interface_info ();
Gio::DBusInterfaceInfo_Ref base::SettingsBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint snapcraft_settings_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint snapcraft_settings_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void snapcraft_settings_call_check (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_check /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_check (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_check /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SettingsBase::call_check (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SettingsBase::call_check (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean snapcraft_settings_call_check_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_check_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_check_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_check_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_check_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_check_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void snapcraft_settings_call_check_sub (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_check /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_check_sub (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_check /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SettingsBase::call_check_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SettingsBase::call_check_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean snapcraft_settings_call_check_sub_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_check_sub_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_check_sub_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_check_sub_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_check_sub_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_check_sub_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean snapcraft_settings_call_check_sub_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_check /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_check_sub_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_check /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean snapcraft_settings_call_check_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_check /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_check_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_check /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_check, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_check_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void snapcraft_settings_call_get (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_get (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SettingsBase::call_get (const gi::cstring_v arg_setting, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SettingsBase::call_get (const gi::cstring_v arg_setting, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean snapcraft_settings_call_get_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_get_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_get_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_get_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_get_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void snapcraft_settings_call_get_sub (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_get_sub (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SettingsBase::call_get_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SettingsBase::call_get_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean snapcraft_settings_call_get_sub_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_get_sub_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_get_sub_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_get_sub_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (out_result ? &out_result_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_get_sub_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_get_sub_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, char** out_result, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_result_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (char**) (&out_result_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean snapcraft_settings_call_get_sub_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_get_sub_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sub_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean snapcraft_settings_call_get_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_get_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (out_result ? &out_result_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_result) *out_result = gi::wrap (out_result_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::cstring>> base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::cstring> base::SettingsBase::call_get_sync (const gi::cstring_v arg_setting, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, char** out_result, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_get_sync;
  auto cancellable_to_c = nullptr;
  char* out_result_o {};
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (char**) (&out_result_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_result_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void snapcraft_settings_call_set (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_set (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SettingsBase::call_set (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SettingsBase::call_set (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean snapcraft_settings_call_set_finish (SnapcraftSettings* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_set_finish (::SnapcraftSettings* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_set_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_set_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void snapcraft_settings_call_set_sub (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_set_sub (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::SettingsBase::call_set_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SettingsBase::call_set_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_value, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean snapcraft_settings_call_set_sub_finish (SnapcraftSettings* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_set_sub_finish (::SnapcraftSettings* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::SettingsBase::call_set_sub_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_set_sub_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean snapcraft_settings_call_set_sub_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_set_sub_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::SettingsBase::call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::SettingsBase::call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub_sync;
  auto cancellable_to_c = nullptr;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SettingsBase::call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_subproperty, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sub_sync;
  auto cancellable_to_c = nullptr;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean snapcraft_settings_call_set_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_set_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::SettingsBase::call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::SettingsBase::call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sync;
  auto cancellable_to_c = nullptr;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::SettingsBase::call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::SettingsBase::call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* proxy, const char* arg_setting, const char* arg_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_call_set_sync;
  auto cancellable_to_c = nullptr;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (const char*) (arg_setting_to_c), (const char*) (arg_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void snapcraft_settings_complete_check (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_check (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
void base::SettingsBase::complete_check (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_complete_check;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (result_to_c));
}

// void snapcraft_settings_complete_check_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_check_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
void base::SettingsBase::complete_check_sub (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_complete_check_sub;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (result_to_c));
}

// void snapcraft_settings_complete_get (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_get (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
void base::SettingsBase::complete_get (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_complete_get;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (result_to_c));
}

// void snapcraft_settings_complete_get_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_get_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
void base::SettingsBase::complete_get_sub (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* result);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_complete_get_sub;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (result_to_c));
}

// void snapcraft_settings_complete_set (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void snapcraft_settings_complete_set (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::SettingsBase::complete_set (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_complete_set;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void snapcraft_settings_complete_set_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void snapcraft_settings_complete_set_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::SettingsBase::complete_set_sub (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_settings_complete_set_sub;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}








} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/settings_extra_def_impl.hpp>)
#include <snapcraft/settings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/settings_extra_impl.hpp>)
#include <snapcraft/settings_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {

void SettingsIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::SnapcraftSettingsIface *methods = (::SnapcraftSettingsIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_check) methods->handle_check = (decltype (methods->handle_check)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_check), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_check_>;
  if (init_data.handle_check_sub) methods->handle_check_sub = (decltype (methods->handle_check_sub)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_check_sub_>;
  if (init_data.handle_get) methods->handle_get = (decltype (methods->handle_get)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_>;
  if (init_data.handle_get_sub) methods->handle_get_sub = (decltype (methods->handle_get_sub)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_sub_>;
  if (init_data.handle_set) methods->handle_set = (decltype (methods->handle_set)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_set_>;
  if (init_data.handle_set_sub) methods->handle_set_sub = (decltype (methods->handle_set_sub)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_set_sub_>;
}

// gboolean Settings::handle_check (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_check /*none*/);
// gboolean Settings::handle_check (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_check /*none*/);
bool SettingsIfaceClassImpl::handle_check_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_check) noexcept
{
  if (!get_struct_()->handle_check) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_setting, const char* arg_check);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_check;
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_setting_to_c), (const char*) (arg_check_to_c));
  return _temp_ret;
}

// gboolean Settings::handle_check_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_check /*none*/);
// gboolean Settings::handle_check_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_check /*none*/);
bool SettingsIfaceClassImpl::handle_check_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check) noexcept
{
  if (!get_struct_()->handle_check_sub) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_setting, const char* arg_subproperty, const char* arg_check);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_check_sub;
  auto arg_check_to_c = gi::unwrap (arg_check, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_check_to_c));
  return _temp_ret;
}

// gboolean Settings::handle_get (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/);
// gboolean Settings::handle_get (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/);
bool SettingsIfaceClassImpl::handle_get_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting) noexcept
{
  if (!get_struct_()->handle_get) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_setting);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get;
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_setting_to_c));
  return _temp_ret;
}

// gboolean Settings::handle_get_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/);
// gboolean Settings::handle_get_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/);
bool SettingsIfaceClassImpl::handle_get_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty) noexcept
{
  if (!get_struct_()->handle_get_sub) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_setting, const char* arg_subproperty);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_sub;
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c));
  return _temp_ret;
}

// gboolean Settings::handle_set (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_value /*none*/);
// gboolean Settings::handle_set (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_value /*none*/);
bool SettingsIfaceClassImpl::handle_set_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_value) noexcept
{
  if (!get_struct_()->handle_set) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_setting, const char* arg_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_set;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_setting_to_c), (const char*) (arg_value_to_c));
  return _temp_ret;
}

// gboolean Settings::handle_set_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_value /*none*/);
// gboolean Settings::handle_set_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_value /*none*/);
bool SettingsIfaceClassImpl::handle_set_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value) noexcept
{
  if (!get_struct_()->handle_set_sub) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::SnapcraftSettings* object, ::GDBusMethodInvocation* invocation, const char* arg_setting, const char* arg_subproperty, const char* arg_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_set_sub;
  auto arg_value_to_c = gi::unwrap (arg_value, gi::transfer_none);
  auto arg_subproperty_to_c = gi::unwrap (arg_subproperty, gi::transfer_none);
  auto arg_setting_to_c = gi::unwrap (arg_setting, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::SnapcraftSettings*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_setting_to_c), (const char*) (arg_subproperty_to_c), (const char*) (arg_value_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
