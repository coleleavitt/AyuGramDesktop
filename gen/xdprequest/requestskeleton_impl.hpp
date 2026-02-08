// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_REQUESTSKELETON_IMPL_HPP_
#define _GI_XDPREQUEST_REQUESTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpRequest {

namespace base {

XdpRequest::Request RequestSkeletonBase::interface_ (gi::interface_tag<XdpRequest::Request>)
{ return gi::wrap ((XdpRequest::Request::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

RequestSkeletonBase::operator XdpRequest::Request ()
{ return interface_ (gi::interface_tag<XdpRequest::Request>()); }

// XdpRequestRequest* /*full*/ xdp_request_request_skeleton_new ();
// ::XdpRequestRequestSkeleton* /*full*/ xdp_request_request_skeleton_new ();
XdpRequest::RequestSkeleton base::RequestSkeletonBase::new_ () noexcept
{
  typedef ::XdpRequestRequestSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/requestskeleton_extra_def_impl.hpp>)
#include <xdprequest/requestskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/requestskeleton_extra_impl.hpp>)
#include <xdprequest/requestskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {

void RequestSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpRequestRequestSkeletonClass *methods = (::XdpRequestRequestSkeletonClass *) class_struct;
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
