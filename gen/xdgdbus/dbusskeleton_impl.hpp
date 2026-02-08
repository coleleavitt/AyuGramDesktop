// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSSKELETON_IMPL_HPP_
#define _GI_XDGDBUS_DBUSSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

XdgDBus::DBus DBusSkeletonBase::interface_ (gi::interface_tag<XdgDBus::DBus>)
{ return gi::wrap ((XdgDBus::DBus::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusSkeletonBase::operator XdgDBus::DBus ()
{ return interface_ (gi::interface_tag<XdgDBus::DBus>()); }

// XdgDBusDBus* /*full*/ xdg_dbus_dbus_skeleton_new ();
// ::XdgDBusDBusSkeleton* /*full*/ xdg_dbus_dbus_skeleton_new ();
XdgDBus::DBusSkeleton base::DBusSkeletonBase::new_ () noexcept
{
  typedef ::XdgDBusDBusSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_dbus_dbus_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusskeleton_extra_def_impl.hpp>)
#include <xdgdbus/dbusskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusskeleton_extra_impl.hpp>)
#include <xdgdbus/dbusskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgDBusDBusSkeletonClass *methods = (::XdgDBusDBusSkeletonClass *) class_struct;
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
