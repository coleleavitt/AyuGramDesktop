// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_OBJECT_HPP_
#define _GI_XDGNOTIFICATIONS_OBJECT_HPP_


namespace gi {

namespace repository {

namespace XdgNotifications {

class Notifications;

class Object;

namespace base {


#define GI_XDGNOTIFICATIONS_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgNotificationsObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_notifications_object_get_type(); } 

// XdgNotificationsNotifications* /*full,nullable*/ xdg_notifications_object_get_notifications (XdgNotificationsObject* object /*none*/);
// ::XdgNotificationsNotifications* /*full,nullable*/ xdg_notifications_object_get_notifications (::XdgNotificationsObject* object /*none*/);
GI_INLINE_DECL XdgNotifications::Notifications get_notifications () noexcept;

// XdgNotificationsNotifications* /*none,nullable*/ xdg_notifications_object_peek_notifications (XdgNotificationsObject* object /*none*/);
// ::XdgNotificationsNotifications* /*none,nullable*/ xdg_notifications_object_peek_notifications (::XdgNotificationsObject* object /*none*/);
GI_INLINE_DECL XdgNotifications::Notifications peek_notifications () noexcept;

gi::property_proxy<XdgNotifications::Notifications, base::ObjectBase> property_notifications()
{ return gi::property_proxy<XdgNotifications::Notifications, base::ObjectBase> (*this, "notifications"); }
const gi::property_proxy<XdgNotifications::Notifications, base::ObjectBase> property_notifications() const
{ return gi::property_proxy<XdgNotifications::Notifications, base::ObjectBase> (*this, "notifications"); }

}; // class

} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/object_extra_def.hpp>)
#include <xdgnotifications/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/object_extra.hpp>)
#include <xdgnotifications/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

class Object : public GI_XDGNOTIFICATIONS_OBJECT_BASE
{ typedef GI_XDGNOTIFICATIONS_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdgNotifications

template<> struct declare_cpptype_of<::XdgNotificationsObject>
{ typedef XdgNotifications::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdgNotifications::Object instance_type;
typedef ::XdgNotificationsObjectIface interface_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using ObjectImpl = detail::InterfaceImpl<ObjectIfaceDef>;

class ObjectIfaceClassImpl: public detail::InterfaceClassImpl<ObjectImpl>
{
friend class internal::ObjectIfaceDef;
typedef ObjectIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ObjectImpl> super;

protected:
using super::super;


};


struct ObjectIfaceDef::TypeInitData
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

} // namespace impl

} // namespace XdgNotifications

} // namespace repository

} // namespace gi

#endif
