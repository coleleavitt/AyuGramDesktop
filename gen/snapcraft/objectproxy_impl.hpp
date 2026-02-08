// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_OBJECTPROXY_IMPL_HPP_
#define _GI_SNAPCRAFT_OBJECTPROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Snapcraft {

namespace base {

Snapcraft::Object ObjectProxyBase::interface_ (gi::interface_tag<Snapcraft::Object>)
{ return gi::wrap ((Snapcraft::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectProxyBase::operator Snapcraft::Object ()
{ return interface_ (gi::interface_tag<Snapcraft::Object>()); }

// SnapcraftObjectProxy* /*full*/ snapcraft_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::SnapcraftObjectProxy* /*full*/ snapcraft_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
Snapcraft::ObjectProxy base::ObjectProxyBase::new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept
{
  typedef ::SnapcraftObjectProxy* (*call_wrap_t) (::GDBusConnection* connection, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) snapcraft_object_proxy_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/objectproxy_extra_def_impl.hpp>)
#include <snapcraft/objectproxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/objectproxy_extra_impl.hpp>)
#include <snapcraft/objectproxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {

void ObjectProxyClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::SnapcraftObjectProxyClass *methods = (::SnapcraftObjectProxyClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
