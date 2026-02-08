// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_FILEMANAGER1_HPP_
#define _GI_XDGFILEMANAGER1_FILEMANAGER1_HPP_


namespace gi {

namespace repository {

namespace XdgFileManager1 {


class FileManager1;

namespace base {


#define GI_XDGFILEMANAGER1_FILEMANAGER1_BASE base::FileManager1Base
class FileManager1Base : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgFileManager1FileManager1 BaseObjectType;

FileManager1Base (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_file_manager1_file_manager1_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_file_manager1_file_manager1_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_file_manager1_file_manager1_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_file_manager1_file_manager1_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_file_manager1_file_manager1_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_file_manager1_file_manager1_call_show_folders (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_call_show_folders (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// gboolean xdg_file_manager1_file_manager1_call_show_folders_finish (XdgFileManager1FileManager1* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_folders_finish (::XdgFileManager1FileManager1* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_show_folders_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_show_folders_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_file_manager1_file_manager1_call_show_folders_sync (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_folders_sync (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// void xdg_file_manager1_file_manager1_call_show_item_properties (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_call_show_item_properties (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_finish (XdgFileManager1FileManager1* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_finish (::XdgFileManager1FileManager1* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_show_item_properties_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_show_item_properties_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_sync (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_item_properties_sync (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// void xdg_file_manager1_file_manager1_call_show_items (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_file_manager1_file_manager1_call_show_items (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// gboolean xdg_file_manager1_file_manager1_call_show_items_finish (XdgFileManager1FileManager1* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_items_finish (::XdgFileManager1FileManager1* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_show_items_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_show_items_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_file_manager1_file_manager1_call_show_items_sync (XdgFileManager1FileManager1* proxy /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_file_manager1_file_manager1_call_show_items_sync (::XdgFileManager1FileManager1* proxy /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)

// void xdg_file_manager1_file_manager1_complete_show_folders (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_file_manager1_file_manager1_complete_show_folders (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_show_folders (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_file_manager1_file_manager1_complete_show_item_properties (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_file_manager1_file_manager1_complete_show_item_properties (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_show_item_properties (Gio::DBusMethodInvocation invocation) noexcept;

// void xdg_file_manager1_file_manager1_complete_show_items (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdg_file_manager1_file_manager1_complete_show_items (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_show_items (Gio::DBusMethodInvocation invocation) noexcept;

// (signal) gboolean handle-show-folders ( invocation /*none*/,  arg_URIs /*none*/, gchar* arg_StartupId /*none*/);
// (signal) gboolean handle-show-folders (::GDBusMethodInvocation* invocation /*none*/, char** arg_URIs /*none*/, char* arg_StartupId /*none*/);
gi::signal_proxy<bool(XdgFileManager1::FileManager1, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_URIs, gi::cstring_v arg_StartupId)> signal_handle_show_folders()
{ return gi::signal_proxy<bool(XdgFileManager1::FileManager1, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_URIs, gi::cstring_v arg_StartupId)> (*this, "handle-show-folders"); }

// (signal) gboolean handle-show-item-properties ( invocation /*none*/,  arg_URIs /*none*/, gchar* arg_StartupId /*none*/);
// (signal) gboolean handle-show-item-properties (::GDBusMethodInvocation* invocation /*none*/, char** arg_URIs /*none*/, char* arg_StartupId /*none*/);
gi::signal_proxy<bool(XdgFileManager1::FileManager1, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_URIs, gi::cstring_v arg_StartupId)> signal_handle_show_item_properties()
{ return gi::signal_proxy<bool(XdgFileManager1::FileManager1, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_URIs, gi::cstring_v arg_StartupId)> (*this, "handle-show-item-properties"); }

// (signal) gboolean handle-show-items ( invocation /*none*/,  arg_URIs /*none*/, gchar* arg_StartupId /*none*/);
// (signal) gboolean handle-show-items (::GDBusMethodInvocation* invocation /*none*/, char** arg_URIs /*none*/, char* arg_StartupId /*none*/);
gi::signal_proxy<bool(XdgFileManager1::FileManager1, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_URIs, gi::cstring_v arg_StartupId)> signal_handle_show_items()
{ return gi::signal_proxy<bool(XdgFileManager1::FileManager1, Gio::DBusMethodInvocation invocation, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> arg_URIs, gi::cstring_v arg_StartupId)> (*this, "handle-show-items"); }

}; // class

} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1_extra_def.hpp>)
#include <xdgfilemanager1/filemanager1_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1_extra.hpp>)
#include <xdgfilemanager1/filemanager1_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

class FileManager1 : public GI_XDGFILEMANAGER1_FILEMANAGER1_BASE
{ typedef GI_XDGFILEMANAGER1_FILEMANAGER1_BASE super_type; using super_type::super_type; };

} // namespace XdgFileManager1

template<> struct declare_cpptype_of<::XdgFileManager1FileManager1>
{ typedef XdgFileManager1::FileManager1 type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {


class FileManager1IfaceDef
{
typedef FileManager1IfaceDef self;
public:
typedef XdgFileManager1::FileManager1 instance_type;
typedef ::XdgFileManager1FileManager1Iface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_show_folders) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_show_item_properties) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_show_items) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FileManager1IfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean FileManager1::handle_show_folders (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_folders (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
virtual gboolean handle_show_folders_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept = 0;

// gboolean FileManager1::handle_show_item_properties (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_item_properties (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
virtual gboolean handle_show_item_properties_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept = 0;

// gboolean FileManager1::handle_show_items (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_items (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
virtual gboolean handle_show_items_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept = 0;


};

using FileManager1Impl = detail::InterfaceImpl<FileManager1IfaceDef>;

class FileManager1IfaceClassImpl: public detail::InterfaceClassImpl<FileManager1Impl>
{
friend class internal::FileManager1IfaceDef;
typedef FileManager1IfaceClassImpl self;
typedef detail::InterfaceClassImpl<FileManager1Impl> super;

protected:
using super::super;

// gboolean FileManager1::handle_show_folders (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_folders (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
GI_INLINE_DECL gboolean handle_show_folders_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept override;

// gboolean FileManager1::handle_show_item_properties (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_item_properties (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
GI_INLINE_DECL gboolean handle_show_item_properties_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept override;

// gboolean FileManager1::handle_show_items (XdgFileManager1FileManager1* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* const* arg_URIs /*none*/, const gchar* arg_StartupId /*none*/);
// gboolean FileManager1::handle_show_items (::XdgFileManager1FileManager1* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_URIs /*none*/, const char* arg_StartupId /*none*/);
// SKIP; inconsistent arg_URIs in pointer depth (2 vs 1)
GI_INLINE_DECL gboolean handle_show_items_ (::GDBusMethodInvocation* invocation, const gchar* const* arg_URIs, const gchar* arg_StartupId) noexcept override;


};


struct FileManager1IfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(FileManager1IfaceClassImpl, handle_show_folders)
  GI_MEMBER_DEFINE(FileManager1IfaceClassImpl, handle_show_item_properties)
  GI_MEMBER_DEFINE(FileManager1IfaceClassImpl, handle_show_items)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_show_folders),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_show_item_properties),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_show_items)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
