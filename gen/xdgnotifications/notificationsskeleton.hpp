// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_NOTIFICATIONSSKELETON_HPP_
#define _GI_XDGNOTIFICATIONS_NOTIFICATIONSSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgNotifications {

class Notifications;

class NotificationsSkeleton;

namespace base {


#define GI_XDGNOTIFICATIONS_NOTIFICATIONSSKELETON_BASE base::NotificationsSkeletonBase
class NotificationsSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgNotificationsNotificationsSkeleton BaseObjectType;

NotificationsSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_notifications_notifications_skeleton_get_type(); } 

GI_INLINE_DECL XdgNotifications::Notifications interface_ (gi::interface_tag<XdgNotifications::Notifications>);

GI_INLINE_DECL operator XdgNotifications::Notifications ();

// XdgNotificationsNotifications* /*full*/ xdg_notifications_notifications_skeleton_new ();
// ::XdgNotificationsNotificationsSkeleton* /*full*/ xdg_notifications_notifications_skeleton_new ();
static GI_INLINE_DECL XdgNotifications::NotificationsSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/notificationsskeleton_extra_def.hpp>)
#include <xdgnotifications/notificationsskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/notificationsskeleton_extra.hpp>)
#include <xdgnotifications/notificationsskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

class NotificationsSkeleton : public GI_XDGNOTIFICATIONS_NOTIFICATIONSSKELETON_BASE
{ typedef GI_XDGNOTIFICATIONS_NOTIFICATIONSSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgNotifications

template<> struct declare_cpptype_of<::XdgNotificationsNotificationsSkeleton>
{ typedef XdgNotifications::NotificationsSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "notifications.hpp"

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {


class NotificationsSkeletonClassDef
{
typedef NotificationsSkeletonClassDef self;
public:
typedef XdgNotifications::NotificationsSkeleton instance_type;
typedef ::XdgNotificationsNotificationsSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~NotificationsSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NotificationsSkeletonClass: public detail::ClassTemplate<XdgNotifications::impl::internal::NotificationsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgNotifications::impl::internal::NotificationsIfaceClassImpl>
{
friend class internal::NotificationsSkeletonClassDef;
typedef NotificationsSkeletonClass self;
typedef detail::ClassTemplate<XdgNotifications::impl::internal::NotificationsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgNotifications::impl::internal::NotificationsIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgNotifications::impl::internal::NotificationsIfaceClassImpl XdgNotificationsNotificationsIface_type;



};


struct NotificationsSkeletonClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using NotificationsSkeletonImpl = detail::ObjectImpl<NotificationsSkeleton, internal::NotificationsSkeletonClass>;

} // namespace impl

} // namespace XdgNotifications

} // namespace repository

} // namespace gi

#endif
