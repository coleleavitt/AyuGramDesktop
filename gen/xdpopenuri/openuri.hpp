// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OPENURI_HPP_
#define _GI_XDPOPENURI_OPENURI_HPP_


namespace gi {

namespace repository {

namespace XdpOpenURI {


class OpenURI;

namespace base {


#define GI_XDPOPENURI_OPENURI_BASE base::OpenURIBase
class OpenURIBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpOpenURIOpenURI BaseObjectType;

OpenURIBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_open_uri_open_uri_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdp_open_uri_open_uri_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_open_uri_open_uri_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdp_open_uri_open_uri_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_open_uri_open_uri_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_open_uri_open_uri_call_open_directory (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_call_open_directory (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_open_directory (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_open_directory (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_open_uri_open_uri_call_open_directory_finish (XdpOpenURIOpenURI* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_directory_finish (::XdpOpenURIOpenURI* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_directory_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_open_directory_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> call_open_directory_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, Gio::UnixFDList> call_open_directory_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_open_uri_open_uri_call_open_directory_sync (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_directory_sync (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list) noexcept;
GI_INLINE_DECL bool call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, Gio::UnixFDList> call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, Gio::UnixFDList> call_open_directory_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, GLib::Error * _error) noexcept;

// void xdp_open_uri_open_uri_call_open_file (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_call_open_file (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_open_file (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_open_file (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_open_uri_open_uri_call_open_file_finish (XdpOpenURIOpenURI* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_file_finish (::XdpOpenURIOpenURI* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_file_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_open_file_finish (gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> call_open_file_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, Gio::UnixFDList> call_open_file_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_open_uri_open_uri_call_open_file_sync (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/, GUnixFDList* fd_list /*none,nullable*/, gchar** out_handle /*full,out,opt*/, GUnixFDList** out_fd_list /*full,out,opt,nullable*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_file_sync (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, char** out_handle /*full,out,opt*/, ::GUnixFDList** out_fd_list /*full,out,opt,nullable*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list) noexcept;
GI_INLINE_DECL bool call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, gi::cstring * out_handle, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring, Gio::UnixFDList>> call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, Gio::UnixFDList> call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, Gio::UnixFDList> call_open_file_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options, GLib::Error * _error) noexcept;

// void xdp_open_uri_open_uri_call_open_uri (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, const gchar* arg_uri /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_open_uri_open_uri_call_open_uri (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, const char* arg_uri /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_open_uri (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_open_uri (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_open_uri_open_uri_call_open_uri_finish (XdpOpenURIOpenURI* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_uri_finish (::XdpOpenURIOpenURI* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_uri_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_open_uri_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_open_uri_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_open_uri_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_open_uri_open_uri_call_open_uri_sync (XdpOpenURIOpenURI* proxy /*none*/, const gchar* arg_parent_window /*none*/, const gchar* arg_uri /*none*/, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_open_uri_open_uri_call_open_uri_sync (::XdpOpenURIOpenURI* proxy /*none*/, const char* arg_parent_window /*none*/, const char* arg_uri /*none*/, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle) noexcept;
GI_INLINE_DECL bool call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_open_uri_sync (const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options, GLib::Error * _error) noexcept;

// void xdp_open_uri_open_uri_complete_open_directory (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GUnixFDList* fd_list /*none,nullable*/, const gchar* handle /*none*/);
// void xdp_open_uri_open_uri_complete_open_directory (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GUnixFDList* fd_list /*none,nullable*/, const char* handle /*none*/);
GI_INLINE_DECL void complete_open_directory (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v handle) noexcept;
GI_INLINE_DECL void complete_open_directory (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept;

// void xdp_open_uri_open_uri_complete_open_file (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*full*/, GUnixFDList* fd_list /*none,nullable*/, const gchar* handle /*none*/);
// void xdp_open_uri_open_uri_complete_open_file (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, ::GUnixFDList* fd_list /*none,nullable*/, const char* handle /*none*/);
GI_INLINE_DECL void complete_open_file (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v handle) noexcept;
GI_INLINE_DECL void complete_open_file (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept;

// void xdp_open_uri_open_uri_complete_open_uri (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_open_uri_open_uri_complete_open_uri (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
GI_INLINE_DECL void complete_open_uri (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept;

// guint xdp_open_uri_open_uri_get_version (XdpOpenURIOpenURI* object /*none*/);
// guint xdp_open_uri_open_uri_get_version (::XdpOpenURIOpenURI* object /*none*/);
GI_INLINE_DECL guint get_version () noexcept;

// void xdp_open_uri_open_uri_set_version (XdpOpenURIOpenURI* object /*none*/, guint value);
// void xdp_open_uri_open_uri_set_version (::XdpOpenURIOpenURI* object /*none*/, guint value);
GI_INLINE_DECL void set_version (guint value) noexcept;

gi::property_proxy<guint, base::OpenURIBase> property_version()
{ return gi::property_proxy<guint, base::OpenURIBase> (*this, "version"); }
const gi::property_proxy<guint, base::OpenURIBase> property_version() const
{ return gi::property_proxy<guint, base::OpenURIBase> (*this, "version"); }

// (signal) gboolean handle-open-directory ( invocation /*none*/,  fd_list /*none,nullable*/, gchar* arg_parent_window /*none*/,  arg_fd /*none*/,  arg_options /*none*/);
// (signal) gboolean handle-open-directory (::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
gi::signal_proxy<bool(XdpOpenURI::OpenURI, Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options)> signal_handle_open_directory()
{ return gi::signal_proxy<bool(XdpOpenURI::OpenURI, Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options)> (*this, "handle-open-directory"); }

// (signal) gboolean handle-open-file ( invocation /*none*/,  fd_list /*none,nullable*/, gchar* arg_parent_window /*none*/,  arg_fd /*none*/,  arg_options /*none*/);
// (signal) gboolean handle-open-file (::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none,nullable*/, char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
gi::signal_proxy<bool(XdpOpenURI::OpenURI, Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options)> signal_handle_open_file()
{ return gi::signal_proxy<bool(XdpOpenURI::OpenURI, Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options)> (*this, "handle-open-file"); }

// (signal) gboolean handle-open-uri ( invocation /*none*/, gchar* arg_parent_window /*none*/, gchar* arg_uri /*none*/,  arg_options /*none*/);
// (signal) gboolean handle-open-uri (::GDBusMethodInvocation* invocation /*none*/, char* arg_parent_window /*none*/, char* arg_uri /*none*/, ::GVariant* arg_options /*none*/);
gi::signal_proxy<bool(XdpOpenURI::OpenURI, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_parent_window, gi::cstring_v arg_uri, GLib::Variant arg_options)> signal_handle_open_uri()
{ return gi::signal_proxy<bool(XdpOpenURI::OpenURI, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_parent_window, gi::cstring_v arg_uri, GLib::Variant arg_options)> (*this, "handle-open-uri"); }

}; // class

} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuri_extra_def.hpp>)
#include <xdpopenuri/openuri_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuri_extra.hpp>)
#include <xdpopenuri/openuri_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

class OpenURI : public GI_XDPOPENURI_OPENURI_BASE
{ typedef GI_XDPOPENURI_OPENURI_BASE super_type; using super_type::super_type; };

} // namespace XdpOpenURI

template<> struct declare_cpptype_of<::XdpOpenURIOpenURI>
{ typedef XdpOpenURI::OpenURI type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {


class OpenURIIfaceDef
{
typedef OpenURIIfaceDef self;
public:
typedef XdpOpenURI::OpenURI instance_type;
typedef ::XdpOpenURIOpenURIIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_open_directory) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_open_file) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_open_uri) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~OpenURIIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean OpenURI::handle_open_directory (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GUnixFDList* fd_list /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_directory (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
virtual bool handle_open_directory_ (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept = 0;

// gboolean OpenURI::handle_open_file (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GUnixFDList* fd_list /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_file (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
virtual bool handle_open_file_ (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept = 0;

// gboolean OpenURI::handle_open_uri (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_parent_window /*none*/, const gchar* arg_uri /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_uri (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_parent_window /*none*/, const char* arg_uri /*none*/, ::GVariant* arg_options /*none*/);
virtual bool handle_open_uri_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options) noexcept = 0;


};

using OpenURIImpl = detail::InterfaceImpl<OpenURIIfaceDef>;

class OpenURIIfaceClassImpl: public detail::InterfaceClassImpl<OpenURIImpl>
{
friend class internal::OpenURIIfaceDef;
typedef OpenURIIfaceClassImpl self;
typedef detail::InterfaceClassImpl<OpenURIImpl> super;

protected:
using super::super;

// gboolean OpenURI::handle_open_directory (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GUnixFDList* fd_list /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_directory (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
GI_INLINE_DECL bool handle_open_directory_ (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept override;

// gboolean OpenURI::handle_open_file (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GUnixFDList* fd_list /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_fd /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_file (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GUnixFDList* fd_list /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_fd /*none*/, ::GVariant* arg_options /*none*/);
GI_INLINE_DECL bool handle_open_file_ (Gio::DBusMethodInvocation invocation, Gio::UnixFDList fd_list, const gi::cstring_v arg_parent_window, GLib::Variant arg_fd, GLib::Variant arg_options) noexcept override;

// gboolean OpenURI::handle_open_uri (XdpOpenURIOpenURI* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_parent_window /*none*/, const gchar* arg_uri /*none*/, GVariant* arg_options /*none*/);
// gboolean OpenURI::handle_open_uri (::XdpOpenURIOpenURI* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_parent_window /*none*/, const char* arg_uri /*none*/, ::GVariant* arg_options /*none*/);
GI_INLINE_DECL bool handle_open_uri_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, const gi::cstring_v arg_uri, GLib::Variant arg_options) noexcept override;


};


struct OpenURIIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(OpenURIIfaceClassImpl, handle_open_directory)
  GI_MEMBER_DEFINE(OpenURIIfaceClassImpl, handle_open_file)
  GI_MEMBER_DEFINE(OpenURIIfaceClassImpl, handle_open_uri)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_open_directory),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_open_file),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_open_uri)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
