// AUTO-GENERATED

#ifndef _GI_WEBVIEW_MASTER_HPP_
#define _GI_WEBVIEW_MASTER_HPP_


namespace gi {

namespace repository {

namespace Webview {


class Master;

namespace base {


#define GI_WEBVIEW_MASTER_BASE base::MasterBase
class MasterBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::WebviewMaster BaseObjectType;

MasterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_master_get_type(); } 

// GDBusInterfaceInfo* /*none*/ webview_master_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ webview_master_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint webview_master_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint webview_master_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void webview_master_call_get_start_data (WebviewMaster* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_get_start_data (::WebviewMaster* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_start_data (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_start_data (Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_master_call_get_start_data_finish (WebviewMaster* proxy /*none*/, gchar** out_appId /*full,out,opt*/, gchar** out_waylandDisplay /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_get_start_data_finish (::WebviewMaster* proxy /*none*/, char** out_appId /*full,out,opt*/, char** out_waylandDisplay /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_start_data_finish (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_start_data_finish (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, gi::cstring>> call_get_start_data_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> call_get_start_data_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_master_call_get_start_data_sync (WebviewMaster* proxy /*none*/, gchar** out_appId /*full,out,opt*/, gchar** out_waylandDisplay /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_get_start_data_sync (::WebviewMaster* proxy /*none*/, char** out_appId /*full,out,opt*/, char** out_waylandDisplay /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay) noexcept;
GI_INLINE_DECL bool call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_start_data_sync (gi::cstring * out_appId, gi::cstring * out_waylandDisplay, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, gi::cstring>> call_get_start_data_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, gi::cstring>> call_get_start_data_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> call_get_start_data_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gi::cstring> call_get_start_data_sync (GLib::Error * _error) noexcept;

// void webview_master_call_message_received (WebviewMaster* proxy /*none*/, const gchar* arg_message /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_message_received (::WebviewMaster* proxy /*none*/, const char* arg_message /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_message_received (const gi::cstring_v arg_message, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_message_received (const gi::cstring_v arg_message, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_master_call_message_received_finish (WebviewMaster* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_message_received_finish (::WebviewMaster* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_message_received_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_message_received_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_master_call_message_received_sync (WebviewMaster* proxy /*none*/, const gchar* arg_message /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_message_received_sync (::WebviewMaster* proxy /*none*/, const char* arg_message /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_message_received_sync (const gi::cstring_v arg_message, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_message_received_sync (const gi::cstring_v arg_message) noexcept;
GI_INLINE_DECL bool call_message_received_sync (const gi::cstring_v arg_message, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_message_received_sync (const gi::cstring_v arg_message, GLib::Error * _error) noexcept;

// void webview_master_call_navigation_done (WebviewMaster* proxy /*none*/, gboolean arg_success, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_navigation_done (::WebviewMaster* proxy /*none*/, gboolean arg_success, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_navigation_done (gboolean arg_success, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_navigation_done (gboolean arg_success, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_master_call_navigation_done_finish (WebviewMaster* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_navigation_done_finish (::WebviewMaster* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigation_done_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_navigation_done_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_master_call_navigation_done_sync (WebviewMaster* proxy /*none*/, gboolean arg_success, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_navigation_done_sync (::WebviewMaster* proxy /*none*/, gboolean arg_success, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigation_done_sync (gboolean arg_success, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_navigation_done_sync (gboolean arg_success) noexcept;
GI_INLINE_DECL bool call_navigation_done_sync (gboolean arg_success, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_navigation_done_sync (gboolean arg_success, GLib::Error * _error) noexcept;

// void webview_master_call_navigation_started (WebviewMaster* proxy /*none*/, const gchar* arg_uri /*none*/, gboolean arg_newWindow, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_navigation_started (::WebviewMaster* proxy /*none*/, const char* arg_uri /*none*/, gboolean arg_newWindow, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_navigation_started (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_navigation_started (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_master_call_navigation_started_finish (WebviewMaster* proxy /*none*/, gboolean* out_result, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_navigation_started_finish (::WebviewMaster* proxy /*none*/, gboolean* out_result, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigation_started_finish (bool * out_result, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_navigation_started_finish (bool * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_navigation_started_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_navigation_started_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_master_call_navigation_started_sync (WebviewMaster* proxy /*none*/, const gchar* arg_uri /*none*/, gboolean arg_newWindow, gboolean* out_result, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_navigation_started_sync (::WebviewMaster* proxy /*none*/, const char* arg_uri /*none*/, gboolean arg_newWindow, gboolean* out_result, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result) noexcept;
GI_INLINE_DECL bool call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, bool * out_result, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_navigation_started_sync (const gi::cstring_v arg_uri, gboolean arg_newWindow, GLib::Error * _error) noexcept;

// void webview_master_call_navigation_state_update (WebviewMaster* proxy /*none*/, const gchar* arg_url /*none*/, const gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_navigation_state_update (::WebviewMaster* proxy /*none*/, const char* arg_url /*none*/, const char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_navigation_state_update (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_navigation_state_update (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_master_call_navigation_state_update_finish (WebviewMaster* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_navigation_state_update_finish (::WebviewMaster* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigation_state_update_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_navigation_state_update_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_master_call_navigation_state_update_sync (WebviewMaster* proxy /*none*/, const gchar* arg_url /*none*/, const gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_navigation_state_update_sync (::WebviewMaster* proxy /*none*/, const char* arg_url /*none*/, const char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward) noexcept;
GI_INLINE_DECL bool call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_navigation_state_update_sync (const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward, GLib::Error * _error) noexcept;

// void webview_master_call_script_dialog (WebviewMaster* proxy /*none*/, gint arg_type, const gchar* arg_text /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_call_script_dialog (::WebviewMaster* proxy /*none*/, gint arg_type, const char* arg_text /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_script_dialog (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_script_dialog (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_master_call_script_dialog_finish (WebviewMaster* proxy /*none*/, gboolean* out_accepted, gchar** out_text /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_master_call_script_dialog_finish (::WebviewMaster* proxy /*none*/, gboolean* out_accepted, char** out_text /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_script_dialog_finish (bool * out_accepted, gi::cstring * out_text, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_script_dialog_finish (bool * out_accepted, gi::cstring * out_text, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool, gi::cstring>> call_script_dialog_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, bool, gi::cstring> call_script_dialog_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_master_call_script_dialog_sync (WebviewMaster* proxy /*none*/, gint arg_type, const gchar* arg_text /*none*/, const gchar* arg_value /*none*/, gboolean* out_accepted, gchar** out_text /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_master_call_script_dialog_sync (::WebviewMaster* proxy /*none*/, gint arg_type, const char* arg_text /*none*/, const char* arg_value /*none*/, gboolean* out_accepted, char** out_text /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text) noexcept;
GI_INLINE_DECL bool call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, bool * out_accepted, gi::cstring * out_text, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool, gi::cstring>> call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool, gi::cstring>> call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value) noexcept;
GI_INLINE_DECL std::tuple<bool, bool, gi::cstring> call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, bool, gi::cstring> call_script_dialog_sync (gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value, GLib::Error * _error) noexcept;

// void webview_master_complete_get_start_data (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* appId /*none*/, const gchar* waylandDisplay /*none*/);
// void webview_master_complete_get_start_data (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* appId /*none*/, const char* waylandDisplay /*none*/);
GI_INLINE_DECL void complete_get_start_data (Gio::DBusMethodInvocation invocation, const gi::cstring_v appId, const gi::cstring_v waylandDisplay) noexcept;

// void webview_master_complete_message_received (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_master_complete_message_received (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_message_received (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_master_complete_navigation_done (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_master_complete_navigation_done (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_navigation_done (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_master_complete_navigation_started (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean result);
// void webview_master_complete_navigation_started (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean result);
GI_INLINE_DECL void complete_navigation_started (Gio::DBusMethodInvocation invocation, gboolean result) noexcept;

// void webview_master_complete_navigation_state_update (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_master_complete_navigation_state_update (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_navigation_state_update (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_master_complete_script_dialog (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean accepted, const gchar* text /*none*/);
// void webview_master_complete_script_dialog (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean accepted, const char* text /*none*/);
GI_INLINE_DECL void complete_script_dialog (Gio::DBusMethodInvocation invocation, gboolean accepted, const gi::cstring_v text) noexcept;

// void webview_master_emit_data_server_started (WebviewMaster* object /*none*/, guint16 arg_port, const gchar* arg_password /*none*/);
// void webview_master_emit_data_server_started (::WebviewMaster* object /*none*/, guint16 arg_port, const char* arg_password /*none*/);
GI_INLINE_DECL void emit_data_server_started (guint16 arg_port, const gi::cstring_v arg_password) noexcept;

// (signal) void data-server-started (guint arg_port, gchar* arg_password /*none*/);
// (signal) void data-server-started (guint arg_port, char* arg_password /*none*/);
gi::signal_proxy<void(Webview::Master, guint arg_port, gi::cstring_v arg_password)> signal_data_server_started()
{ return gi::signal_proxy<void(Webview::Master, guint arg_port, gi::cstring_v arg_password)> (*this, "data-server-started"); }

// (signal) gboolean handle-get-start-data ( invocation /*none*/);
// (signal) gboolean handle-get-start-data (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation)> signal_handle_get_start_data()
{ return gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-start-data"); }

// (signal) gboolean handle-message-received ( invocation /*none*/, gchar* arg_message /*none*/);
// (signal) gboolean handle-message-received (::GDBusMethodInvocation* invocation /*none*/, char* arg_message /*none*/);
gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_message)> signal_handle_message_received()
{ return gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_message)> (*this, "handle-message-received"); }

// (signal) gboolean handle-navigation-done ( invocation /*none*/, gboolean arg_success);
// (signal) gboolean handle-navigation-done (::GDBusMethodInvocation* invocation /*none*/, gboolean arg_success);
gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gboolean arg_success)> signal_handle_navigation_done()
{ return gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gboolean arg_success)> (*this, "handle-navigation-done"); }

// (signal) gboolean handle-navigation-started ( invocation /*none*/, gchar* arg_uri /*none*/, gboolean arg_newWindow);
// (signal) gboolean handle-navigation-started (::GDBusMethodInvocation* invocation /*none*/, char* arg_uri /*none*/, gboolean arg_newWindow);
gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_uri, gboolean arg_newWindow)> signal_handle_navigation_started()
{ return gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_uri, gboolean arg_newWindow)> (*this, "handle-navigation-started"); }

// (signal) gboolean handle-navigation-state-update ( invocation /*none*/, gchar* arg_url /*none*/, gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
// (signal) gboolean handle-navigation-state-update (::GDBusMethodInvocation* invocation /*none*/, char* arg_url /*none*/, char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_url, gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward)> signal_handle_navigation_state_update()
{ return gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_url, gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward)> (*this, "handle-navigation-state-update"); }

// (signal) gboolean handle-script-dialog ( invocation /*none*/, gint arg_type, gchar* arg_text /*none*/, gchar* arg_value /*none*/);
// (signal) gboolean handle-script-dialog (::GDBusMethodInvocation* invocation /*none*/, gint arg_type, char* arg_text /*none*/, char* arg_value /*none*/);
gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gint arg_type, gi::cstring_v arg_text, gi::cstring_v arg_value)> signal_handle_script_dialog()
{ return gi::signal_proxy<bool(Webview::Master, Gio::DBusMethodInvocation invocation, gint arg_type, gi::cstring_v arg_text, gi::cstring_v arg_value)> (*this, "handle-script-dialog"); }

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/master_extra_def.hpp>)
#include <webview/master_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/master_extra.hpp>)
#include <webview/master_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class Master : public GI_WEBVIEW_MASTER_BASE
{ typedef GI_WEBVIEW_MASTER_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewMaster>
{ typedef Webview::Master type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class MasterIfaceDef
{
typedef MasterIfaceDef self;
public:
typedef Webview::Master instance_type;
typedef ::WebviewMasterIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(data_server_started) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_start_data) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_message_received) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_navigation_done) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_navigation_started) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_navigation_state_update) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_script_dialog) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MasterIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Master::data_server_started (WebviewMaster* object /*none*/, guint16 arg_port, const gchar* arg_password /*none*/);
// void Master::data_server_started (::WebviewMaster* object /*none*/, guint16 arg_port, const char* arg_password /*none*/);
virtual void data_server_started_ (guint16 arg_port, const gi::cstring_v arg_password) noexcept = 0;

// gboolean Master::handle_get_start_data (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Master::handle_get_start_data (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_start_data_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean Master::handle_message_received (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_message /*none*/);
// gboolean Master::handle_message_received (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_message /*none*/);
virtual bool handle_message_received_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_message) noexcept = 0;

// gboolean Master::handle_navigation_done (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gboolean arg_success);
// gboolean Master::handle_navigation_done (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gboolean arg_success);
virtual bool handle_navigation_done_ (Gio::DBusMethodInvocation invocation, gboolean arg_success) noexcept = 0;

// gboolean Master::handle_navigation_started (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_uri /*none*/, gboolean arg_newWindow);
// gboolean Master::handle_navigation_started (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_uri /*none*/, gboolean arg_newWindow);
virtual bool handle_navigation_started_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_uri, gboolean arg_newWindow) noexcept = 0;

// gboolean Master::handle_navigation_state_update (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_url /*none*/, const gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
// gboolean Master::handle_navigation_state_update (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_url /*none*/, const char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
virtual bool handle_navigation_state_update_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward) noexcept = 0;

// gboolean Master::handle_script_dialog (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint arg_type, const gchar* arg_text /*none*/, const gchar* arg_value /*none*/);
// gboolean Master::handle_script_dialog (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint arg_type, const char* arg_text /*none*/, const char* arg_value /*none*/);
virtual bool handle_script_dialog_ (Gio::DBusMethodInvocation invocation, gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value) noexcept = 0;


};

using MasterImpl = detail::InterfaceImpl<MasterIfaceDef>;

class MasterIfaceClassImpl: public detail::InterfaceClassImpl<MasterImpl>
{
friend class internal::MasterIfaceDef;
typedef MasterIfaceClassImpl self;
typedef detail::InterfaceClassImpl<MasterImpl> super;

protected:
using super::super;

// void Master::data_server_started (WebviewMaster* object /*none*/, guint16 arg_port, const gchar* arg_password /*none*/);
// void Master::data_server_started (::WebviewMaster* object /*none*/, guint16 arg_port, const char* arg_password /*none*/);
GI_INLINE_DECL void data_server_started_ (guint16 arg_port, const gi::cstring_v arg_password) noexcept override;

// gboolean Master::handle_get_start_data (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Master::handle_get_start_data (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_start_data_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean Master::handle_message_received (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_message /*none*/);
// gboolean Master::handle_message_received (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_message /*none*/);
GI_INLINE_DECL bool handle_message_received_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_message) noexcept override;

// gboolean Master::handle_navigation_done (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gboolean arg_success);
// gboolean Master::handle_navigation_done (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gboolean arg_success);
GI_INLINE_DECL bool handle_navigation_done_ (Gio::DBusMethodInvocation invocation, gboolean arg_success) noexcept override;

// gboolean Master::handle_navigation_started (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_uri /*none*/, gboolean arg_newWindow);
// gboolean Master::handle_navigation_started (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_uri /*none*/, gboolean arg_newWindow);
GI_INLINE_DECL bool handle_navigation_started_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_uri, gboolean arg_newWindow) noexcept override;

// gboolean Master::handle_navigation_state_update (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_url /*none*/, const gchar* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
// gboolean Master::handle_navigation_state_update (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_url /*none*/, const char* arg_title /*none*/, gboolean arg_canGoBack, gboolean arg_canGoForward);
GI_INLINE_DECL bool handle_navigation_state_update_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url, const gi::cstring_v arg_title, gboolean arg_canGoBack, gboolean arg_canGoForward) noexcept override;

// gboolean Master::handle_script_dialog (WebviewMaster* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint arg_type, const gchar* arg_text /*none*/, const gchar* arg_value /*none*/);
// gboolean Master::handle_script_dialog (::WebviewMaster* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint arg_type, const char* arg_text /*none*/, const char* arg_value /*none*/);
GI_INLINE_DECL bool handle_script_dialog_ (Gio::DBusMethodInvocation invocation, gint arg_type, const gi::cstring_v arg_text, const gi::cstring_v arg_value) noexcept override;


};


struct MasterIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(MasterIfaceClassImpl, data_server_started)
  GI_MEMBER_DEFINE(MasterIfaceClassImpl, handle_get_start_data)
  GI_MEMBER_DEFINE(MasterIfaceClassImpl, handle_message_received)
  GI_MEMBER_DEFINE(MasterIfaceClassImpl, handle_navigation_done)
  GI_MEMBER_DEFINE(MasterIfaceClassImpl, handle_navigation_started)
  GI_MEMBER_DEFINE(MasterIfaceClassImpl, handle_navigation_state_update)
  GI_MEMBER_DEFINE(MasterIfaceClassImpl, handle_script_dialog)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, data_server_started),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_start_data),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_message_received),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_navigation_done),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_navigation_started),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_navigation_state_update),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_script_dialog)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
