// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPROPERTIESSKELETON_IMPL_HPP_
#define _GI_XDGDBUS_DBUSPROPERTIESSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

XdgDBus::DBusProperties DBusPropertiesSkeletonBase::interface_ (gi::interface_tag<XdgDBus::DBusProperties>)
{ return gi::wrap ((XdgDBus::DBusProperties::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

DBusPropertiesSkeletonBase::operator XdgDBus::DBusProperties ()
{ return interface_ (gi::interface_tag<XdgDBus::DBusProperties>()); }

// XdgDBusDBusProperties* /*full*/ xdg_dbus_dbus_properties_skeleton_new ();
// ::XdgDBusDBusPropertiesSkeleton* /*full*/ xdg_dbus_dbus_properties_skeleton_new ();
XdgDBus::DBusPropertiesSkeleton base::DBusPropertiesSkeletonBase::new_ () noexcept
{
  typedef ::XdgDBusDBusPropertiesSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_dbus_dbus_properties_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspropertiesskeleton_extra_def_impl.hpp>)
#include <xdgdbus/dbuspropertiesskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspropertiesskeleton_extra_impl.hpp>)
#include <xdgdbus/dbuspropertiesskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void DBusPropertiesSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgDBusDBusPropertiesSkeletonClass *methods = (::XdgDBusDBusPropertiesSkeletonClass *) class_struct;
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
