// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_OBJECT_IMPL_HPP_
#define _GI_SIGXCPUFEEDBACK_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace base {

// SigxcpuFeedbackHaptic* /*full,nullable*/ sigxcpu_feedback_object_get_haptic (SigxcpuFeedbackObject* object /*none*/);
// ::SigxcpuFeedbackHaptic* /*full,nullable*/ sigxcpu_feedback_object_get_haptic (::SigxcpuFeedbackObject* object /*none*/);
SigxcpuFeedback::Haptic base::ObjectBase::get_haptic () noexcept
{
  typedef ::SigxcpuFeedbackHaptic* (*call_wrap_t) (::SigxcpuFeedbackObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_object_get_haptic;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// SigxcpuFeedbackHaptic* /*none,nullable*/ sigxcpu_feedback_object_peek_haptic (SigxcpuFeedbackObject* object /*none*/);
// ::SigxcpuFeedbackHaptic* /*none,nullable*/ sigxcpu_feedback_object_peek_haptic (::SigxcpuFeedbackObject* object /*none*/);
SigxcpuFeedback::Haptic base::ObjectBase::peek_haptic () noexcept
{
  typedef ::SigxcpuFeedbackHaptic* (*call_wrap_t) (::SigxcpuFeedbackObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_object_peek_haptic;
  auto _temp_ret = call_wrap_v ((::SigxcpuFeedbackObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/object_extra_def_impl.hpp>)
#include <sigxcpufeedback/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/object_extra_impl.hpp>)
#include <sigxcpufeedback/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::SigxcpuFeedbackObjectIface *methods = (::SigxcpuFeedbackObjectIface *) interface_struct;
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
