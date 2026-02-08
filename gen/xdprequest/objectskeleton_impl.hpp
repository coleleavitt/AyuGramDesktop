// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_OBJECTSKELETON_IMPL_HPP_
#define _GI_XDPREQUEST_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpRequest {

namespace base {

XdpRequest::Object ObjectSkeletonBase::interface_ (gi::interface_tag<XdpRequest::Object>)
{ return gi::wrap ((XdpRequest::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator XdpRequest::Object ()
{ return interface_ (gi::interface_tag<XdpRequest::Object>()); }

// XdpRequestObjectSkeleton* /*full*/ xdp_request_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdpRequestObjectSkeleton* /*full*/ xdp_request_object_skeleton_new (const char* object_path /*none*/);
XdpRequest::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::XdpRequestObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void xdp_request_object_skeleton_set_request (XdpRequestObjectSkeleton* object /*none*/, XdpRequestRequest* interface_ /*none,nullable*/);
// void xdp_request_object_skeleton_set_request (::XdpRequestObjectSkeleton* object /*none*/, ::XdpRequestRequest* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_request (XdpRequest::Request interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdpRequestObjectSkeleton* object, ::XdpRequestRequest* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_object_skeleton_set_request;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdpRequestObjectSkeleton*) (gobj_()), (::XdpRequestRequest*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_request () noexcept
{
  typedef void (*call_wrap_t) (::XdpRequestObjectSkeleton* object, ::XdpRequestRequest* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_object_skeleton_set_request;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdpRequestObjectSkeleton*) (gobj_()), (::XdpRequestRequest*) (interface__to_c));
}


} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/objectskeleton_extra_def_impl.hpp>)
#include <xdprequest/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/objectskeleton_extra_impl.hpp>)
#include <xdprequest/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpRequestObjectSkeletonClass *methods = (::XdpRequestObjectSkeletonClass *) class_struct;
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
