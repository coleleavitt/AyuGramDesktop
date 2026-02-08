// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_SETTINGSPROXY_HPP_
#define _GI_SNAPCRAFT_SETTINGSPROXY_HPP_


namespace gi {

namespace repository {

namespace Snapcraft {

class Settings;

class SettingsProxy;

namespace base {


#define GI_SNAPCRAFT_SETTINGSPROXY_BASE base::SettingsProxyBase
class SettingsProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::SnapcraftSettingsProxy BaseObjectType;

SettingsProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return snapcraft_settings_proxy_get_type(); } 

GI_INLINE_DECL Snapcraft::Settings interface_ (gi::interface_tag<Snapcraft::Settings>);

GI_INLINE_DECL operator Snapcraft::Settings ();

// SnapcraftSettings* /*full*/ snapcraft_settings_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::SnapcraftSettingsProxy* /*full*/ snapcraft_settings_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Snapcraft::SettingsProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Snapcraft::SettingsProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// SnapcraftSettings* /*full*/ snapcraft_settings_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::SnapcraftSettingsProxy* /*full*/ snapcraft_settings_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Snapcraft::SettingsProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Snapcraft::SettingsProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// SnapcraftSettings* /*full*/ snapcraft_settings_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::SnapcraftSettingsProxy* /*full*/ snapcraft_settings_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Snapcraft::SettingsProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Snapcraft::SettingsProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Snapcraft::SettingsProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Snapcraft::SettingsProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// SnapcraftSettings* /*full*/ snapcraft_settings_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::SnapcraftSettingsProxy* /*full*/ snapcraft_settings_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Snapcraft::SettingsProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Snapcraft::SettingsProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Snapcraft::SettingsProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Snapcraft::SettingsProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void snapcraft_settings_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void snapcraft_settings_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void snapcraft_settings_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/settingsproxy_extra_def.hpp>)
#include <snapcraft/settingsproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/settingsproxy_extra.hpp>)
#include <snapcraft/settingsproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

class SettingsProxy : public GI_SNAPCRAFT_SETTINGSPROXY_BASE
{ typedef GI_SNAPCRAFT_SETTINGSPROXY_BASE super_type; using super_type::super_type; };

} // namespace Snapcraft

template<> struct declare_cpptype_of<::SnapcraftSettingsProxy>
{ typedef Snapcraft::SettingsProxy type; }; 

} // namespace repository

} // namespace gi

#include "settings.hpp"

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {


class SettingsProxyClassDef
{
typedef SettingsProxyClassDef self;
public:
typedef Snapcraft::SettingsProxy instance_type;
typedef ::SnapcraftSettingsProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SettingsProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SettingsProxyClass: public detail::ClassTemplate<Snapcraft::impl::internal::SettingsProxyClassDef, Gio::impl::internal::DBusProxyClass, Snapcraft::impl::internal::SettingsIfaceClassImpl>
{
friend class internal::SettingsProxyClassDef;
typedef SettingsProxyClass self;
typedef detail::ClassTemplate<Snapcraft::impl::internal::SettingsProxyClassDef, Gio::impl::internal::DBusProxyClass, Snapcraft::impl::internal::SettingsIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Snapcraft::impl::internal::SettingsIfaceClassImpl SnapcraftSettingsIface_type;



};


struct SettingsProxyClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using SettingsProxyImpl = detail::ObjectImpl<SettingsProxy, internal::SettingsProxyClass>;

} // namespace impl

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
