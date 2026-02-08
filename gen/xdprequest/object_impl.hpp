// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_OBJECT_IMPL_HPP_
#define _GI_XDPREQUEST_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpRequest {

namespace base {

// XdpRequestRequest* /*full,nullable*/ xdp_request_object_get_request (XdpRequestObject* object /*none*/);
// ::XdpRequestRequest* /*full,nullable*/ xdp_request_object_get_request (::XdpRequestObject* object /*none*/);
XdpRequest::Request base::ObjectBase::get_request () noexcept
{
  typedef ::XdpRequestRequest* (*call_wrap_t) (::XdpRequestObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_object_get_request;
  auto _temp_ret = call_wrap_v ((::XdpRequestObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpRequestRequest* /*none,nullable*/ xdp_request_object_peek_request (XdpRequestObject* object /*none*/);
// ::XdpRequestRequest* /*none,nullable*/ xdp_request_object_peek_request (::XdpRequestObject* object /*none*/);
XdpRequest::Request base::ObjectBase::peek_request () noexcept
{
  typedef ::XdpRequestRequest* (*call_wrap_t) (::XdpRequestObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_object_peek_request;
  auto _temp_ret = call_wrap_v ((::XdpRequestObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/object_extra_def_impl.hpp>)
#include <xdprequest/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/object_extra_impl.hpp>)
#include <xdprequest/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpRequestObjectIface *methods = (::XdpRequestObjectIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
