// AUTO-GENERATED

#ifndef _GI_WEBVIEW_HELPER_HPP_
#define _GI_WEBVIEW_HELPER_HPP_


namespace gi {

namespace repository {

namespace Webview {


class Helper;

namespace base {


#define GI_WEBVIEW_HELPER_BASE base::HelperBase
class HelperBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::WebviewHelper BaseObjectType;

HelperBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_helper_get_type(); } 

// GDBusInterfaceInfo* /*none*/ webview_helper_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ webview_helper_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint webview_helper_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint webview_helper_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void webview_helper_call_create (WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gchar* arg_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_create (::WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_create (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_create (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_create_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_create_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_create_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_create_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_create_sync (WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gchar* arg_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_create_sync (::WebviewHelper* proxy /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path) noexcept;
GI_INLINE_DECL bool call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_create_sync (gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path, GLib::Error * _error) noexcept;

// void webview_helper_call_eval (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_eval (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_eval (const gi::cstring_v arg_js, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_eval (const gi::cstring_v arg_js, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_eval_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_eval_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_eval_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_eval_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_eval_sync (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_eval_sync (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_eval_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_eval_sync (const gi::cstring_v arg_js) noexcept;
GI_INLINE_DECL bool call_eval_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_eval_sync (const gi::cstring_v arg_js, GLib::Error * _error) noexcept;

// void webview_helper_call_get_win_id (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_get_win_id (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_win_id (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_win_id (Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_get_win_id_finish (WebviewHelper* proxy /*none*/, guint64* out_result, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_get_win_id_finish (::WebviewHelper* proxy /*none*/, guint64* out_result, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_win_id_finish (guint64 * out_result, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_win_id_finish (guint64 * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint64>> call_get_win_id_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> call_get_win_id_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_get_win_id_sync (WebviewHelper* proxy /*none*/, guint64* out_result, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_get_win_id_sync (::WebviewHelper* proxy /*none*/, guint64* out_result, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_win_id_sync (guint64 * out_result, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_win_id_sync (guint64 * out_result) noexcept;
GI_INLINE_DECL bool call_get_win_id_sync (guint64 * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_win_id_sync (guint64 * out_result, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint64>> call_get_win_id_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, guint64>> call_get_win_id_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> call_get_win_id_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> call_get_win_id_sync (GLib::Error * _error) noexcept;

// void webview_helper_call_init (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_init (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_init (const gi::cstring_v arg_js, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_init (const gi::cstring_v arg_js, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_init_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_init_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_init_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_init_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_init_sync (WebviewHelper* proxy /*none*/, const gchar* arg_js /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_init_sync (::WebviewHelper* proxy /*none*/, const char* arg_js /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_init_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_init_sync (const gi::cstring_v arg_js) noexcept;
GI_INLINE_DECL bool call_init_sync (const gi::cstring_v arg_js, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_init_sync (const gi::cstring_v arg_js, GLib::Error * _error) noexcept;

// void webview_helper_call_navigate (WebviewHelper* proxy /*none*/, const gchar* arg_url /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_navigate (::WebviewHelper* proxy /*none*/, const char* arg_url /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_navigate (const gi::cstring_v arg_url, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_navigate (const gi::cstring_v arg_url, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_navigate_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_navigate_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigate_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_navigate_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_navigate_sync (WebviewHelper* proxy /*none*/, const gchar* arg_url /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_navigate_sync (::WebviewHelper* proxy /*none*/, const char* arg_url /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_navigate_sync (const gi::cstring_v arg_url, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_navigate_sync (const gi::cstring_v arg_url) noexcept;
GI_INLINE_DECL bool call_navigate_sync (const gi::cstring_v arg_url, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_navigate_sync (const gi::cstring_v arg_url, GLib::Error * _error) noexcept;

// void webview_helper_call_reload (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_reload (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_reload (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_reload (Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_reload_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_reload_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_reload_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_reload_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_reload_sync (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_reload_sync (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_reload_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_reload_sync () noexcept;
GI_INLINE_DECL bool call_reload_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_reload_sync (GLib::Error * _error) noexcept;

// void webview_helper_call_resolve (WebviewHelper* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_resolve (::WebviewHelper* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_resolve (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_resolve (Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_resolve_finish (WebviewHelper* proxy /*none*/, gint* out_result, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_resolve_finish (::WebviewHelper* proxy /*none*/, gint* out_result, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_resolve_finish (gint * out_result, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_resolve_finish (gint * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gint>> call_resolve_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gint> call_resolve_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_resolve_sync (WebviewHelper* proxy /*none*/, gint* out_result, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_resolve_sync (::WebviewHelper* proxy /*none*/, gint* out_result, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_resolve_sync (gint * out_result, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_resolve_sync (gint * out_result) noexcept;
GI_INLINE_DECL bool call_resolve_sync (gint * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_resolve_sync (gint * out_result, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gint>> call_resolve_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gint>> call_resolve_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gint> call_resolve_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gint> call_resolve_sync (GLib::Error * _error) noexcept;

// void webview_helper_call_set_opaque_bg (WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_call_set_opaque_bg (::WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_set_opaque_bg (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_set_opaque_bg (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webview_helper_call_set_opaque_bg_finish (WebviewHelper* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean webview_helper_call_set_opaque_bg_finish (::WebviewHelper* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_opaque_bg_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_set_opaque_bg_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean webview_helper_call_set_opaque_bg_sync (WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean webview_helper_call_set_opaque_bg_sync (::WebviewHelper* proxy /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a) noexcept;
GI_INLINE_DECL bool call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_set_opaque_bg_sync (gint arg_r, gint arg_g, gint arg_b, gint arg_a, GLib::Error * _error) noexcept;

// void webview_helper_complete_create (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_create (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_create (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_helper_complete_eval (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_eval (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_eval (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_helper_complete_get_win_id (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/, guint64 result);
// void webview_helper_complete_get_win_id (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, guint64 result);
GI_INLINE_DECL void complete_get_win_id (Gio::DBusMethodInvocation invocation, guint64 result) noexcept;

// void webview_helper_complete_init (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_init (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_init (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_helper_complete_navigate (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_navigate (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_navigate (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_helper_complete_reload (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_reload (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_reload (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_helper_complete_resolve (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gint result);
// void webview_helper_complete_resolve (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gint result);
GI_INLINE_DECL void complete_resolve (Gio::DBusMethodInvocation invocation, gint result) noexcept;

// void webview_helper_complete_set_opaque_bg (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void webview_helper_complete_set_opaque_bg (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_set_opaque_bg (Gio::DBusMethodInvocation invocation) noexcept;

// void webview_helper_emit_started (WebviewHelper* object /*none*/);
// void webview_helper_emit_started (::WebviewHelper* object /*none*/);
GI_INLINE_DECL void emit_started () noexcept;

// (signal) gboolean handle-create ( invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, gchar* arg_path /*none*/);
// (signal) gboolean handle-create (::GDBusMethodInvocation* invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, char* arg_path /*none*/);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, gi::cstring_v arg_path)> signal_handle_create()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, gi::cstring_v arg_path)> (*this, "handle-create"); }

// (signal) gboolean handle-eval ( invocation /*none*/, gchar* arg_js /*none*/);
// (signal) gboolean handle-eval (::GDBusMethodInvocation* invocation /*none*/, char* arg_js /*none*/);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_js)> signal_handle_eval()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_js)> (*this, "handle-eval"); }

// (signal) gboolean handle-get-win-id ( invocation /*none*/);
// (signal) gboolean handle-get-win-id (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation)> signal_handle_get_win_id()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation)> (*this, "handle-get-win-id"); }

// (signal) gboolean handle-init ( invocation /*none*/, gchar* arg_js /*none*/);
// (signal) gboolean handle-init (::GDBusMethodInvocation* invocation /*none*/, char* arg_js /*none*/);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_js)> signal_handle_init()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_js)> (*this, "handle-init"); }

// (signal) gboolean handle-navigate ( invocation /*none*/, gchar* arg_url /*none*/);
// (signal) gboolean handle-navigate (::GDBusMethodInvocation* invocation /*none*/, char* arg_url /*none*/);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_url)> signal_handle_navigate()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_url)> (*this, "handle-navigate"); }

// (signal) gboolean handle-reload ( invocation /*none*/);
// (signal) gboolean handle-reload (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation)> signal_handle_reload()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation)> (*this, "handle-reload"); }

// (signal) gboolean handle-resolve ( invocation /*none*/);
// (signal) gboolean handle-resolve (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation)> signal_handle_resolve()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation)> (*this, "handle-resolve"); }

// (signal) gboolean handle-set-opaque-bg ( invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
// (signal) gboolean handle-set-opaque-bg (::GDBusMethodInvocation* invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gint arg_r, gint arg_g, gint arg_b, gint arg_a)> signal_handle_set_opaque_bg()
{ return gi::signal_proxy<bool(Webview::Helper, Gio::DBusMethodInvocation invocation, gint arg_r, gint arg_g, gint arg_b, gint arg_a)> (*this, "handle-set-opaque-bg"); }

// (signal) void started ();
// (signal) void started ();
gi::signal_proxy<void(Webview::Helper)> signal_started()
{ return gi::signal_proxy<void(Webview::Helper)> (*this, "started"); }

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/helper_extra_def.hpp>)
#include <webview/helper_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/helper_extra.hpp>)
#include <webview/helper_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class Helper : public GI_WEBVIEW_HELPER_BASE
{ typedef GI_WEBVIEW_HELPER_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewHelper>
{ typedef Webview::Helper type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class HelperIfaceDef
{
typedef HelperIfaceDef self;
public:
typedef Webview::Helper instance_type;
typedef ::WebviewHelperIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_create) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_eval) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_win_id) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_init) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_navigate) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_reload) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_resolve) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_set_opaque_bg) = self;
using GI_MEMBER_CHECK_CONFLICT(started) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~HelperIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Helper::handle_create (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gchar* arg_path /*none*/);
// gboolean Helper::handle_create (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path /*none*/);
virtual bool handle_create_ (Gio::DBusMethodInvocation invocation, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path) noexcept = 0;

// gboolean Helper::handle_eval (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_js /*none*/);
// gboolean Helper::handle_eval (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_js /*none*/);
virtual bool handle_eval_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js) noexcept = 0;

// gboolean Helper::handle_get_win_id (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_get_win_id (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_get_win_id_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean Helper::handle_init (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_js /*none*/);
// gboolean Helper::handle_init (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_js /*none*/);
virtual bool handle_init_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js) noexcept = 0;

// gboolean Helper::handle_navigate (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_url /*none*/);
// gboolean Helper::handle_navigate (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_url /*none*/);
virtual bool handle_navigate_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url) noexcept = 0;

// gboolean Helper::handle_reload (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_reload (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_reload_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean Helper::handle_resolve (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_resolve (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_resolve_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean Helper::handle_set_opaque_bg (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
// gboolean Helper::handle_set_opaque_bg (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
virtual bool handle_set_opaque_bg_ (Gio::DBusMethodInvocation invocation, gint arg_r, gint arg_g, gint arg_b, gint arg_a) noexcept = 0;

// void Helper::started (WebviewHelper* object /*none*/);
// void Helper::started (::WebviewHelper* object /*none*/);
virtual void started_ () noexcept = 0;


};

using HelperImpl = detail::InterfaceImpl<HelperIfaceDef>;

class HelperIfaceClassImpl: public detail::InterfaceClassImpl<HelperImpl>
{
friend class internal::HelperIfaceDef;
typedef HelperIfaceClassImpl self;
typedef detail::InterfaceClassImpl<HelperImpl> super;

protected:
using super::super;

// gboolean Helper::handle_create (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gchar* arg_path /*none*/);
// gboolean Helper::handle_create (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const char* arg_path /*none*/);
GI_INLINE_DECL bool handle_create_ (Gio::DBusMethodInvocation invocation, gboolean arg_debug, gint arg_r, gint arg_g, gint arg_b, gint arg_a, const gi::cstring_v arg_path) noexcept override;

// gboolean Helper::handle_eval (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_js /*none*/);
// gboolean Helper::handle_eval (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_js /*none*/);
GI_INLINE_DECL bool handle_eval_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js) noexcept override;

// gboolean Helper::handle_get_win_id (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_get_win_id (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_get_win_id_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean Helper::handle_init (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_js /*none*/);
// gboolean Helper::handle_init (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_js /*none*/);
GI_INLINE_DECL bool handle_init_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_js) noexcept override;

// gboolean Helper::handle_navigate (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_url /*none*/);
// gboolean Helper::handle_navigate (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_url /*none*/);
GI_INLINE_DECL bool handle_navigate_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_url) noexcept override;

// gboolean Helper::handle_reload (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_reload (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_reload_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean Helper::handle_resolve (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Helper::handle_resolve (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_resolve_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean Helper::handle_set_opaque_bg (WebviewHelper* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
// gboolean Helper::handle_set_opaque_bg (::WebviewHelper* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint arg_r, gint arg_g, gint arg_b, gint arg_a);
GI_INLINE_DECL bool handle_set_opaque_bg_ (Gio::DBusMethodInvocation invocation, gint arg_r, gint arg_g, gint arg_b, gint arg_a) noexcept override;

// void Helper::started (WebviewHelper* object /*none*/);
// void Helper::started (::WebviewHelper* object /*none*/);
GI_INLINE_DECL void started_ () noexcept override;


};


struct HelperIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_create)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_eval)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_get_win_id)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_init)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_navigate)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_reload)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_resolve)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, handle_set_opaque_bg)
  GI_MEMBER_DEFINE(HelperIfaceClassImpl, started)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_create),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_eval),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_win_id),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_init),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_navigate),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_reload),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_resolve),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_set_opaque_bg),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, started)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
