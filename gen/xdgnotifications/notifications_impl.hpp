// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_NOTIFICATIONS_IMPL_HPP_
#define _GI_XDGNOTIFICATIONS_NOTIFICATIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdg_notifications_notifications_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_notifications_notifications_interface_info ();
Gio::DBusInterfaceInfo_Ref base::NotificationsBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdg_notifications_notifications_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_notifications_notifications_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_notifications_notifications_call_close_notification (XdgNotificationsNotifications* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_close_notification (::XdgNotificationsNotifications* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::NotificationsBase::call_close_notification (guint arg_id, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_id, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::NotificationsBase::call_close_notification (guint arg_id, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_id, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_notifications_notifications_call_close_notification_finish (XdgNotificationsNotifications* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_close_notification_finish (::XdgNotificationsNotifications* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_close_notification_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_close_notification_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_notifications_notifications_call_close_notification_sync (XdgNotificationsNotifications* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_close_notification_sync (::XdgNotificationsNotifications* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_close_notification_sync (guint arg_id, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::NotificationsBase::call_close_notification_sync (guint arg_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification_sync;
  auto cancellable_to_c = nullptr;
  auto arg_id_to_c = arg_id;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_close_notification_sync (guint arg_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::NotificationsBase::call_close_notification_sync (guint arg_id, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_id, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_close_notification_sync;
  auto cancellable_to_c = nullptr;
  auto arg_id_to_c = arg_id;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_notifications_notifications_call_get_capabilities (XdgNotificationsNotifications* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_get_capabilities (::XdgNotificationsNotifications* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::NotificationsBase::call_get_capabilities (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::NotificationsBase::call_get_capabilities (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_notifications_notifications_call_get_capabilities_finish (XdgNotificationsNotifications* proxy /*none*/, gchar*** out_caps /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_capabilities_finish (::XdgNotificationsNotifications* proxy /*none*/, char*** out_caps /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_get_capabilities_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_caps_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (out_caps ? &out_caps_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_caps) *out_caps = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_get_capabilities_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_caps_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (out_caps ? &out_caps_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_caps) *out_caps = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::NotificationsBase::call_get_capabilities_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_caps_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (&out_caps_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::NotificationsBase::call_get_capabilities_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char** out_caps_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (&out_caps_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_notifications_notifications_call_get_capabilities_sync (XdgNotificationsNotifications* proxy /*none*/, gchar*** out_caps /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_capabilities_sync (::XdgNotificationsNotifications* proxy /*none*/, char*** out_caps /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_caps_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (out_caps ? &out_caps_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_caps) *out_caps = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::NotificationsBase::call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = nullptr;
  char** out_caps_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (out_caps ? &out_caps_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_caps) *out_caps = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_caps_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (out_caps ? &out_caps_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_caps) *out_caps = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::NotificationsBase::call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = nullptr;
  char** out_caps_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (out_caps ? &out_caps_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_caps) *out_caps = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::NotificationsBase::call_get_capabilities_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_caps_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (&out_caps_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> base::NotificationsBase::call_get_capabilities_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = nullptr;
  char** out_caps_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (&out_caps_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::NotificationsBase::call_get_capabilities_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char** out_caps_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (&out_caps_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::NotificationsBase::call_get_capabilities_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char*** out_caps, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_capabilities_sync;
  auto cancellable_to_c = nullptr;
  char** out_caps_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char***) (&out_caps_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(out_caps_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_notifications_notifications_call_get_server_information (XdgNotificationsNotifications* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_get_server_information (::XdgNotificationsNotifications* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::NotificationsBase::call_get_server_information (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::NotificationsBase::call_get_server_information (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_notifications_notifications_call_get_server_information_finish (XdgNotificationsNotifications* proxy /*none*/, gchar** out_name /*full,out,opt*/, gchar** out_vendor /*full,out,opt*/, gchar** out_version /*full,out,opt*/, gchar** out_spec_version /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_server_information_finish (::XdgNotificationsNotifications* proxy /*none*/, char** out_name /*full,out,opt*/, char** out_vendor /*full,out,opt*/, char** out_version /*full,out,opt*/, char** out_spec_version /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_get_server_information_finish (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (out_name ? &out_name_o : nullptr), (char**) (out_vendor ? &out_vendor_o : nullptr), (char**) (out_version ? &out_version_o : nullptr), (char**) (out_spec_version ? &out_spec_version_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_spec_version) *out_spec_version = gi::wrap (out_spec_version_o, gi::transfer_full);
  if (out_version) *out_version = gi::wrap (out_version_o, gi::transfer_full);
  if (out_vendor) *out_vendor = gi::wrap (out_vendor_o, gi::transfer_full);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_get_server_information_finish (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (out_name ? &out_name_o : nullptr), (char**) (out_vendor ? &out_vendor_o : nullptr), (char**) (out_version ? &out_version_o : nullptr), (char**) (out_spec_version ? &out_spec_version_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_spec_version) *out_spec_version = gi::wrap (out_spec_version_o, gi::transfer_full);
  if (out_version) *out_version = gi::wrap (out_version_o, gi::transfer_full);
  if (out_vendor) *out_vendor = gi::wrap (out_vendor_o, gi::transfer_full);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring>> base::NotificationsBase::call_get_server_information_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (&out_name_o), (char**) (&out_vendor_o), (char**) (&out_version_o), (char**) (&out_spec_version_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_vendor_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (out_version_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (out_spec_version_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring> base::NotificationsBase::call_get_server_information_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (&out_name_o), (char**) (&out_vendor_o), (char**) (&out_version_o), (char**) (&out_spec_version_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_vendor_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (out_version_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (out_spec_version_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// gboolean xdg_notifications_notifications_call_get_server_information_sync (XdgNotificationsNotifications* proxy /*none*/, gchar** out_name /*full,out,opt*/, gchar** out_vendor /*full,out,opt*/, gchar** out_version /*full,out,opt*/, gchar** out_spec_version /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_server_information_sync (::XdgNotificationsNotifications* proxy /*none*/, char** out_name /*full,out,opt*/, char** out_vendor /*full,out,opt*/, char** out_version /*full,out,opt*/, char** out_spec_version /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (out_name ? &out_name_o : nullptr), (char**) (out_vendor ? &out_vendor_o : nullptr), (char**) (out_version ? &out_version_o : nullptr), (char**) (out_spec_version ? &out_spec_version_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_spec_version) *out_spec_version = gi::wrap (out_spec_version_o, gi::transfer_full);
  if (out_version) *out_version = gi::wrap (out_version_o, gi::transfer_full);
  if (out_vendor) *out_vendor = gi::wrap (out_vendor_o, gi::transfer_full);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::NotificationsBase::call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = nullptr;
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (out_name ? &out_name_o : nullptr), (char**) (out_vendor ? &out_vendor_o : nullptr), (char**) (out_version ? &out_version_o : nullptr), (char**) (out_spec_version ? &out_spec_version_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_spec_version) *out_spec_version = gi::wrap (out_spec_version_o, gi::transfer_full);
  if (out_version) *out_version = gi::wrap (out_version_o, gi::transfer_full);
  if (out_vendor) *out_vendor = gi::wrap (out_vendor_o, gi::transfer_full);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_full);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (out_name ? &out_name_o : nullptr), (char**) (out_vendor ? &out_vendor_o : nullptr), (char**) (out_version ? &out_version_o : nullptr), (char**) (out_spec_version ? &out_spec_version_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_spec_version) *out_spec_version = gi::wrap (out_spec_version_o, gi::transfer_full);
  if (out_version) *out_version = gi::wrap (out_version_o, gi::transfer_full);
  if (out_vendor) *out_vendor = gi::wrap (out_vendor_o, gi::transfer_full);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::NotificationsBase::call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = nullptr;
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (out_name ? &out_name_o : nullptr), (char**) (out_vendor ? &out_vendor_o : nullptr), (char**) (out_version ? &out_version_o : nullptr), (char**) (out_spec_version ? &out_spec_version_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_spec_version) *out_spec_version = gi::wrap (out_spec_version_o, gi::transfer_full);
  if (out_version) *out_version = gi::wrap (out_version_o, gi::transfer_full);
  if (out_vendor) *out_vendor = gi::wrap (out_vendor_o, gi::transfer_full);
  if (out_name) *out_name = gi::wrap (out_name_o, gi::transfer_full);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring>> base::NotificationsBase::call_get_server_information_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (&out_name_o), (char**) (&out_vendor_o), (char**) (&out_version_o), (char**) (&out_spec_version_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_vendor_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (out_version_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (out_spec_version_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
gi::result<std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring>> base::NotificationsBase::call_get_server_information_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = nullptr;
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (&out_name_o), (char**) (&out_vendor_o), (char**) (&out_version_o), (char**) (&out_spec_version_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_vendor_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (out_version_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (out_spec_version_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring> base::NotificationsBase::call_get_server_information_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (&out_name_o), (char**) (&out_vendor_o), (char**) (&out_version_o), (char**) (&out_spec_version_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_vendor_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (out_version_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (out_spec_version_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}
std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring> base::NotificationsBase::call_get_server_information_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, char** out_name, char** out_vendor, char** out_version, char** out_spec_version, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_get_server_information_sync;
  auto cancellable_to_c = nullptr;
  char* out_spec_version_o {};
  char* out_version_o {};
  char* out_vendor_o {};
  char* out_name_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (char**) (&out_name_o), (char**) (&out_vendor_o), (char**) (&out_version_o), (char**) (&out_spec_version_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = gi::wrap (out_name_o, gi::transfer_full);
  auto &&tmp_return_3 = gi::wrap (out_vendor_o, gi::transfer_full);
  auto &&tmp_return_4 = gi::wrap (out_version_o, gi::transfer_full);
  auto &&tmp_return_5 = gi::wrap (out_spec_version_o, gi::transfer_full);
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3),std::move(tmp_return_4),std::move(tmp_return_5));
}

// void xdg_notifications_notifications_call_inhibit (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_desktop_entry /*none*/, const gchar* arg_reason /*none*/, GVariant* arg_hints /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_inhibit (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_desktop_entry /*none*/, const char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::NotificationsBase::call_inhibit (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::NotificationsBase::call_inhibit (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_notifications_notifications_call_inhibit_finish (XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg3, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_inhibit_finish (::XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg3, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_inhibit_finish (guint * out_unnamed_arg3, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg3, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (out_unnamed_arg3 ? &out_unnamed_arg3_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg3) *out_unnamed_arg3 = out_unnamed_arg3_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_inhibit_finish (guint * out_unnamed_arg3, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg3, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (out_unnamed_arg3 ? &out_unnamed_arg3_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg3) *out_unnamed_arg3 = out_unnamed_arg3_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::NotificationsBase::call_inhibit_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg3, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (&out_unnamed_arg3_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg3_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::NotificationsBase::call_inhibit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg3, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (&out_unnamed_arg3_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg3_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_notifications_notifications_call_inhibit_sync (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_desktop_entry /*none*/, const gchar* arg_reason /*none*/, GVariant* arg_hints /*none*/, guint* out_unnamed_arg3, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_inhibit_sync (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_desktop_entry /*none*/, const char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/, guint* out_unnamed_arg3, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (out_unnamed_arg3 ? &out_unnamed_arg3_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg3) *out_unnamed_arg3 = out_unnamed_arg3_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (out_unnamed_arg3 ? &out_unnamed_arg3_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_unnamed_arg3) *out_unnamed_arg3 = out_unnamed_arg3_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (out_unnamed_arg3 ? &out_unnamed_arg3_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg3) *out_unnamed_arg3 = out_unnamed_arg3_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (out_unnamed_arg3 ? &out_unnamed_arg3_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg3) *out_unnamed_arg3 = out_unnamed_arg3_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (&out_unnamed_arg3_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg3_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
gi::result<std::tuple<bool, guint>> base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (&out_unnamed_arg3_o), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg3_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (&out_unnamed_arg3_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg3_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::NotificationsBase::call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints, guint* out_unnamed_arg3, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_inhibit_sync;
  auto cancellable_to_c = nullptr;
  guint out_unnamed_arg3_o {};
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c), (guint*) (&out_unnamed_arg3_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg3_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void xdg_notifications_notifications_call_notify (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_app_name /*none*/, guint arg_replaces_id, const gchar* arg_app_icon /*none*/, const gchar* arg_summary /*none*/, const gchar* arg_body /*none*/, const gchar* const* arg_actions /*none*/, GVariant* arg_hints /*none*/, gint arg_timeout, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_notify (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_app_name /*none*/, guint arg_replaces_id, const char* arg_app_icon /*none*/, const char* arg_summary /*none*/, const char* arg_body /*none*/, const char* arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_actions in pointer depth (2 vs 1)

// gboolean xdg_notifications_notifications_call_notify_finish (XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg8, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_notify_finish (::XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg8, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_notify_finish (guint * out_unnamed_arg8, Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg8, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_notify_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg8_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (out_unnamed_arg8 ? &out_unnamed_arg8_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_unnamed_arg8) *out_unnamed_arg8 = out_unnamed_arg8_o;
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_notify_finish (guint * out_unnamed_arg8, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg8, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_notify_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg8_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (out_unnamed_arg8 ? &out_unnamed_arg8_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_unnamed_arg8) *out_unnamed_arg8 = out_unnamed_arg8_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
gi::result<std::tuple<bool, guint>> base::NotificationsBase::call_notify_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg8, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_notify_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg8_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (&out_unnamed_arg8_o), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg8_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}
std::tuple<bool, guint> base::NotificationsBase::call_notify_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint* out_unnamed_arg8, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_notify_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  guint out_unnamed_arg8_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint*) (&out_unnamed_arg8_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = out_unnamed_arg8_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gboolean xdg_notifications_notifications_call_notify_sync (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_app_name /*none*/, guint arg_replaces_id, const gchar* arg_app_icon /*none*/, const gchar* arg_summary /*none*/, const gchar* arg_body /*none*/, const gchar* const* arg_actions /*none*/, GVariant* arg_hints /*none*/, gint arg_timeout, guint* out_unnamed_arg8, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_notify_sync (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_app_name /*none*/, guint arg_replaces_id, const char* arg_app_icon /*none*/, const char* arg_summary /*none*/, const char* arg_body /*none*/, const char* arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout, guint* out_unnamed_arg8, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_actions in pointer depth (2 vs 1)

// void xdg_notifications_notifications_call_un_inhibit (XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_un_inhibit (::XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::NotificationsBase::call_un_inhibit (guint arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = arg_unnamed_arg0;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::NotificationsBase::call_un_inhibit (guint arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_unnamed_arg0, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = arg_unnamed_arg0;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdg_notifications_notifications_call_un_inhibit_finish (XdgNotificationsNotifications* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_un_inhibit_finish (::XdgNotificationsNotifications* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_un_inhibit_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_un_inhibit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_notifications_notifications_call_un_inhibit_sync (XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_un_inhibit_sync (::XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::NotificationsBase::call_un_inhibit_sync (guint arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = arg_unnamed_arg0;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::NotificationsBase::call_un_inhibit_sync (guint arg_unnamed_arg0) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = arg_unnamed_arg0;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::NotificationsBase::call_un_inhibit_sync (guint arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_unnamed_arg0_to_c = arg_unnamed_arg0;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::NotificationsBase::call_un_inhibit_sync (guint arg_unnamed_arg0, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* proxy, guint arg_unnamed_arg0, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_call_un_inhibit_sync;
  auto cancellable_to_c = nullptr;
  auto arg_unnamed_arg0_to_c = arg_unnamed_arg0;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_unnamed_arg0_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdg_notifications_notifications_complete_close_notification (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_notifications_notifications_complete_close_notification (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::NotificationsBase::complete_close_notification (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_complete_close_notification;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_notifications_notifications_complete_get_capabilities (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* caps /*none*/);
// void xdg_notifications_notifications_complete_get_capabilities (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* caps /*none*/);
// SKIP; inconsistent caps in pointer depth (2 vs 1)

// void xdg_notifications_notifications_complete_get_server_information (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* name /*none*/, const gchar* vendor /*none*/, const gchar* version /*none*/, const gchar* spec_version /*none*/);
// void xdg_notifications_notifications_complete_get_server_information (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* name /*none*/, const char* vendor /*none*/, const char* version /*none*/, const char* spec_version /*none*/);
void base::NotificationsBase::complete_get_server_information (Gio::DBusMethodInvocation invocation, const gi::cstring_v name, const gi::cstring_v vendor, const gi::cstring_v version, const gi::cstring_v spec_version) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation, const char* name, const char* vendor, const char* version, const char* spec_version);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_complete_get_server_information;
  auto spec_version_to_c = gi::unwrap (spec_version, gi::transfer_none);
  auto version_to_c = gi::unwrap (version, gi::transfer_none);
  auto vendor_to_c = gi::unwrap (vendor, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (name_to_c), (const char*) (vendor_to_c), (const char*) (version_to_c), (const char*) (spec_version_to_c));
}

// void xdg_notifications_notifications_complete_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg3);
// void xdg_notifications_notifications_complete_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg3);
void base::NotificationsBase::complete_inhibit (Gio::DBusMethodInvocation invocation, guint unnamed_arg3) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation, guint unnamed_arg3);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_complete_inhibit;
  auto unnamed_arg3_to_c = unnamed_arg3;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (unnamed_arg3_to_c));
}

// void xdg_notifications_notifications_complete_notify (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg8);
// void xdg_notifications_notifications_complete_notify (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg8);
void base::NotificationsBase::complete_notify (Gio::DBusMethodInvocation invocation, guint unnamed_arg8) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation, guint unnamed_arg8);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_complete_notify;
  auto unnamed_arg8_to_c = unnamed_arg8;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (unnamed_arg8_to_c));
}

// void xdg_notifications_notifications_complete_un_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_notifications_notifications_complete_un_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::NotificationsBase::complete_un_inhibit (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_complete_un_inhibit;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_notifications_notifications_emit_action_invoked (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_action_key /*none*/);
// void xdg_notifications_notifications_emit_action_invoked (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_action_key /*none*/);
void base::NotificationsBase::emit_action_invoked (guint arg_id, const gi::cstring_v arg_action_key) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, const char* arg_action_key);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_emit_action_invoked;
  auto arg_action_key_to_c = gi::unwrap (arg_action_key, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (const char*) (arg_action_key_to_c));
}

// void xdg_notifications_notifications_emit_activation_token (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_activation_token /*none*/);
// void xdg_notifications_notifications_emit_activation_token (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_activation_token /*none*/);
void base::NotificationsBase::emit_activation_token (guint arg_id, const gi::cstring_v arg_activation_token) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, const char* arg_activation_token);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_emit_activation_token;
  auto arg_activation_token_to_c = gi::unwrap (arg_activation_token, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (const char*) (arg_activation_token_to_c));
}

// void xdg_notifications_notifications_emit_notification_closed (XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
// void xdg_notifications_notifications_emit_notification_closed (::XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
void base::NotificationsBase::emit_notification_closed (guint arg_id, guint arg_reason) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, guint arg_reason);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_emit_notification_closed;
  auto arg_reason_to_c = arg_reason;
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (guint) (arg_reason_to_c));
}

// void xdg_notifications_notifications_emit_notification_replied (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_text /*none*/);
// void xdg_notifications_notifications_emit_notification_replied (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_text /*none*/);
void base::NotificationsBase::emit_notification_replied (guint arg_id, const gi::cstring_v arg_text) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, const char* arg_text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_emit_notification_replied;
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (const char*) (arg_text_to_c));
}

// gboolean xdg_notifications_notifications_get_inhibited (XdgNotificationsNotifications* object /*none*/);
// gboolean xdg_notifications_notifications_get_inhibited (::XdgNotificationsNotifications* object /*none*/);
bool base::NotificationsBase::get_inhibited () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_get_inhibited;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()));
  return _temp_ret;
}

// void xdg_notifications_notifications_set_inhibited (XdgNotificationsNotifications* object /*none*/, gboolean value);
// void xdg_notifications_notifications_set_inhibited (::XdgNotificationsNotifications* object /*none*/, gboolean value);
void base::NotificationsBase::set_inhibited (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_notifications_set_inhibited;
  auto value_to_c = value;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (gboolean) (value_to_c));
}












} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/notifications_extra_def_impl.hpp>)
#include <xdgnotifications/notifications_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/notifications_extra_impl.hpp>)
#include <xdgnotifications/notifications_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {

void NotificationsIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgNotificationsNotificationsIface *methods = (::XdgNotificationsNotificationsIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.action_invoked) methods->action_invoked = (decltype (methods->action_invoked)) gi::detail::method_wrapper<self, void (*) (guint arg_id, const gi::cstring_v arg_action_key), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::action_invoked_>;
  if (init_data.activation_token) methods->activation_token = (decltype (methods->activation_token)) gi::detail::method_wrapper<self, void (*) (guint arg_id, const gi::cstring_v arg_activation_token), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::activation_token_>;
  if (init_data.handle_close_notification) methods->handle_close_notification = (decltype (methods->handle_close_notification)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, guint arg_id), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_close_notification_>;
  if (init_data.handle_get_capabilities) methods->handle_get_capabilities = (decltype (methods->handle_get_capabilities)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_capabilities_>;
  if (init_data.handle_get_server_information) methods->handle_get_server_information = (decltype (methods->handle_get_server_information)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_get_server_information_>;
  if (init_data.handle_inhibit) methods->handle_inhibit = (decltype (methods->handle_inhibit)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_inhibit_>;
  if (init_data.handle_notify && factory) methods->handle_notify = (decltype (methods->handle_notify)) gi::detail::method_wrapper<self, gboolean (*) (::GDBusMethodInvocation* invocation, const gchar* arg_app_name, guint arg_replaces_id, const gchar* arg_app_icon, const gchar* arg_summary, const gchar* arg_body, const gchar* const* arg_actions, ::GVariant* arg_hints, gint arg_timeout), std::nullptr_t>::wrapper<&self::handle_notify_>;
  if (init_data.handle_un_inhibit) methods->handle_un_inhibit = (decltype (methods->handle_un_inhibit)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, guint arg_unnamed_arg0), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_un_inhibit_>;
  if (init_data.notification_closed) methods->notification_closed = (decltype (methods->notification_closed)) gi::detail::method_wrapper<self, void (*) (guint arg_id, guint arg_reason), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::notification_closed_>;
  if (init_data.notification_replied) methods->notification_replied = (decltype (methods->notification_replied)) gi::detail::method_wrapper<self, void (*) (guint arg_id, const gi::cstring_v arg_text), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::notification_replied_>;
}

// void Notifications::action_invoked (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_action_key /*none*/);
// void Notifications::action_invoked (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_action_key /*none*/);
void NotificationsIfaceClassImpl::action_invoked_ (guint arg_id, const gi::cstring_v arg_action_key) noexcept
{
  if (!get_struct_()->action_invoked) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, const char* arg_action_key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->action_invoked;
  auto arg_action_key_to_c = gi::unwrap (arg_action_key, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (const char*) (arg_action_key_to_c));
}

// void Notifications::activation_token (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_activation_token /*none*/);
// void Notifications::activation_token (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_activation_token /*none*/);
void NotificationsIfaceClassImpl::activation_token_ (guint arg_id, const gi::cstring_v arg_activation_token) noexcept
{
  if (!get_struct_()->activation_token) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, const char* arg_activation_token);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activation_token;
  auto arg_activation_token_to_c = gi::unwrap (arg_activation_token, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (const char*) (arg_activation_token_to_c));
}

// gboolean Notifications::handle_close_notification (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_id);
// gboolean Notifications::handle_close_notification (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
bool NotificationsIfaceClassImpl::handle_close_notification_ (Gio::DBusMethodInvocation invocation, guint arg_id) noexcept
{
  if (!get_struct_()->handle_close_notification) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation, guint arg_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_close_notification;
  auto arg_id_to_c = arg_id;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (arg_id_to_c));
  return _temp_ret;
}

// gboolean Notifications::handle_get_capabilities (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Notifications::handle_get_capabilities (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool NotificationsIfaceClassImpl::handle_get_capabilities_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_capabilities) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_capabilities;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean Notifications::handle_get_server_information (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Notifications::handle_get_server_information (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool NotificationsIfaceClassImpl::handle_get_server_information_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_get_server_information) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_get_server_information;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean Notifications::handle_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_desktop_entry /*none*/, const gchar* arg_reason /*none*/, GVariant* arg_hints /*none*/);
// gboolean Notifications::handle_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_desktop_entry /*none*/, const char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/);
bool NotificationsIfaceClassImpl::handle_inhibit_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints) noexcept
{
  if (!get_struct_()->handle_inhibit) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation, const char* arg_desktop_entry, const char* arg_reason, ::GVariant* arg_hints);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_inhibit;
  auto arg_hints_to_c = gi::unwrap (arg_hints, gi::transfer_none);
  auto arg_reason_to_c = gi::unwrap (arg_reason, gi::transfer_none);
  auto arg_desktop_entry_to_c = gi::unwrap (arg_desktop_entry, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_desktop_entry_to_c), (const char*) (arg_reason_to_c), (::GVariant*) (arg_hints_to_c));
  return _temp_ret;
}

// gboolean Notifications::handle_notify (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_app_name /*none*/, guint arg_replaces_id, const gchar* arg_app_icon /*none*/, const gchar* arg_summary /*none*/, const gchar* arg_body /*none*/, const gchar* const* arg_actions /*none*/, GVariant* arg_hints /*none*/, gint arg_timeout);
// gboolean Notifications::handle_notify (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_app_name /*none*/, guint arg_replaces_id, const char* arg_app_icon /*none*/, const char* arg_summary /*none*/, const char* arg_body /*none*/, const char* arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout);
// SKIP; inconsistent arg_actions in pointer depth (2 vs 1)
gboolean NotificationsIfaceClassImpl::handle_notify_ (::GDBusMethodInvocation* invocation, const gchar* arg_app_name, guint arg_replaces_id, const gchar* arg_app_icon, const gchar* arg_summary, const gchar* arg_body, const gchar* const* arg_actions, ::GVariant* arg_hints, gint arg_timeout) noexcept
{
  if (!get_struct_()->handle_notify) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications*, ::GDBusMethodInvocation*, const gchar*, guint, const gchar*, const gchar*, const gchar*, const gchar* const*, ::GVariant*, gint);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_notify;
  auto result_ = call_wrap_v (gobj_(), invocation, arg_app_name, arg_replaces_id, arg_app_icon, arg_summary, arg_body, arg_actions, arg_hints, arg_timeout);
  return result_;
}

// gboolean Notifications::handle_un_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_unnamed_arg0);
// gboolean Notifications::handle_un_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_unnamed_arg0);
bool NotificationsIfaceClassImpl::handle_un_inhibit_ (Gio::DBusMethodInvocation invocation, guint arg_unnamed_arg0) noexcept
{
  if (!get_struct_()->handle_un_inhibit) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgNotificationsNotifications* object, ::GDBusMethodInvocation* invocation, guint arg_unnamed_arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_un_inhibit;
  auto arg_unnamed_arg0_to_c = arg_unnamed_arg0;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (guint) (arg_unnamed_arg0_to_c));
  return _temp_ret;
}

// void Notifications::notification_closed (XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
// void Notifications::notification_closed (::XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
void NotificationsIfaceClassImpl::notification_closed_ (guint arg_id, guint arg_reason) noexcept
{
  if (!get_struct_()->notification_closed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, guint arg_reason);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->notification_closed;
  auto arg_reason_to_c = arg_reason;
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (guint) (arg_reason_to_c));
}

// void Notifications::notification_replied (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_text /*none*/);
// void Notifications::notification_replied (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_text /*none*/);
void NotificationsIfaceClassImpl::notification_replied_ (guint arg_id, const gi::cstring_v arg_text) noexcept
{
  if (!get_struct_()->notification_replied) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdgNotificationsNotifications* object, guint arg_id, const char* arg_text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->notification_replied;
  auto arg_text_to_c = gi::unwrap (arg_text, gi::transfer_none);
  auto arg_id_to_c = arg_id;
  call_wrap_v ((::XdgNotificationsNotifications*) (gobj_()), (guint) (arg_id_to_c), (const char*) (arg_text_to_c));
}

} // namespace internal

} // namespace impl

} // namespace XdgNotifications

} // namespace repository

} // namespace gi

#endif
