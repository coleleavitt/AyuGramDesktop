// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSMONITORINGPROXY_HPP_
#define _GI_XDGDBUS_DBUSMONITORINGPROXY_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusMonitoring;

class DBusMonitoringProxy;

namespace base {


#define GI_XDGDBUS_DBUSMONITORINGPROXY_BASE base::DBusMonitoringProxyBase
class DBusMonitoringProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::XdgDBusDBusMonitoringProxy BaseObjectType;

DBusMonitoringProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_monitoring_proxy_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusMonitoring interface_ (gi::interface_tag<XdgDBus::DBusMonitoring>);

GI_INLINE_DECL operator XdgDBus::DBusMonitoring ();

// XdgDBusDBusMonitoring* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusDBusMonitoringProxy* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusMonitoringProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::DBusMonitoringProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgDBusDBusMonitoring* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusDBusMonitoringProxy* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusMonitoringProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::DBusMonitoringProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgDBusDBusMonitoring* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusDBusMonitoringProxy* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusMonitoringProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::DBusMonitoringProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::DBusMonitoringProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::DBusMonitoringProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// XdgDBusDBusMonitoring* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusDBusMonitoringProxy* /*full*/ xdg_dbus_dbus_monitoring_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusMonitoringProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::DBusMonitoringProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::DBusMonitoringProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::DBusMonitoringProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_monitoring_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_monitoring_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdg_dbus_dbus_monitoring_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_monitoring_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoringproxy_extra_def.hpp>)
#include <xdgdbus/dbusmonitoringproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoringproxy_extra.hpp>)
#include <xdgdbus/dbusmonitoringproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusMonitoringProxy : public GI_XDGDBUS_DBUSMONITORINGPROXY_BASE
{ typedef GI_XDGDBUS_DBUSMONITORINGPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusMonitoringProxy>
{ typedef XdgDBus::DBusMonitoringProxy type; }; 

} // namespace repository

} // namespace gi

#include "dbusmonitoring.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusMonitoringProxyClassDef
{
typedef DBusMonitoringProxyClassDef self;
public:
typedef XdgDBus::DBusMonitoringProxy instance_type;
typedef ::XdgDBusDBusMonitoringProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusMonitoringProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusMonitoringProxyClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusMonitoringProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgDBus::impl::internal::DBusMonitoringIfaceClassImpl>
{
friend class internal::DBusMonitoringProxyClassDef;
typedef DBusMonitoringProxyClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusMonitoringProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgDBus::impl::internal::DBusMonitoringIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusMonitoringIfaceClassImpl XdgDBusDBusMonitoringIface_type;



};


struct DBusMonitoringProxyClassDef::TypeInitData
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

using DBusMonitoringProxyImpl = detail::ObjectImpl<DBusMonitoringProxy, internal::DBusMonitoringProxyClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
