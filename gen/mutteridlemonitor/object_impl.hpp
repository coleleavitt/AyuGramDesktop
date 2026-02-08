// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_OBJECT_IMPL_HPP_
#define _GI_MUTTERIDLEMONITOR_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace base {

// MutterIdleMonitorIdleMonitor* /*full,nullable*/ mutter_idle_monitor_object_get_idle_monitor (MutterIdleMonitorObject* object /*none*/);
// ::MutterIdleMonitorIdleMonitor* /*full,nullable*/ mutter_idle_monitor_object_get_idle_monitor (::MutterIdleMonitorObject* object /*none*/);
MutterIdleMonitor::IdleMonitor base::ObjectBase::get_idle_monitor () noexcept
{
  typedef ::MutterIdleMonitorIdleMonitor* (*call_wrap_t) (::MutterIdleMonitorObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_object_get_idle_monitor;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// MutterIdleMonitorIdleMonitor* /*none,nullable*/ mutter_idle_monitor_object_peek_idle_monitor (MutterIdleMonitorObject* object /*none*/);
// ::MutterIdleMonitorIdleMonitor* /*none,nullable*/ mutter_idle_monitor_object_peek_idle_monitor (::MutterIdleMonitorObject* object /*none*/);
MutterIdleMonitor::IdleMonitor base::ObjectBase::peek_idle_monitor () noexcept
{
  typedef ::MutterIdleMonitorIdleMonitor* (*call_wrap_t) (::MutterIdleMonitorObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mutter_idle_monitor_object_peek_idle_monitor;
  auto _temp_ret = call_wrap_v ((::MutterIdleMonitorObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/object_extra_def_impl.hpp>)
#include <mutteridlemonitor/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/object_extra_impl.hpp>)
#include <mutteridlemonitor/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::MutterIdleMonitorObjectIface *methods = (::MutterIdleMonitorObjectIface *) interface_struct;
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
