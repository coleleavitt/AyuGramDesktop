// AUTO-GENERATED

#ifndef _GI_WEBVIEW_MASTERSKELETON_IMPL_HPP_
#define _GI_WEBVIEW_MASTERSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Webview {

namespace base {

Webview::Master MasterSkeletonBase::interface_ (gi::interface_tag<Webview::Master>)
{ return gi::wrap ((Webview::Master::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MasterSkeletonBase::operator Webview::Master ()
{ return interface_ (gi::interface_tag<Webview::Master>()); }

// WebviewMaster* /*full*/ webview_master_skeleton_new ();
// ::WebviewMasterSkeleton* /*full*/ webview_master_skeleton_new ();
Webview::MasterSkeleton base::MasterSkeletonBase::new_ () noexcept
{
  typedef ::WebviewMasterSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webview_master_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/masterskeleton_extra_def_impl.hpp>)
#include <webview/masterskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/masterskeleton_extra_impl.hpp>)
#include <webview/masterskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {

void MasterSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::WebviewMasterSkeletonClass *methods = (::WebviewMasterSkeletonClass *) class_struct;
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
