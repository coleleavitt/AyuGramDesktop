// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_OBJECTSKELETON_HPP_
#define _GI_XDGNOTIFICATIONS_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgNotifications {

class Notifications;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_XDGNOTIFICATIONS_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::XdgNotificationsObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_notifications_object_skeleton_get_type(); } 

GI_INLINE_DECL XdgNotifications::Object interface_ (gi::interface_tag<XdgNotifications::Object>);

GI_INLINE_DECL operator XdgNotifications::Object ();

// XdgNotificationsObjectSkeleton* /*full*/ xdg_notifications_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdgNotificationsObjectSkeleton* /*full*/ xdg_notifications_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL XdgNotifications::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void xdg_notifications_object_skeleton_set_notifications (XdgNotificationsObjectSkeleton* object /*none*/, XdgNotificationsNotifications* interface_ /*none,nullable*/);
// void xdg_notifications_object_skeleton_set_notifications (::XdgNotificationsObjectSkeleton* object /*none*/, ::XdgNotificationsNotifications* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_notifications (XdgNotifications::Notifications interface_) noexcept;
GI_INLINE_DECL void set_notifications () noexcept;

}; // class

} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/objectskeleton_extra_def.hpp>)
#include <xdgnotifications/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/objectskeleton_extra.hpp>)
#include <xdgnotifications/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

class ObjectSkeleton : public GI_XDGNOTIFICATIONS_OBJECTSKELETON_BASE
{ typedef GI_XDGNOTIFICATIONS_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgNotifications

template<> struct declare_cpptype_of<::XdgNotificationsObjectSkeleton>
{ typedef XdgNotifications::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef XdgNotifications::ObjectSkeleton instance_type;
typedef ::XdgNotificationsObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<XdgNotifications::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdgNotifications::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<XdgNotifications::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdgNotifications::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgNotifications::impl::internal::ObjectIfaceClassImpl XdgNotificationsObjectIface_type;



};


struct ObjectSkeletonClassDef::TypeInitData
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

using ObjectSkeletonImpl = detail::ObjectImpl<ObjectSkeleton, internal::ObjectSkeletonClass>;

} // namespace impl

} // namespace XdgNotifications

} // namespace repository

} // namespace gi

#endif
