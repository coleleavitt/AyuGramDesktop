// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_IDLEMONITOR_IMPL_HPP_
#define _GI_MUTTERIDLEMONITOR_IDLEMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace base {

// GDBusInterfaceInfo* /*none*/ mutter_idle_monitor_idle_monitor_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ mutter_idle_monitor_idle_monitor_interface_info ();
Gio::DBusInterfaceInfo_Ref base::IdleMonitorBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint mutter_idle_monitor_idle_monitor_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint mutter_idle_monitor_idle_monitor_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void mutter_idle_monitor_idle_monitor_call_add_idle_watch (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_add_idle_watch (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::IdleMonitorBase::call_add_idle_watch (guint64 arg_interval, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_interval_to_c = arg_interval;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IdleMonitorBase::call_add_idle_watch (guint64 arg_interval, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_interval_to_c = arg_interval;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_add_idle_watch_finish (guint * out_id, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_id) *out_id = out_id_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_add_idle_watch_finish (guint * out_id, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_id) *out_id = out_id_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::IdleMonitorBase::call_add_idle_watch_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::IdleMonitorBase::call_add_idle_watch_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, guint* out_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval, guint * out_id, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_id) *out_id = out_id_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval, guint * out_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_id) *out_id = out_id_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval, guint * out_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_id) *out_id = out_id_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval, guint * out_id, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_id) *out_id = out_id_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::IdleMonitorBase::call_add_idle_watch_sync (guint64 arg_interval, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  auto arg_interval_to_c = arg_interval;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64) (arg_interval_to_c), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void mutter_idle_monitor_idle_monitor_call_add_user_active_watch (MutterIdleMonitorIdleMonitor* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_add_user_active_watch (::MutterIdleMonitorIdleMonitor* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::IdleMonitorBase::call_add_user_active_watch (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IdleMonitorBase::call_add_user_active_watch (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_add_user_active_watch_finish (guint * out_id, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_id) *out_id = out_id_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_add_user_active_watch_finish (guint * out_id, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_id) *out_id = out_id_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::IdleMonitorBase::call_add_user_active_watch_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::IdleMonitorBase::call_add_user_active_watch_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_add_user_active_watch_sync (guint * out_id, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_id) *out_id = out_id_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::IdleMonitorBase::call_add_user_active_watch_sync (guint * out_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_id) *out_id = out_id_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_add_user_active_watch_sync (guint * out_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_id) *out_id = out_id_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_add_user_active_watch_sync (guint * out_id, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (out_id ? &out_id_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_id) *out_id = out_id_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::IdleMonitorBase::call_add_user_active_watch_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::IdleMonitorBase::call_add_user_active_watch_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::IdleMonitorBase::call_add_user_active_watch_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::IdleMonitorBase::call_add_user_active_watch_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint* out_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync;
  auto cancellable_to_c = nullptr;
  guint out_id_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint*) (&out_id_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_id_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void mutter_idle_monitor_idle_monitor_call_get_idletime (MutterIdleMonitorIdleMonitor* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_get_idletime (::MutterIdleMonitorIdleMonitor* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::IdleMonitorBase::call_get_idletime (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IdleMonitorBase::call_get_idletime (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_get_idletime_finish (guint64 * out_idletime, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_idletime_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (out_idletime ? &out_idletime_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_idletime) *out_idletime = out_idletime_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_get_idletime_finish (guint64 * out_idletime, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_idletime_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (out_idletime ? &out_idletime_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_idletime) *out_idletime = out_idletime_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint64>> base::IdleMonitorBase::call_get_idletime_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_idletime_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (&out_idletime_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_idletime_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint64> base::IdleMonitorBase::call_get_idletime_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint64 out_idletime_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (&out_idletime_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_idletime_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_get_idletime_sync (guint64 * out_idletime, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_idletime_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (out_idletime ? &out_idletime_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_idletime) *out_idletime = out_idletime_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::IdleMonitorBase::call_get_idletime_sync (guint64 * out_idletime) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_idletime_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (out_idletime ? &out_idletime_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_idletime) *out_idletime = out_idletime_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_get_idletime_sync (guint64 * out_idletime, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_idletime_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (out_idletime ? &out_idletime_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_idletime) *out_idletime = out_idletime_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_get_idletime_sync (guint64 * out_idletime, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_idletime_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (out_idletime ? &out_idletime_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_idletime) *out_idletime = out_idletime_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint64>> base::IdleMonitorBase::call_get_idletime_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_idletime_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (&out_idletime_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_idletime_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint64>> base::IdleMonitorBase::call_get_idletime_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_idletime_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (&out_idletime_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_idletime_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint64> base::IdleMonitorBase::call_get_idletime_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint64 out_idletime_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (&out_idletime_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_idletime_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint64> base::IdleMonitorBase::call_get_idletime_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint64* out_idletime, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_get_idletime_sync;
  auto cancellable_to_c = nullptr;
  guint64 out_idletime_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint64*) (&out_idletime_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_idletime_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void mutter_idle_monitor_idle_monitor_call_remove_watch (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_remove_watch (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::IdleMonitorBase::call_remove_watch (guint arg_id, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint arg_id, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IdleMonitorBase::call_remove_watch (guint arg_id, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint arg_id, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_remove_watch_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_remove_watch_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::IdleMonitorBase::call_remove_watch_sync (guint arg_id, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::IdleMonitorBase::call_remove_watch_sync (guint arg_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch_sync;
  auto cancellable_to_c = nullptr;
  auto arg_id_to_c = arg_id;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_remove_watch_sync (guint arg_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::IdleMonitorBase::call_remove_watch_sync (guint arg_id, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_call_remove_watch_sync;
  auto cancellable_to_c = nullptr;
  auto arg_id_to_c = arg_id;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mutter_idle_monitor_idle_monitor_complete_add_idle_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint id);
// void mutter_idle_monitor_idle_monitor_complete_add_idle_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint id);
void base::IdleMonitorBase::complete_add_idle_watch (Gio::DBusMethodInvocation invocation, guint id) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation, guint id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_complete_add_idle_watch;
  auto id_to_c = id;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (id_to_c));
}

// void mutter_idle_monitor_idle_monitor_complete_add_user_active_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint id);
// void mutter_idle_monitor_idle_monitor_complete_add_user_active_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint id);
void base::IdleMonitorBase::complete_add_user_active_watch (Gio::DBusMethodInvocation invocation, guint id) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation, guint id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_complete_add_user_active_watch;
  auto id_to_c = id;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (id_to_c));
}

// void mutter_idle_monitor_idle_monitor_complete_get_idletime (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint64 idletime);
// void mutter_idle_monitor_idle_monitor_complete_get_idletime (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint64 idletime);
void base::IdleMonitorBase::complete_get_idletime (Gio::DBusMethodInvocation invocation, guint64 idletime) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation, guint64 idletime);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_complete_get_idletime;
  auto idletime_to_c = idletime;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint64) (idletime_to_c));
}

// void mutter_idle_monitor_idle_monitor_complete_remove_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mutter_idle_monitor_idle_monitor_complete_remove_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::IdleMonitorBase::complete_remove_watch (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_complete_remove_watch;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mutter_idle_monitor_idle_monitor_emit_watch_fired (MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
// void mutter_idle_monitor_idle_monitor_emit_watch_fired (::MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
void base::IdleMonitorBase::emit_watch_fired (guint arg_id) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, guint arg_id);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_idle_monitor_emit_watch_fired;
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c));
}







} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitor_extra_def_impl.hpp>)
#include <mutteridlemonitor/idlemonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitor_extra_impl.hpp>)
#include <mutteridlemonitor/idlemonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {

void IdleMonitorIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::MutterIdleMonitorIdleMonitorIface *methods = (::MutterIdleMonitorIdleMonitorIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_add_idle_watch) methods->handle_add_idle_watch = (decltype (methods->handle_add_idle_watch)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, guint64 arg_interval), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_add_idle_watch_>;
  if (init_data.handle_add_user_active_watch) methods->handle_add_user_active_watch = (decltype (methods->handle_add_user_active_watch)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_add_user_active_watch_>;
  if (init_data.handle_get_idletime) methods->handle_get_idletime = (decltype (methods->handle_get_idletime)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_idletime_>;
  if (init_data.handle_remove_watch) methods->handle_remove_watch = (decltype (methods->handle_remove_watch)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, guint arg_id), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_remove_watch_>;
  if (init_data.watch_fired) methods->watch_fired = (decltype (methods->watch_fired)) gi::detail::method_wrapper<self, void (*) (guint arg_id), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::watch_fired_>;
}

// gboolean IdleMonitor::handle_add_idle_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint64 arg_interval);
// gboolean IdleMonitor::handle_add_idle_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint64 arg_interval);
bool IdleMonitorIfaceClassImpl::handle_add_idle_watch_ (Gio::DBusMethodInvocation invocation, guint64 arg_interval) noexcept
{
  if (!get_struct_()->handle_add_idle_watch) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation, guint64 arg_interval);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_add_idle_watch;
  auto arg_interval_to_c = arg_interval;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint64) (arg_interval_to_c));
  return _temp_ret;
}

// gboolean IdleMonitor::handle_add_user_active_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean IdleMonitor::handle_add_user_active_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool IdleMonitorIfaceClassImpl::handle_add_user_active_watch_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_add_user_active_watch) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_add_user_active_watch;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean IdleMonitor::handle_get_idletime (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean IdleMonitor::handle_get_idletime (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool IdleMonitorIfaceClassImpl::handle_get_idletime_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_idletime) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_idletime;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean IdleMonitor::handle_remove_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_id);
// gboolean IdleMonitor::handle_remove_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
bool IdleMonitorIfaceClassImpl::handle_remove_watch_ (Gio::DBusMethodInvocation invocation, guint arg_id) noexcept
{
  if (!get_struct_()->handle_remove_watch) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, ::GDBusMethodInvocation* invocation, guint arg_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_remove_watch;
  auto arg_id_to_c = arg_id;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (arg_id_to_c));
  return _temp_ret;
}

// void IdleMonitor::watch_fired (MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
// void IdleMonitor::watch_fired (::MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
void IdleMonitorIfaceClassImpl::watch_fired_ (guint arg_id) noexcept
{
  if (!get_struct_()->watch_fired) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::MutterIdleMonitorIdleMonitor* object, guint arg_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->watch_fired;
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::MutterIdleMonitorIdleMonitor*) (gobj_()), (guint) (arg_id_to_c));
}

} // namespace internal

} // namespace impl

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
