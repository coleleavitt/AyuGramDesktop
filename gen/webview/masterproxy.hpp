// AUTO-GENERATED

#ifndef _GI_WEBVIEW_MASTERPROXY_HPP_
#define _GI_WEBVIEW_MASTERPROXY_HPP_


namespace gi {

namespace repository {

namespace Webview {

class Master;

class MasterProxy;

namespace base {


#define GI_WEBVIEW_MASTERPROXY_BASE base::MasterProxyBase
class MasterProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::WebviewMasterProxy BaseObjectType;

MasterProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_master_proxy_get_type(); } 

GI_INLINE_DECL Webview::Master interface_ (gi::interface_tag<Webview::Master>);

GI_INLINE_DECL operator Webview::Master ();

// WebviewMaster* /*full*/ webview_master_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::WebviewMasterProxy* /*full*/ webview_master_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::MasterProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Webview::MasterProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// WebviewMaster* /*full*/ webview_master_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::WebviewMasterProxy* /*full*/ webview_master_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::MasterProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Webview::MasterProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// WebviewMaster* /*full*/ webview_master_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::WebviewMasterProxy* /*full*/ webview_master_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::MasterProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Webview::MasterProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Webview::MasterProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Webview::MasterProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// WebviewMaster* /*full*/ webview_master_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::WebviewMasterProxy* /*full*/ webview_master_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::MasterProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Webview::MasterProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Webview::MasterProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Webview::MasterProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void webview_master_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void webview_master_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_master_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/masterproxy_extra_def.hpp>)
#include <webview/masterproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/masterproxy_extra.hpp>)
#include <webview/masterproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class MasterProxy : public GI_WEBVIEW_MASTERPROXY_BASE
{ typedef GI_WEBVIEW_MASTERPROXY_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewMasterProxy>
{ typedef Webview::MasterProxy type; }; 

} // namespace repository

} // namespace gi

#include "master.hpp"

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class MasterProxyClassDef
{
typedef MasterProxyClassDef self;
public:
typedef Webview::MasterProxy instance_type;
typedef ::WebviewMasterProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MasterProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MasterProxyClass: public detail::ClassTemplate<Webview::impl::internal::MasterProxyClassDef, Gio::impl::internal::DBusProxyClass, Webview::impl::internal::MasterIfaceClassImpl>
{
friend class internal::MasterProxyClassDef;
typedef MasterProxyClass self;
typedef detail::ClassTemplate<Webview::impl::internal::MasterProxyClassDef, Gio::impl::internal::DBusProxyClass, Webview::impl::internal::MasterIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Webview::impl::internal::MasterIfaceClassImpl WebviewMasterIface_type;



};


struct MasterProxyClassDef::TypeInitData
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

using MasterProxyImpl = detail::ObjectImpl<MasterProxy, internal::MasterProxyClass>;

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
