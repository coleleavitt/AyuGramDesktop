// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_OBJECTPROXY_IMPL_HPP_
#define _GI_XDGFILEMANAGER1_OBJECTPROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace base {

XdgFileManager1::Object ObjectProxyBase::interface_ (gi::interface_tag<XdgFileManager1::Object>)
{ return gi::wrap ((XdgFileManager1::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectProxyBase::operator XdgFileManager1::Object ()
{ return interface_ (gi::interface_tag<XdgFileManager1::Object>()); }

// XdgFileManager1ObjectProxy* /*full*/ xdg_file_manager1_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::XdgFileManager1ObjectProxy* /*full*/ xdg_file_manager1_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
XdgFileManager1::ObjectProxy base::ObjectProxyBase::new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept
{
  typedef ::XdgFileManager1ObjectProxy* (*call_wrap_t) (::GDBusConnection* connection, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_file_manager1_object_proxy_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectproxy_extra_def_impl.hpp>)
#include <xdgfilemanager1/objectproxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectproxy_extra_impl.hpp>)
#include <xdgfilemanager1/objectproxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {

void ObjectProxyClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgFileManager1ObjectProxyClass *methods = (::XdgFileManager1ObjectProxyClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
