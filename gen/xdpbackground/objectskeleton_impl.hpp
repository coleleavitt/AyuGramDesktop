// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_OBJECTSKELETON_IMPL_HPP_
#define _GI_XDPBACKGROUND_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpBackground {

namespace base {

XdpBackground::Object ObjectSkeletonBase::interface_ (gi::interface_tag<XdpBackground::Object>)
{ return gi::wrap ((XdpBackground::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator XdpBackground::Object ()
{ return interface_ (gi::interface_tag<XdpBackground::Object>()); }

// XdpBackgroundObjectSkeleton* /*full*/ xdp_background_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdpBackgroundObjectSkeleton* /*full*/ xdp_background_object_skeleton_new (const char* object_path /*none*/);
XdpBackground::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::XdpBackgroundObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_background_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void xdp_background_object_skeleton_set_background (XdpBackgroundObjectSkeleton* object /*none*/, XdpBackgroundBackground* interface_ /*none,nullable*/);
// void xdp_background_object_skeleton_set_background (::XdpBackgroundObjectSkeleton* object /*none*/, ::XdpBackgroundBackground* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_background (XdpBackground::Background interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundObjectSkeleton* object, ::XdpBackgroundBackground* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_object_skeleton_set_background;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdpBackgroundObjectSkeleton*) (gobj_()), (::XdpBackgroundBackground*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_background () noexcept
{
  typedef void (*call_wrap_t) (::XdpBackgroundObjectSkeleton* object, ::XdpBackgroundBackground* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_object_skeleton_set_background;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdpBackgroundObjectSkeleton*) (gobj_()), (::XdpBackgroundBackground*) (interface__to_c));
}


} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/objectskeleton_extra_def_impl.hpp>)
#include <xdpbackground/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/objectskeleton_extra_impl.hpp>)
#include <xdpbackground/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpBackgroundObjectSkeletonClass *methods = (::XdpBackgroundObjectSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
