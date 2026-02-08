// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_IDLEMONITORSKELETON_IMPL_HPP_
#define _GI_MUTTERIDLEMONITOR_IDLEMONITORSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace base {

MutterIdleMonitor::IdleMonitor IdleMonitorSkeletonBase::interface_ (gi::interface_tag<MutterIdleMonitor::IdleMonitor>)
{ return gi::wrap ((MutterIdleMonitor::IdleMonitor::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

IdleMonitorSkeletonBase::operator MutterIdleMonitor::IdleMonitor ()
{ return interface_ (gi::interface_tag<MutterIdleMonitor::IdleMonitor>()); }

// MutterIdleMonitorIdleMonitor* /*full*/ mutter_idle_monitor_idle_monitor_skeleton_new ();
// ::MutterIdleMonitorIdleMonitorSkeleton* /*full*/ mutter_idle_monitor_idle_monitor_skeleton_new ();
MutterIdleMonitor::IdleMonitorSkeleton base::IdleMonitorSkeletonBase::new_ () noexcept
{
  typedef ::MutterIdleMonitorIdleMonitorSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) mutter_idle_monitor_idle_monitor_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitorskeleton_extra_def_impl.hpp>)
#include <mutteridlemonitor/idlemonitorskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitorskeleton_extra_impl.hpp>)
#include <mutteridlemonitor/idlemonitorskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {

void IdleMonitorSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::MutterIdleMonitorIdleMonitorSkeletonClass *methods = (::MutterIdleMonitorIdleMonitorSkeletonClass *) class_struct;
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
