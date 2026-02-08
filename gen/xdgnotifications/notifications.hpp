// AUTO-GENERATED

#ifndef _GI_XDGNOTIFICATIONS_NOTIFICATIONS_HPP_
#define _GI_XDGNOTIFICATIONS_NOTIFICATIONS_HPP_


namespace gi {

namespace repository {

namespace XdgNotifications {


class Notifications;

namespace base {


#define GI_XDGNOTIFICATIONS_NOTIFICATIONS_BASE base::NotificationsBase
class NotificationsBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgNotificationsNotifications BaseObjectType;

NotificationsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_notifications_notifications_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_notifications_notifications_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_notifications_notifications_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_notifications_notifications_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_notifications_notifications_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_notifications_notifications_call_close_notification (XdgNotificationsNotifications* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_close_notification (::XdgNotificationsNotifications* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_close_notification (guint arg_id, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_close_notification (guint arg_id, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_notifications_notifications_call_close_notification_finish (XdgNotificationsNotifications* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_close_notification_finish (::XdgNotificationsNotifications* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_close_notification_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_close_notification_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_notifications_notifications_call_close_notification_sync (XdgNotificationsNotifications* proxy /*none*/, guint arg_id, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_close_notification_sync (::XdgNotificationsNotifications* proxy /*none*/, guint arg_id, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_close_notification_sync (guint arg_id, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_close_notification_sync (guint arg_id) noexcept;
GI_INLINE_DECL bool call_close_notification_sync (guint arg_id, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_close_notification_sync (guint arg_id, GLib::Error * _error) noexcept;

// void xdg_notifications_notifications_call_get_capabilities (XdgNotificationsNotifications* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_get_capabilities (::XdgNotificationsNotifications* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_capabilities (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_capabilities (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_notifications_notifications_call_get_capabilities_finish (XdgNotificationsNotifications* proxy /*none*/, gchar*** out_caps /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_capabilities_finish (::XdgNotificationsNotifications* proxy /*none*/, char*** out_caps /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_capabilities_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_capabilities_finish (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_get_capabilities_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_get_capabilities_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_notifications_notifications_call_get_capabilities_sync (XdgNotificationsNotifications* proxy /*none*/, gchar*** out_caps /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_capabilities_sync (::XdgNotificationsNotifications* proxy /*none*/, char*** out_caps /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps) noexcept;
GI_INLINE_DECL bool call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_capabilities_sync (gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> * out_caps, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_get_capabilities_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>> call_get_capabilities_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_get_capabilities_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> call_get_capabilities_sync (GLib::Error * _error) noexcept;

// void xdg_notifications_notifications_call_get_server_information (XdgNotificationsNotifications* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_get_server_information (::XdgNotificationsNotifications* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_server_information (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_server_information (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_notifications_notifications_call_get_server_information_finish (XdgNotificationsNotifications* proxy /*none*/, gchar** out_name /*full,out,opt*/, gchar** out_vendor /*full,out,opt*/, gchar** out_version /*full,out,opt*/, gchar** out_spec_version /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_server_information_finish (::XdgNotificationsNotifications* proxy /*none*/, char** out_name /*full,out,opt*/, char** out_vendor /*full,out,opt*/, char** out_version /*full,out,opt*/, char** out_spec_version /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_server_information_finish (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_server_information_finish (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring>> call_get_server_information_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring> call_get_server_information_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_notifications_notifications_call_get_server_information_sync (XdgNotificationsNotifications* proxy /*none*/, gchar** out_name /*full,out,opt*/, gchar** out_vendor /*full,out,opt*/, gchar** out_version /*full,out,opt*/, gchar** out_spec_version /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_get_server_information_sync (::XdgNotificationsNotifications* proxy /*none*/, char** out_name /*full,out,opt*/, char** out_vendor /*full,out,opt*/, char** out_version /*full,out,opt*/, char** out_spec_version /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version) noexcept;
GI_INLINE_DECL bool call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_server_information_sync (gi::cstring * out_name, gi::cstring * out_vendor, gi::cstring * out_version, gi::cstring * out_spec_version, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring>> call_get_server_information_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring>> call_get_server_information_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring> call_get_server_information_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring, gi::cstring, gi::cstring> call_get_server_information_sync (GLib::Error * _error) noexcept;

// void xdg_notifications_notifications_call_inhibit (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_desktop_entry /*none*/, const gchar* arg_reason /*none*/, GVariant* arg_hints /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_inhibit (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_desktop_entry /*none*/, const char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_inhibit (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_inhibit (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_notifications_notifications_call_inhibit_finish (XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg3, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_inhibit_finish (::XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg3, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_inhibit_finish (guint * out_unnamed_arg3, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_inhibit_finish (guint * out_unnamed_arg3, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_inhibit_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_inhibit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_notifications_notifications_call_inhibit_sync (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_desktop_entry /*none*/, const gchar* arg_reason /*none*/, GVariant* arg_hints /*none*/, guint* out_unnamed_arg3, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_inhibit_sync (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_desktop_entry /*none*/, const char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/, guint* out_unnamed_arg3, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3) noexcept;
GI_INLINE_DECL bool call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, guint * out_unnamed_arg3, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_inhibit_sync (const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints, GLib::Error * _error) noexcept;

// void xdg_notifications_notifications_call_notify (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_app_name /*none*/, guint arg_replaces_id, const gchar* arg_app_icon /*none*/, const gchar* arg_summary /*none*/, const gchar* arg_body /*none*/, const gchar* const* arg_actions /*none*/, GVariant* arg_hints /*none*/, gint arg_timeout, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_notify (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_app_name /*none*/, guint arg_replaces_id, const char* arg_app_icon /*none*/, const char* arg_summary /*none*/, const char* arg_body /*none*/, const char* arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_actions in pointer depth (2 vs 1)

// gboolean xdg_notifications_notifications_call_notify_finish (XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg8, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_notify_finish (::XdgNotificationsNotifications* proxy /*none*/, guint* out_unnamed_arg8, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_notify_finish (guint * out_unnamed_arg8, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_notify_finish (guint * out_unnamed_arg8, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint>> call_notify_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> call_notify_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_notifications_notifications_call_notify_sync (XdgNotificationsNotifications* proxy /*none*/, const gchar* arg_app_name /*none*/, guint arg_replaces_id, const gchar* arg_app_icon /*none*/, const gchar* arg_summary /*none*/, const gchar* arg_body /*none*/, const gchar* const* arg_actions /*none*/, GVariant* arg_hints /*none*/, gint arg_timeout, guint* out_unnamed_arg8, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_notify_sync (::XdgNotificationsNotifications* proxy /*none*/, const char* arg_app_name /*none*/, guint arg_replaces_id, const char* arg_app_icon /*none*/, const char* arg_summary /*none*/, const char* arg_body /*none*/, const char* arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout, guint* out_unnamed_arg8, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_actions in pointer depth (2 vs 1)

// void xdg_notifications_notifications_call_un_inhibit (XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_notifications_notifications_call_un_inhibit (::XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_un_inhibit (guint arg_unnamed_arg0, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_un_inhibit (guint arg_unnamed_arg0, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_notifications_notifications_call_un_inhibit_finish (XdgNotificationsNotifications* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_notifications_notifications_call_un_inhibit_finish (::XdgNotificationsNotifications* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_un_inhibit_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_un_inhibit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_notifications_notifications_call_un_inhibit_sync (XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_notifications_notifications_call_un_inhibit_sync (::XdgNotificationsNotifications* proxy /*none*/, guint arg_unnamed_arg0, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_un_inhibit_sync (guint arg_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_un_inhibit_sync (guint arg_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_un_inhibit_sync (guint arg_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_un_inhibit_sync (guint arg_unnamed_arg0, GLib::Error * _error) noexcept;

// void xdg_notifications_notifications_complete_close_notification (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_notifications_notifications_complete_close_notification (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_close_notification (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_notifications_notifications_complete_get_capabilities (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* const* caps /*none*/);
// void xdg_notifications_notifications_complete_get_capabilities (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* caps /*none*/);
// SKIP; inconsistent caps in pointer depth (2 vs 1)

// void xdg_notifications_notifications_complete_get_server_information (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* name /*none*/, const gchar* vendor /*none*/, const gchar* version /*none*/, const gchar* spec_version /*none*/);
// void xdg_notifications_notifications_complete_get_server_information (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* name /*none*/, const char* vendor /*none*/, const char* version /*none*/, const char* spec_version /*none*/);
GI_INLINE_DECL void complete_get_server_information (Gio::DBusMethodInvocation invocation, const gi::cstring_v name, const gi::cstring_v vendor, const gi::cstring_v version, const gi::cstring_v spec_version) noexcept;

// void xdg_notifications_notifications_complete_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg3);
// void xdg_notifications_notifications_complete_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg3);
GI_INLINE_DECL void complete_inhibit (Gio::DBusMethodInvocation invocation, guint unnamed_arg3) noexcept;

// void xdg_notifications_notifications_complete_notify (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg8);
// void xdg_notifications_notifications_complete_notify (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint unnamed_arg8);
GI_INLINE_DECL void complete_notify (Gio::DBusMethodInvocation invocation, guint unnamed_arg8) noexcept;

// void xdg_notifications_notifications_complete_un_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_notifications_notifications_complete_un_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_un_inhibit (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_notifications_notifications_emit_action_invoked (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_action_key /*none*/);
// void xdg_notifications_notifications_emit_action_invoked (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_action_key /*none*/);
GI_INLINE_DECL void emit_action_invoked (guint arg_id, const gi::cstring_v arg_action_key) noexcept;

// void xdg_notifications_notifications_emit_activation_token (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_activation_token /*none*/);
// void xdg_notifications_notifications_emit_activation_token (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_activation_token /*none*/);
GI_INLINE_DECL void emit_activation_token (guint arg_id, const gi::cstring_v arg_activation_token) noexcept;

// void xdg_notifications_notifications_emit_notification_closed (XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
// void xdg_notifications_notifications_emit_notification_closed (::XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
GI_INLINE_DECL void emit_notification_closed (guint arg_id, guint arg_reason) noexcept;

// void xdg_notifications_notifications_emit_notification_replied (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_text /*none*/);
// void xdg_notifications_notifications_emit_notification_replied (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_text /*none*/);
GI_INLINE_DECL void emit_notification_replied (guint arg_id, const gi::cstring_v arg_text) noexcept;

// gboolean xdg_notifications_notifications_get_inhibited (XdgNotificationsNotifications* object /*none*/);
// gboolean xdg_notifications_notifications_get_inhibited (::XdgNotificationsNotifications* object /*none*/);
GI_INLINE_DECL bool get_inhibited () noexcept;

// void xdg_notifications_notifications_set_inhibited (XdgNotificationsNotifications* object /*none*/, gboolean value);
// void xdg_notifications_notifications_set_inhibited (::XdgNotificationsNotifications* object /*none*/, gboolean value);
GI_INLINE_DECL void set_inhibited (gboolean value) noexcept;

gi::property_proxy<bool, base::NotificationsBase> property_inhibited()
{ return gi::property_proxy<bool, base::NotificationsBase> (*this, "inhibited"); }
const gi::property_proxy<bool, base::NotificationsBase> property_inhibited() const
{ return gi::property_proxy<bool, base::NotificationsBase> (*this, "inhibited"); }

// (signal) void action-invoked (guint arg_id, gchar* arg_action_key /*none*/);
// (signal) void action-invoked (guint arg_id, char* arg_action_key /*none*/);
gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, gi::cstring_v arg_action_key)> signal_action_invoked()
{ return gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, gi::cstring_v arg_action_key)> (*this, "action-invoked"); }

// (signal) void activation-token (guint arg_id, gchar* arg_activation_token /*none*/);
// (signal) void activation-token (guint arg_id, char* arg_activation_token /*none*/);
gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, gi::cstring_v arg_activation_token)> signal_activation_token()
{ return gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, gi::cstring_v arg_activation_token)> (*this, "activation-token"); }

// (signal) gboolean handle-close-notification ( invocation /*none*/, guint arg_id);
// (signal) gboolean handle-close-notification (::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, guint arg_id)> signal_handle_close_notification()
{ return gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, guint arg_id)> (*this, "handle-close-notification"); }

// (signal) gboolean handle-get-capabilities ( invocation /*none*/);
// (signal) gboolean handle-get-capabilities (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation)> signal_handle_get_capabilities()
{ return gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-capabilities"); }

// (signal) gboolean handle-get-server-information ( invocation /*none*/);
// (signal) gboolean handle-get-server-information (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation)> signal_handle_get_server_information()
{ return gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-server-information"); }

// (signal) gboolean handle-inhibit ( invocation /*none*/, gchar* arg_desktop_entry /*none*/, gchar* arg_reason /*none*/,  arg_hints /*none*/);
// (signal) gboolean handle-inhibit (::GDBusMethodInvocation* invocation /*none*/, char* arg_desktop_entry /*none*/, char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/);
gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_desktop_entry, gi::cstring_v arg_reason, GLib::Variant arg_hints)> signal_handle_inhibit()
{ return gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_desktop_entry, gi::cstring_v arg_reason, GLib::Variant arg_hints)> (*this, "handle-inhibit"); }

// (signal) gboolean handle-notify ( invocation /*none*/, gchar* arg_app_name /*none*/, guint arg_replaces_id, gchar* arg_app_icon /*none*/, gchar* arg_summary /*none*/, gchar* arg_body /*none*/,  arg_actions /*none*/,  arg_hints /*none*/, gint arg_timeout);
// (signal) gboolean handle-notify (::GDBusMethodInvocation* invocation /*none*/, char* arg_app_name /*none*/, guint arg_replaces_id, char* arg_app_icon /*none*/, char* arg_summary /*none*/, char* arg_body /*none*/, char** arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout);
gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_app_name, guint arg_replaces_id, gi::cstring_v arg_app_icon, gi::cstring_v arg_summary, gi::cstring_v arg_body, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_actions, GLib::Variant arg_hints, gint arg_timeout)> signal_handle_notify()
{ return gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_app_name, guint arg_replaces_id, gi::cstring_v arg_app_icon, gi::cstring_v arg_summary, gi::cstring_v arg_body, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_actions, GLib::Variant arg_hints, gint arg_timeout)> (*this, "handle-notify"); }

// (signal) gboolean handle-un-inhibit ( invocation /*none*/, guint arg_unnamed_arg0);
// (signal) gboolean handle-un-inhibit (::GDBusMethodInvocation* invocation /*none*/, guint arg_unnamed_arg0);
gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, guint arg_unnamed_arg0)> signal_handle_un_inhibit()
{ return gi::signal_proxy<bool(XdgNotifications::Notifications, Gio::DBusMethodInvocation invocation, guint arg_unnamed_arg0)> (*this, "handle-un-inhibit"); }

// (signal) void notification-closed (guint arg_id, guint arg_reason);
// (signal) void notification-closed (guint arg_id, guint arg_reason);
gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, guint arg_reason)> signal_notification_closed()
{ return gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, guint arg_reason)> (*this, "notification-closed"); }

// (signal) void notification-replied (guint arg_id, gchar* arg_text /*none*/);
// (signal) void notification-replied (guint arg_id, char* arg_text /*none*/);
gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, gi::cstring_v arg_text)> signal_notification_replied()
{ return gi::signal_proxy<void(XdgNotifications::Notifications, guint arg_id, gi::cstring_v arg_text)> (*this, "notification-replied"); }

}; // class

} // namespace base

} // namespace XdgNotifications

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgnotifications/notifications_extra_def.hpp>)
#include <xdgnotifications/notifications_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgnotifications/notifications_extra.hpp>)
#include <xdgnotifications/notifications_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgNotifications {

class Notifications : public GI_XDGNOTIFICATIONS_NOTIFICATIONS_BASE
{ typedef GI_XDGNOTIFICATIONS_NOTIFICATIONS_BASE super_type; using super_type::super_type; };

} // namespace XdgNotifications

template<> struct declare_cpptype_of<::XdgNotificationsNotifications>
{ typedef XdgNotifications::Notifications type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgNotifications {

namespace impl {

namespace internal {


class NotificationsIfaceDef
{
typedef NotificationsIfaceDef self;
public:
typedef XdgNotifications::Notifications instance_type;
typedef ::XdgNotificationsNotificationsIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(action_invoked) = self;
using GI_MEMBER_CHECK_CONFLICT(activation_token) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_close_notification) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_capabilities) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_server_information) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_inhibit) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_notify) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_un_inhibit) = self;
using GI_MEMBER_CHECK_CONFLICT(notification_closed) = self;
using GI_MEMBER_CHECK_CONFLICT(notification_replied) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~NotificationsIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Notifications::action_invoked (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_action_key /*none*/);
// void Notifications::action_invoked (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_action_key /*none*/);
virtual void action_invoked_ (guint arg_id, const gi::cstring_v arg_action_key) noexcept = 0;

// void Notifications::activation_token (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_activation_token /*none*/);
// void Notifications::activation_token (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_activation_token /*none*/);
virtual void activation_token_ (guint arg_id, const gi::cstring_v arg_activation_token) noexcept = 0;

// gboolean Notifications::handle_close_notification (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_id);
// gboolean Notifications::handle_close_notification (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
virtual bool handle_close_notification_ (Gio::DBusMethodInvocation invocation, guint arg_id) noexcept = 0;

// gboolean Notifications::handle_get_capabilities (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Notifications::handle_get_capabilities (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_capabilities_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean Notifications::handle_get_server_information (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Notifications::handle_get_server_information (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_server_information_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean Notifications::handle_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_desktop_entry /*none*/, const gchar* arg_reason /*none*/, GVariant* arg_hints /*none*/);
// gboolean Notifications::handle_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_desktop_entry /*none*/, const char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/);
virtual bool handle_inhibit_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints) noexcept = 0;

// gboolean Notifications::handle_notify (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_app_name /*none*/, guint arg_replaces_id, const gchar* arg_app_icon /*none*/, const gchar* arg_summary /*none*/, const gchar* arg_body /*none*/, const gchar* const* arg_actions /*none*/, GVariant* arg_hints /*none*/, gint arg_timeout);
// gboolean Notifications::handle_notify (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_app_name /*none*/, guint arg_replaces_id, const char* arg_app_icon /*none*/, const char* arg_summary /*none*/, const char* arg_body /*none*/, const char* arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout);
// SKIP; inconsistent arg_actions in pointer depth (2 vs 1)
virtual gboolean handle_notify_ (::GDBusMethodInvocation* invocation, const gchar* arg_app_name, guint arg_replaces_id, const gchar* arg_app_icon, const gchar* arg_summary, const gchar* arg_body, const gchar* const* arg_actions, ::GVariant* arg_hints, gint arg_timeout) noexcept = 0;

// gboolean Notifications::handle_un_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_unnamed_arg0);
// gboolean Notifications::handle_un_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_unnamed_arg0);
virtual bool handle_un_inhibit_ (Gio::DBusMethodInvocation invocation, guint arg_unnamed_arg0) noexcept = 0;

// void Notifications::notification_closed (XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
// void Notifications::notification_closed (::XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
virtual void notification_closed_ (guint arg_id, guint arg_reason) noexcept = 0;

// void Notifications::notification_replied (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_text /*none*/);
// void Notifications::notification_replied (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_text /*none*/);
virtual void notification_replied_ (guint arg_id, const gi::cstring_v arg_text) noexcept = 0;


};

using NotificationsImpl = detail::InterfaceImpl<NotificationsIfaceDef>;

class NotificationsIfaceClassImpl: public detail::InterfaceClassImpl<NotificationsImpl>
{
friend class internal::NotificationsIfaceDef;
typedef NotificationsIfaceClassImpl self;
typedef detail::InterfaceClassImpl<NotificationsImpl> super;

protected:
using super::super;

// void Notifications::action_invoked (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_action_key /*none*/);
// void Notifications::action_invoked (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_action_key /*none*/);
GI_INLINE_DECL void action_invoked_ (guint arg_id, const gi::cstring_v arg_action_key) noexcept override;

// void Notifications::activation_token (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_activation_token /*none*/);
// void Notifications::activation_token (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_activation_token /*none*/);
GI_INLINE_DECL void activation_token_ (guint arg_id, const gi::cstring_v arg_activation_token) noexcept override;

// gboolean Notifications::handle_close_notification (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_id);
// gboolean Notifications::handle_close_notification (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_id);
GI_INLINE_DECL bool handle_close_notification_ (Gio::DBusMethodInvocation invocation, guint arg_id) noexcept override;

// gboolean Notifications::handle_get_capabilities (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Notifications::handle_get_capabilities (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_capabilities_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean Notifications::handle_get_server_information (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Notifications::handle_get_server_information (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_server_information_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean Notifications::handle_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_desktop_entry /*none*/, const gchar* arg_reason /*none*/, GVariant* arg_hints /*none*/);
// gboolean Notifications::handle_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_desktop_entry /*none*/, const char* arg_reason /*none*/, ::GVariant* arg_hints /*none*/);
GI_INLINE_DECL bool handle_inhibit_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_desktop_entry, const gi::cstring_v arg_reason, GLib::Variant arg_hints) noexcept override;

// gboolean Notifications::handle_notify (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_app_name /*none*/, guint arg_replaces_id, const gchar* arg_app_icon /*none*/, const gchar* arg_summary /*none*/, const gchar* arg_body /*none*/, const gchar* const* arg_actions /*none*/, GVariant* arg_hints /*none*/, gint arg_timeout);
// gboolean Notifications::handle_notify (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_app_name /*none*/, guint arg_replaces_id, const char* arg_app_icon /*none*/, const char* arg_summary /*none*/, const char* arg_body /*none*/, const char* arg_actions /*none*/, ::GVariant* arg_hints /*none*/, gint arg_timeout);
// SKIP; inconsistent arg_actions in pointer depth (2 vs 1)
GI_INLINE_DECL gboolean handle_notify_ (::GDBusMethodInvocation* invocation, const gchar* arg_app_name, guint arg_replaces_id, const gchar* arg_app_icon, const gchar* arg_summary, const gchar* arg_body, const gchar* const* arg_actions, ::GVariant* arg_hints, gint arg_timeout) noexcept override;

// gboolean Notifications::handle_un_inhibit (XdgNotificationsNotifications* object /*none*/, GDBusMethodInvocation* invocation /*none*/, guint arg_unnamed_arg0);
// gboolean Notifications::handle_un_inhibit (::XdgNotificationsNotifications* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, guint arg_unnamed_arg0);
GI_INLINE_DECL bool handle_un_inhibit_ (Gio::DBusMethodInvocation invocation, guint arg_unnamed_arg0) noexcept override;

// void Notifications::notification_closed (XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
// void Notifications::notification_closed (::XdgNotificationsNotifications* object /*none*/, guint arg_id, guint arg_reason);
GI_INLINE_DECL void notification_closed_ (guint arg_id, guint arg_reason) noexcept override;

// void Notifications::notification_replied (XdgNotificationsNotifications* object /*none*/, guint arg_id, const gchar* arg_text /*none*/);
// void Notifications::notification_replied (::XdgNotificationsNotifications* object /*none*/, guint arg_id, const char* arg_text /*none*/);
GI_INLINE_DECL void notification_replied_ (guint arg_id, const gi::cstring_v arg_text) noexcept override;


};


struct NotificationsIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, action_invoked)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, activation_token)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, handle_close_notification)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, handle_get_capabilities)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, handle_get_server_information)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, handle_inhibit)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, handle_notify)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, handle_un_inhibit)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, notification_closed)
  GI_MEMBER_DEFINE(NotificationsIfaceClassImpl, notification_replied)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, action_invoked),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activation_token),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_close_notification),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_capabilities),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_server_information),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_inhibit),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_notify),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_un_inhibit),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, notification_closed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, notification_replied)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgNotifications

} // namespace repository

} // namespace gi

#endif
