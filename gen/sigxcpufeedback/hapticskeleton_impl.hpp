// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_HAPTICSKELETON_IMPL_HPP_
#define _GI_SIGXCPUFEEDBACK_HAPTICSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace base {

SigxcpuFeedback::Haptic HapticSkeletonBase::interface_ (gi::interface_tag<SigxcpuFeedback::Haptic>)
{ return gi::wrap ((SigxcpuFeedback::Haptic::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

HapticSkeletonBase::operator SigxcpuFeedback::Haptic ()
{ return interface_ (gi::interface_tag<SigxcpuFeedback::Haptic>()); }

// SigxcpuFeedbackHaptic* /*full*/ sigxcpu_feedback_haptic_skeleton_new ();
// ::SigxcpuFeedbackHapticSkeleton* /*full*/ sigxcpu_feedback_haptic_skeleton_new ();
SigxcpuFeedback::HapticSkeleton base::HapticSkeletonBase::new_ () noexcept
{
  typedef ::SigxcpuFeedbackHapticSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) sigxcpu_feedback_haptic_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/hapticskeleton_extra_def_impl.hpp>)
#include <sigxcpufeedback/hapticskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/hapticskeleton_extra_impl.hpp>)
#include <sigxcpufeedback/hapticskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {

void HapticSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::SigxcpuFeedbackHapticSkeletonClass *methods = (::SigxcpuFeedbackHapticSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi

#endif
