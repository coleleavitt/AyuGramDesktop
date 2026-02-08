// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSMONITORING_IMPL_HPP_
#define _GI_XDGDBUS_DBUSMONITORING_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_monitoring_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_monitoring_interface_info ();
Gio::DBusInterfaceInfo_Ref base::DBusMonitoringBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_monitoring_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdg_dbus_dbus_monitoring_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_monitoring_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_monitoring_call_become_monitor (XdgDBusDBusMonitoring* proxy /*none*/, const gchar* const* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_monitoring_call_become_monitor (::XdgDBusDBusMonitoring* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_unnamed_arg0 in pointer depth (2 vs 1)

// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_finish (XdgDBusDBusMonitoring* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_finish (::XdgDBusDBusMonitoring* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::DBusMonitoringBase::call_become_monitor_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusMonitoring* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_monitoring_call_become_monitor_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusMonitoring*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::DBusMonitoringBase::call_become_monitor_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusMonitoring* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_monitoring_call_become_monitor_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgDBusDBusMonitoring*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_sync (XdgDBusDBusMonitoring* proxy /*none*/, const gchar* const* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_sync (::XdgDBusDBusMonitoring* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_unnamed_arg0 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_monitoring_complete_become_monitor (XdgDBusDBusMonitoring* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_monitoring_complete_become_monitor (::XdgDBusDBusMonitoring* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::DBusMonitoringBase::complete_become_monitor (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusDBusMonitoring* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_dbus_monitoring_complete_become_monitor;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgDBusDBusMonitoring*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}



} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoring_extra_def_impl.hpp>)
#include <xdgdbus/dbusmonitoring_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoring_extra_impl.hpp>)
#include <xdgdbus/dbusmonitoring_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusMonitoringIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgDBusDBusMonitoringIface *methods = (::XdgDBusDBusMonitoringIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_become_monitor && factory) methods->handle_become_monitor = (decltype (methods->handle_become_monitor)) gi::detail::method_wrapper<self, gboolean (*) (::GDBusMethodInvocation* invocation, const gchar* const* arg_unnamed_arg0, guint arg_unnamed_arg1), std::nullptr_t>::wrapper<&self::handle_become_monitor_>;
}

// gboolean DBusMonitoring::handle_become_monitor (XdgDBusDBusMonitoring* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBusMonitoring::handle_become_monitor (::XdgDBusDBusMonitoring* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// SKIP; inconsistent arg_unnamed_arg0 in pointer depth (2 vs 1)
gboolean DBusMonitoringIfaceClassImpl::handle_become_monitor_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept
{
  if (!get_struct_()->handle_become_monitor) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgDBusDBusMonitoring*, ::GDBusMethodInvocation*, const gchar* const*, guint);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_become_monitor;
  auto result_ = call_wrap_v (gobj_(), invocation, arg_unnamed_arg0, arg_unnamed_arg1);
  return result_;
}

} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
