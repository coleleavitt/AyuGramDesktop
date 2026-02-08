// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPEERSKELETON_IMPL_HPP_
#define _GI_XDGDBUS_DBUSPEERSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

XdgDBus::DBusPeer DBusPeerSkeletonBase::interface_ (gi::interface_tag<XdgDBus::DBusPeer>)
{ return gi::wrap ((XdgDBus::DBusPeer::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusPeerSkeletonBase::operator XdgDBus::DBusPeer ()
{ return interface_ (gi::interface_tag<XdgDBus::DBusPeer>()); }

// XdgDBusDBusPeer* /*full*/ xdg_dbus_dbus_peer_skeleton_new ();
// ::XdgDBusDBusPeerSkeleton* /*full*/ xdg_dbus_dbus_peer_skeleton_new ();
XdgDBus::DBusPeerSkeleton base::DBusPeerSkeletonBase::new_ () noexcept
{
  typedef ::XdgDBusDBusPeerSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_dbus_dbus_peer_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeerskeleton_extra_def_impl.hpp>)
#include <xdgdbus/dbuspeerskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeerskeleton_extra_impl.hpp>)
#include <xdgdbus/dbuspeerskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusPeerSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgDBusDBusPeerSkeletonClass *methods = (::XdgDBusDBusPeerSkeletonClass *) class_struct;
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
