// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSMONITORING_HPP_
#define _GI_XDGDBUS_DBUSMONITORING_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {


class DBusMonitoring;

namespace base {


#define GI_XDGDBUS_DBUSMONITORING_BASE base::DBusMonitoringBase
class DBusMonitoringBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgDBusDBusMonitoring BaseObjectType;

DBusMonitoringBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_monitoring_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_monitoring_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_monitoring_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_dbus_dbus_monitoring_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_monitoring_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_monitoring_call_become_monitor (XdgDBusDBusMonitoring* proxy /*none*/, const gchar* const* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_monitoring_call_become_monitor (::XdgDBusDBusMonitoring* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_unnamed_arg0 in pointer depth (2 vs 1)

// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_finish (XdgDBusDBusMonitoring* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_finish (::XdgDBusDBusMonitoring* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_become_monitor_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_become_monitor_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_sync (XdgDBusDBusMonitoring* proxy /*none*/, const gchar* const* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_monitoring_call_become_monitor_sync (::XdgDBusDBusMonitoring* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_unnamed_arg0 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_monitoring_complete_become_monitor (XdgDBusDBusMonitoring* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_monitoring_complete_become_monitor (::XdgDBusDBusMonitoring* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_become_monitor (Gio::DBusMethodInvocation invocation) noexcept;

// (signal) gboolean handle-become-monitor ( invocation /*none*/,  arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// (signal) gboolean handle-become-monitor (::GDBusMethodInvocation* invocation /*none*/, char** arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
gi::signal_proxy<bool(XdgDBus::DBusMonitoring, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_unnamed_arg0, guint arg_unnamed_arg1)> signal_handle_become_monitor()
{ return gi::signal_proxy<bool(XdgDBus::DBusMonitoring, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_unnamed_arg0, guint arg_unnamed_arg1)> (*this, "handle-become-monitor"); }

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoring_extra_def.hpp>)
#include <xdgdbus/dbusmonitoring_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoring_extra.hpp>)
#include <xdgdbus/dbusmonitoring_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusMonitoring : public GI_XDGDBUS_DBUSMONITORING_BASE
{ typedef GI_XDGDBUS_DBUSMONITORING_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusMonitoring>
{ typedef XdgDBus::DBusMonitoring type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusMonitoringIfaceDef
{
typedef DBusMonitoringIfaceDef self;
public:
typedef XdgDBus::DBusMonitoring instance_type;
typedef ::XdgDBusDBusMonitoringIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_become_monitor) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusMonitoringIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DBusMonitoring::handle_become_monitor (XdgDBusDBusMonitoring* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBusMonitoring::handle_become_monitor (::XdgDBusDBusMonitoring* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// SKIP; inconsistent arg_unnamed_arg0 in pointer depth (2 vs 1)
virtual gboolean handle_become_monitor_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept = 0;


};

using DBusMonitoringImpl = detail::InterfaceImpl<DBusMonitoringIfaceDef>;

class DBusMonitoringIfaceClassImpl: public detail::InterfaceClassImpl<DBusMonitoringImpl>
{
friend class internal::DBusMonitoringIfaceDef;
typedef DBusMonitoringIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusMonitoringImpl> super;

protected:
using super::super;

// gboolean DBusMonitoring::handle_become_monitor (XdgDBusDBusMonitoring* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBusMonitoring::handle_become_monitor (::XdgDBusDBusMonitoring* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// SKIP; inconsistent arg_unnamed_arg0 in pointer depth (2 vs 1)
GI_INLINE_DECL gboolean handle_become_monitor_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept override;


};


struct DBusMonitoringIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusMonitoringIfaceClassImpl, handle_become_monitor)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_become_monitor)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
