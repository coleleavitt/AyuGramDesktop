// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_REQUESTPROXY_IMPL_HPP_
#define _GI_XDPREQUEST_REQUESTPROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpRequest {

namespace base {

XdpRequest::Request RequestProxyBase::interface_ (gi::interface_tag<XdpRequest::Request>)
{ return gi::wrap ((XdpRequest::Request::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

RequestProxyBase::operator XdpRequest::Request ()
{ return interface_ (gi::interface_tag<XdpRequest::Request>()); }

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
gi::result<XdpRequest::RequestProxy> base::RequestProxyBase::new_finish (Gio::AsyncResult res) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdpRequest::RequestProxy base::RequestProxyBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
gi::result<XdpRequest::RequestProxy> base::RequestProxyBase::new_for_bus_finish (Gio::AsyncResult res) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdpRequest::RequestProxy base::RequestProxyBase::new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<XdpRequest::RequestProxy> base::RequestProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::result<XdpRequest::RequestProxy> base::RequestProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdpRequest::RequestProxy base::RequestProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdpRequest::RequestProxy base::RequestProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpRequestRequest* /*full*/ xdp_request_request_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpRequestRequestProxy* /*full*/ xdp_request_request_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<XdpRequest::RequestProxy> base::RequestProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
gi::result<XdpRequest::RequestProxy> base::RequestProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdpRequest::RequestProxy base::RequestProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
XdpRequest::RequestProxy base::RequestProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept
{
  typedef ::XdpRequestRequestProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_request_request_proxy_new_sync;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void xdp_request_request_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_request_request_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::RequestProxyBase::new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_proxy_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::RequestProxyBase::new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_proxy_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void xdp_request_request_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_request_request_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::RequestProxyBase::new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_proxy_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::RequestProxyBase::new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name, const char* object_path, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_request_request_proxy_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}


} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/requestproxy_extra_def_impl.hpp>)
#include <xdprequest/requestproxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/requestproxy_extra_impl.hpp>)
#include <xdprequest/requestproxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {

void RequestProxyClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpRequestRequestProxyClass *methods = (::XdpRequestRequestProxyClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
