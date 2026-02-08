// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_OBJECTSKELETON_IMPL_HPP_
#define _GI_XDGNOTIFICATIONS_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace base {

XdgNotifications::Object ObjectSkeletonBase::interface_ (gi::interface_tag<XdgNotifications::Object>)
{ return gi::wrap ((XdgNotifications::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator XdgNotifications::Object ()
{ return interface_ (gi::interface_tag<XdgNotifications::Object>()); }

// XdgNotificationsObjectSkeleton* /*full*/ xdg_notifications_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdgNotificationsObjectSkeleton* /*full*/ xdg_notifications_object_skeleton_new (const char* object_path /*none*/);
XdgNotifications::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::XdgNotificationsObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) xdg_notifications_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void xdg_notifications_object_skeleton_set_notifications (XdgNotificationsObjectSkeleton* object /*none*/, XdgNotificationsNotifications* interface_ /*none,nullable*/);
// void xdg_notifications_object_skeleton_set_notifications (::XdgNotificationsObjectSkeleton* object /*none*/, ::XdgNotificationsNotifications* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_notifications (XdgNotifications::Notifications interface_) noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsObjectSkeleton* object, ::XdgNotificationsNotifications* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_skeleton_set_notifications;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::XdgNotificationsObjectSkeleton*) (gobj_()), (::XdgNotificationsNotifications*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_notifications () noexcept
{
  typedef void (*call_wrap_t) (::XdgNotificationsObjectSkeleton* object, ::XdgNotificationsNotifications* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_notifications_object_skeleton_set_notifications;
  auto interface__to_c = nullptr;
  call_wrap_v ((::XdgNotificationsObjectSkeleton*) (gobj_()), (::XdgNotificationsNotifications*) (interface__to_c));
}


} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/objectskeleton_extra_def_impl.hpp>)
#include <xdgnotifications/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/objectskeleton_extra_impl.hpp>)
#include <xdgnotifications/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdgNotificationsObjectSkeletonClass *methods = (::XdgNotificationsObjectSkeletonClass *) class_struct;
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
