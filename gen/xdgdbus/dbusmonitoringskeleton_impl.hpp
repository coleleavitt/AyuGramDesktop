// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSMONITORINGSKELETON_IMPL_HPP_
#define _GI_XDGDBUS_DBUSMONITORINGSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

XdgDBus::DBusMonitoring DBusMonitoringSkeletonBase::interface_ (gi::interface_tag<XdgDBus::DBusMonitoring>)
{ return gi::wrap ((XdgDBus::DBusMonitoring::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusMonitoringSkeletonBase::operator XdgDBus::DBusMonitoring ()
{ return interface_ (gi::interface_tag<XdgDBus::DBusMonitoring>()); }

// XdgDBusDBusMonitoring* /*full*/ xdg_dbus_dbus_monitoring_skeleton_new ();
// ::XdgDBusDBusMonitoringSkeleton* /*full*/ xdg_dbus_dbus_monitoring_skeleton_new ();
XdgDBus::DBusMonitoringSkeleton base::DBusMonitoringSkeletonBase::new_ () noexcept
{
  typedef ::XdgDBusDBusMonitoringSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_dbus_dbus_monitoring_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoringskeleton_extra_def_impl.hpp>)
#include <xdgdbus/dbusmonitoringskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoringskeleton_extra_impl.hpp>)
#include <xdgdbus/dbusmonitoringskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusMonitoringSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgDBusDBusMonitoringSkeletonClass *methods = (::XdgDBusDBusMonitoringSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
