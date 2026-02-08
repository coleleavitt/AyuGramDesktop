// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_OBJECT_IMPL_HPP_
#define _GI_XDGNOTIFICATIONS_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace base {

// XdgNotificationsNotifications* /*full,nullable*/ xdg_notifications_object_get_notifications (XdgNotificationsObject* object /*none*/);
// ::XdgNotificationsNotifications* /*full,nullable*/ xdg_notifications_object_get_notifications (::XdgNotificationsObject* object /*none*/);
XdgNotifications::Notifications base::ObjectBase::get_notifications () noexcept
{
  typedef ::XdgNotificationsNotifications* (*call_wrap_t) (::XdgNotificationsObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_get_notifications;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgNotificationsNotifications* /*none,nullable*/ xdg_notifications_object_peek_notifications (XdgNotificationsObject* object /*none*/);
// ::XdgNotificationsNotifications* /*none,nullable*/ xdg_notifications_object_peek_notifications (::XdgNotificationsObject* object /*none*/);
XdgNotifications::Notifications base::ObjectBase::peek_notifications () noexcept
{
  typedef ::XdgNotificationsNotifications* (*call_wrap_t) (::XdgNotificationsObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_peek_notifications;
  auto _temp_ret = call_wrap_v ((::XdgNotificationsObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/object_extra_def_impl.hpp>)
#include <xdgnotifications/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/object_extra_impl.hpp>)
#include <xdgnotifications/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgNotificationsObjectIface *methods = (::XdgNotificationsObjectIface *) interface_struct;
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
