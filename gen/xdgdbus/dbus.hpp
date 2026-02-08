// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUS_HPP_
#define _GI_XDGDBUS_DBUS_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {


class DBus;

namespace base {


#define GI_XDGDBUS_DBUS_BASE base::DBusBase
class DBusBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgDBusDBus BaseObjectType;

DBusBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_dbus_dbus_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_call_add_match (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_add_match (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_add_match (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_add_match (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_add_match_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_add_match_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_add_match_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_add_match_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_add_match_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_add_match_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_add_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_add_match_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_add_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_add_match_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_get_adt_audit_session_data (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_adt_audit_session_data (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_adt_audit_session_data (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_adt_audit_session_data (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_adt_audit_session_data_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_adt_audit_session_data_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_adt_audit_session_data_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_adt_audit_session_data_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_adt_audit_session_data_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_adt_audit_session_data_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_get_connection_credentials (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_credentials (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_connection_credentials (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_connection_credentials (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_credentials_finish (XdgDBusDBus* proxy /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_credentials_finish (::XdgDBusDBus* proxy /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_credentials_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_connection_credentials_finish (GLib::Variant * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_connection_credentials_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_connection_credentials_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_credentials_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GVariant** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_credentials_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GVariant** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Variant * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_get_connection_credentials_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_get_connection_selinux_security_context (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_selinux_security_context (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_connection_selinux_security_context (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_connection_selinux_security_context (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_selinux_security_context_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_connection_selinux_security_context_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_connection_selinux_security_context_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_connection_selinux_security_context_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_selinux_security_context_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_connection_selinux_security_context_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_get_connection_unix_process_id (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_unix_process_id (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_connection_unix_process_id (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_connection_unix_process_id (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_unix_process_id_finish (guint * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_connection_unix_process_id_finish (guint * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_get_connection_unix_process_id_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_get_connection_unix_process_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_process_id_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_get_connection_unix_process_id_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_get_connection_unix_user (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_connection_unix_user (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_connection_unix_user (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_connection_unix_user (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_unix_user_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_user_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_unix_user_finish (guint * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_connection_unix_user_finish (guint * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_get_connection_unix_user_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_get_connection_unix_user_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_get_connection_unix_user_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_connection_unix_user_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_get_connection_unix_user_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_get_id (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_id (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_id (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_id (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_get_id_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_id_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_id_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_id_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_get_id_sync (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_id_sync (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_id_sync (gi::cstring * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_get_id_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_id_sync (gi::cstring * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_id_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_id_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_id_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_id_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_get_name_owner (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_get_name_owner (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_name_owner (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_name_owner (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_get_name_owner_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_name_owner_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_name_owner_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_name_owner_finish (gi::cstring * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_name_owner_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_name_owner_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_get_name_owner_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_get_name_owner_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, gi::cstring * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_name_owner_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_hello (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_hello (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_hello (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_hello (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_hello_finish (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_hello_finish (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_hello_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_hello_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_hello_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_hello_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_hello_sync (XdgDBusDBus* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_hello_sync (::XdgDBusDBus* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_hello_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_hello_sync (gi::cstring * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_hello_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_hello_sync (gi::cstring * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_hello_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_hello_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_hello_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_hello_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_list_activatable_names (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_list_activatable_names (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_list_activatable_names (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_list_activatable_names (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_list_activatable_names_finish (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_activatable_names_finish (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_list_activatable_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_list_activatable_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_activatable_names_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_activatable_names_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_list_activatable_names_sync (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_activatable_names_sync (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_list_activatable_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_activatable_names_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_activatable_names_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_activatable_names_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_activatable_names_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_list_names (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_list_names (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_list_names (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_list_names (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_list_names_finish (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_names_finish (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_list_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_list_names_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_names_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_names_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_list_names_sync (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_names_sync (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_list_names_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_names_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_names_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_names_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_names_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_list_queued_owners (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_list_queued_owners (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_list_queued_owners (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_list_queued_owners (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_list_queued_owners_finish (XdgDBusDBus* proxy /*none*/, gchar*** out_unnamed_arg1 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_queued_owners_finish (::XdgDBusDBus* proxy /*none*/, char*** out_unnamed_arg1 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_list_queued_owners_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_list_queued_owners_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_queued_owners_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_queued_owners_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_list_queued_owners_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gchar*** out_unnamed_arg1 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_list_queued_owners_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, char*** out_unnamed_arg1 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_list_queued_owners_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_name_has_owner (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_name_has_owner (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_name_has_owner (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_name_has_owner (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_name_has_owner_finish (XdgDBusDBus* proxy /*none*/, gboolean* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_name_has_owner_finish (::XdgDBusDBus* proxy /*none*/, gboolean* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_name_has_owner_finish (bool * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_name_has_owner_finish (bool * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_name_has_owner_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_name_has_owner_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_name_has_owner_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, gboolean* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_name_has_owner_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, gboolean* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, bool * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_name_has_owner_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_release_name (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_release_name (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_release_name (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_release_name (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_release_name_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_release_name_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg1, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_release_name_finish (guint * out_unnamed_arg1, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_release_name_finish (guint * out_unnamed_arg1, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_release_name_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_release_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_release_name_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_release_name_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint* out_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1) noexcept;
GI_INLINE_DECL bool call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, guint * out_unnamed_arg1, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_release_name_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_release_name_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_reload_config (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_reload_config (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_reload_config (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_reload_config (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_reload_config_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_reload_config_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_reload_config_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_reload_config_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_reload_config_sync (XdgDBusDBus* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_reload_config_sync (::XdgDBusDBus* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_reload_config_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_reload_config_sync () noexcept;
GI_INLINE_DECL bool call_reload_config_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_reload_config_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_remove_match (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_remove_match (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_remove_match (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_remove_match (const gi::cstring_v arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_remove_match_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_remove_match_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_remove_match_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_remove_match_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_remove_match_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_remove_match_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_remove_match_sync (const gi::cstring_v arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_request_name (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_request_name (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_request_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_request_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_request_name_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_request_name_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_request_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_request_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_request_name_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_request_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_request_name_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_request_name_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2) noexcept;
GI_INLINE_DECL bool call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_request_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_start_service_by_name (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_start_service_by_name (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_start_service_by_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_start_service_by_name (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_start_service_by_name_finish (XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_start_service_by_name_finish (::XdgDBusDBus* proxy /*none*/, guint* out_unnamed_arg2, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_start_service_by_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_start_service_by_name_finish (guint * out_unnamed_arg2, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_start_service_by_name_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_start_service_by_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_start_service_by_name_sync (XdgDBusDBus* proxy /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_start_service_by_name_sync (::XdgDBusDBus* proxy /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1, guint* out_unnamed_arg2, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2) noexcept;
GI_INLINE_DECL bool call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, guint * out_unnamed_arg2, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_start_service_by_name_sync (const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_call_update_activation_environment (XdgDBusDBus* proxy /*none*/, GVariant* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_call_update_activation_environment (::XdgDBusDBus* proxy /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_update_activation_environment (GLib::Variant arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_update_activation_environment (GLib::Variant arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_call_update_activation_environment_finish (XdgDBusDBus* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_call_update_activation_environment_finish (::XdgDBusDBus* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_update_activation_environment_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_update_activation_environment_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_call_update_activation_environment_sync (XdgDBusDBus* proxy /*none*/, GVariant* arg_unnamed_arg0 /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_call_update_activation_environment_sync (::XdgDBusDBus* proxy /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_update_activation_environment_sync (GLib::Variant arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_complete_add_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_add_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_add_match (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_dbus_dbus_complete_get_adt_audit_session_data (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_adt_audit_session_data (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
GI_INLINE_DECL void complete_get_adt_audit_session_data (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_get_connection_credentials (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_connection_credentials (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* unnamed_arg1 /*none*/);
GI_INLINE_DECL void complete_get_connection_credentials (Gio::DBusMethodInvocation invocation, GLib::Variant unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_get_connection_selinux_security_context (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_connection_selinux_security_context (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
GI_INLINE_DECL void complete_get_connection_selinux_security_context (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_get_connection_unix_process_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
// void xdg_dbus_dbus_complete_get_connection_unix_process_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
GI_INLINE_DECL void complete_get_connection_unix_process_id (Gio::DBusMethodInvocation invocation, guint unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_get_connection_unix_user (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
// void xdg_dbus_dbus_complete_get_connection_unix_user (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
GI_INLINE_DECL void complete_get_connection_unix_user (Gio::DBusMethodInvocation invocation, guint unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_get_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_get_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
GI_INLINE_DECL void complete_get_id (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg0) noexcept;

// void xdg_dbus_dbus_complete_get_name_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_get_name_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
GI_INLINE_DECL void complete_get_name_owner (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_hello (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_hello (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
GI_INLINE_DECL void complete_hello (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg0) noexcept;

// void xdg_dbus_dbus_complete_list_activatable_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_list_activatable_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
// SKIP; inconsistent unnamed_arg0 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_complete_list_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_complete_list_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
// SKIP; inconsistent unnamed_arg0 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_complete_list_queued_owners (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* unnamed_arg1 /*none*/);
// void xdg_dbus_dbus_complete_list_queued_owners (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg1 /*none*/);
// SKIP; inconsistent unnamed_arg1 in pointer depth (2 vs 1)

// void xdg_dbus_dbus_complete_name_has_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean unnamed_arg1);
// void xdg_dbus_dbus_complete_name_has_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean unnamed_arg1);
GI_INLINE_DECL void complete_name_has_owner (Gio::DBusMethodInvocation invocation, gboolean unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_release_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
// void xdg_dbus_dbus_complete_release_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg1);
GI_INLINE_DECL void complete_release_name (Gio::DBusMethodInvocation invocation, guint unnamed_arg1) noexcept;

// void xdg_dbus_dbus_complete_reload_config (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_reload_config (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_reload_config (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_dbus_dbus_complete_remove_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_remove_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_remove_match (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_dbus_dbus_complete_request_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
// void xdg_dbus_dbus_complete_request_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
GI_INLINE_DECL void complete_request_name (Gio::DBusMethodInvocation invocation, guint unnamed_arg2) noexcept;

// void xdg_dbus_dbus_complete_start_service_by_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
// void xdg_dbus_dbus_complete_start_service_by_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg2);
GI_INLINE_DECL void complete_start_service_by_name (Gio::DBusMethodInvocation invocation, guint unnamed_arg2) noexcept;

// void xdg_dbus_dbus_complete_update_activation_environment (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_dbus_dbus_complete_update_activation_environment (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_update_activation_environment (Gio::DBusMethodInvocation invocation) noexcept;

// gchar** /*full,nullable*/ xdg_dbus_dbus_dup_features (XdgDBusDBus* object /*none*/);
// char** /*full,nullable*/ xdg_dbus_dbus_dup_features (::XdgDBusDBus* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> dup_features () noexcept;

// gchar** /*full,nullable*/ xdg_dbus_dbus_dup_interfaces (XdgDBusDBus* object /*none*/);
// char** /*full,nullable*/ xdg_dbus_dbus_dup_interfaces (::XdgDBusDBus* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> dup_interfaces () noexcept;

// void xdg_dbus_dbus_emit_name_acquired (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_emit_name_acquired (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL void emit_name_acquired (const gi::cstring_v arg_unnamed_arg0) noexcept;

// void xdg_dbus_dbus_emit_name_lost (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_emit_name_lost (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL void emit_name_lost (const gi::cstring_v arg_unnamed_arg0) noexcept;

// void xdg_dbus_dbus_emit_name_owner_changed (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, const gchar* arg_unnamed_arg2 /*none*/);
// void xdg_dbus_dbus_emit_name_owner_changed (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, const char* arg_unnamed_arg2 /*none*/);
GI_INLINE_DECL void emit_name_owner_changed (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, const gi::cstring_v arg_unnamed_arg2) noexcept;

// const gchar* const* /*none,nullable*/ xdg_dbus_dbus_get_features (XdgDBusDBus* object /*none*/);
// const char** /*none,nullable*/ xdg_dbus_dbus_get_features (::XdgDBusDBus* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_features () noexcept;

// const gchar* const* /*none,nullable*/ xdg_dbus_dbus_get_interfaces (XdgDBusDBus* object /*none*/);
// const char** /*none,nullable*/ xdg_dbus_dbus_get_interfaces (::XdgDBusDBus* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_interfaces () noexcept;

// void xdg_dbus_dbus_set_features (XdgDBusDBus* object /*none*/, const gchar* const* value /*none*/);
// void xdg_dbus_dbus_set_features (::XdgDBusDBus* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)

// void xdg_dbus_dbus_set_interfaces (XdgDBusDBus* object /*none*/, const gchar* const* value /*none*/);
// void xdg_dbus_dbus_set_interfaces (::XdgDBusDBus* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)

// (signal) gboolean handle-add-match ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-add-match (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_add_match()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-add-match"); }

// (signal) gboolean handle-get-adt-audit-session-data ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-adt-audit-session-data (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_adt_audit_session_data()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-adt-audit-session-data"); }

// (signal) gboolean handle-get-connection-credentials ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-connection-credentials (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_connection_credentials()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-connection-credentials"); }

// (signal) gboolean handle-get-connection-selinux-security-context ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-connection-selinux-security-context (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_connection_selinux_security_context()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-connection-selinux-security-context"); }

// (signal) gboolean handle-get-connection-unix-process-id ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-connection-unix-process-id (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_connection_unix_process_id()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-connection-unix-process-id"); }

// (signal) gboolean handle-get-connection-unix-user ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-connection-unix-user (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_connection_unix_user()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-connection-unix-user"); }

// (signal) gboolean handle-get-id ( invocation /*none*/);
// (signal) gboolean handle-get-id (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> signal_handle_get_id()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-id"); }

// (signal) gboolean handle-get-name-owner ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-get-name-owner (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_get_name_owner()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-get-name-owner"); }

// (signal) gboolean handle-hello ( invocation /*none*/);
// (signal) gboolean handle-hello (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> signal_handle_hello()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> (*this, "handle-hello"); }

// (signal) gboolean handle-list-activatable-names ( invocation /*none*/);
// (signal) gboolean handle-list-activatable-names (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> signal_handle_list_activatable_names()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> (*this, "handle-list-activatable-names"); }

// (signal) gboolean handle-list-names ( invocation /*none*/);
// (signal) gboolean handle-list-names (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> signal_handle_list_names()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> (*this, "handle-list-names"); }

// (signal) gboolean handle-list-queued-owners ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-list-queued-owners (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_list_queued_owners()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-list-queued-owners"); }

// (signal) gboolean handle-name-has-owner ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-name-has-owner (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_name_has_owner()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-name-has-owner"); }

// (signal) gboolean handle-release-name ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-release-name (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_release_name()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-release-name"); }

// (signal) gboolean handle-reload-config ( invocation /*none*/);
// (signal) gboolean handle-reload-config (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> signal_handle_reload_config()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation)> (*this, "handle-reload-config"); }

// (signal) gboolean handle-remove-match ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-remove-match (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> signal_handle_remove_match()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0)> (*this, "handle-remove-match"); }

// (signal) gboolean handle-request-name ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// (signal) gboolean handle-request-name (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1)> signal_handle_request_name()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1)> (*this, "handle-request-name"); }

// (signal) gboolean handle-start-service-by-name ( invocation /*none*/, gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// (signal) gboolean handle-start-service-by-name (::GDBusMethodInvocation* invocation /*none*/, char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1)> signal_handle_start_service_by_name()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1)> (*this, "handle-start-service-by-name"); }

// (signal) gboolean handle-update-activation-environment ( invocation /*none*/,  arg_unnamed_arg0 /*none*/);
// (signal) gboolean handle-update-activation-environment (::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, GLib::Variant arg_unnamed_arg0)> signal_handle_update_activation_environment()
{ return gi::signal_proxy<bool(XdgDBus::DBus, Gio::DBusMethodInvocation invocation, GLib::Variant arg_unnamed_arg0)> (*this, "handle-update-activation-environment"); }

// (signal) void name-acquired (gchar* arg_unnamed_arg0 /*none*/);
// (signal) void name-acquired (char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<void(XdgDBus::DBus, gi::cstring_v arg_unnamed_arg0)> signal_name_acquired()
{ return gi::signal_proxy<void(XdgDBus::DBus, gi::cstring_v arg_unnamed_arg0)> (*this, "name-acquired"); }

// (signal) void name-lost (gchar* arg_unnamed_arg0 /*none*/);
// (signal) void name-lost (char* arg_unnamed_arg0 /*none*/);
gi::signal_proxy<void(XdgDBus::DBus, gi::cstring_v arg_unnamed_arg0)> signal_name_lost()
{ return gi::signal_proxy<void(XdgDBus::DBus, gi::cstring_v arg_unnamed_arg0)> (*this, "name-lost"); }

// (signal) void name-owner-changed (gchar* arg_unnamed_arg0 /*none*/, gchar* arg_unnamed_arg1 /*none*/, gchar* arg_unnamed_arg2 /*none*/);
// (signal) void name-owner-changed (char* arg_unnamed_arg0 /*none*/, char* arg_unnamed_arg1 /*none*/, char* arg_unnamed_arg2 /*none*/);
gi::signal_proxy<void(XdgDBus::DBus, gi::cstring_v arg_unnamed_arg0, gi::cstring_v arg_unnamed_arg1, gi::cstring_v arg_unnamed_arg2)> signal_name_owner_changed()
{ return gi::signal_proxy<void(XdgDBus::DBus, gi::cstring_v arg_unnamed_arg0, gi::cstring_v arg_unnamed_arg1, gi::cstring_v arg_unnamed_arg2)> (*this, "name-owner-changed"); }

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbus_extra_def.hpp>)
#include <xdgdbus/dbus_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbus_extra.hpp>)
#include <xdgdbus/dbus_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBus : public GI_XDGDBUS_DBUS_BASE
{ typedef GI_XDGDBUS_DBUS_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBus>
{ typedef XdgDBus::DBus type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusIfaceDef
{
typedef DBusIfaceDef self;
public:
typedef XdgDBus::DBus instance_type;
typedef ::XdgDBusDBusIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_add_match) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_adt_audit_session_data) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_connection_credentials) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_connection_selinux_security_context) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_connection_unix_process_id) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_connection_unix_user) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_id) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_name_owner) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_hello) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_list_activatable_names) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_list_names) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_list_queued_owners) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_name_has_owner) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_release_name) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_reload_config) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_remove_match) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_request_name) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_start_service_by_name) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_update_activation_environment) = self;
using GI_MEMBER_CHECK_CONFLICT(name_acquired) = self;
using GI_MEMBER_CHECK_CONFLICT(name_lost) = self;
using GI_MEMBER_CHECK_CONFLICT(name_owner_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DBus::handle_add_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_add_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_add_match_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_get_adt_audit_session_data (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_adt_audit_session_data (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_adt_audit_session_data_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_get_connection_credentials (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_credentials (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_connection_credentials_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_get_connection_selinux_security_context (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_selinux_security_context (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_connection_selinux_security_context_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_get_connection_unix_process_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_unix_process_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_connection_unix_process_id_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_get_connection_unix_user (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_unix_user (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_connection_unix_user_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_get_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_get_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_id_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean DBus::handle_get_name_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_name_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_get_name_owner_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_hello (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_hello (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_hello_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean DBus::handle_list_activatable_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_list_activatable_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_list_activatable_names_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean DBus::handle_list_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_list_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_list_names_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean DBus::handle_list_queued_owners (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_list_queued_owners (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_list_queued_owners_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_name_has_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_name_has_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_name_has_owner_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_release_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_release_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_release_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_reload_config (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_reload_config (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_reload_config_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean DBus::handle_remove_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_remove_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual bool handle_remove_match_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// gboolean DBus::handle_request_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBus::handle_request_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
virtual bool handle_request_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept = 0;

// gboolean DBus::handle_start_service_by_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBus::handle_start_service_by_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
virtual bool handle_start_service_by_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept = 0;

// gboolean DBus::handle_update_activation_environment (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GVariant* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_update_activation_environment (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/);
virtual bool handle_update_activation_environment_ (Gio::DBusMethodInvocation invocation, GLib::Variant arg_unnamed_arg0) noexcept = 0;

// void DBus::name_acquired (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void DBus::name_acquired (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual void name_acquired_ (const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// void DBus::name_lost (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void DBus::name_lost (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
virtual void name_lost_ (const gi::cstring_v arg_unnamed_arg0) noexcept = 0;

// void DBus::name_owner_changed (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, const gchar* arg_unnamed_arg2 /*none*/);
// void DBus::name_owner_changed (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, const char* arg_unnamed_arg2 /*none*/);
virtual void name_owner_changed_ (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, const gi::cstring_v arg_unnamed_arg2) noexcept = 0;


};

using DBusImpl = detail::InterfaceImpl<DBusIfaceDef>;

class DBusIfaceClassImpl: public detail::InterfaceClassImpl<DBusImpl>
{
friend class internal::DBusIfaceDef;
typedef DBusIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusImpl> super;

protected:
using super::super;

// gboolean DBus::handle_add_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_add_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_add_match_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_get_adt_audit_session_data (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_adt_audit_session_data (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_adt_audit_session_data_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_get_connection_credentials (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_credentials (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_connection_credentials_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_get_connection_selinux_security_context (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_selinux_security_context (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_connection_selinux_security_context_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_get_connection_unix_process_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_unix_process_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_connection_unix_process_id_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_get_connection_unix_user (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_connection_unix_user (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_connection_unix_user_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_get_id (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_get_id (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_id_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean DBus::handle_get_name_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_get_name_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_get_name_owner_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_hello (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_hello (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_hello_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean DBus::handle_list_activatable_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_list_activatable_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_list_activatable_names_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean DBus::handle_list_names (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_list_names (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_list_names_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean DBus::handle_list_queued_owners (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_list_queued_owners (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_list_queued_owners_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_name_has_owner (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_name_has_owner (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_name_has_owner_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_release_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_release_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_release_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_reload_config (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBus::handle_reload_config (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_reload_config_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean DBus::handle_remove_match (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_remove_match (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_remove_match_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0) noexcept override;

// gboolean DBus::handle_request_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBus::handle_request_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
GI_INLINE_DECL bool handle_request_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept override;

// gboolean DBus::handle_start_service_by_name (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
// gboolean DBus::handle_start_service_by_name (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_unnamed_arg0 /*none*/, guint arg_unnamed_arg1);
GI_INLINE_DECL bool handle_start_service_by_name_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_unnamed_arg0, guint arg_unnamed_arg1) noexcept override;

// gboolean DBus::handle_update_activation_environment (XdgDBusDBus* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GVariant* arg_unnamed_arg0 /*none*/);
// gboolean DBus::handle_update_activation_environment (::XdgDBusDBus* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL bool handle_update_activation_environment_ (Gio::DBusMethodInvocation invocation, GLib::Variant arg_unnamed_arg0) noexcept override;

// void DBus::name_acquired (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void DBus::name_acquired (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL void name_acquired_ (const gi::cstring_v arg_unnamed_arg0) noexcept override;

// void DBus::name_lost (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/);
// void DBus::name_lost (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/);
GI_INLINE_DECL void name_lost_ (const gi::cstring_v arg_unnamed_arg0) noexcept override;

// void DBus::name_owner_changed (XdgDBusDBus* object /*none*/, const gchar* arg_unnamed_arg0 /*none*/, const gchar* arg_unnamed_arg1 /*none*/, const gchar* arg_unnamed_arg2 /*none*/);
// void DBus::name_owner_changed (::XdgDBusDBus* object /*none*/, const char* arg_unnamed_arg0 /*none*/, const char* arg_unnamed_arg1 /*none*/, const char* arg_unnamed_arg2 /*none*/);
GI_INLINE_DECL void name_owner_changed_ (const gi::cstring_v arg_unnamed_arg0, const gi::cstring_v arg_unnamed_arg1, const gi::cstring_v arg_unnamed_arg2) noexcept override;


};


struct DBusIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_add_match)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_get_adt_audit_session_data)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_get_connection_credentials)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_get_connection_selinux_security_context)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_get_connection_unix_process_id)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_get_connection_unix_user)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_get_id)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_get_name_owner)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_hello)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_list_activatable_names)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_list_names)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_list_queued_owners)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_name_has_owner)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_release_name)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_reload_config)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_remove_match)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_request_name)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_start_service_by_name)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, handle_update_activation_environment)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, name_acquired)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, name_lost)
  GI_MEMBER_DEFINE(DBusIfaceClassImpl, name_owner_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_add_match),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_adt_audit_session_data),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_connection_credentials),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_connection_selinux_security_context),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_connection_unix_process_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_connection_unix_user),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_name_owner),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_hello),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_list_activatable_names),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_list_names),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_list_queued_owners),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_name_has_owner),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_release_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_reload_config),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_remove_match),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_request_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_start_service_by_name),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_update_activation_environment),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, name_acquired),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, name_lost),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, name_owner_changed)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
