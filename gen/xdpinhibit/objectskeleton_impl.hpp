// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_OBJECTSKELETON_IMPL_HPP_
#define _GI_XDPINHIBIT_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace base {

XdpInhibit::Object ObjectSkeletonBase::interface_ (gi::interface_tag<XdpInhibit::Object>)
{ return gi::wrap ((XdpInhibit::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator XdpInhibit::Object ()
{ return interface_ (gi::interface_tag<XdpInhibit::Object>()); }

// XdpInhibitObjectSkeleton* /*full*/ xdp_inhibit_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdpInhibitObjectSkeleton* /*full*/ xdp_inhibit_object_skeleton_new (const char* object_path /*none*/);
XdpInhibit::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::XdpInhibitObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_inhibit_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void xdp_inhibit_object_skeleton_set_inhibit (XdpInhibitObjectSkeleton* object /*none*/, XdpInhibitInhibit* interface_ /*none,nullable*/);
// void xdp_inhibit_object_skeleton_set_inhibit (::XdpInhibitObjectSkeleton* object /*none*/, ::XdpInhibitInhibit* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_inhibit (XdpInhibit::Inhibit interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitObjectSkeleton* object, ::XdpInhibitInhibit* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_object_skeleton_set_inhibit;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdpInhibitObjectSkeleton*) (gobj_()), (::XdpInhibitInhibit*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_inhibit () noexcept
{
  typedef void (*call_wrap_t) (::XdpInhibitObjectSkeleton* object, ::XdpInhibitInhibit* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_object_skeleton_set_inhibit;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdpInhibitObjectSkeleton*) (gobj_()), (::XdpInhibitInhibit*) (interface__to_c));
}


} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/objectskeleton_extra_def_impl.hpp>)
#include <xdpinhibit/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/objectskeleton_extra_impl.hpp>)
#include <xdpinhibit/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpInhibitObjectSkeletonClass *methods = (::XdpInhibitObjectSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpInhibit

} // namespace repository

} // namespace gi

#endif
