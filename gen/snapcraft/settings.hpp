// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_SETTINGS_HPP_
#define _GI_SNAPCRAFT_SETTINGS_HPP_


namespace gi {

namespace repository {

namespace Snapcraft {


class Settings;

namespace base {


#define GI_SNAPCRAFT_SETTINGS_BASE base::SettingsBase
class SettingsBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SnapcraftSettings BaseObjectType;

SettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return snapcraft_settings_get_type(); } 

// GDBusInterfaceInfo* /*none*/ snapcraft_settings_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ snapcraft_settings_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint snapcraft_settings_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint snapcraft_settings_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void snapcraft_settings_call_check (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_check /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_check (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_check /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_check (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_check (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::AsyncReadyCallback callback) noexcept;

// gboolean snapcraft_settings_call_check_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_check_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_check_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_check_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_check_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_check_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// void snapcraft_settings_call_check_sub (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_check /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_check_sub (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_check /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_check_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_check_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::AsyncReadyCallback callback) noexcept;

// gboolean snapcraft_settings_call_check_sub_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_check_sub_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_check_sub_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_check_sub_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_check_sub_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_check_sub_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean snapcraft_settings_call_check_sub_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_check /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_check_sub_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_check /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result) noexcept;
GI_INLINE_DECL bool call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, gi::cstring * out_result, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_check_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check, GLib::Error * _error) noexcept;

// gboolean snapcraft_settings_call_check_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_check /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_check_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_check /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result) noexcept;
GI_INLINE_DECL bool call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, gi::cstring * out_result, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_check_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_check, GLib::Error * _error) noexcept;

// void snapcraft_settings_call_get (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_get (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get (const gi::cstring_v arg_setting, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get (const gi::cstring_v arg_setting, Gio::AsyncReadyCallback callback) noexcept;

// gboolean snapcraft_settings_call_get_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_get_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// void snapcraft_settings_call_get_sub (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_get_sub (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_get_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_get_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::AsyncReadyCallback callback) noexcept;

// gboolean snapcraft_settings_call_get_sub_finish (SnapcraftSettings* proxy /*none*/, gchar** out_result /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_get_sub_finish (::SnapcraftSettings* proxy /*none*/, char** out_result /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_sub_finish (gi::cstring * out_result, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_get_sub_finish (gi::cstring * out_result, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_sub_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_sub_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean snapcraft_settings_call_get_sub_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_get_sub_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result) noexcept;
GI_INLINE_DECL bool call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, gi::cstring * out_result, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, GLib::Error * _error) noexcept;

// gboolean snapcraft_settings_call_get_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, gchar** out_result /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_get_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, char** out_result /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result) noexcept;
GI_INLINE_DECL bool call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_get_sync (const gi::cstring_v arg_setting, gi::cstring * out_result, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_sync (const gi::cstring_v arg_setting, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_get_sync (const gi::cstring_v arg_setting) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_sync (const gi::cstring_v arg_setting, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_get_sync (const gi::cstring_v arg_setting, GLib::Error * _error) noexcept;

// void snapcraft_settings_call_set (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_set (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_set (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_set (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::AsyncReadyCallback callback) noexcept;

// gboolean snapcraft_settings_call_set_finish (SnapcraftSettings* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_set_finish (::SnapcraftSettings* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_set_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// void snapcraft_settings_call_set_sub (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_call_set_sub (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_set_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_set_sub (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::AsyncReadyCallback callback) noexcept;

// gboolean snapcraft_settings_call_set_sub_finish (SnapcraftSettings* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean snapcraft_settings_call_set_sub_finish (::SnapcraftSettings* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_sub_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_set_sub_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean snapcraft_settings_call_set_sub_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_set_sub_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value) noexcept;
GI_INLINE_DECL bool call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_set_sub_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value, GLib::Error * _error) noexcept;

// gboolean snapcraft_settings_call_set_sync (SnapcraftSettings* proxy /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_value /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean snapcraft_settings_call_set_sync (::SnapcraftSettings* proxy /*none*/, const char* arg_setting /*none*/, const char* arg_value /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value) noexcept;
GI_INLINE_DECL bool call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_set_sync (const gi::cstring_v arg_setting, const gi::cstring_v arg_value, GLib::Error * _error) noexcept;

// void snapcraft_settings_complete_check (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_check (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
GI_INLINE_DECL void complete_check (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept;

// void snapcraft_settings_complete_check_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_check_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
GI_INLINE_DECL void complete_check_sub (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept;

// void snapcraft_settings_complete_get (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_get (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
GI_INLINE_DECL void complete_get (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept;

// void snapcraft_settings_complete_get_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* result /*none*/);
// void snapcraft_settings_complete_get_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* result /*none*/);
GI_INLINE_DECL void complete_get_sub (Gio::DBusMethodInvocation invocation, const gi::cstring_v result) noexcept;

// void snapcraft_settings_complete_set (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void snapcraft_settings_complete_set (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_set (Gio::DBusMethodInvocation invocation) noexcept;

// void snapcraft_settings_complete_set_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void snapcraft_settings_complete_set_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_set_sub (Gio::DBusMethodInvocation invocation) noexcept;

// (signal) gboolean handle-check ( invocation /*none*/, gchar* arg_setting /*none*/, gchar* arg_check /*none*/);
// (signal) gboolean handle-check (::GDBusMethodInvocation* invocation /*none*/, char* arg_setting /*none*/, char* arg_check /*none*/);
gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_check)> signal_handle_check()
{ return gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_check)> (*this, "handle-check"); }

// (signal) gboolean handle-check-sub ( invocation /*none*/, gchar* arg_setting /*none*/, gchar* arg_subproperty /*none*/, gchar* arg_check /*none*/);
// (signal) gboolean handle-check-sub (::GDBusMethodInvocation* invocation /*none*/, char* arg_setting /*none*/, char* arg_subproperty /*none*/, char* arg_check /*none*/);
gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_subproperty, gi::cstring_v arg_check)> signal_handle_check_sub()
{ return gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_subproperty, gi::cstring_v arg_check)> (*this, "handle-check-sub"); }

// (signal) gboolean handle-get ( invocation /*none*/, gchar* arg_setting /*none*/);
// (signal) gboolean handle-get (::GDBusMethodInvocation* invocation /*none*/, char* arg_setting /*none*/);
gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting)> signal_handle_get()
{ return gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting)> (*this, "handle-get"); }

// (signal) gboolean handle-get-sub ( invocation /*none*/, gchar* arg_setting /*none*/, gchar* arg_subproperty /*none*/);
// (signal) gboolean handle-get-sub (::GDBusMethodInvocation* invocation /*none*/, char* arg_setting /*none*/, char* arg_subproperty /*none*/);
gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_subproperty)> signal_handle_get_sub()
{ return gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_subproperty)> (*this, "handle-get-sub"); }

// (signal) gboolean handle-set ( invocation /*none*/, gchar* arg_setting /*none*/, gchar* arg_value /*none*/);
// (signal) gboolean handle-set (::GDBusMethodInvocation* invocation /*none*/, char* arg_setting /*none*/, char* arg_value /*none*/);
gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_value)> signal_handle_set()
{ return gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_value)> (*this, "handle-set"); }

// (signal) gboolean handle-set-sub ( invocation /*none*/, gchar* arg_setting /*none*/, gchar* arg_subproperty /*none*/, gchar* arg_value /*none*/);
// (signal) gboolean handle-set-sub (::GDBusMethodInvocation* invocation /*none*/, char* arg_setting /*none*/, char* arg_subproperty /*none*/, char* arg_value /*none*/);
gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_subproperty, gi::cstring_v arg_value)> signal_handle_set_sub()
{ return gi::signal_proxy<bool(Snapcraft::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_setting, gi::cstring_v arg_subproperty, gi::cstring_v arg_value)> (*this, "handle-set-sub"); }

}; // class

} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/settings_extra_def.hpp>)
#include <snapcraft/settings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/settings_extra.hpp>)
#include <snapcraft/settings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

class Settings : public GI_SNAPCRAFT_SETTINGS_BASE
{ typedef GI_SNAPCRAFT_SETTINGS_BASE super_type; using super_type::super_type; };

} // namespace Snapcraft

template<> struct declare_cpptype_of<::SnapcraftSettings>
{ typedef Snapcraft::Settings type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {


class SettingsIfaceDef
{
typedef SettingsIfaceDef self;
public:
typedef Snapcraft::Settings instance_type;
typedef ::SnapcraftSettingsIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_check) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_check_sub) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_get_sub) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_set) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_set_sub) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SettingsIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Settings::handle_check (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_check /*none*/);
// gboolean Settings::handle_check (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_check /*none*/);
virtual bool handle_check_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_check) noexcept = 0;

// gboolean Settings::handle_check_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_check /*none*/);
// gboolean Settings::handle_check_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_check /*none*/);
virtual bool handle_check_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check) noexcept = 0;

// gboolean Settings::handle_get (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/);
// gboolean Settings::handle_get (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/);
virtual bool handle_get_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting) noexcept = 0;

// gboolean Settings::handle_get_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/);
// gboolean Settings::handle_get_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/);
virtual bool handle_get_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty) noexcept = 0;

// gboolean Settings::handle_set (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_value /*none*/);
// gboolean Settings::handle_set (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_value /*none*/);
virtual bool handle_set_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_value) noexcept = 0;

// gboolean Settings::handle_set_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_value /*none*/);
// gboolean Settings::handle_set_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_value /*none*/);
virtual bool handle_set_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value) noexcept = 0;


};

using SettingsImpl = detail::InterfaceImpl<SettingsIfaceDef>;

class SettingsIfaceClassImpl: public detail::InterfaceClassImpl<SettingsImpl>
{
friend class internal::SettingsIfaceDef;
typedef SettingsIfaceClassImpl self;
typedef detail::InterfaceClassImpl<SettingsImpl> super;

protected:
using super::super;

// gboolean Settings::handle_check (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_check /*none*/);
// gboolean Settings::handle_check (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_check /*none*/);
GI_INLINE_DECL bool handle_check_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_check) noexcept override;

// gboolean Settings::handle_check_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_check /*none*/);
// gboolean Settings::handle_check_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_check /*none*/);
GI_INLINE_DECL bool handle_check_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_check) noexcept override;

// gboolean Settings::handle_get (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/);
// gboolean Settings::handle_get (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/);
GI_INLINE_DECL bool handle_get_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting) noexcept override;

// gboolean Settings::handle_get_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/);
// gboolean Settings::handle_get_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/);
GI_INLINE_DECL bool handle_get_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty) noexcept override;

// gboolean Settings::handle_set (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_value /*none*/);
// gboolean Settings::handle_set (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_value /*none*/);
GI_INLINE_DECL bool handle_set_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_value) noexcept override;

// gboolean Settings::handle_set_sub (SnapcraftSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_setting /*none*/, const gchar* arg_subproperty /*none*/, const gchar* arg_value /*none*/);
// gboolean Settings::handle_set_sub (::SnapcraftSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_setting /*none*/, const char* arg_subproperty /*none*/, const char* arg_value /*none*/);
GI_INLINE_DECL bool handle_set_sub_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_setting, const gi::cstring_v arg_subproperty, const gi::cstring_v arg_value) noexcept override;


};


struct SettingsIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_check)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_check_sub)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_get)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_get_sub)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_set)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_set_sub)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_check),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_check_sub),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_get_sub),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_set),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_set_sub)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
