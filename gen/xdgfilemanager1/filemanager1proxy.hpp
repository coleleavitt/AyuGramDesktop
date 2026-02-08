// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_FILEMANAGER1PROXY_HPP_
#define _GI_XDGFILEMANAGER1_FILEMANAGER1PROXY_HPP_


namespace gi {

namespace repository {

namespace XdgFileManager1 {

class FileManager1;

class FileManager1Proxy;

namespace base {


#define GI_XDGFILEMANAGER1_FILEMANAGER1PROXY_BASE base::FileManager1ProxyBase
class FileManager1ProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::XdgFileManager1FileManager1Proxy BaseObjectType;

FileManager1ProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_file_manager1_file_manager1_proxy_get_type(); } 

GI_INLINE_DECL XdgFileManager1::FileManager1 interface_ (gi::interface_tag<XdgFileManager1::FileManager1>);

GI_INLINE_DECL operator XdgFileManager1::FileManager1 ();

// XdgFileManager1FileManager1* /*full*/ xdg_file_manager1_file_manager1_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgFileManager1FileManager1Proxy* /*full*/ xdg_file_manager1_file_manager1_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgFileManager1::FileManager1Proxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgFileManager1::FileManager1Proxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgFileManager1FileManager1* /*full*/ xdg_file_manager1_file_manager1_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdgFileManager1FileManager1Proxy* /*full*/ xdg_file_manager1_file_manager1_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgFileManager1::FileManager1Proxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdgFileManager1::FileManager1Proxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdgFileManager1FileManager1* /*full*/ xdg_file_manager1_file_manager1_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgFileManager1FileManager1Proxy* /*full*/ xdg_file_manager1_file_manager1_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgFileManager1::FileManager1Proxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgFileManager1::FileManager1Proxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgFileManager1::FileManager1Proxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgFileManager1::FileManager1Proxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// XdgFileManager1FileManager1* /*full*/ xdg_file_manager1_file_manager1_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdgFileManager1FileManager1Proxy* /*full*/ xdg_file_manager1_file_manager1_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdgFileManager1::FileManager1Proxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdgFileManager1::FileManager1Proxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdgFileManager1::FileManager1Proxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdgFileManager1::FileManager1Proxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void xdg_file_manager1_file_manager1_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdg_file_manager1_file_manager1_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1proxy_extra_def.hpp>)
#include <xdgfilemanager1/filemanager1proxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1proxy_extra.hpp>)
#include <xdgfilemanager1/filemanager1proxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

class FileManager1Proxy : public GI_XDGFILEMANAGER1_FILEMANAGER1PROXY_BASE
{ typedef GI_XDGFILEMANAGER1_FILEMANAGER1PROXY_BASE super_type; using super_type::super_type; };

} // namespace XdgFileManager1

template<> struct declare_cpptype_of<::XdgFileManager1FileManager1Proxy>
{ typedef XdgFileManager1::FileManager1Proxy type; }; 

} // namespace repository

} // namespace gi

#include "filemanager1.hpp"

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {


class FileManager1ProxyClassDef
{
typedef FileManager1ProxyClassDef self;
public:
typedef XdgFileManager1::FileManager1Proxy instance_type;
typedef ::XdgFileManager1FileManager1ProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FileManager1ProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileManager1ProxyClass: public detail::ClassTemplate<XdgFileManager1::impl::internal::FileManager1ProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgFileManager1::impl::internal::FileManager1IfaceClassImpl>
{
friend class internal::FileManager1ProxyClassDef;
typedef FileManager1ProxyClass self;
typedef detail::ClassTemplate<XdgFileManager1::impl::internal::FileManager1ProxyClassDef, Gio::impl::internal::DBusProxyClass, XdgFileManager1::impl::internal::FileManager1IfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgFileManager1::impl::internal::FileManager1IfaceClassImpl XdgFileManager1FileManager1Iface_type;



};


struct FileManager1ProxyClassDef::TypeInitData
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

using FileManager1ProxyImpl = detail::ObjectImpl<FileManager1Proxy, internal::FileManager1ProxyClass>;

} // namespace impl

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
