// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OBJECT_IMPL_HPP_
#define _GI_XDPOPENURI_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace base {

// XdpOpenURIOpenURI* /*full,nullable*/ xdp_open_uri_object_get_open_uri (XdpOpenURIObject* object /*none*/);
// ::XdpOpenURIOpenURI* /*full,nullable*/ xdp_open_uri_object_get_open_uri (::XdpOpenURIObject* object /*none*/);
XdpOpenURI::OpenURI base::ObjectBase::get_open_uri () noexcept
{
  typedef ::XdpOpenURIOpenURI* (*call_wrap_t) (::XdpOpenURIObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_object_get_open_uri;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpOpenURIOpenURI* /*none,nullable*/ xdp_open_uri_object_peek_open_uri (XdpOpenURIObject* object /*none*/);
// ::XdpOpenURIOpenURI* /*none,nullable*/ xdp_open_uri_object_peek_open_uri (::XdpOpenURIObject* object /*none*/);
XdpOpenURI::OpenURI base::ObjectBase::peek_open_uri () noexcept
{
  typedef ::XdpOpenURIOpenURI* (*call_wrap_t) (::XdpOpenURIObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_open_uri_object_peek_open_uri;
  auto _temp_ret = call_wrap_v ((::XdpOpenURIObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/object_extra_def_impl.hpp>)
#include <xdpopenuri/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/object_extra_impl.hpp>)
#include <xdpopenuri/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpOpenURIObjectIface *methods = (::XdpOpenURIObjectIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
