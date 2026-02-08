// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_BACKGROUND_HPP_
#define _GI_XDPBACKGROUND_BACKGROUND_HPP_


namespace gi {

namespace repository {

namespace XdpBackground {


class Background;

namespace base {


#define GI_XDPBACKGROUND_BACKGROUND_BASE base::BackgroundBase
class BackgroundBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpBackgroundBackground BaseObjectType;

BackgroundBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_background_background_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdp_background_background_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_background_background_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdp_background_background_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_background_background_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_background_background_call_request_background (XdpBackgroundBackground* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_background_background_call_request_background (::XdpBackgroundBackground* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_request_background (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_request_background (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_background_background_call_request_background_finish (XdpBackgroundBackground* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_background_background_call_request_background_finish (::XdpBackgroundBackground* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_request_background_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_request_background_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_request_background_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_request_background_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_background_background_call_request_background_sync (XdpBackgroundBackground* proxy /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_background_background_call_request_background_sync (::XdpBackgroundBackground* proxy /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle) noexcept;
GI_INLINE_DECL bool call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_request_background_sync (const gi::cstring_v arg_parent_window, GLib::Variant arg_options, GLib::Error * _error) noexcept;

// void xdp_background_background_call_set_status (XdpBackgroundBackground* proxy /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_background_background_call_set_status (::XdpBackgroundBackground* proxy /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_set_status (GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_set_status (GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_background_background_call_set_status_finish (XdpBackgroundBackground* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_background_background_call_set_status_finish (::XdpBackgroundBackground* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_status_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_set_status_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_background_background_call_set_status_sync (XdpBackgroundBackground* proxy /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_background_background_call_set_status_sync (::XdpBackgroundBackground* proxy /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_status_sync (GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_set_status_sync (GLib::Variant arg_options) noexcept;
GI_INLINE_DECL bool call_set_status_sync (GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_set_status_sync (GLib::Variant arg_options, GLib::Error * _error) noexcept;

// void xdp_background_background_complete_request_background (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_background_background_complete_request_background (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
GI_INLINE_DECL void complete_request_background (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept;

// void xdp_background_background_complete_set_status (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdp_background_background_complete_set_status (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_set_status (Gio::DBusMethodInvocation invocation) noexcept;

// guint xdp_background_background_get_version (XdpBackgroundBackground* object /*none*/);
// guint xdp_background_background_get_version (::XdpBackgroundBackground* object /*none*/);
GI_INLINE_DECL guint get_version () noexcept;

// void xdp_background_background_set_version (XdpBackgroundBackground* object /*none*/, guint value);
// void xdp_background_background_set_version (::XdpBackgroundBackground* object /*none*/, guint value);
GI_INLINE_DECL void set_version (guint value) noexcept;

gi::property_proxy<guint, base::BackgroundBase> property_version()
{ return gi::property_proxy<guint, base::BackgroundBase> (*this, "version"); }
const gi::property_proxy<guint, base::BackgroundBase> property_version() const
{ return gi::property_proxy<guint, base::BackgroundBase> (*this, "version"); }

// (signal) gboolean handle-request-background ( invocation /*none*/, gchar* arg_parent_window /*none*/,  arg_options /*none*/);
// (signal) gboolean handle-request-background (::GDBusMethodInvocation* invocation /*none*/, char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/);
gi::signal_proxy<bool(XdpBackground::Background, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_parent_window, GLib::Variant arg_options)> signal_handle_request_background()
{ return gi::signal_proxy<bool(XdpBackground::Background, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_parent_window, GLib::Variant arg_options)> (*this, "handle-request-background"); }

// (signal) gboolean handle-set-status ( invocation /*none*/,  arg_options /*none*/);
// (signal) gboolean handle-set-status (::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_options /*none*/);
gi::signal_proxy<bool(XdpBackground::Background, Gio::DBusMethodInvocation invocation, GLib::Variant arg_options)> signal_handle_set_status()
{ return gi::signal_proxy<bool(XdpBackground::Background, Gio::DBusMethodInvocation invocation, GLib::Variant arg_options)> (*this, "handle-set-status"); }

}; // class

} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/background_extra_def.hpp>)
#include <xdpbackground/background_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/background_extra.hpp>)
#include <xdpbackground/background_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

class Background : public GI_XDPBACKGROUND_BACKGROUND_BASE
{ typedef GI_XDPBACKGROUND_BACKGROUND_BASE super_type; using super_type::super_type; };

} // namespace XdpBackground

template<> struct declare_cpptype_of<::XdpBackgroundBackground>
{ typedef XdpBackground::Background type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {


class BackgroundIfaceDef
{
typedef BackgroundIfaceDef self;
public:
typedef XdpBackground::Background instance_type;
typedef ::XdpBackgroundBackgroundIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_request_background) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_set_status) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~BackgroundIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Background::handle_request_background (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_options /*none*/);
// gboolean Background::handle_request_background (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/);
virtual bool handle_request_background_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, GLib::Variant arg_options) noexcept = 0;

// gboolean Background::handle_set_status (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GVariant* arg_options /*none*/);
// gboolean Background::handle_set_status (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_options /*none*/);
virtual bool handle_set_status_ (Gio::DBusMethodInvocation invocation, GLib::Variant arg_options) noexcept = 0;


};

using BackgroundImpl = detail::InterfaceImpl<BackgroundIfaceDef>;

class BackgroundIfaceClassImpl: public detail::InterfaceClassImpl<BackgroundImpl>
{
friend class internal::BackgroundIfaceDef;
typedef BackgroundIfaceClassImpl self;
typedef detail::InterfaceClassImpl<BackgroundImpl> super;

protected:
using super::super;

// gboolean Background::handle_request_background (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_parent_window /*none*/, GVariant* arg_options /*none*/);
// gboolean Background::handle_request_background (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_parent_window /*none*/, ::GVariant* arg_options /*none*/);
GI_INLINE_DECL bool handle_request_background_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_parent_window, GLib::Variant arg_options) noexcept override;

// gboolean Background::handle_set_status (XdpBackgroundBackground* object /*none*/, GDBusMethodInvocation* invocation /*none*/, GVariant* arg_options /*none*/);
// gboolean Background::handle_set_status (::XdpBackgroundBackground* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, ::GVariant* arg_options /*none*/);
GI_INLINE_DECL bool handle_set_status_ (Gio::DBusMethodInvocation invocation, GLib::Variant arg_options) noexcept override;


};


struct BackgroundIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(BackgroundIfaceClassImpl, handle_request_background)
  GI_MEMBER_DEFINE(BackgroundIfaceClassImpl, handle_set_status)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_request_background),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_set_status)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
