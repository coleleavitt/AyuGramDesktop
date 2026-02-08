// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_REQUEST_IMPL_HPP_
#define _GI_XDPREQUEST_REQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpRequest {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdp_request_request_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_request_request_interface_info ();
Gio::DBusInterfaceInfo_Ref base::RequestBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdp_request_request_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_request_request_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_request_request_call_close (XdpRequestRequest* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_request_request_call_close (::XdpRequestRequest* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::RequestBase::call_close (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpRequestRequest* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::RequestBase::call_close (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::XdpRequestRequest* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean xdp_request_request_call_close_finish (XdpRequestRequest* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_request_request_call_close_finish (::XdpRequestRequest* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::RequestBase::call_close_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpRequestRequest* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::RequestBase::call_close_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpRequestRequest* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdp_request_request_call_close_sync (XdpRequestRequest* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_request_request_call_close_sync (::XdpRequestRequest* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::RequestBase::call_close_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpRequestRequest* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::RequestBase::call_close_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpRequestRequest* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::RequestBase::call_close_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpRequestRequest* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::RequestBase::call_close_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdpRequestRequest* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_call_close_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void xdp_request_request_complete_close (XdpRequestRequest* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdp_request_request_complete_close (::XdpRequestRequest* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::RequestBase::complete_close (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdpRequestRequest* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_complete_close;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdp_request_request_emit_response (XdpRequestRequest* object /*none*/, guint arg_response, GVariant* arg_results /*none*/);
// void xdp_request_request_emit_response (::XdpRequestRequest* object /*none*/, guint arg_response, ::GVariant* arg_results /*none*/);
void base::RequestBase::emit_response (guint arg_response, GLib::Variant arg_results) noexcept
{
  typedef void (*call_wrap_t) (::XdpRequestRequest* object, guint arg_response, ::GVariant* arg_results);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_emit_response;
  auto arg_results_to_c = gi::unwrap (arg_results, gi::transfer_none);
  auto arg_response_to_c = arg_response;
  call_wrap_v ((::XdpRequestRequest*) (gobj_()), (guint) (arg_response_to_c), (::GVariant*) (arg_results_to_c));
}




} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/request_extra_def_impl.hpp>)
#include <xdprequest/request_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/request_extra_impl.hpp>)
#include <xdprequest/request_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {

void RequestIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpRequestRequestIface *methods = (::XdpRequestRequestIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_close) methods->handle_close = (decltype (methods->handle_close)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_close_>;
  if (init_data.response) methods->response = (decltype (methods->response)) gi::detail::method_wrapper<self, void (*) (guint arg_response, GLib::Variant arg_results), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::response_>;
}

// gboolean Request::handle_close (XdpRequestRequest* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean Request::handle_close (::XdpRequestRequest* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool RequestIfaceClassImpl::handle_close_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_close) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdpRequestRequest* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_close;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::XdpRequestRequest*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// void Request::response (XdpRequestRequest* object /*none*/, guint arg_response, GVariant* arg_results /*none*/);
// void Request::response (::XdpRequestRequest* object /*none*/, guint arg_response, ::GVariant* arg_results /*none*/);
void RequestIfaceClassImpl::response_ (guint arg_response, GLib::Variant arg_results) noexcept
{
  if (!get_struct_()->response) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::XdpRequestRequest* object, guint arg_response, ::GVariant* arg_results);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->response;
  auto arg_results_to_c = gi::unwrap (arg_results, gi::transfer_none);
  auto arg_response_to_c = arg_response;
  call_wrap_v ((::XdpRequestRequest*) (gobj_()), (guint) (arg_response_to_c), (::GVariant*) (arg_results_to_c));
}

} // namespace internal

} // namespace impl

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
