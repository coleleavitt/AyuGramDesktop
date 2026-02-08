// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_OBJECTSKELETON_IMPL_HPP_
#define _GI_SNAPCRAFT_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Snapcraft {

namespace base {

Snapcraft::Object ObjectSkeletonBase::interface_ (gi::interface_tag<Snapcraft::Object>)
{ return gi::wrap ((Snapcraft::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator Snapcraft::Object ()
{ return interface_ (gi::interface_tag<Snapcraft::Object>()); }

// SnapcraftObjectSkeleton* /*full*/ snapcraft_object_skeleton_new (const gchar* object_path /*none*/);
// ::SnapcraftObjectSkeleton* /*full*/ snapcraft_object_skeleton_new (const char* object_path /*none*/);
Snapcraft::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::SnapcraftObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) snapcraft_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void snapcraft_object_skeleton_set_settings (SnapcraftObjectSkeleton* object /*none*/, SnapcraftSettings* interface_ /*none,nullable*/);
// void snapcraft_object_skeleton_set_settings (::SnapcraftObjectSkeleton* object /*none*/, ::SnapcraftSettings* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_settings (Snapcraft::Settings interface_) noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftObjectSkeleton* object, ::SnapcraftSettings* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_object_skeleton_set_settings;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::SnapcraftObjectSkeleton*) (gobj_()), (::SnapcraftSettings*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_settings () noexcept
{
  typedef void (*call_wrap_t) (::SnapcraftObjectSkeleton* object, ::SnapcraftSettings* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_object_skeleton_set_settings;
  auto interface__to_c = nullptr;
  call_wrap_v ((::SnapcraftObjectSkeleton*) (gobj_()), (::SnapcraftSettings*) (interface__to_c));
}


} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/objectskeleton_extra_def_impl.hpp>)
#include <snapcraft/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/objectskeleton_extra_impl.hpp>)
#include <snapcraft/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::SnapcraftObjectSkeletonClass *methods = (::SnapcraftObjectSkeletonClass *) class_struct;
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
