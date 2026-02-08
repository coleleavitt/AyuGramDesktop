// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_OBJECTSKELETON_IMPL_HPP_
#define _GI_XDGFILEMANAGER1_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace base {

XdgFileManager1::Object ObjectSkeletonBase::interface_ (gi::interface_tag<XdgFileManager1::Object>)
{ return gi::wrap ((XdgFileManager1::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator XdgFileManager1::Object ()
{ return interface_ (gi::interface_tag<XdgFileManager1::Object>()); }

// XdgFileManager1ObjectSkeleton* /*full*/ xdg_file_manager1_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdgFileManager1ObjectSkeleton* /*full*/ xdg_file_manager1_object_skeleton_new (const char* object_path /*none*/);
XdgFileManager1::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::XdgFileManager1ObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_file_manager1_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void xdg_file_manager1_object_skeleton_set_file_manager1 (XdgFileManager1ObjectSkeleton* object /*none*/, XdgFileManager1FileManager1* interface_ /*none,nullable*/);
// void xdg_file_manager1_object_skeleton_set_file_manager1 (::XdgFileManager1ObjectSkeleton* object /*none*/, ::XdgFileManager1FileManager1* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_file_manager1 (XdgFileManager1::FileManager1 interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgFileManager1ObjectSkeleton* object, ::XdgFileManager1FileManager1* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_object_skeleton_set_file_manager1;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgFileManager1ObjectSkeleton*) (gobj_()), (::XdgFileManager1FileManager1*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_file_manager1 () noexcept
{
  typedef void (*call_wrap_t) (::XdgFileManager1ObjectSkeleton* object, ::XdgFileManager1FileManager1* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_object_skeleton_set_file_manager1;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgFileManager1ObjectSkeleton*) (gobj_()), (::XdgFileManager1FileManager1*) (interface__to_c));
}


} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectskeleton_extra_def_impl.hpp>)
#include <xdgfilemanager1/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectskeleton_extra_impl.hpp>)
#include <xdgfilemanager1/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgFileManager1ObjectSkeletonClass *methods = (::XdgFileManager1ObjectSkeletonClass *) class_struct;
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
