// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_IDLEMONITORPROXY_HPP_
#define _GI_MUTTERIDLEMONITOR_IDLEMONITORPROXY_HPP_


namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class IdleMonitor;

class IdleMonitorProxy;

namespace base {


#define GI_MUTTERIDLEMONITOR_IDLEMONITORPROXY_BASE base::IdleMonitorProxyBase
class IdleMonitorProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::MutterIdleMonitorIdleMonitorProxy BaseObjectType;

IdleMonitorProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mutter_idle_monitor_idle_monitor_proxy_get_type(); } 

GI_INLINE_DECL MutterIdleMonitor::IdleMonitor interface_ (gi::interface_tag<MutterIdleMonitor::IdleMonitor>);

GI_INLINE_DECL operator MutterIdleMonitor::IdleMonitor ();

// MutterIdleMonitorIdleMonitor* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::MutterIdleMonitorIdleMonitorProxy* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<MutterIdleMonitor::IdleMonitorProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL MutterIdleMonitor::IdleMonitorProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// MutterIdleMonitorIdleMonitor* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::MutterIdleMonitorIdleMonitorProxy* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<MutterIdleMonitor::IdleMonitorProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL MutterIdleMonitor::IdleMonitorProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// MutterIdleMonitorIdleMonitor* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::MutterIdleMonitorIdleMonitorProxy* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<MutterIdleMonitor::IdleMonitorProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<MutterIdleMonitor::IdleMonitorProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL MutterIdleMonitor::IdleMonitorProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL MutterIdleMonitor::IdleMonitorProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// MutterIdleMonitorIdleMonitor* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::MutterIdleMonitorIdleMonitorProxy* /*full*/ mutter_idle_monitor_idle_monitor_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<MutterIdleMonitor::IdleMonitorProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<MutterIdleMonitor::IdleMonitorProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL MutterIdleMonitor::IdleMonitorProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL MutterIdleMonitor::IdleMonitorProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void mutter_idle_monitor_idle_monitor_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void mutter_idle_monitor_idle_monitor_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitorproxy_extra_def.hpp>)
#include <mutteridlemonitor/idlemonitorproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitorproxy_extra.hpp>)
#include <mutteridlemonitor/idlemonitorproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class IdleMonitorProxy : public GI_MUTTERIDLEMONITOR_IDLEMONITORPROXY_BASE
{ typedef GI_MUTTERIDLEMONITOR_IDLEMONITORPROXY_BASE super_type; using super_type::super_type; };

} // namespace MutterIdleMonitor

template<> struct declare_cpptype_of<::MutterIdleMonitorIdleMonitorProxy>
{ typedef MutterIdleMonitor::IdleMonitorProxy type; }; 

} // namespace repository

} // namespace gi

#include "idlemonitor.hpp"

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {


class IdleMonitorProxyClassDef
{
typedef IdleMonitorProxyClassDef self;
public:
typedef MutterIdleMonitor::IdleMonitorProxy instance_type;
typedef ::MutterIdleMonitorIdleMonitorProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~IdleMonitorProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IdleMonitorProxyClass: public detail::ClassTemplate<MutterIdleMonitor::impl::internal::IdleMonitorProxyClassDef, Gio::impl::internal::DBusProxyClass, MutterIdleMonitor::impl::internal::IdleMonitorIfaceClassImpl>
{
friend class internal::IdleMonitorProxyClassDef;
typedef IdleMonitorProxyClass self;
typedef detail::ClassTemplate<MutterIdleMonitor::impl::internal::IdleMonitorProxyClassDef, Gio::impl::internal::DBusProxyClass, MutterIdleMonitor::impl::internal::IdleMonitorIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef MutterIdleMonitor::impl::internal::IdleMonitorIfaceClassImpl MutterIdleMonitorIdleMonitorIface_type;



};


struct IdleMonitorProxyClassDef::TypeInitData
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

using IdleMonitorProxyImpl = detail::ObjectImpl<IdleMonitorProxy, internal::IdleMonitorProxyClass>;

} // namespace impl

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
