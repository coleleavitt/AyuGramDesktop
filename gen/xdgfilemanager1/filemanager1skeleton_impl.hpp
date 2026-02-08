// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_FILEMANAGER1SKELETON_IMPL_HPP_
#define _GI_XDGFILEMANAGER1_FILEMANAGER1SKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace base {

XdgFileManager1::FileManager1 FileManager1SkeletonBase::interface_ (gi::interface_tag<XdgFileManager1::FileManager1>)
{ return gi::wrap ((XdgFileManager1::FileManager1::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FileManager1SkeletonBase::operator XdgFileManager1::FileManager1 ()
{ return interface_ (gi::interface_tag<XdgFileManager1::FileManager1>()); }

// XdgFileManager1FileManager1* /*full*/ xdg_file_manager1_file_manager1_skeleton_new ();
// ::XdgFileManager1FileManager1Skeleton* /*full*/ xdg_file_manager1_file_manager1_skeleton_new ();
XdgFileManager1::FileManager1Skeleton base::FileManager1SkeletonBase::new_ () noexcept
{
  typedef ::XdgFileManager1FileManager1Skeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_file_manager1_file_manager1_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1skeleton_extra_def_impl.hpp>)
#include <xdgfilemanager1/filemanager1skeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1skeleton_extra_impl.hpp>)
#include <xdgfilemanager1/filemanager1skeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {

void FileManager1SkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgFileManager1FileManager1SkeletonClass *methods = (::XdgFileManager1FileManager1SkeletonClass *) class_struct;
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
