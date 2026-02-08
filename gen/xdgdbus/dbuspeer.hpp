// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPEER_HPP_
#define _GI_XDGDBUS_DBUSPEER_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {


class DBusPeer;

namespace base {


#define GI_XDGDBUS_DBUSPEER_BASE base::DBusPeerBase
class DBusPeerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgDBusDBusPeer BaseObjectType;

DBusPeerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_peer_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_peer_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_peer_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_dbus_dbus_peer_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_peer_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_peer_call_get_machine_id (XdgDBusDBusPeer* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_peer_call_get_machine_id (::XdgDBusDBusPeer* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_machine_id (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_machine_id (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_peer_call_get_machine_id_finish (XdgDBusDBusPeer* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_get_machine_id_finish (::XdgDBusDBusPeer* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_machine_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_machine_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_machine_id_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_machine_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_peer_call_get_machine_id_sync (XdgDBusDBusPeer* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_get_machine_id_sync (::XdgDBusDBusPeer* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_machine_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_machine_id_sync (gi::cstring * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_get_machine_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_machine_id_sync (gi::cstring * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_machine_id_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_machine_id_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_machine_id_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_machine_id_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_peer_call_ping (XdgDBusDBusPeer* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_peer_call_ping (::XdgDBusDBusPeer* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_ping (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_ping (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_peer_call_ping_finish (XdgDBusDBusPeer* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_ping_finish (::XdgDBusDBusPeer* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_ping_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_ping_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_peer_call_ping_sync (XdgDBusDBusPeer* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_peer_call_ping_sync (::XdgDBusDBusPeer* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_ping_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_ping_sync () noexcept;
GI_INLINE_DECL bool call_ping_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_ping_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_peer_complete_get_machine_id (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_peer_complete_get_machine_id (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
GI_INLINE_DECL void complete_get_machine_id (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg0) noexcept;

// void xdg_dbus_dbus_peer_complete_ping (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_peer_complete_ping (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_ping (Gio::DBusMethodInvocation invocation) noexcept;

// (signal) gboolean handle-get-machine-id ( invocation /*none*/);
// (signal) gboolean handle-get-machine-id (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusPeer, Gio::DBusMethodInvocation invocation)> signal_handle_get_machine_id()
{ return gi::signal_proxy<bool(XdgDBus::DBusPeer, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-machine-id"); }

// (signal) gboolean handle-ping ( invocation /*none*/);
// (signal) gboolean handle-ping (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusPeer, Gio::DBusMethodInvocation invocation)> signal_handle_ping()
{ return gi::signal_proxy<bool(XdgDBus::DBusPeer, Gio::DBusMethodInvocation invocation)> (*this, "handle-ping"); }

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeer_extra_def.hpp>)
#include <xdgdbus/dbuspeer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeer_extra.hpp>)
#include <xdgdbus/dbuspeer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusPeer : public GI_XDGDBUS_DBUSPEER_BASE
{ typedef GI_XDGDBUS_DBUSPEER_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusPeer>
{ typedef XdgDBus::DBusPeer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusPeerIfaceDef
{
typedef DBusPeerIfaceDef self;
public:
typedef XdgDBus::DBusPeer instance_type;
typedef ::XdgDBusDBusPeerIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_get_machine_id) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_ping) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusPeerIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DBusPeer::handle_get_machine_id (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusPeer::handle_get_machine_id (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_machine_id_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean DBusPeer::handle_ping (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusPeer::handle_ping (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_ping_ (Gio::DBusMethodInvocation invocation) noexcept = 0;


};

using DBusPeerImpl = detail::InterfaceImpl<DBusPeerIfaceDef>;

class DBusPeerIfaceClassImpl: public detail::InterfaceClassImpl<DBusPeerImpl>
{
friend class internal::DBusPeerIfaceDef;
typedef DBusPeerIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusPeerImpl> super;

protected:
using super::super;

// gboolean DBusPeer::handle_get_machine_id (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusPeer::handle_get_machine_id (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_machine_id_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean DBusPeer::handle_ping (XdgDBusDBusPeer* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusPeer::handle_ping (::XdgDBusDBusPeer* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_ping_ (Gio::DBusMethodInvocation invocation) noexcept override;


};


struct DBusPeerIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusPeerIfaceClassImpl, handle_get_machine_id)
  GI_MEMBER_DEFINE(DBusPeerIfaceClassImpl, handle_ping)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_machine_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_ping)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
