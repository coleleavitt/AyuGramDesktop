// AUTO-GENERATED

#ifndef _GI_WEBVIEW_HELPERPROXY_HPP_
#define _GI_WEBVIEW_HELPERPROXY_HPP_


namespace gi {

namespace repository {

namespace Webview {

class Helper;

class HelperProxy;

namespace base {


#define GI_WEBVIEW_HELPERPROXY_BASE base::HelperProxyBase
class HelperProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::WebviewHelperProxy BaseObjectType;

HelperProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_helper_proxy_get_type(); } 

GI_INLINE_DECL Webview::Helper interface_ (gi::interface_tag<Webview::Helper>);

GI_INLINE_DECL operator Webview::Helper ();

// WebviewHelper* /*full*/ webview_helper_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::WebviewHelperProxy* /*full*/ webview_helper_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::HelperProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Webview::HelperProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// WebviewHelper* /*full*/ webview_helper_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::WebviewHelperProxy* /*full*/ webview_helper_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::HelperProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Webview::HelperProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// WebviewHelper* /*full*/ webview_helper_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::WebviewHelperProxy* /*full*/ webview_helper_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::HelperProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Webview::HelperProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Webview::HelperProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Webview::HelperProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// WebviewHelper* /*full*/ webview_helper_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::WebviewHelperProxy* /*full*/ webview_helper_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Webview::HelperProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Webview::HelperProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Webview::HelperProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Webview::HelperProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void webview_helper_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void webview_helper_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void webview_helper_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/helperproxy_extra_def.hpp>)
#include <webview/helperproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/helperproxy_extra.hpp>)
#include <webview/helperproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class HelperProxy : public GI_WEBVIEW_HELPERPROXY_BASE
{ typedef GI_WEBVIEW_HELPERPROXY_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewHelperProxy>
{ typedef Webview::HelperProxy type; }; 

} // namespace repository

} // namespace gi

#include "helper.hpp"

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class HelperProxyClassDef
{
typedef HelperProxyClassDef self;
public:
typedef Webview::HelperProxy instance_type;
typedef ::WebviewHelperProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~HelperProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HelperProxyClass: public detail::ClassTemplate<Webview::impl::internal::HelperProxyClassDef, Gio::impl::internal::DBusProxyClass, Webview::impl::internal::HelperIfaceClassImpl>
{
friend class internal::HelperProxyClassDef;
typedef HelperProxyClass self;
typedef detail::ClassTemplate<Webview::impl::internal::HelperProxyClassDef, Gio::impl::internal::DBusProxyClass, Webview::impl::internal::HelperIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Webview::impl::internal::HelperIfaceClassImpl WebviewHelperIface_type;



};


struct HelperProxyClassDef::TypeInitData
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

using HelperProxyImpl = detail::ObjectImpl<HelperProxy, internal::HelperProxyClass>;

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
