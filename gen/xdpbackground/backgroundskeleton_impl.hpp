// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_BACKGROUNDSKELETON_IMPL_HPP_
#define _GI_XDPBACKGROUND_BACKGROUNDSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpBackground {

namespace base {

XdpBackground::Background BackgroundSkeletonBase::interface_ (gi::interface_tag<XdpBackground::Background>)
{ return gi::wrap ((XdpBackground::Background::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

BackgroundSkeletonBase::operator XdpBackground::Background ()
{ return interface_ (gi::interface_tag<XdpBackground::Background>()); }

// XdpBackgroundBackground* /*full*/ xdp_background_background_skeleton_new ();
// ::XdpBackgroundBackgroundSkeleton* /*full*/ xdp_background_background_skeleton_new ();
XdpBackground::BackgroundSkeleton base::BackgroundSkeletonBase::new_ () noexcept
{
  typedef ::XdpBackgroundBackgroundSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_background_background_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/backgroundskeleton_extra_def_impl.hpp>)
#include <xdpbackground/backgroundskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/backgroundskeleton_extra_impl.hpp>)
#include <xdpbackground/backgroundskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {

void BackgroundSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpBackgroundBackgroundSkeletonClass *methods = (::XdpBackgroundBackgroundSkeletonClass *) class_struct;
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
