// AUTO-GENERATED

#ifndef _GI_XDGDBUS_OBJECT_IMPL_HPP_
#define _GI_XDGDBUS_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

// XdgDBusDBus* /*full,nullable*/ xdg_dbus_object_get_dbus (XdgDBusObject* object /*none*/);
// ::XdgDBusDBus* /*full,nullable*/ xdg_dbus_object_get_dbus (::XdgDBusObject* object /*none*/);
XdgDBus::DBus base::ObjectBase::get_dbus () noexcept
{
  typedef ::XdgDBusDBus* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_get_dbus;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgDBusDBusDebugStats* /*full,nullable*/ xdg_dbus_object_get_dbus_debug_stats (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusDebugStats* /*full,nullable*/ xdg_dbus_object_get_dbus_debug_stats (::XdgDBusObject* object /*none*/);
XdgDBus::DBusDebugStats base::ObjectBase::get_dbus_debug_stats () noexcept
{
  typedef ::XdgDBusDBusDebugStats* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_get_dbus_debug_stats;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgDBusDBusIntrospectable* /*full,nullable*/ xdg_dbus_object_get_dbus_introspectable (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusIntrospectable* /*full,nullable*/ xdg_dbus_object_get_dbus_introspectable (::XdgDBusObject* object /*none*/);
XdgDBus::DBusIntrospectable base::ObjectBase::get_dbus_introspectable () noexcept
{
  typedef ::XdgDBusDBusIntrospectable* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_get_dbus_introspectable;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgDBusDBusMonitoring* /*full,nullable*/ xdg_dbus_object_get_dbus_monitoring (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusMonitoring* /*full,nullable*/ xdg_dbus_object_get_dbus_monitoring (::XdgDBusObject* object /*none*/);
XdgDBus::DBusMonitoring base::ObjectBase::get_dbus_monitoring () noexcept
{
  typedef ::XdgDBusDBusMonitoring* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_get_dbus_monitoring;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgDBusDBusPeer* /*full,nullable*/ xdg_dbus_object_get_dbus_peer (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusPeer* /*full,nullable*/ xdg_dbus_object_get_dbus_peer (::XdgDBusObject* object /*none*/);
XdgDBus::DBusPeer base::ObjectBase::get_dbus_peer () noexcept
{
  typedef ::XdgDBusDBusPeer* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_get_dbus_peer;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgDBusDBusProperties* /*full,nullable*/ xdg_dbus_object_get_dbus_properties (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusProperties* /*full,nullable*/ xdg_dbus_object_get_dbus_properties (::XdgDBusObject* object /*none*/);
XdgDBus::DBusProperties base::ObjectBase::get_dbus_properties () noexcept
{
  typedef ::XdgDBusDBusProperties* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_get_dbus_properties;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgDBusDBus* /*none,nullable*/ xdg_dbus_object_peek_dbus (XdgDBusObject* object /*none*/);
// ::XdgDBusDBus* /*none,nullable*/ xdg_dbus_object_peek_dbus (::XdgDBusObject* object /*none*/);
XdgDBus::DBus base::ObjectBase::peek_dbus () noexcept
{
  typedef ::XdgDBusDBus* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_peek_dbus;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// XdgDBusDBusDebugStats* /*none,nullable*/ xdg_dbus_object_peek_dbus_debug_stats (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusDebugStats* /*none,nullable*/ xdg_dbus_object_peek_dbus_debug_stats (::XdgDBusObject* object /*none*/);
XdgDBus::DBusDebugStats base::ObjectBase::peek_dbus_debug_stats () noexcept
{
  typedef ::XdgDBusDBusDebugStats* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_peek_dbus_debug_stats;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// XdgDBusDBusIntrospectable* /*none,nullable*/ xdg_dbus_object_peek_dbus_introspectable (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusIntrospectable* /*none,nullable*/ xdg_dbus_object_peek_dbus_introspectable (::XdgDBusObject* object /*none*/);
XdgDBus::DBusIntrospectable base::ObjectBase::peek_dbus_introspectable () noexcept
{
  typedef ::XdgDBusDBusIntrospectable* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_peek_dbus_introspectable;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// XdgDBusDBusMonitoring* /*none,nullable*/ xdg_dbus_object_peek_dbus_monitoring (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusMonitoring* /*none,nullable*/ xdg_dbus_object_peek_dbus_monitoring (::XdgDBusObject* object /*none*/);
XdgDBus::DBusMonitoring base::ObjectBase::peek_dbus_monitoring () noexcept
{
  typedef ::XdgDBusDBusMonitoring* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_peek_dbus_monitoring;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// XdgDBusDBusPeer* /*none,nullable*/ xdg_dbus_object_peek_dbus_peer (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusPeer* /*none,nullable*/ xdg_dbus_object_peek_dbus_peer (::XdgDBusObject* object /*none*/);
XdgDBus::DBusPeer base::ObjectBase::peek_dbus_peer () noexcept
{
  typedef ::XdgDBusDBusPeer* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_peek_dbus_peer;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// XdgDBusDBusProperties* /*none,nullable*/ xdg_dbus_object_peek_dbus_properties (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusProperties* /*none,nullable*/ xdg_dbus_object_peek_dbus_properties (::XdgDBusObject* object /*none*/);
XdgDBus::DBusProperties base::ObjectBase::peek_dbus_properties () noexcept
{
  typedef ::XdgDBusDBusProperties* (*call_wrap_t) (::XdgDBusObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_peek_dbus_properties;
  auto _temp_ret = call_wrap_v ((::XdgDBusObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/object_extra_def_impl.hpp>)
#include <xdgdbus/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/object_extra_impl.hpp>)
#include <xdgdbus/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgDBusObjectIface *methods = (::XdgDBusObjectIface *) interface_struct;
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
