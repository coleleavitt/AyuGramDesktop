// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OPENURIPROXY_HPP_
#define _GI_XDPOPENURI_OPENURIPROXY_HPP_


namespace gi {

namespace repository {

namespace XdpOpenURI {

class OpenURI;

class OpenURIProxy;

namespace base {


#define GI_XDPOPENURI_OPENURIPROXY_BASE base::OpenURIProxyBase
class OpenURIProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::XdpOpenURIOpenURIProxy BaseObjectType;

OpenURIProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_open_uri_open_uri_proxy_get_type(); } 

GI_INLINE_DECL XdpOpenURI::OpenURI interface_ (gi::interface_tag<XdpOpenURI::OpenURI>);

GI_INLINE_DECL operator XdpOpenURI::OpenURI ();

// XdpOpenURIOpenURI* /*full*/ xdp_open_uri_open_uri_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpOpenURIOpenURIProxy* /*full*/ xdp_open_uri_open_uri_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpOpenURI::OpenURIProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdpOpenURI::OpenURIProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdpOpenURIOpenURI* /*full*/ xdp_open_uri_open_uri_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpOpenURIOpenURIProxy* /*full*/ xdp_open_uri_open_uri_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpOpenURI::OpenURIProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdpOpenURI::OpenURIProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdpOpenURIOpenURI* /*full*/ xdp_open_uri_open_uri_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpOpenURIOpenURIProxy* /*full*/ xdp_open_uri_open_uri_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpOpenURI::OpenURIProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdpOpenURI::OpenURIProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdpOpenURI::OpenURIProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdpOpenURI::OpenURIProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// XdpOpenURIOpenURI* /*full*/ xdp_open_uri_open_uri_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpOpenURIOpenURIProxy* /*full*/ xdp_open_uri_open_uri_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpOpenURI::OpenURIProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdpOpenURI::OpenURIProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdpOpenURI::OpenURIProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdpOpenURI::OpenURIProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void xdp_open_uri_open_uri_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdp_open_uri_open_uri_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuriproxy_extra_def.hpp>)
#include <xdpopenuri/openuriproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuriproxy_extra.hpp>)
#include <xdpopenuri/openuriproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

class OpenURIProxy : public GI_XDPOPENURI_OPENURIPROXY_BASE
{ typedef GI_XDPOPENURI_OPENURIPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdpOpenURI

template<> struct declare_cpptype_of<::XdpOpenURIOpenURIProxy>
{ typedef XdpOpenURI::OpenURIProxy type; }; 

} // namespace repository

} // namespace gi

#include "openuri.hpp"

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {


class OpenURIProxyClassDef
{
typedef OpenURIProxyClassDef self;
public:
typedef XdpOpenURI::OpenURIProxy instance_type;
typedef ::XdpOpenURIOpenURIProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~OpenURIProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class OpenURIProxyClass: public detail::ClassTemplate<XdpOpenURI::impl::internal::OpenURIProxyClassDef, Gio::impl::internal::DBusProxyClass, XdpOpenURI::impl::internal::OpenURIIfaceClassImpl>
{
friend class internal::OpenURIProxyClassDef;
typedef OpenURIProxyClass self;
typedef detail::ClassTemplate<XdpOpenURI::impl::internal::OpenURIProxyClassDef, Gio::impl::internal::DBusProxyClass, XdpOpenURI::impl::internal::OpenURIIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpOpenURI::impl::internal::OpenURIIfaceClassImpl XdpOpenURIOpenURIIface_type;



};


struct OpenURIProxyClassDef::TypeInitData
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

using OpenURIProxyImpl = detail::ObjectImpl<OpenURIProxy, internal::OpenURIProxyClass>;

} // namespace impl

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
