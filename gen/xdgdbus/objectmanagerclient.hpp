// AUTO-GENERATED

#ifndef _GI_XDGDBUS_OBJECTMANAGERCLIENT_HPP_
#define _GI_XDGDBUS_OBJECTMANAGERCLIENT_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {


class ObjectManagerClient;

namespace base {


#define GI_XDGDBUS_OBJECTMANAGERCLIENT_BASE base::ObjectManagerClientBase
class ObjectManagerClientBase : public Gio::DBusObjectManagerClient
{
typedef Gio::DBusObjectManagerClient super_type;
public:
typedef ::XdgDBusObjectManagerClient BaseObjectType;

ObjectManagerClientBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_object_manager_client_get_type(); } 

// GDBusObjectManager* /*full*/ xdg_dbus_object_manager_client_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusObjectManagerClient* /*full*/ xdg_dbus_object_manager_client_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::ObjectManagerClient> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::ObjectManagerClient new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusObjectManager* /*full*/ xdg_dbus_object_manager_client_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgDBusObjectManagerClient* /*full*/ xdg_dbus_object_manager_client_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::ObjectManagerClient> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgDBus::ObjectManagerClient new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusObjectManager* /*full*/ xdg_dbus_object_manager_client_new_for_bus_sync (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusObjectManagerClient* /*full*/ xdg_dbus_object_manager_client_new_for_bus_sync (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::ObjectManagerClient> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::ObjectManagerClient> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::ObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::ObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// GDBusObjectManager* /*full*/ xdg_dbus_object_manager_client_new_sync (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgDBusObjectManagerClient* /*full*/ xdg_dbus_object_manager_client_new_sync (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgDBus::ObjectManagerClient> new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgDBus::ObjectManagerClient> new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgDBus::ObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgDBus::ObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// GType xdg_dbus_object_manager_client_get_proxy_type (GDBusObjectManagerClient* manager /*none*/, const gchar* object_path /*none*/, const gchar* interface_name /*none,nullable*/, gpointer user_data);
// GType xdg_dbus_object_manager_client_get_proxy_type (::GDBusObjectManagerClient* manager /*none*/, const char* object_path /*none*/, const char* interface_name /*none,nullable*/, void* user_data);
static GI_INLINE_DECL GType get_proxy_type (Gio::DBusObjectManagerClient manager, const gi::cstring_v object_path, const gi::cstring_v interface_name, void* user_data) noexcept;
static GI_INLINE_DECL GType get_proxy_type (Gio::DBusObjectManagerClient manager, const gi::cstring_v object_path, void* user_data) noexcept;

// void xdg_dbus_object_manager_client_new (GDBusConnection* connection /*none*/, GDBusObjectManagerClientFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_object_manager_client_new (::GDBusConnection* connection /*none*/, ::GDBusObjectManagerClientFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdg_dbus_object_manager_client_new_for_bus (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_object_manager_client_new_for_bus (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/objectmanagerclient_extra_def.hpp>)
#include <xdgdbus/objectmanagerclient_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/objectmanagerclient_extra.hpp>)
#include <xdgdbus/objectmanagerclient_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class ObjectManagerClient : public GI_XDGDBUS_OBJECTMANAGERCLIENT_BASE
{ typedef GI_XDGDBUS_OBJECTMANAGERCLIENT_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusObjectManagerClient>
{ typedef XdgDBus::ObjectManagerClient type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class ObjectManagerClientClassDef
{
typedef ObjectManagerClientClassDef self;
public:
typedef XdgDBus::ObjectManagerClient instance_type;
typedef ::XdgDBusObjectManagerClientClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectManagerClientClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectManagerClientClass: public detail::ClassTemplate<XdgDBus::impl::internal::ObjectManagerClientClassDef, Gio::impl::internal::DBusObjectManagerClientClass>
{
friend class internal::ObjectManagerClientClassDef;
typedef ObjectManagerClientClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::ObjectManagerClientClassDef, Gio::impl::internal::DBusObjectManagerClientClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};


struct ObjectManagerClientClassDef::TypeInitData
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

using ObjectManagerClientImpl = detail::ObjectImpl<ObjectManagerClient, internal::ObjectManagerClientClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
