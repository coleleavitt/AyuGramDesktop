// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_INHIBITSKELETON_IMPL_HPP_
#define _GI_XDPINHIBIT_INHIBITSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace base {

XdpInhibit::Inhibit InhibitSkeletonBase::interface_ (gi::interface_tag<XdpInhibit::Inhibit>)
{ return gi::wrap ((XdpInhibit::Inhibit::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

InhibitSkeletonBase::operator XdpInhibit::Inhibit ()
{ return interface_ (gi::interface_tag<XdpInhibit::Inhibit>()); }

// XdpInhibitInhibit* /*full*/ xdp_inhibit_inhibit_skeleton_new ();
// ::XdpInhibitInhibitSkeleton* /*full*/ xdp_inhibit_inhibit_skeleton_new ();
XdpInhibit::InhibitSkeleton base::InhibitSkeletonBase::new_ () noexcept
{
  typedef ::XdpInhibitInhibitSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_inhibit_inhibit_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibitskeleton_extra_def_impl.hpp>)
#include <xdpinhibit/inhibitskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibitskeleton_extra_impl.hpp>)
#include <xdpinhibit/inhibitskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {

void InhibitSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpInhibitInhibitSkeletonClass *methods = (::XdpInhibitInhibitSkeletonClass *) class_struct;
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
