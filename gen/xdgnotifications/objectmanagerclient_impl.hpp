// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_OBJECTMANAGERCLIENT_IMPL_HPP_
#define _GI_XDGNOTIFICATIONS_OBJECTMANAGERCLIENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace base {

// GDBusObjectManager* /*full*/ xdg_notifications_object_manager_client_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgNotificationsObjectManagerClient* /*full*/ xdg_notifications_object_manager_client_new_finish (::GAsyncResult* res /*none*/, GError ** error);
gi::result<XdgNotifications::ObjectManagerClient> base::ObjectManagerClientBase::new_finish (Gio::AsyncResult res) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdgNotifications::ObjectManagerClient base::ObjectManagerClientBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObjectManager* /*full*/ xdg_notifications_object_manager_client_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgNotificationsObjectManagerClient* /*full*/ xdg_notifications_object_manager_client_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
gi::result<XdgNotifications::ObjectManagerClient> base::ObjectManagerClientBase::new_for_bus_finish (Gio::AsyncResult res) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdgNotifications::ObjectManagerClient base::ObjectManagerClientBase::new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObjectManager* /*full*/ xdg_notifications_object_manager_client_new_for_bus_sync (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgNotificationsObjectManagerClient* /*full*/ xdg_notifications_object_manager_client_new_for_bus_sync (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<XdgNotifications::ObjectManagerClient> base::ObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::result<XdgNotifications::ObjectManagerClient> base::ObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdgNotifications::ObjectManagerClient base::ObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdgNotifications::ObjectManagerClient base::ObjectManagerClientBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDBusObjectManager* /*full*/ xdg_notifications_object_manager_client_new_sync (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgNotificationsObjectManagerClient* /*full*/ xdg_notifications_object_manager_client_new_sync (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<XdgNotifications::ObjectManagerClient> base::ObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::result<XdgNotifications::ObjectManagerClient> base::ObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdgNotifications::ObjectManagerClient base::ObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdgNotifications::ObjectManagerClient base::ObjectManagerClientBase::new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept
{
  typedef ::XdgNotificationsObjectManagerClient* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_manager_client_new_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GType xdg_notifications_object_manager_client_get_proxy_type (GDBusObjectManagerClient* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none,nullable*/, gpointer user_data);
// GType xdg_notifications_object_manager_client_get_proxy_type (::GDBusObjectManagerClient* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none,nullable*/, void* user_data);
GType base::ObjectManagerClientBase::get_proxy_type (Gio::DBusObjectManagerClient manager, const gi::cstring_v object_path, const gi::cstring_v interface_name, void* user_data) noexcept
{
  typedef GType (*call_wrap_t) (::GDBusObjectManagerClient* manager, const char* object_path, const char* interface_name, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_manager_client_get_proxy_type;
  auto user_data_to_c = user_data;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto manager_to_c = gi::unwrap (manager, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerClient*) (manager_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}
GType base::ObjectManagerClientBase::get_proxy_type (Gio::DBusObjectManagerClient manager, const gi::cstring_v object_path, void* user_data) noexcept
{
  typedef GType (*call_wrap_t) (::GDBusObjectManagerClient* manager, const char* object_path, const char* interface_name, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_manager_client_get_proxy_type;
  auto user_data_to_c = user_data;
  auto interface_name_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto manager_to_c = gi::unwrap (manager, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerClient*) (manager_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (void*) (user_data_to_c));
  return _temp_ret;
}

// void xdg_notifications_object_manager_client_new (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_object_manager_client_new (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ObjectManagerClientBase::new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_manager_client_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ObjectManagerClientBase::new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_manager_client_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void xdg_notifications_object_manager_client_new_for_bus (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_object_manager_client_new_for_bus (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::ObjectManagerClientBase::new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_manager_client_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::ObjectManagerClientBase::new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_manager_client_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusObjectManagerClientFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}


} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/objectmanagerclient_extra_def_impl.hpp>)
#include <xdgnotifications/objectmanagerclient_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/objectmanagerclient_extra_impl.hpp>)
#include <xdgnotifications/objectmanagerclient_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {

void ObjectManagerClientClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgNotificationsObjectManagerClientClass *methods = (::XdgNotificationsObjectManagerClientClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdgNotifications

} // namespace repository

} // namespace gi

#endif
