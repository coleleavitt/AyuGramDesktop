// AUTO-GENERATED

#ifndef _GI_XDGDBUS_OBJECT_HPP_
#define _GI_XDGDBUS_OBJECT_HPP_


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

namespace base {


#define GI_XDGDBUS_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgDBusObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_object_get_type(); } 

// XdgDBusDBus* /*full,nullable*/ xdg_dbus_object_get_dbus (XdgDBusObject* object /*none*/);
// ::XdgDBusDBus* /*full,nullable*/ xdg_dbus_object_get_dbus (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBus get_dbus () noexcept;

// XdgDBusDBusDebugStats* /*full,nullable*/ xdg_dbus_object_get_dbus_debug_stats (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusDebugStats* /*full,nullable*/ xdg_dbus_object_get_dbus_debug_stats (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusDebugStats get_dbus_debug_stats () noexcept;

// XdgDBusDBusIntrospectable* /*full,nullable*/ xdg_dbus_object_get_dbus_introspectable (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusIntrospectable* /*full,nullable*/ xdg_dbus_object_get_dbus_introspectable (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusIntrospectable get_dbus_introspectable () noexcept;

// XdgDBusDBusMonitoring* /*full,nullable*/ xdg_dbus_object_get_dbus_monitoring (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusMonitoring* /*full,nullable*/ xdg_dbus_object_get_dbus_monitoring (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusMonitoring get_dbus_monitoring () noexcept;

// XdgDBusDBusPeer* /*full,nullable*/ xdg_dbus_object_get_dbus_peer (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusPeer* /*full,nullable*/ xdg_dbus_object_get_dbus_peer (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusPeer get_dbus_peer () noexcept;

// XdgDBusDBusProperties* /*full,nullable*/ xdg_dbus_object_get_dbus_properties (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusProperties* /*full,nullable*/ xdg_dbus_object_get_dbus_properties (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusProperties get_dbus_properties () noexcept;

// XdgDBusDBus* /*none,nullable*/ xdg_dbus_object_peek_dbus (XdgDBusObject* object /*none*/);
// ::XdgDBusDBus* /*none,nullable*/ xdg_dbus_object_peek_dbus (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBus peek_dbus () noexcept;

// XdgDBusDBusDebugStats* /*none,nullable*/ xdg_dbus_object_peek_dbus_debug_stats (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusDebugStats* /*none,nullable*/ xdg_dbus_object_peek_dbus_debug_stats (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusDebugStats peek_dbus_debug_stats () noexcept;

// XdgDBusDBusIntrospectable* /*none,nullable*/ xdg_dbus_object_peek_dbus_introspectable (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusIntrospectable* /*none,nullable*/ xdg_dbus_object_peek_dbus_introspectable (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusIntrospectable peek_dbus_introspectable () noexcept;

// XdgDBusDBusMonitoring* /*none,nullable*/ xdg_dbus_object_peek_dbus_monitoring (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusMonitoring* /*none,nullable*/ xdg_dbus_object_peek_dbus_monitoring (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusMonitoring peek_dbus_monitoring () noexcept;

// XdgDBusDBusPeer* /*none,nullable*/ xdg_dbus_object_peek_dbus_peer (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusPeer* /*none,nullable*/ xdg_dbus_object_peek_dbus_peer (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusPeer peek_dbus_peer () noexcept;

// XdgDBusDBusProperties* /*none,nullable*/ xdg_dbus_object_peek_dbus_properties (XdgDBusObject* object /*none*/);
// ::XdgDBusDBusProperties* /*none,nullable*/ xdg_dbus_object_peek_dbus_properties (::XdgDBusObject* object /*none*/);
GI_INLINE_DECL XdgDBus::DBusProperties peek_dbus_properties () noexcept;

gi::property_proxy<XdgDBus::DBus, base::ObjectBase> property_dbus()
{ return gi::property_proxy<XdgDBus::DBus, base::ObjectBase> (*this, "dbus"); }
const gi::property_proxy<XdgDBus::DBus, base::ObjectBase> property_dbus() const
{ return gi::property_proxy<XdgDBus::DBus, base::ObjectBase> (*this, "dbus"); }

gi::property_proxy<XdgDBus::DBusDebugStats, base::ObjectBase> property_dbus_debug_stats()
{ return gi::property_proxy<XdgDBus::DBusDebugStats, base::ObjectBase> (*this, "dbus-debug-stats"); }
const gi::property_proxy<XdgDBus::DBusDebugStats, base::ObjectBase> property_dbus_debug_stats() const
{ return gi::property_proxy<XdgDBus::DBusDebugStats, base::ObjectBase> (*this, "dbus-debug-stats"); }

gi::property_proxy<XdgDBus::DBusIntrospectable, base::ObjectBase> property_dbus_introspectable()
{ return gi::property_proxy<XdgDBus::DBusIntrospectable, base::ObjectBase> (*this, "dbus-introspectable"); }
const gi::property_proxy<XdgDBus::DBusIntrospectable, base::ObjectBase> property_dbus_introspectable() const
{ return gi::property_proxy<XdgDBus::DBusIntrospectable, base::ObjectBase> (*this, "dbus-introspectable"); }

gi::property_proxy<XdgDBus::DBusMonitoring, base::ObjectBase> property_dbus_monitoring()
{ return gi::property_proxy<XdgDBus::DBusMonitoring, base::ObjectBase> (*this, "dbus-monitoring"); }
const gi::property_proxy<XdgDBus::DBusMonitoring, base::ObjectBase> property_dbus_monitoring() const
{ return gi::property_proxy<XdgDBus::DBusMonitoring, base::ObjectBase> (*this, "dbus-monitoring"); }

gi::property_proxy<XdgDBus::DBusPeer, base::ObjectBase> property_dbus_peer()
{ return gi::property_proxy<XdgDBus::DBusPeer, base::ObjectBase> (*this, "dbus-peer"); }
const gi::property_proxy<XdgDBus::DBusPeer, base::ObjectBase> property_dbus_peer() const
{ return gi::property_proxy<XdgDBus::DBusPeer, base::ObjectBase> (*this, "dbus-peer"); }

gi::property_proxy<XdgDBus::DBusProperties, base::ObjectBase> property_dbus_properties()
{ return gi::property_proxy<XdgDBus::DBusProperties, base::ObjectBase> (*this, "dbus-properties"); }
const gi::property_proxy<XdgDBus::DBusProperties, base::ObjectBase> property_dbus_properties() const
{ return gi::property_proxy<XdgDBus::DBusProperties, base::ObjectBase> (*this, "dbus-properties"); }

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/object_extra_def.hpp>)
#include <xdgdbus/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/object_extra.hpp>)
#include <xdgdbus/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class Object : public GI_XDGDBUS_OBJECT_BASE
{ typedef GI_XDGDBUS_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusObject>
{ typedef XdgDBus::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdgDBus::Object instance_type;
typedef ::XdgDBusObjectIface interface_type;


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

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
