// AUTO-GENERATED

#ifndef _GI_WEBVIEW_OBJECTSKELETON_IMPL_HPP_
#define _GI_WEBVIEW_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Webview {

namespace base {

Webview::Object ObjectSkeletonBase::interface_ (gi::interface_tag<Webview::Object>)
{ return gi::wrap ((Webview::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator Webview::Object ()
{ return interface_ (gi::interface_tag<Webview::Object>()); }

// WebviewObjectSkeleton* /*full*/ webview_object_skeleton_new (const gchar* object_path /*none*/);
// ::WebviewObjectSkeleton* /*full*/ webview_object_skeleton_new (const char* object_path /*none*/);
Webview::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::WebviewObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) webview_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void webview_object_skeleton_set_helper (WebviewObjectSkeleton* object /*none*/, WebviewHelper* interface_ /*none,nullable*/);
// void webview_object_skeleton_set_helper (::WebviewObjectSkeleton* object /*none*/, ::WebviewHelper* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_helper (Webview::Helper interface_) noexcept
{
  typedef void (*call_wrap_t) (::WebviewObjectSkeleton* object, ::WebviewHelper* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_skeleton_set_helper;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::WebviewObjectSkeleton*) (gobj_()), (::WebviewHelper*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_helper () noexcept
{
  typedef void (*call_wrap_t) (::WebviewObjectSkeleton* object, ::WebviewHelper* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_skeleton_set_helper;
  auto interface__to_c = nullptr;
  call_wrap_v ((::WebviewObjectSkeleton*) (gobj_()), (::WebviewHelper*) (interface__to_c));
}

// void webview_object_skeleton_set_master (WebviewObjectSkeleton* object /*none*/, WebviewMaster* interface_ /*none,nullable*/);
// void webview_object_skeleton_set_master (::WebviewObjectSkeleton* object /*none*/, ::WebviewMaster* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_master (Webview::Master interface_) noexcept
{
  typedef void (*call_wrap_t) (::WebviewObjectSkeleton* object, ::WebviewMaster* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_skeleton_set_master;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::WebviewObjectSkeleton*) (gobj_()), (::WebviewMaster*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_master () noexcept
{
  typedef void (*call_wrap_t) (::WebviewObjectSkeleton* object, ::WebviewMaster* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_skeleton_set_master;
  auto interface__to_c = nullptr;
  call_wrap_v ((::WebviewObjectSkeleton*) (gobj_()), (::WebviewMaster*) (interface__to_c));
}


} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/objectskeleton_extra_def_impl.hpp>)
#include <webview/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/objectskeleton_extra_impl.hpp>)
#include <webview/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::WebviewObjectSkeletonClass *methods = (::WebviewObjectSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
