// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPROPERTIES_HPP_
#define _GI_XDGDBUS_DBUSPROPERTIES_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {


class DBusProperties;

namespace base {


#define GI_XDGDBUS_DBUSPROPERTIES_BASE base::DBusPropertiesBase
class DBusPropertiesBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgDBusDBusProperties BaseObjectType;

DBusPropertiesBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_properties_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_properties_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_properties_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_dbus_dbus_properties_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_properties_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_properties_call_get (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_properties_call_get (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::AsyncReadyCallback callback) noexcept;

// void xdg_dbus_dbus_properties_call_get_all (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_properties_call_get_all (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_all (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_all (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_properties_call_get_all_finish (XdgDBusDBusProperties* proxy /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_all_finish (::XdgDBusDBusProperties* proxy /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_all_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_all_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_all_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_all_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_properties_call_get_all_sync (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_all_sync (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_all_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_all_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_properties_call_get_finish (XdgDBusDBusProperties* proxy /*none*/, GVariant** out_unnamed_arg2 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_finish (::XdgDBusDBusProperties* proxy /*none*/, ::GVariant** out_unnamed_arg2 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_finish (GLib::Variant * out_unnamed_arg2, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_finish (GLib::Variant * out_unnamed_arg2, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_properties_call_get_sync (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant** out_unnamed_arg2 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_get_sync (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant** out_unnamed_arg2 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2) noexcept;
GI_INLINE_DECL bool call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant * out_unnamed_arg2, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_properties_call_set (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant* arg_unnamed_arg2 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_properties_call_set (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_set (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_set (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_properties_call_set_finish (XdgDBusDBusProperties* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_set_finish (::XdgDBusDBusProperties* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_set_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_properties_call_set_sync (XdgDBusDBusProperties* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant* arg_unnamed_arg2 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_properties_call_set_sync (::XdgDBusDBusProperties* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2) noexcept;
GI_INLINE_DECL bool call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_set_sync (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_properties_complete_get (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg2 /*none*/);
// void xdg_dbus_dbus_properties_complete_get (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg2 /*none*/);
GI_INLINE_DECL void complete_get (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg2) noexcept;

// void xdg_dbus_dbus_properties_complete_get_all (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_properties_complete_get_all (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg1 /*none*/);
GI_INLINE_DECL void complete_get_all (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg1) noexcept;

// void xdg_dbus_dbus_properties_complete_set (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_properties_complete_set (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_set (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_dbus_dbus_properties_emit_properties_changed (XdgDBusDBusProperties* object /*none*/, const gchar* arg_interface_name /*none*/, GVariant* arg_changed_properties /*none*/, const gchar* const* arg_invalidated_properties /*none*/);
// void xdg_dbus_dbus_properties_emit_properties_changed (::XdgDBusDBusProperties* object /*none*/, const char* arg_interface_name /*none*/, ::GVariant* arg_changed_properties /*none*/, const char* arg_invalidated_properties /*none*/);
// SKIP; inconsistent arg_invalidated_properties in pointer depth (2 vs 1)

// (signal) gboolean handle-get ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/, gchar* arg_unnamed_arg1 /*none*/);
// (signal) gboolean handle-get (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/, char* arg_unnamed_arg1 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusProperties, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, gi::cstring_v arg_unnamed_arg1)> signal_handle_get()
{ return gi::signal_proxy<bool(XdgDBus::DBusProperties, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, gi::cstring_v arg_unnamed_arg1)> (*this, "handle-get"); }

// (signal) gboolean handle-get-all ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-all (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusProperties, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_all()
{ return gi::signal_proxy<bool(XdgDBus::DBusProperties, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-all"); }

// (signal) gboolean handle-set ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/, gchar* arg_unnamed_arg1 /*none*/,  arg_unnamed_arg2 /*none*/);
// (signal) gboolean handle-set (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/, char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusProperties, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2)> signal_handle_set()
{ return gi::signal_proxy<bool(XdgDBus::DBusProperties, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2)> (*this, "handle-set"); }

// (signal) void properties-changed (gchar* arg_interface_name /*none*/,  arg_changed_properties /*none*/,  arg_invalidated_properties /*none*/);
// (signal) void properties-changed (char* arg_interface_name /*none*/, ::GVariant* arg_changed_properties /*none*/, char** arg_invalidated_properties /*none*/);
gi::signal_proxy<void(XdgDBus::DBusProperties, gi::cstring_v arg_interface_name, GLib::Variant arg_changed_properties, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_invalidated_properties)> signal_properties_changed()
{ return gi::signal_proxy<void(XdgDBus::DBusProperties, gi::cstring_v arg_interface_name, GLib::Variant arg_changed_properties, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_invalidated_properties)> (*this, "properties-changed"); }

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusproperties_extra_def.hpp>)
#include <xdgdbus/dbusproperties_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusproperties_extra.hpp>)
#include <xdgdbus/dbusproperties_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusProperties : public GI_XDGDBUS_DBUSPROPERTIES_BASE
{ typedef GI_XDGDBUS_DBUSPROPERTIES_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusProperties>
{ typedef XdgDBus::DBusProperties type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusPropertiesIfaceDef
{
typedef DBusPropertiesIfaceDef self;
public:
typedef XdgDBus::DBusProperties instance_type;
typedef ::XdgDBusDBusPropertiesIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_get) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_all) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_set) = self;
using GI_MEMBER_CHECK_CONFLICT(properties_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusPropertiesIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DBusProperties::handle_get (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/);
// gboolean DBusProperties::handle_get (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/);
virtual bool handle_get_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1) noexcept = 0;

// gboolean DBusProperties::handle_get_all (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBusProperties::handle_get_all (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_all_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBusProperties::handle_set (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant* arg_unnamed_arg2 /*none*/);
// gboolean DBusProperties::handle_set (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/);
virtual bool handle_set_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2) noexcept = 0;

// void DBusProperties::properties_changed (XdgDBusDBusProperties* object /*none*/, const gchar* arg_interface_name /*none*/, GVariant* arg_changed_properties /*none*/, const gchar* const* arg_invalidated_properties /*none*/);
// void DBusProperties::properties_changed (::XdgDBusDBusProperties* object /*none*/, const char* arg_interface_name /*none*/, ::GVariant* arg_changed_properties /*none*/, const char* arg_invalidated_properties /*none*/);
// SKIP; inconsistent arg_invalidated_properties in pointer depth (2 vs 1)
virtual void properties_changed_ (const gchar* arg_interface_name, ::GVariant* arg_changed_properties, const gchar* const* arg_invalidated_properties) noexcept = 0;


};

using DBusPropertiesImpl = detail::InterfaceImpl<DBusPropertiesIfaceDef>;

class DBusPropertiesIfaceClassImpl: public detail::InterfaceClassImpl<DBusPropertiesImpl>
{
friend class internal::DBusPropertiesIfaceDef;
typedef DBusPropertiesIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusPropertiesImpl> super;

protected:
using super::super;

// gboolean DBusProperties::handle_get (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/);
// gboolean DBusProperties::handle_get (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/);
GI_INLINE_DECL bool handle_get_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1) noexcept override;

// gboolean DBusProperties::handle_get_all (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBusProperties::handle_get_all (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_all_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBusProperties::handle_set (XdgDBusDBusProperties* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, GVariant* arg_unnamed_arg2 /*none*/);
// gboolean DBusProperties::handle_set (::XdgDBusDBusProperties* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, ::GVariant* arg_unnamed_arg2 /*none*/);
GI_INLINE_DECL bool handle_set_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, GLib::Variant arg_unnamed_arg2) noexcept override;

// void DBusProperties::properties_changed (XdgDBusDBusProperties* object /*none*/, const gchar* arg_interface_name /*none*/, GVariant* arg_changed_properties /*none*/, const gchar* const* arg_invalidated_properties /*none*/);
// void DBusProperties::properties_changed (::XdgDBusDBusProperties* object /*none*/, const char* arg_interface_name /*none*/, ::GVariant* arg_changed_properties /*none*/, const char* arg_invalidated_properties /*none*/);
// SKIP; inconsistent arg_invalidated_properties in pointer depth (2 vs 1)
GI_INLINE_DECL void properties_changed_ (const gchar* arg_interface_name, ::GVariant* arg_changed_properties, const gchar* const* arg_invalidated_properties) noexcept override;


};


struct DBusPropertiesIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusPropertiesIfaceClassImpl, handle_get)
  GI_MEMBER_DEFINE(DBusPropertiesIfaceClassImpl, handle_get_all)
  GI_MEMBER_DEFINE(DBusPropertiesIfaceClassImpl, handle_set)
  GI_MEMBER_DEFINE(DBusPropertiesIfaceClassImpl, properties_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_all),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_set),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, properties_changed)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
