// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSINTROSPECTABLEPROXY_HPP_
#define _GI_XDGDBUS_DBUSINTROSPECTABLEPROXY_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusIntrospectable;

class DBusIntrospectableProxy;

namespace base {


#define GI_XDGDBUS_DBUSINTROSPECTABLEPROXY_BASE base::DBusIntrospectableProxyBase
class DBusIntrospectableProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::XdgDBusDBusIntrospectableProxy BaseObjectType;

DBusIntrospectableProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_introspectable_proxy_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusIntrospectable interface_ (gi::interface_tag<XdgDBus::DBusIntrospectable>);

GI_INLINE_DECL operator XdgDBus::DBusIntrospectable ();

// XdgDBusDBusIntrospectable* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusDBusIntrospectableProxy* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusIntrospectableProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::DBusIntrospectableProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgDBusDBusIntrospectable* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusDBusIntrospectableProxy* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusIntrospectableProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::DBusIntrospectableProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgDBusDBusIntrospectable* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusDBusIntrospectableProxy* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusIntrospectableProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::DBusIntrospectableProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::DBusIntrospectableProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::DBusIntrospectableProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// XdgDBusDBusIntrospectable* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusDBusIntrospectableProxy* /*full*/ xdg_dbus_dbus_introspectable_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusIntrospectableProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::DBusIntrospectableProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::DBusIntrospectableProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::DBusIntrospectableProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_introspectable_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_introspectable_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdg_dbus_dbus_introspectable_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_introspectable_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectableproxy_extra_def.hpp>)
#include <xdgdbus/dbusintrospectableproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectableproxy_extra.hpp>)
#include <xdgdbus/dbusintrospectableproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusIntrospectableProxy : public GI_XDGDBUS_DBUSINTROSPECTABLEPROXY_BASE
{ typedef GI_XDGDBUS_DBUSINTROSPECTABLEPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusIntrospectableProxy>
{ typedef XdgDBus::DBusIntrospectableProxy type; }; 

} // namespace repository

} // namespace gi

#include "dbusintrospectable.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusIntrospectableProxyClassDef
{
typedef DBusIntrospectableProxyClassDef self;
public:
typedef XdgDBus::DBusIntrospectableProxy instance_type;
typedef ::XdgDBusDBusIntrospectableProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusIntrospectableProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusIntrospectableProxyClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusIntrospectableProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgDBus::impl::internal::DBusIntrospectableIfaceClassImpl>
{
friend class internal::DBusIntrospectableProxyClassDef;
typedef DBusIntrospectableProxyClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusIntrospectableProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgDBus::impl::internal::DBusIntrospectableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusIntrospectableIfaceClassImpl XdgDBusDBusIntrospectableIface_type;



};


struct DBusIntrospectableProxyClassDef::TypeInitData
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

using DBusIntrospectableProxyImpl = detail::ObjectImpl<DBusIntrospectableProxy, internal::DBusIntrospectableProxyClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
