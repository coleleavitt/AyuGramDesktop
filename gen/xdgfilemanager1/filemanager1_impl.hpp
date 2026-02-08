// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_FILEMANAGER1_IMPL_HPP_
#define _GI_XDGFILEMANAGER1_FILEMANAGER1_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace base {

// GDBusInterfaceInfo* /*none*/ xdg_file_manager1_file_manager1_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_file_manager1_file_manager1_interface_info ();
Gio::DBusInterfaceInfo_Ref base::FileManager1Base::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint xdg_file_manager1_file_manager1_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_file_manager1_file_manager1_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_file_manager1_file_manager1_call_show_folders (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_call_show_folders (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// gboolean xdg_file_manager1_file_manager1_call_show_folders_finish (XdgFileManager1FileManager1* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_folders_finish (::XdgFileManager1FileManager1* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::FileManager1Base::call_show_folders_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_call_show_folders_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::FileManager1Base::call_show_folders_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_call_show_folders_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_file_manager1_file_manager1_call_show_folders_sync (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_folders_sync (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// void xdg_file_manager1_file_manager1_call_show_item_properties (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_call_show_item_properties (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_finish (XdgFileManager1FileManager1* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_finish (::XdgFileManager1FileManager1* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::FileManager1Base::call_show_item_properties_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_call_show_item_properties_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::FileManager1Base::call_show_item_properties_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_call_show_item_properties_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_sync (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_sync (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// void xdg_file_manager1_file_manager1_call_show_items (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_call_show_items (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// gboolean xdg_file_manager1_file_manager1_call_show_items_finish (XdgFileManager1FileManager1* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_items_finish (::XdgFileManager1FileManager1* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::FileManager1Base::call_show_items_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_call_show_items_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::FileManager1Base::call_show_items_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_call_show_items_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean xdg_file_manager1_file_manager1_call_show_items_sync (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_items_sync (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// void xdg_file_manager1_file_manager1_complete_show_folders (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_file_manager1_file_manager1_complete_show_folders (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::FileManager1Base::complete_show_folders (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgFileManager1FileManager1* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_complete_show_folders;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_file_manager1_file_manager1_complete_show_item_properties (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_file_manager1_file_manager1_complete_show_item_properties (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::FileManager1Base::complete_show_item_properties (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgFileManager1FileManager1* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_complete_show_item_properties;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void xdg_file_manager1_file_manager1_complete_show_items (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_file_manager1_file_manager1_complete_show_items (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::FileManager1Base::complete_show_items (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::XdgFileManager1FileManager1* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_file_manager1_complete_show_items;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::XdgFileManager1FileManager1*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}





} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1_extra_def_impl.hpp>)
#include <xdgfilemanager1/filemanager1_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1_extra_impl.hpp>)
#include <xdgfilemanager1/filemanager1_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {

void FileManager1IfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgFileManager1FileManager1Iface *methods = (::XdgFileManager1FileManager1Iface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_show_folders && factory) methods->handle_show_folders = (decltype (methods->handle_show_folders)) gi::detail::method_wrapper<self, gboolean (*) (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId), std::nullptr_t>::wrapper<&self::handle_show_folders_>;
  if (init_data.handle_show_item_properties && factory) methods->handle_show_item_properties = (decltype (methods->handle_show_item_properties)) gi::detail::method_wrapper<self, gboolean (*) (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId), std::nullptr_t>::wrapper<&self::handle_show_item_properties_>;
  if (init_data.handle_show_items && factory) methods->handle_show_items = (decltype (methods->handle_show_items)) gi::detail::method_wrapper<self, gboolean (*) (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId), std::nullptr_t>::wrapper<&self::handle_show_items_>;
}

// gboolean FileManager1::handle_show_folders (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_folders (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
gboolean FileManager1IfaceClassImpl::handle_show_folders_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept
{
  if (!get_struct_()->handle_show_folders) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1*, ::GDBusMethodInvocation*, const gchar* const*, const gchar*);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_show_folders;
  auto result_ = call_wrap_v (gobj_(), invocation, arg_URIs, arg_StartupId);
  return result_;
}

// gboolean FileManager1::handle_show_item_properties (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_item_properties (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
gboolean FileManager1IfaceClassImpl::handle_show_item_properties_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept
{
  if (!get_struct_()->handle_show_item_properties) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1*, ::GDBusMethodInvocation*, const gchar* const*, const gchar*);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_show_item_properties;
  auto result_ = call_wrap_v (gobj_(), invocation, arg_URIs, arg_StartupId);
  return result_;
}

// gboolean FileManager1::handle_show_items (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_items (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
gboolean FileManager1IfaceClassImpl::handle_show_items_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept
{
  if (!get_struct_()->handle_show_items) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::XdgFileManager1FileManager1*, ::GDBusMethodInvocation*, const gchar* const*, const gchar*);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_show_items;
  auto result_ = call_wrap_v (gobj_(), invocation, arg_URIs, arg_StartupId);
  return result_;
}

} // namespace internal

} // namespace impl

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
