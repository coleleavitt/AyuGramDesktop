// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSDEBUGSTATSSKELETON_IMPL_HPP_
#define _GI_XDGDBUS_DBUSDEBUGSTATSSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

XdgDBus::DBusDebugStats DBusDebugStatsSkeletonBase::interface_ (gi::interface_tag<XdgDBus::DBusDebugStats>)
{ return gi::wrap ((XdgDBus::DBusDebugStats::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusDebugStatsSkeletonBase::operator XdgDBus::DBusDebugStats ()
{ return interface_ (gi::interface_tag<XdgDBus::DBusDebugStats>()); }

// XdgDBusDBusDebugStats* /*full*/ xdg_dbus_dbus_debug_stats_skeleton_new ();
// ::XdgDBusDBusDebugStatsSkeleton* /*full*/ xdg_dbus_dbus_debug_stats_skeleton_new ();
XdgDBus::DBusDebugStatsSkeleton base::DBusDebugStatsSkeletonBase::new_ () noexcept
{
  typedef ::XdgDBusDBusDebugStatsSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_dbus_dbus_debug_stats_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstatsskeleton_extra_def_impl.hpp>)
#include <xdgdbus/dbusdebugstatsskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstatsskeleton_extra_impl.hpp>)
#include <xdgdbus/dbusdebugstatsskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusDebugStatsSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgDBusDBusDebugStatsSkeletonClass *methods = (::XdgDBusDBusDebugStatsSkeletonClass *) class_struct;
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
