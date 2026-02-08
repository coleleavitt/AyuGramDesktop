// AUTO-GENERATED

#ifndef _GI_XDGDBUS_OBJECTSKELETON_HPP_
#define _GI_XDGDBUS_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBus;
class DBusDebugStats;
class DBusIntrospectable;
class DBusMonitoring;
class DBusPeer;
class DBusProperties;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_XDGDBUS_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::XdgDBusObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_object_skeleton_get_type(); } 

GI_INLINE_DECL XdgDBus::Object interface_ (gi::interface_tag<XdgDBus::Object>);

GI_INLINE_DECL operator XdgDBus::Object ();

// XdgDBusObjectSkeleton* /*full*/ xdg_dbus_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdgDBusObjectSkeleton* /*full*/ xdg_dbus_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL XdgDBus::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void xdg_dbus_object_skeleton_set_dbus (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBus* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBus* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_dbus (XdgDBus::DBus interface_) noexcept;
GI_INLINE_DECL void set_dbus () noexcept;

// void xdg_dbus_object_skeleton_set_dbus_debug_stats (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusDebugStats* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_debug_stats (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusDebugStats* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_dbus_debug_stats (XdgDBus::DBusDebugStats interface_) noexcept;
GI_INLINE_DECL void set_dbus_debug_stats () noexcept;

// void xdg_dbus_object_skeleton_set_dbus_introspectable (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusIntrospectable* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_introspectable (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusIntrospectable* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_dbus_introspectable (XdgDBus::DBusIntrospectable interface_) noexcept;
GI_INLINE_DECL void set_dbus_introspectable () noexcept;

// void xdg_dbus_object_skeleton_set_dbus_monitoring (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusMonitoring* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_monitoring (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusMonitoring* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_dbus_monitoring (XdgDBus::DBusMonitoring interface_) noexcept;
GI_INLINE_DECL void set_dbus_monitoring () noexcept;

// void xdg_dbus_object_skeleton_set_dbus_peer (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusPeer* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_peer (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusPeer* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_dbus_peer (XdgDBus::DBusPeer interface_) noexcept;
GI_INLINE_DECL void set_dbus_peer () noexcept;

// void xdg_dbus_object_skeleton_set_dbus_properties (XdgDBusObjectSkeleton* object /*none*/, XdgDBusDBusProperties* interface_ /*none,nullable*/);
// void xdg_dbus_object_skeleton_set_dbus_properties (::XdgDBusObjectSkeleton* object /*none*/, ::XdgDBusDBusProperties* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_dbus_properties (XdgDBus::DBusProperties interface_) noexcept;
GI_INLINE_DECL void set_dbus_properties () noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/objectskeleton_extra_def.hpp>)
#include <xdgdbus/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/objectskeleton_extra.hpp>)
#include <xdgdbus/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class ObjectSkeleton : public GI_XDGDBUS_OBJECTSKELETON_BASE
{ typedef GI_XDGDBUS_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusObjectSkeleton>
{ typedef XdgDBus::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef XdgDBus::ObjectSkeleton instance_type;
typedef ::XdgDBusObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<XdgDBus::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdgDBus::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdgDBus::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::ObjectIfaceClassImpl XdgDBusObjectIface_type;



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

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
