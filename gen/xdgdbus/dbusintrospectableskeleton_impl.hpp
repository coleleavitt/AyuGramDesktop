// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSINTROSPECTABLESKELETON_IMPL_HPP_
#define _GI_XDGDBUS_DBUSINTROSPECTABLESKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

XdgDBus::DBusIntrospectable DBusIntrospectableSkeletonBase::interface_ (gi::interface_tag<XdgDBus::DBusIntrospectable>)
{ return gi::wrap ((XdgDBus::DBusIntrospectable::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusIntrospectableSkeletonBase::operator XdgDBus::DBusIntrospectable ()
{ return interface_ (gi::interface_tag<XdgDBus::DBusIntrospectable>()); }

// XdgDBusDBusIntrospectable* /*full*/ xdg_dbus_dbus_introspectable_skeleton_new ();
// ::XdgDBusDBusIntrospectableSkeleton* /*full*/ xdg_dbus_dbus_introspectable_skeleton_new ();
XdgDBus::DBusIntrospectableSkeleton base::DBusIntrospectableSkeletonBase::new_ () noexcept
{
  typedef ::XdgDBusDBusIntrospectableSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_dbus_dbus_introspectable_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectableskeleton_extra_def_impl.hpp>)
#include <xdgdbus/dbusintrospectableskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectableskeleton_extra_impl.hpp>)
#include <xdgdbus/dbusintrospectableskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusIntrospectableSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgDBusDBusIntrospectableSkeletonClass *methods = (::XdgDBusDBusIntrospectableSkeletonClass *) class_struct;
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
