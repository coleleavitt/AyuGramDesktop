// AUTO-GENERATED

#ifndef _GI_WEBVIEW_HELPERSKELETON_IMPL_HPP_
#define _GI_WEBVIEW_HELPERSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Webview {

namespace base {

Webview::Helper HelperSkeletonBase::interface_ (gi::interface_tag<Webview::Helper>)
{ return gi::wrap ((Webview::Helper::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

HelperSkeletonBase::operator Webview::Helper ()
{ return interface_ (gi::interface_tag<Webview::Helper>()); }

// WebviewHelper* /*full*/ webview_helper_skeleton_new ();
// ::WebviewHelperSkeleton* /*full*/ webview_helper_skeleton_new ();
Webview::HelperSkeleton base::HelperSkeletonBase::new_ () noexcept
{
  typedef ::WebviewHelperSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webview_helper_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/helperskeleton_extra_def_impl.hpp>)
#include <webview/helperskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/helperskeleton_extra_impl.hpp>)
#include <webview/helperskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {

void HelperSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::WebviewHelperSkeletonClass *methods = (::WebviewHelperSkeletonClass *) class_struct;
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
