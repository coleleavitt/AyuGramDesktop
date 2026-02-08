// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSDEBUGSTATS_HPP_
#define _GI_XDGDBUS_DBUSDEBUGSTATS_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {


class DBusDebugStats;

namespace base {


#define GI_XDGDBUS_DBUSDEBUGSTATS_BASE base::DBusDebugStatsBase
class DBusDebugStatsBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgDBusDBusDebugStats BaseObjectType;

DBusDebugStatsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_debug_stats_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_debug_stats_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_debug_stats_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_dbus_dbus_debug_stats_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_debug_stats_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_debug_stats_call_get_all_match_rules (XdgDBusDBusDebugStats* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_call_get_all_match_rules (::XdgDBusDBusDebugStats* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_all_match_rules (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_all_match_rules (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_finish (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_all_match_rules_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_all_match_rules_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_all_match_rules_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_all_match_rules_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_all_match_rules_sync (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_all_match_rules_sync (GLib::Variant * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_all_match_rules_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_all_match_rules_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_all_match_rules_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_all_match_rules_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_debug_stats_call_get_connection_stats (XdgDBusDBusDebugStats* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_call_get_connection_stats (::XdgDBusDBusDebugStats* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_connection_stats (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_connection_stats (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_finish (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_stats_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_connection_stats_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_connection_stats_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_connection_stats_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync (XdgDBusDBusDebugStats* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_connection_stats_sync (::XdgDBusDBusDebugStats* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_connection_stats_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_debug_stats_call_get_stats (XdgDBusDBusDebugStats* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_debug_stats_call_get_stats (::XdgDBusDBusDebugStats* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_stats (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_stats (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_finish (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_finish (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_stats_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_stats_finish (GLib::Variant * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_stats_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_stats_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_sync (XdgDBusDBusDebugStats* proxy /*none*/, GVariant** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_debug_stats_call_get_stats_sync (::XdgDBusDBusDebugStats* proxy /*none*/, ::GVariant** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_stats_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_stats_sync (GLib::Variant * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_get_stats_sync (GLib::Variant * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_stats_sync (GLib::Variant * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_stats_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_stats_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_stats_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_stats_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_debug_stats_complete_get_all_match_rules (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_debug_stats_complete_get_all_match_rules (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg0 /*none*/);
GI_INLINE_DECL void complete_get_all_match_rules (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg0) noexcept;

// void xdg_dbus_dbus_debug_stats_complete_get_connection_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_debug_stats_complete_get_connection_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg1 /*none*/);
GI_INLINE_DECL void complete_get_connection_stats (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg1) noexcept;

// void xdg_dbus_dbus_debug_stats_complete_get_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_debug_stats_complete_get_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg0 /*none*/);
GI_INLINE_DECL void complete_get_stats (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg0) noexcept;

// (signal) gboolean handle-get-all-match-rules ( invocation /*none*/);
// (signal) gboolean handle-get-all-match-rules (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusDebugStats, Gio::DBusMethodInvocation invocation)> signal_handle_get_all_match_rules()
{ return gi::signal_proxy<bool(XdgDBus::DBusDebugStats, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-all-match-rules"); }

// (signal) gboolean handle-get-connection-stats ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-connection-stats (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusDebugStats, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_connection_stats()
{ return gi::signal_proxy<bool(XdgDBus::DBusDebugStats, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-connection-stats"); }

// (signal) gboolean handle-get-stats ( invocation /*none*/);
// (signal) gboolean handle-get-stats (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusDebugStats, Gio::DBusMethodInvocation invocation)> signal_handle_get_stats()
{ return gi::signal_proxy<bool(XdgDBus::DBusDebugStats, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-stats"); }

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstats_extra_def.hpp>)
#include <xdgdbus/dbusdebugstats_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstats_extra.hpp>)
#include <xdgdbus/dbusdebugstats_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusDebugStats : public GI_XDGDBUS_DBUSDEBUGSTATS_BASE
{ typedef GI_XDGDBUS_DBUSDEBUGSTATS_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusDebugStats>
{ typedef XdgDBus::DBusDebugStats type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusDebugStatsIfaceDef
{
typedef DBusDebugStatsIfaceDef self;
public:
typedef XdgDBus::DBusDebugStats instance_type;
typedef ::XdgDBusDBusDebugStatsIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_get_all_match_rules) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_connection_stats) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_stats) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusDebugStatsIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DBusDebugStats::handle_get_all_match_rules (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusDebugStats::handle_get_all_match_rules (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_all_match_rules_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean DBusDebugStats::handle_get_connection_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBusDebugStats::handle_get_connection_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_connection_stats_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBusDebugStats::handle_get_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusDebugStats::handle_get_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_stats_ (Gio::DBusMethodInvocation invocation) noexcept = 0;


};

using DBusDebugStatsImpl = detail::InterfaceImpl<DBusDebugStatsIfaceDef>;

class DBusDebugStatsIfaceClassImpl: public detail::InterfaceClassImpl<DBusDebugStatsImpl>
{
friend class internal::DBusDebugStatsIfaceDef;
typedef DBusDebugStatsIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusDebugStatsImpl> super;

protected:
using super::super;

// gboolean DBusDebugStats::handle_get_all_match_rules (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusDebugStats::handle_get_all_match_rules (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_all_match_rules_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean DBusDebugStats::handle_get_connection_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBusDebugStats::handle_get_connection_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_connection_stats_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBusDebugStats::handle_get_stats (XdgDBusDBusDebugStats* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusDebugStats::handle_get_stats (::XdgDBusDBusDebugStats* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_stats_ (Gio::DBusMethodInvocation invocation) noexcept override;


};


struct DBusDebugStatsIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusDebugStatsIfaceClassImpl, handle_get_all_match_rules)
  GI_MEMBER_DEFINE(DBusDebugStatsIfaceClassImpl, handle_get_connection_stats)
  GI_MEMBER_DEFINE(DBusDebugStatsIfaceClassImpl, handle_get_stats)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_all_match_rules),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_connection_stats),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_stats)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
