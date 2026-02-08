// AUTO-GENERATED

#ifndef _GI_XDGDBUS_OBJECTSKELETON_IMPL_HPP_
#define _GI_XDGDBUS_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgDBus {

namespace base {

XdgDBus::Object ObjectSkeletonBase::interface_ (gi::interface_tag<XdgDBus::Object>)
{ return gi::wrap ((XdgDBus::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator XdgDBus::Object ()
{ return interface_ (gi::interface_tag<XdgDBus::Object>()); }

// XdgDBusObjectSkeleton* /*full*/ xdg_dbus_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdgDBusObjectSkeleton* /*full*/ xdg_dbus_object_skeleton_new (const char* object_path /*none*/);
XdgDBus::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::XdgDBusObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_dbus_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void xdg_dbus_object_skeleton_set_dbus (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBus* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBus* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_dbus (XdgDBus::DBus interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBus* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBus*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_dbus () noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBus* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBus*) (interface__to_c));
}

// void xdg_dbus_object_skeleton_set_dbus_debug_stats (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusDebugStats* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_debug_stats (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusDebugStats* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_dbus_debug_stats (XdgDBus::DBusDebugStats interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusDebugStats* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_debug_stats;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusDebugStats*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_dbus_debug_stats () noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusDebugStats* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_debug_stats;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusDebugStats*) (interface__to_c));
}

// void xdg_dbus_object_skeleton_set_dbus_introspectable (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusIntrospectable* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_introspectable (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusIntrospectable* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_dbus_introspectable (XdgDBus::DBusIntrospectable interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusIntrospectable* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_introspectable;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusIntrospectable*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_dbus_introspectable () noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusIntrospectable* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_introspectable;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusIntrospectable*) (interface__to_c));
}

// void xdg_dbus_object_skeleton_set_dbus_monitoring (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusMonitoring* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_monitoring (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusMonitoring* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_dbus_monitoring (XdgDBus::DBusMonitoring interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusMonitoring* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_monitoring;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusMonitoring*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_dbus_monitoring () noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusMonitoring* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_monitoring;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusMonitoring*) (interface__to_c));
}

// void xdg_dbus_object_skeleton_set_dbus_peer (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusPeer* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_peer (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusPeer* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_dbus_peer (XdgDBus::DBusPeer interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusPeer* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_peer;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusPeer*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_dbus_peer () noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusPeer* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_peer;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusPeer*) (interface__to_c));
}

// void xdg_dbus_object_skeleton_set_dbus_properties (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusProperties* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_properties (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusProperties* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_dbus_properties (XdgDBus::DBusProperties interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusProperties* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_properties;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusProperties*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_dbus_properties () noexcept
{
  typedef void (*call_wrap_t) (::XdgDBusObjectSkeleton* object, ::XdgDBusDBusProperties* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_dbus_object_skeleton_set_dbus_properties;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgDBusObjectSkeleton*) (gobj_()), (::XdgDBusDBusProperties*) (interface__to_c));
}


} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/objectskeleton_extra_def_impl.hpp>)
#include <xdgdbus/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/objectskeleton_extra_impl.hpp>)
#include <xdgdbus/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgDBusObjectSkeletonClass *methods = (::XdgDBusObjectSkeletonClass *) class_struct;
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
