// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_IDLEMONITOR_HPP_
#define _GI_MUTTERIDLEMONITOR_IDLEMONITOR_HPP_


namespace gi {

namespace repository {

namespace MutterIdleMonitor {


class IdleMonitor;

namespace base {


#define GI_MUTTERIDLEMONITOR_IDLEMONITOR_BASE base::IdleMonitorBase
class IdleMonitorBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::MutterIdleMonitorIdleMonitor BaseObjectType;

IdleMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mutter_idle_monitor_idle_monitor_get_type(); } 

// GDBusInterfaceInfo* /*none*/ mutter_idle_monitor_idle_monitor_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ mutter_idle_monitor_idle_monitor_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint mutter_idle_monitor_idle_monitor_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint mutter_idle_monitor_idle_monitor_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void mutter_idle_monitor_idle_monitor_call_add_idle_watch (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_add_idle_watch (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_add_idle_watch (guint64 arg_interval, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_add_idle_watch (guint64 arg_interval, Gio::AsyncReadyCallback callback) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_add_idle_watch_finish (guint * out_id, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_add_idle_watch_finish (guint * out_id, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_add_idle_watch_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_add_idle_watch_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, guint* out_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_idle_watch_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64 arg_interval, guint* out_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_add_idle_watch_sync (guint64 arg_interval, guint * out_id, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_add_idle_watch_sync (guint64 arg_interval, guint * out_id) noexcept;
GI_INLINE_DECL bool call_add_idle_watch_sync (guint64 arg_interval, guint * out_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_add_idle_watch_sync (guint64 arg_interval, guint * out_id, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_add_idle_watch_sync (guint64 arg_interval, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_add_idle_watch_sync (guint64 arg_interval) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_add_idle_watch_sync (guint64 arg_interval, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_add_idle_watch_sync (guint64 arg_interval, GLib::Error * _error) noexcept;

// void mutter_idle_monitor_idle_monitor_call_add_user_active_watch (MutterIdleMonitorIdleMonitor* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_add_user_active_watch (::MutterIdleMonitorIdleMonitor* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_add_user_active_watch (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_add_user_active_watch (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_add_user_active_watch_finish (guint * out_id, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_add_user_active_watch_finish (guint * out_id, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_add_user_active_watch_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_add_user_active_watch_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_add_user_active_watch_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint* out_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_add_user_active_watch_sync (guint * out_id, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_add_user_active_watch_sync (guint * out_id) noexcept;
GI_INLINE_DECL bool call_add_user_active_watch_sync (guint * out_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_add_user_active_watch_sync (guint * out_id, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_add_user_active_watch_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_add_user_active_watch_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_add_user_active_watch_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_add_user_active_watch_sync (GLib::Error * _error) noexcept;

// void mutter_idle_monitor_idle_monitor_call_get_idletime (MutterIdleMonitorIdleMonitor* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_get_idletime (::MutterIdleMonitorIdleMonitor* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_idletime (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_idletime (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_idletime_finish (guint64 * out_idletime, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_idletime_finish (guint64 * out_idletime, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint64>> call_get_idletime_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> call_get_idletime_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_get_idletime_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint64* out_idletime, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_idletime_sync (guint64 * out_idletime, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_idletime_sync (guint64 * out_idletime) noexcept;
GI_INLINE_DECL bool call_get_idletime_sync (guint64 * out_idletime, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_idletime_sync (guint64 * out_idletime, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint64>> call_get_idletime_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint64>> call_get_idletime_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> call_get_idletime_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> call_get_idletime_sync (GLib::Error * _error) noexcept;

// void mutter_idle_monitor_idle_monitor_call_remove_watch (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mutter_idle_monitor_idle_monitor_call_remove_watch (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_remove_watch (guint arg_id, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_remove_watch (guint arg_id, Gio::AsyncReadyCallback callback) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_finish (MutterIdleMonitorIdleMonitor* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_finish (::MutterIdleMonitorIdleMonitor* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_remove_watch_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_remove_watch_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_sync (MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mutter_idle_monitor_idle_monitor_call_remove_watch_sync (::MutterIdleMonitorIdleMonitor* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_remove_watch_sync (guint arg_id, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_remove_watch_sync (guint arg_id) noexcept;
GI_INLINE_DECL bool call_remove_watch_sync (guint arg_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_remove_watch_sync (guint arg_id, GLib::Error * _error) noexcept;

// void mutter_idle_monitor_idle_monitor_complete_add_idle_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint id);
// void mutter_idle_monitor_idle_monitor_complete_add_idle_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint id);
GI_INLINE_DECL void complete_add_idle_watch (Gio::DBusMethodInvocation invocation, guint id) noexcept;

// void mutter_idle_monitor_idle_monitor_complete_add_user_active_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint id);
// void mutter_idle_monitor_idle_monitor_complete_add_user_active_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint id);
GI_INLINE_DECL void complete_add_user_active_watch (Gio::DBusMethodInvocation invocation, guint id) noexcept;

// void mutter_idle_monitor_idle_monitor_complete_get_idletime (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint64 idletime);
// void mutter_idle_monitor_idle_monitor_complete_get_idletime (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint64 idletime);
GI_INLINE_DECL void complete_get_idletime (Gio::DBusMethodInvocation invocation, guint64 idletime) noexcept;

// void mutter_idle_monitor_idle_monitor_complete_remove_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mutter_idle_monitor_idle_monitor_complete_remove_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_remove_watch (Gio::DBusMethodInvocation invocation) noexcept;

// void mutter_idle_monitor_idle_monitor_emit_watch_fired (MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
// void mutter_idle_monitor_idle_monitor_emit_watch_fired (::MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
GI_INLINE_DECL void emit_watch_fired (guint arg_id) noexcept;

// (signal) gboolean handle-add-idle-watch ( invocation /*none*/, guint64 arg_interval);
// (signal) gboolean handle-add-idle-watch (::GDBusMethodInvocation* invocation /*none*/, guint64 arg_interval);
gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation, unsigned long long arg_interval)> signal_handle_add_idle_watch()
{ return gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation, unsigned long long arg_interval)> (*this, "handle-add-idle-watch"); }

// (signal) gboolean handle-add-user-active-watch ( invocation /*none*/);
// (signal) gboolean handle-add-user-active-watch (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation)> signal_handle_add_user_active_watch()
{ return gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation)> (*this, "handle-add-user-active-watch"); }

// (signal) gboolean handle-get-idletime ( invocation /*none*/);
// (signal) gboolean handle-get-idletime (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation)> signal_handle_get_idletime()
{ return gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-idletime"); }

// (signal) gboolean handle-remove-watch ( invocation /*none*/, guint arg_id);
// (signal) gboolean handle-remove-watch (::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation, guint arg_id)> signal_handle_remove_watch()
{ return gi::signal_proxy<bool(MutterIdleMonitor::IdleMonitor, Gio::DBusMethodInvocation invocation, guint arg_id)> (*this, "handle-remove-watch"); }

// (signal) void watch-fired (guint arg_id);
// (signal) void watch-fired (guint arg_id);
gi::signal_proxy<void(MutterIdleMonitor::IdleMonitor, guint arg_id)> signal_watch_fired()
{ return gi::signal_proxy<void(MutterIdleMonitor::IdleMonitor, guint arg_id)> (*this, "watch-fired"); }

}; // class

} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitor_extra_def.hpp>)
#include <mutteridlemonitor/idlemonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitor_extra.hpp>)
#include <mutteridlemonitor/idlemonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class IdleMonitor : public GI_MUTTERIDLEMONITOR_IDLEMONITOR_BASE
{ typedef GI_MUTTERIDLEMONITOR_IDLEMONITOR_BASE super_type; using super_type::super_type; };

} // namespace MutterIdleMonitor

template<> struct declare_cpptype_of<::MutterIdleMonitorIdleMonitor>
{ typedef MutterIdleMonitor::IdleMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {


class IdleMonitorIfaceDef
{
typedef IdleMonitorIfaceDef self;
public:
typedef MutterIdleMonitor::IdleMonitor instance_type;
typedef ::MutterIdleMonitorIdleMonitorIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_add_idle_watch) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_add_user_active_watch) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_idletime) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_remove_watch) = self;
using GI_MEMBER_CHECK_CONFLICT(watch_fired) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~IdleMonitorIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean IdleMonitor::handle_add_idle_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint64 arg_interval);
// gboolean IdleMonitor::handle_add_idle_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint64 arg_interval);
virtual bool handle_add_idle_watch_ (Gio::DBusMethodInvocation invocation, guint64 arg_interval) noexcept = 0;

// gboolean IdleMonitor::handle_add_user_active_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean IdleMonitor::handle_add_user_active_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_add_user_active_watch_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean IdleMonitor::handle_get_idletime (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean IdleMonitor::handle_get_idletime (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_idletime_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean IdleMonitor::handle_remove_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_id);
// gboolean IdleMonitor::handle_remove_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
virtual bool handle_remove_watch_ (Gio::DBusMethodInvocation invocation, guint arg_id) noexcept = 0;

// void IdleMonitor::watch_fired (MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
// void IdleMonitor::watch_fired (::MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
virtual void watch_fired_ (guint arg_id) noexcept = 0;


};

using IdleMonitorImpl = detail::InterfaceImpl<IdleMonitorIfaceDef>;

class IdleMonitorIfaceClassImpl: public detail::InterfaceClassImpl<IdleMonitorImpl>
{
friend class internal::IdleMonitorIfaceDef;
typedef IdleMonitorIfaceClassImpl self;
typedef detail::InterfaceClassImpl<IdleMonitorImpl> super;

protected:
using super::super;

// gboolean IdleMonitor::handle_add_idle_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint64 arg_interval);
// gboolean IdleMonitor::handle_add_idle_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint64 arg_interval);
GI_INLINE_DECL bool handle_add_idle_watch_ (Gio::DBusMethodInvocation invocation, guint64 arg_interval) noexcept override;

// gboolean IdleMonitor::handle_add_user_active_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean IdleMonitor::handle_add_user_active_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_add_user_active_watch_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean IdleMonitor::handle_get_idletime (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean IdleMonitor::handle_get_idletime (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_idletime_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean IdleMonitor::handle_remove_watch (MutterIdleMonitorIdleMonitor* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_id);
// gboolean IdleMonitor::handle_remove_watch (::MutterIdleMonitorIdleMonitor* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
GI_INLINE_DECL bool handle_remove_watch_ (Gio::DBusMethodInvocation invocation, guint arg_id) noexcept override;

// void IdleMonitor::watch_fired (MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
// void IdleMonitor::watch_fired (::MutterIdleMonitorIdleMonitor* object /*none*/, guint arg_id);
GI_INLINE_DECL void watch_fired_ (guint arg_id) noexcept override;


};


struct IdleMonitorIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(IdleMonitorIfaceClassImpl, handle_add_idle_watch)
  GI_MEMBER_DEFINE(IdleMonitorIfaceClassImpl, handle_add_user_active_watch)
  GI_MEMBER_DEFINE(IdleMonitorIfaceClassImpl, handle_get_idletime)
  GI_MEMBER_DEFINE(IdleMonitorIfaceClassImpl, handle_remove_watch)
  GI_MEMBER_DEFINE(IdleMonitorIfaceClassImpl, watch_fired)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_add_idle_watch),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_add_user_active_watch),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_idletime),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_remove_watch),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, watch_fired)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
