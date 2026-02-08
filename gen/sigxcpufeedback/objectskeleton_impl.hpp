// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_OBJECTSKELETON_IMPL_HPP_
#define _GI_SIGXCPUFEEDBACK_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace base {

SigxcpuFeedback::Object ObjectSkeletonBase::interface_ (gi::interface_tag<SigxcpuFeedback::Object>)
{ return gi::wrap ((SigxcpuFeedback::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator SigxcpuFeedback::Object ()
{ return interface_ (gi::interface_tag<SigxcpuFeedback::Object>()); }

// SigxcpuFeedbackObjectSkeleton* /*full*/ sigxcpu_feedback_object_skeleton_new (const gchar* object_path /*none*/);
// ::SigxcpuFeedbackObjectSkeleton* /*full*/ sigxcpu_feedback_object_skeleton_new (const char* object_path /*none*/);
SigxcpuFeedback::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::SigxcpuFeedbackObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) sigxcpu_feedback_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void sigxcpu_feedback_object_skeleton_set_haptic (SigxcpuFeedbackObjectSkeleton* object /*none*/, SigxcpuFeedbackHaptic* interface_ /*none,nullable*/);
// void sigxcpu_feedback_object_skeleton_set_haptic (::SigxcpuFeedbackObjectSkeleton* object /*none*/, ::SigxcpuFeedbackHaptic* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_haptic (SigxcpuFeedback::Haptic interface_) noexcept
{
  typedef void (*call_wrap_t) (::SigxcpuFeedbackObjectSkeleton* object, ::SigxcpuFeedbackHaptic* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_object_skeleton_set_haptic;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::SigxcpuFeedbackObjectSkeleton*) (gobj_()), (::SigxcpuFeedbackHaptic*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_haptic () noexcept
{
  typedef void (*call_wrap_t) (::SigxcpuFeedbackObjectSkeleton* object, ::SigxcpuFeedbackHaptic* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::sigxcpu_feedback_object_skeleton_set_haptic;
  auto interface__to_c = nullptr;
  call_wrap_v ((::SigxcpuFeedbackObjectSkeleton*) (gobj_()), (::SigxcpuFeedbackHaptic*) (interface__to_c));
}


} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/objectskeleton_extra_def_impl.hpp>)
#include <sigxcpufeedback/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/objectskeleton_extra_impl.hpp>)
#include <sigxcpufeedback/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::SigxcpuFeedbackObjectSkeletonClass *methods = (::SigxcpuFeedbackObjectSkeletonClass *) class_struct;
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
