// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_OBJECTSKELETON_IMPL_HPP_
#define _GI_MUTTERIDLEMONITOR_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace base {

MutterIdleMonitor::Object ObjectSkeletonBase::interface_ (gi::interface_tag<MutterIdleMonitor::Object>)
{ return gi::wrap ((MutterIdleMonitor::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator MutterIdleMonitor::Object ()
{ return interface_ (gi::interface_tag<MutterIdleMonitor::Object>()); }

// MutterIdleMonitorObjectSkeleton* /*full*/ mutter_idle_monitor_object_skeleton_new (const gchar* object_path /*none*/);
// ::MutterIdleMonitorObjectSkeleton* /*full*/ mutter_idle_monitor_object_skeleton_new (const char* object_path /*none*/);
MutterIdleMonitor::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::MutterIdleMonitorObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) mutter_idle_monitor_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void mutter_idle_monitor_object_skeleton_set_idle_monitor (MutterIdleMonitorObjectSkeleton* object /*none*/, MutterIdleMonitorIdleMonitor* interface_ /*none,nullable*/);
// void mutter_idle_monitor_object_skeleton_set_idle_monitor (::MutterIdleMonitorObjectSkeleton* object /*none*/, ::MutterIdleMonitorIdleMonitor* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_idle_monitor (MutterIdleMonitor::IdleMonitor interface_) noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorObjectSkeleton* object, ::MutterIdleMonitorIdleMonitor* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_object_skeleton_set_idle_monitor;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::MutterIdleMonitorObjectSkeleton*) (gobj_()), (::MutterIdleMonitorIdleMonitor*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_idle_monitor () noexcept
{
  typedef void (*call_wrap_t) (::MutterIdleMonitorObjectSkeleton* object, ::MutterIdleMonitorIdleMonitor* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_object_skeleton_set_idle_monitor;
  auto interface__to_c = nullptr;
  call_wrap_v ((::MutterIdleMonitorObjectSkeleton*) (gobj_()), (::MutterIdleMonitorIdleMonitor*) (interface__to_c));
}


} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/objectskeleton_extra_def_impl.hpp>)
#include <mutteridlemonitor/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/objectskeleton_extra_impl.hpp>)
#include <mutteridlemonitor/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::MutterIdleMonitorObjectSkeletonClass *methods = (::MutterIdleMonitorObjectSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
