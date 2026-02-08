// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSDEBUGSTATSPROXY_HPP_
#define _GI_XDGDBUS_DBUSDEBUGSTATSPROXY_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusDebugStats;

class DBusDebugStatsProxy;

namespace base {


#define GI_XDGDBUS_DBUSDEBUGSTATSPROXY_BASE base::DBusDebugStatsProxyBase
class DBusDebugStatsProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::XdgDBusDBusDebugStatsProxy BaseObjectType;

DBusDebugStatsProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_debug_stats_proxy_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusDebugStats interface_ (gi::interface_tag<XdgDBus::DBusDebugStats>);

GI_INLINE_DECL operator XdgDBus::DBusDebugStats ();

// XdgDBusDBusDebugStats* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusDBusDebugStatsProxy* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusDebugStatsProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::DBusDebugStatsProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgDBusDBusDebugStats* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusDBusDebugStatsProxy* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusDebugStatsProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::DBusDebugStatsProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgDBusDBusDebugStats* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusDBusDebugStatsProxy* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusDebugStatsProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::DBusDebugStatsProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::DBusDebugStatsProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::DBusDebugStatsProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// XdgDBusDBusDebugStats* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusDBusDebugStatsProxy* /*full*/ xdg_dbus_dbus_debug_stats_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::DBusDebugStatsProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::DBusDebugStatsProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::DBusDebugStatsProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::DBusDebugStatsProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_debug_stats_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdg_dbus_dbus_debug_stats_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstatsproxy_extra_def.hpp>)
#include <xdgdbus/dbusdebugstatsproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstatsproxy_extra.hpp>)
#include <xdgdbus/dbusdebugstatsproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusDebugStatsProxy : public GI_XDGDBUS_DBUSDEBUGSTATSPROXY_BASE
{ typedef GI_XDGDBUS_DBUSDEBUGSTATSPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusDebugStatsProxy>
{ typedef XdgDBus::DBusDebugStatsProxy type; }; 

} // namespace repository

} // namespace gi

#include "dbusdebugstats.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusDebugStatsProxyClassDef
{
typedef DBusDebugStatsProxyClassDef self;
public:
typedef XdgDBus::DBusDebugStatsProxy instance_type;
typedef ::XdgDBusDBusDebugStatsProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusDebugStatsProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusDebugStatsProxyClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusDebugStatsProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgDBus::impl::internal::DBusDebugStatsIfaceClassImpl>
{
friend class internal::DBusDebugStatsProxyClassDef;
typedef DBusDebugStatsProxyClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusDebugStatsProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgDBus::impl::internal::DBusDebugStatsIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusDebugStatsIfaceClassImpl XdgDBusDBusDebugStatsIface_type;



};


struct DBusDebugStatsProxyClassDef::TypeInitData
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

using DBusDebugStatsProxyImpl = detail::ObjectImpl<DBusDebugStatsProxy, internal::DBusDebugStatsProxyClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
