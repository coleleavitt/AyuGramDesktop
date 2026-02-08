// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_REQUESTPROXY_HPP_
#define _GI_XDPREQUEST_REQUESTPROXY_HPP_


namespace gi {

namespace repository {

namespace XdpRequest {

class Request;

class RequestProxy;

namespace base {


#define GI_XDPREQUEST_REQUESTPROXY_BASE base::RequestProxyBase
class RequestProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::XdpRequestRequestProxy BaseObjectType;

RequestProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_request_request_proxy_get_type(); } 

GI_INLINE_DECL XdpRequest::Request interface_ (gi::interface_tag<XdpRequest::Request>);

GI_INLINE_DECL operator XdpRequest::Request ();

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpRequest::RequestProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdpRequest::RequestProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpRequest::RequestProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdpRequest::RequestProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpRequest::RequestProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdpRequest::RequestProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdpRequest::RequestProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdpRequest::RequestProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpRequest::RequestProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdpRequest::RequestProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdpRequest::RequestProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdpRequest::RequestProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void xdp_request_request_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_request_request_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdp_request_request_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_request_request_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/requestproxy_extra_def.hpp>)
#include <xdprequest/requestproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/requestproxy_extra.hpp>)
#include <xdprequest/requestproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

class RequestProxy : public GI_XDPREQUEST_REQUESTPROXY_BASE
{ typedef GI_XDPREQUEST_REQUESTPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdpRequest

template<> struct declare_cpptype_of<::XdpRequestRequestProxy>
{ typedef XdpRequest::RequestProxy type; }; 

} // namespace repository

} // namespace gi

#include "request.hpp"

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {


class RequestProxyClassDef
{
typedef RequestProxyClassDef self;
public:
typedef XdpRequest::RequestProxy instance_type;
typedef ::XdpRequestRequestProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~RequestProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RequestProxyClass: public detail::ClassTemplate<XdpRequest::impl::internal::RequestProxyClassDef, Gio::impl::internal::DBusProxyClass, XdpRequest::impl::internal::RequestIfaceClassImpl>
{
friend class internal::RequestProxyClassDef;
typedef RequestProxyClass self;
typedef detail::ClassTemplate<XdpRequest::impl::internal::RequestProxyClassDef, Gio::impl::internal::DBusProxyClass, XdpRequest::impl::internal::RequestIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpRequest::impl::internal::RequestIfaceClassImpl XdpRequestRequestIface_type;



};


struct RequestProxyClassDef::TypeInitData
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

using RequestProxyImpl = detail::ObjectImpl<RequestProxy, internal::RequestProxyClass>;

} // namespace impl

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
