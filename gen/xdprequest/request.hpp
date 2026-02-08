// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_REQUEST_HPP_
#define _GI_XDPREQUEST_REQUEST_HPP_


namespace gi {

namespace repository {

namespace XdpRequest {


class Request;

namespace base {


#define GI_XDPREQUEST_REQUEST_BASE base::RequestBase
class RequestBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpRequestRequest BaseObjectType;

RequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_request_request_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdp_request_request_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_request_request_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdp_request_request_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_request_request_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_request_request_call_close (XdpRequestRequest* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_request_request_call_close (::XdpRequestRequest* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_close (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_close (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_request_request_call_close_finish (XdpRequestRequest* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_request_request_call_close_finish (::XdpRequestRequest* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_close_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_close_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_request_request_call_close_sync (XdpRequestRequest* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_request_request_call_close_sync (::XdpRequestRequest* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_close_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_close_sync () noexcept;
GI_INLINE_DECL bool call_close_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_close_sync (GLib::Error * _error) noexcept;

// void xdp_request_request_complete_close (XdpRequestRequest* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdp_request_request_complete_close (::XdpRequestRequest* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_close (Gio::DBusMethodInvocation invocation) noexcept;

// void xdp_request_request_emit_response (XdpRequestRequest* object /*none*/, guint arg_response, GVariant* arg_results /*none*/);
// void xdp_request_request_emit_response (::XdpRequestRequest* object /*none*/, guint arg_response, ::GVariant* arg_results /*none*/);
GI_INLINE_DECL void emit_response (guint arg_response, GLib::Variant arg_results) noexcept;

// (signal) gboolean handle-close ( invocation /*none*/);
// (signal) gboolean handle-close (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdpRequest::Request, Gio::DBusMethodInvocation invocation)> signal_handle_close()
{ return gi::signal_proxy<bool(XdpRequest::Request, Gio::DBusMethodInvocation invocation)> (*this, "handle-close"); }

// (signal) void response (guint arg_response,  arg_results /*none*/);
// (signal) void response (guint arg_response, ::GVariant* arg_results /*none*/);
gi::signal_proxy<void(XdpRequest::Request, guint arg_response, GLib::Variant arg_results)> signal_response()
{ return gi::signal_proxy<void(XdpRequest::Request, guint arg_response, GLib::Variant arg_results)> (*this, "response"); }

}; // class

} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/request_extra_def.hpp>)
#include <xdprequest/request_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/request_extra.hpp>)
#include <xdprequest/request_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

class Request : public GI_XDPREQUEST_REQUEST_BASE
{ typedef GI_XDPREQUEST_REQUEST_BASE super_type; using super_type::super_type; };

} // namespace XdpRequest

template<> struct declare_cpptype_of<::XdpRequestRequest>
{ typedef XdpRequest::Request type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {


class RequestIfaceDef
{
typedef RequestIfaceDef self;
public:
typedef XdpRequest::Request instance_type;
typedef ::XdpRequestRequestIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_close) = self;
using GI_MEMBER_CHECK_CONFLICT(response) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~RequestIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Request::handle_close (XdpRequestRequest* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Request::handle_close (::XdpRequestRequest* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_close_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// void Request::response (XdpRequestRequest* object /*none*/, guint arg_response, GVariant* arg_results /*none*/);
// void Request::response (::XdpRequestRequest* object /*none*/, guint arg_response, ::GVariant* arg_results /*none*/);
virtual void response_ (guint arg_response, GLib::Variant arg_results) noexcept = 0;


};

using RequestImpl = detail::InterfaceImpl<RequestIfaceDef>;

class RequestIfaceClassImpl: public detail::InterfaceClassImpl<RequestImpl>
{
friend class internal::RequestIfaceDef;
typedef RequestIfaceClassImpl self;
typedef detail::InterfaceClassImpl<RequestImpl> super;

protected:
using super::super;

// gboolean Request::handle_close (XdpRequestRequest* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Request::handle_close (::XdpRequestRequest* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_close_ (Gio::DBusMethodInvocation invocation) noexcept override;

// void Request::response (XdpRequestRequest* object /*none*/, guint arg_response, GVariant* arg_results /*none*/);
// void Request::response (::XdpRequestRequest* object /*none*/, guint arg_response, ::GVariant* arg_results /*none*/);
GI_INLINE_DECL void response_ (guint arg_response, GLib::Variant arg_results) noexcept override;


};


struct RequestIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(RequestIfaceClassImpl, handle_close)
  GI_MEMBER_DEFINE(RequestIfaceClassImpl, response)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_close),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, response)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
