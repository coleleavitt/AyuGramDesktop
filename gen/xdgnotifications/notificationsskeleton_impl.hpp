// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_NOTIFICATIONSSKELETON_IMPL_HPP_
#define _GI_XDGNOTIFICATIONS_NOTIFICATIONSSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace base {

XdgNotifications::Notifications NotificationsSkeletonBase::interface_ (gi::interface_tag<XdgNotifications::Notifications>)
{ return gi::wrap ((XdgNotifications::Notifications::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

NotificationsSkeletonBase::operator XdgNotifications::Notifications ()
{ return interface_ (gi::interface_tag<XdgNotifications::Notifications>()); }

// XdgNotificationsNotifications* /*full*/ xdg_notifications_notifications_skeleton_new ();
// ::XdgNotificationsNotificationsSkeleton* /*full*/ xdg_notifications_notifications_skeleton_new ();
XdgNotifications::NotificationsSkeleton base::NotificationsSkeletonBase::new_ () noexcept
{
  typedef ::XdgNotificationsNotificationsSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_notifications_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/notificationsskeleton_extra_def_impl.hpp>)
#include <xdgnotifications/notificationsskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/notificationsskeleton_extra_impl.hpp>)
#include <xdgnotifications/notificationsskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {

void NotificationsSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgNotificationsNotificationsSkeletonClass *methods = (::XdgNotificationsNotificationsSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdgNotifications

} // namespace repository

} // namespace gi

#endif
