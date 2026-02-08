// AUTO-GENERATED

#ifndef _GI_XDPSETTINGS_SETTINGS_HPP_
#define _GI_XDPSETTINGS_SETTINGS_HPP_


namespace gi {

namespace repository {

namespace XdpSettings {


class Settings;

namespace base {


#define GI_XDPSETTINGS_SETTINGS_BASE base::SettingsBase
class SettingsBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpSettingsSettings BaseObjectType;

SettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_settings_settings_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdp_settings_settings_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_settings_settings_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdp_settings_settings_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_settings_settings_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_settings_settings_call_read (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_settings_settings_call_read (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// void xdp_settings_settings_call_read_all (XdpSettingsSettings* proxy /*none*/, const gchar* const* arg_namespaces /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_settings_settings_call_read_all (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespaces /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_namespaces in pointer depth (2 vs 1)

// gboolean xdp_settings_settings_call_read_all_finish (XdpSettingsSettings* proxy /*none*/, GVariant** out_value /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_settings_settings_call_read_all_finish (::XdpSettingsSettings* proxy /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_read_all_finish (GLib::Variant * out_value, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_read_all_finish (GLib::Variant * out_value, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_read_all_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_read_all_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_settings_settings_call_read_all_sync (XdpSettingsSettings* proxy /*none*/, const gchar* const* arg_namespaces /*none*/, GVariant** out_value /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_settings_settings_call_read_all_sync (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespaces /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_namespaces in pointer depth (2 vs 1)

// gboolean xdp_settings_settings_call_read_finish (XdpSettingsSettings* proxy /*none*/, GVariant** out_value /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_settings_settings_call_read_finish (::XdpSettingsSettings* proxy /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
// IGNORE; deprecated

// void xdp_settings_settings_call_read_one (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_settings_settings_call_read_one (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_read_one (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_read_one (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_settings_settings_call_read_one_finish (XdpSettingsSettings* proxy /*none*/, GVariant** out_value /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_settings_settings_call_read_one_finish (::XdpSettingsSettings* proxy /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_read_one_finish (GLib::Variant * out_value, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_read_one_finish (GLib::Variant * out_value, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_read_one_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_read_one_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_settings_settings_call_read_one_sync (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant** out_value /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_settings_settings_call_read_one_sync (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value) noexcept;
GI_INLINE_DECL bool call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant * out_value, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, GLib::Variant>> call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Variant> call_read_one_sync (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Error * _error) noexcept;

// gboolean xdp_settings_settings_call_read_sync (XdpSettingsSettings* proxy /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant** out_value /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_settings_settings_call_read_sync (::XdpSettingsSettings* proxy /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant** out_value /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// IGNORE; deprecated

// void xdp_settings_settings_complete_read (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* value /*none*/);
// void xdp_settings_settings_complete_read (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* value /*none*/);
// IGNORE; deprecated

// void xdp_settings_settings_complete_read_all (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* value /*none*/);
// void xdp_settings_settings_complete_read_all (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void complete_read_all (Gio::DBusMethodInvocation invocation, GLib::Variant value) noexcept;

// void xdp_settings_settings_complete_read_one (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GVariant* value /*none*/);
// void xdp_settings_settings_complete_read_one (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void complete_read_one (Gio::DBusMethodInvocation invocation, GLib::Variant value) noexcept;

// void xdp_settings_settings_emit_setting_changed (XdpSettingsSettings* object /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant* arg_value /*none*/);
// void xdp_settings_settings_emit_setting_changed (::XdpSettingsSettings* object /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant* arg_value /*none*/);
GI_INLINE_DECL void emit_setting_changed (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant arg_value) noexcept;

// guint xdp_settings_settings_get_version (XdpSettingsSettings* object /*none*/);
// guint xdp_settings_settings_get_version (::XdpSettingsSettings* object /*none*/);
GI_INLINE_DECL guint get_version () noexcept;

// void xdp_settings_settings_set_version (XdpSettingsSettings* object /*none*/, guint value);
// void xdp_settings_settings_set_version (::XdpSettingsSettings* object /*none*/, guint value);
GI_INLINE_DECL void set_version (guint value) noexcept;

gi::property_proxy<guint, base::SettingsBase> property_version()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "version"); }
const gi::property_proxy<guint, base::SettingsBase> property_version() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "version"); }

// (signal) gboolean handle-read ( invocation /*none*/, gchar* arg_namespace /*none*/, gchar* arg_key /*none*/);
// (signal) gboolean handle-read (::GDBusMethodInvocation* invocation /*none*/, char* arg_namespace /*none*/, char* arg_key /*none*/);
// IGNORE; deprecated

// (signal) gboolean handle-read-all ( invocation /*none*/,  arg_namespaces /*none*/);
// (signal) gboolean handle-read-all (::GDBusMethodInvocation* invocation /*none*/, char** arg_namespaces /*none*/);
gi::signal_proxy<bool(XdpSettings::Settings, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_namespaces)> signal_handle_read_all()
{ return gi::signal_proxy<bool(XdpSettings::Settings, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_namespaces)> (*this, "handle-read-all"); }

// (signal) gboolean handle-read-one ( invocation /*none*/, gchar* arg_namespace /*none*/, gchar* arg_key /*none*/);
// (signal) gboolean handle-read-one (::GDBusMethodInvocation* invocation /*none*/, char* arg_namespace /*none*/, char* arg_key /*none*/);
gi::signal_proxy<bool(XdpSettings::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_namespace, gi::cstring_v arg_key)> signal_handle_read_one()
{ return gi::signal_proxy<bool(XdpSettings::Settings, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_namespace, gi::cstring_v arg_key)> (*this, "handle-read-one"); }

// (signal) void setting-changed (gchar* arg_namespace /*none*/, gchar* arg_key /*none*/,  arg_value /*none*/);
// (signal) void setting-changed (char* arg_namespace /*none*/, char* arg_key /*none*/, ::GVariant* arg_value /*none*/);
gi::signal_proxy<void(XdpSettings::Settings, gi::cstring_v arg_namespace, gi::cstring_v arg_key, GLib::Variant arg_value)> signal_setting_changed()
{ return gi::signal_proxy<void(XdpSettings::Settings, gi::cstring_v arg_namespace, gi::cstring_v arg_key, GLib::Variant arg_value)> (*this, "setting-changed"); }

}; // class

} // namespace base

} // namespace XdpSettings

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpsettings/settings_extra_def.hpp>)
#include <xdpsettings/settings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpsettings/settings_extra.hpp>)
#include <xdpsettings/settings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpSettings {

class Settings : public GI_XDPSETTINGS_SETTINGS_BASE
{ typedef GI_XDPSETTINGS_SETTINGS_BASE super_type; using super_type::super_type; };

} // namespace XdpSettings

template<> struct declare_cpptype_of<::XdpSettingsSettings>
{ typedef XdpSettings::Settings type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpSettings {

namespace impl {

namespace internal {


class SettingsIfaceDef
{
typedef SettingsIfaceDef self;
public:
typedef XdpSettings::Settings instance_type;
typedef ::XdpSettingsSettingsIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_read) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_read_all) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_read_one) = self;
using GI_MEMBER_CHECK_CONFLICT(setting_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~SettingsIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Settings::handle_read (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/);
// gboolean Settings::handle_read (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/);
virtual bool handle_read_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept = 0;

// gboolean Settings::handle_read_all (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_namespaces /*none*/);
// gboolean Settings::handle_read_all (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespaces /*none*/);
// SKIP; inconsistent arg_namespaces in pointer depth (2 vs 1)
virtual gboolean handle_read_all_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_namespaces) noexcept = 0;

// gboolean Settings::handle_read_one (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/);
// gboolean Settings::handle_read_one (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/);
virtual bool handle_read_one_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept = 0;

// void Settings::setting_changed (XdpSettingsSettings* object /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant* arg_value /*none*/);
// void Settings::setting_changed (::XdpSettingsSettings* object /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant* arg_value /*none*/);
virtual void setting_changed_ (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant arg_value) noexcept = 0;


};

using SettingsImpl = detail::InterfaceImpl<SettingsIfaceDef>;

class SettingsIfaceClassImpl: public detail::InterfaceClassImpl<SettingsImpl>
{
friend class internal::SettingsIfaceDef;
typedef SettingsIfaceClassImpl self;
typedef detail::InterfaceClassImpl<SettingsImpl> super;

protected:
using super::super;

// gboolean Settings::handle_read (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/);
// gboolean Settings::handle_read (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/);
GI_INLINE_DECL bool handle_read_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept override;

// gboolean Settings::handle_read_all (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_namespaces /*none*/);
// gboolean Settings::handle_read_all (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespaces /*none*/);
// SKIP; inconsistent arg_namespaces in pointer depth (2 vs 1)
GI_INLINE_DECL gboolean handle_read_all_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_namespaces) noexcept override;

// gboolean Settings::handle_read_one (XdpSettingsSettings* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/);
// gboolean Settings::handle_read_one (::XdpSettingsSettings* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/);
GI_INLINE_DECL bool handle_read_one_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_namespace, const gi::cstring_v arg_key) noexcept override;

// void Settings::setting_changed (XdpSettingsSettings* object /*none*/, const gchar* arg_namespace /*none*/, const gchar* arg_key /*none*/, GVariant* arg_value /*none*/);
// void Settings::setting_changed (::XdpSettingsSettings* object /*none*/, const char* arg_namespace /*none*/, const char* arg_key /*none*/, ::GVariant* arg_value /*none*/);
GI_INLINE_DECL void setting_changed_ (const gi::cstring_v arg_namespace, const gi::cstring_v arg_key, GLib::Variant arg_value) noexcept override;


};


struct SettingsIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_read)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_read_all)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, handle_read_one)
  GI_MEMBER_DEFINE(SettingsIfaceClassImpl, setting_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_read),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_read_all),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_read_one),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, setting_changed)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdpSettings

} // namespace repository

} // namespace gi

#endif
