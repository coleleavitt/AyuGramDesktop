// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSDEBUGSTATS_IMPL_HPP_
#define _GI_XDGDBUS_DBUSDEBUGSTATS_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_debug_stats_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_debug_stats_interface_info ();
Gio::DBusInterfaceInfo_Ref base::DBusDebugStatsBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdg_dbus_dbus_debug_stats_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_debug_stats_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_debug_stats_call_get_all_match_rules (XdgDBusDBusDebugStats* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_call_get_all_match_rules (::XdgDBusDBusDebugStats* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusDebugStatsBase::call_get_all_match_rules (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusDebugStatsBase::call_get_all_match_rules (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusDebugStatsBase::call_get_all_match_rules_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_all_match_rules_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_all_match_rules_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_all_match_rules_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusDebugStatsBase::call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusDebugStatsBase::call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_all_match_rules_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_all_match_rules_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_all_match_rules_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_all_match_rules_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_debug_stats_call_get_connection_stats (XdgDBusDBusDebugStats* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_call_get_connection_stats (::XdgDBusDBusDebugStats* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusDebugStatsBase::call_get_connection_stats (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusDebugStatsBase::call_get_connection_stats (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusDebugStatsBase::call_get_connection_stats_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_connection_stats_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_connection_stats_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_connection_stats_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg1, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg1_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync (XdgDBusDBusDebugStats* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync (::XdgDBusDBusDebugStats* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (out_unnamed_arg1 ? &out_unnamed_arg1_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg1) *out_unnamed_arg1 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, const char* arg_unnamed_arg0, ::GVariant** out_unnamed_arg1, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg1_o {};
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (const char*) (arg_unnamed_arg0_to_c), (::GVariant**) (&out_unnamed_arg1_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg1_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_debug_stats_call_get_stats (XdgDBusDBusDebugStats* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_call_get_stats (::XdgDBusDBusDebugStats* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::DBusDebugStatsBase::call_get_stats (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusDebugStatsBase::call_get_stats (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_finish (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_finish (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusDebugStatsBase::call_get_stats_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_stats_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_stats_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_stats_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_sync (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_sync (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::DBusDebugStatsBase::call_get_stats_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::DBusDebugStatsBase::call_get_stats_sync (GLib::Variant * out_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_stats_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::DBusDebugStatsBase::call_get_stats_sync (GLib::Variant * out_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (out_unnamed_arg0 ? &out_unnamed_arg0_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg0) *out_unnamed_arg0 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_stats_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, GLib::Variant>> base::DBusDebugStatsBase::call_get_stats_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_stats_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, GLib::Variant> base::DBusDebugStatsBase::call_get_stats_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* proxy, ::GVariant** out_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_call_get_stats_sync;
  auto cancellable_to_c = nullptr;
  ::GVariant* out_unnamed_arg0_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GVariant**) (&out_unnamed_arg0_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_unnamed_arg0_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_dbus_dbus_debug_stats_complete_get_all_match_rules (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_debug_stats_complete_get_all_match_rules (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg0 /*none*/);
void base::DBusDebugStatsBase::complete_get_all_match_rules (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg0) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* object, ::GDBusMethodInvocation* invocation, ::GVariant* unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_complete_get_all_match_rules;
  auto unnamed_arg0_to_c = gi::unwrap (unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (unnamed_arg0_to_c));
}

// void xdg_dbus_dbus_debug_stats_complete_get_connection_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_debug_stats_complete_get_connection_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg1 /*none*/);
void base::DBusDebugStatsBase::complete_get_connection_stats (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg1) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* object, ::GDBusMethodInvocation* invocation, ::GVariant* unnamed_arg1);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_complete_get_connection_stats;
  auto unnamed_arg1_to_c = gi::unwrap (unnamed_arg1, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (unnamed_arg1_to_c));
}

// void xdg_dbus_dbus_debug_stats_complete_get_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_debug_stats_complete_get_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg0 /*none*/);
void base::DBusDebugStatsBase::complete_get_stats (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg0) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusDebugStats* object, ::GDBusMethodInvocation* invocation, ::GVariant* unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_debug_stats_complete_get_stats;
  auto unnamed_arg0_to_c = gi::unwrap (unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (::GVariant*) (unnamed_arg0_to_c));
}





} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstats_extra_def_impl.hpp>)
#include <xdgdbus/dbusdebugstats_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstats_extra_impl.hpp>)
#include <xdgdbus/dbusdebugstats_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusDebugStatsIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgDBusDBusDebugStatsIface *methods = (::XdgDBusDBusDebugStatsIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_get_all_match_rules) methods->handle_get_all_match_rules = (decltype (methods->handle_get_all_match_rules)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_all_match_rules_>;
  if (init_data.handle_get_connection_stats) methods->handle_get_connection_stats = (decltype (methods->handle_get_connection_stats)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_get_connection_stats_>;
  if (init_data.handle_get_stats) methods->handle_get_stats = (decltype (methods->handle_get_stats)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_stats_>;
}

// gboolean DBusDebugStats::handle_get_all_match_rules (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusDebugStats::handle_get_all_match_rules (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusDebugStatsIfaceClassImpl::handle_get_all_match_rules_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_all_match_rules) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_all_match_rules;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean DBusDebugStats::handle_get_connection_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBusDebugStats::handle_get_connection_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
bool DBusDebugStatsIfaceClassImpl::handle_get_connection_stats_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_get_connection_stats) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* object, ::GDBusMethodInvocation* invocation, const char* arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_connection_stats;
  auto arg_unnamed_arg0_to_c = gi::unwrap (arg_unnamed_arg0, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// gboolean DBusDebugStats::handle_get_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusDebugStats::handle_get_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool DBusDebugStatsIfaceClassImpl::handle_get_stats_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_stats) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusDebugStats* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_stats;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusDebugStats*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
