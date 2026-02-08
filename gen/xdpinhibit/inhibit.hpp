// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_INHIBIT_HPP_
#define _GI_XDPINHIBIT_INHIBIT_HPP_


namespace gi {

namespace repository {

namespace XdpInhibit {


class Inhibit;

namespace base {


#define GI_XDPINHIBIT_INHIBIT_BASE base::InhibitBase
class InhibitBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpInhibitInhibit BaseObjectType;

InhibitBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_inhibit_inhibit_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdp_inhibit_inhibit_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdp_inhibit_inhibit_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdp_inhibit_inhibit_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdp_inhibit_inhibit_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdp_inhibit_inhibit_call_create_monitor (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_inhibit_inhibit_call_create_monitor (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_create_monitor (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_create_monitor (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_inhibit_inhibit_call_create_monitor_finish (XdpInhibitInhibit* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_create_monitor_finish (::XdpInhibitInhibit* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_create_monitor_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_create_monitor_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_create_monitor_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_create_monitor_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_inhibit_inhibit_call_create_monitor_sync (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_create_monitor_sync (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle) noexcept;
GI_INLINE_DECL bool call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_create_monitor_sync (const gi::cstring_v arg_window, GLib::Variant arg_options, GLib::Error * _error) noexcept;

// void xdp_inhibit_inhibit_call_inhibit (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, guint arg_flags, GVariant* arg_options /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_inhibit_inhibit_call_inhibit (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_inhibit (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_inhibit (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_inhibit_inhibit_call_inhibit_finish (XdpInhibitInhibit* proxy /*none*/, gchar** out_handle /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_inhibit_finish (::XdpInhibitInhibit* proxy /*none*/, char** out_handle /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_inhibit_finish (gi::cstring * out_handle, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_inhibit_finish (gi::cstring * out_handle, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_inhibit_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_inhibit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_inhibit_inhibit_call_inhibit_sync (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_window /*none*/, guint arg_flags, GVariant* arg_options /*none*/, gchar** out_handle /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_inhibit_sync (::XdpInhibitInhibit* proxy /*none*/, const char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/, char** out_handle /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle) noexcept;
GI_INLINE_DECL bool call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, gi::cstring * out_handle, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_inhibit_sync (const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options, GLib::Error * _error) noexcept;

// void xdp_inhibit_inhibit_call_query_end_response (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_session_handle /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_inhibit_inhibit_call_query_end_response (::XdpInhibitInhibit* proxy /*none*/, const char* arg_session_handle /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_query_end_response (const gi::cstring_v arg_session_handle, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_query_end_response (const gi::cstring_v arg_session_handle, Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdp_inhibit_inhibit_call_query_end_response_finish (XdpInhibitInhibit* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_query_end_response_finish (::XdpInhibitInhibit* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_query_end_response_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_query_end_response_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdp_inhibit_inhibit_call_query_end_response_sync (XdpInhibitInhibit* proxy /*none*/, const gchar* arg_session_handle /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdp_inhibit_inhibit_call_query_end_response_sync (::XdpInhibitInhibit* proxy /*none*/, const char* arg_session_handle /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_query_end_response_sync (const gi::cstring_v arg_session_handle, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_query_end_response_sync (const gi::cstring_v arg_session_handle) noexcept;
GI_INLINE_DECL bool call_query_end_response_sync (const gi::cstring_v arg_session_handle, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_query_end_response_sync (const gi::cstring_v arg_session_handle, GLib::Error * _error) noexcept;

// void xdp_inhibit_inhibit_complete_create_monitor (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_inhibit_inhibit_complete_create_monitor (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
GI_INLINE_DECL void complete_create_monitor (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept;

// void xdp_inhibit_inhibit_complete_inhibit (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* handle /*none*/);
// void xdp_inhibit_inhibit_complete_inhibit (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* handle /*none*/);
GI_INLINE_DECL void complete_inhibit (Gio::DBusMethodInvocation invocation, const gi::cstring_v handle) noexcept;

// void xdp_inhibit_inhibit_complete_query_end_response (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void xdp_inhibit_inhibit_complete_query_end_response (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_query_end_response (Gio::DBusMethodInvocation invocation) noexcept;

// void xdp_inhibit_inhibit_emit_state_changed (XdpInhibitInhibit* object /*none*/, const gchar* arg_session_handle /*none*/, GVariant* arg_state /*none*/);
// void xdp_inhibit_inhibit_emit_state_changed (::XdpInhibitInhibit* object /*none*/, const char* arg_session_handle /*none*/, ::GVariant* arg_state /*none*/);
GI_INLINE_DECL void emit_state_changed (const gi::cstring_v arg_session_handle, GLib::Variant arg_state) noexcept;

// guint xdp_inhibit_inhibit_get_version (XdpInhibitInhibit* object /*none*/);
// guint xdp_inhibit_inhibit_get_version (::XdpInhibitInhibit* object /*none*/);
GI_INLINE_DECL guint get_version () noexcept;

// void xdp_inhibit_inhibit_set_version (XdpInhibitInhibit* object /*none*/, guint value);
// void xdp_inhibit_inhibit_set_version (::XdpInhibitInhibit* object /*none*/, guint value);
GI_INLINE_DECL void set_version (guint value) noexcept;

gi::property_proxy<guint, base::InhibitBase> property_version()
{ return gi::property_proxy<guint, base::InhibitBase> (*this, "version"); }
const gi::property_proxy<guint, base::InhibitBase> property_version() const
{ return gi::property_proxy<guint, base::InhibitBase> (*this, "version"); }

// (signal) gboolean handle-create-monitor ( invocation /*none*/, gchar* arg_window /*none*/,  arg_options /*none*/);
// (signal) gboolean handle-create-monitor (::GDBusMethodInvocation* invocation /*none*/, char* arg_window /*none*/, ::GVariant* arg_options /*none*/);
gi::signal_proxy<bool(XdpInhibit::Inhibit, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_window, GLib::Variant arg_options)> signal_handle_create_monitor()
{ return gi::signal_proxy<bool(XdpInhibit::Inhibit, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_window, GLib::Variant arg_options)> (*this, "handle-create-monitor"); }

// (signal) gboolean handle-inhibit ( invocation /*none*/, gchar* arg_window /*none*/, guint arg_flags,  arg_options /*none*/);
// (signal) gboolean handle-inhibit (::GDBusMethodInvocation* invocation /*none*/, char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/);
gi::signal_proxy<bool(XdpInhibit::Inhibit, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options)> signal_handle_inhibit()
{ return gi::signal_proxy<bool(XdpInhibit::Inhibit, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options)> (*this, "handle-inhibit"); }

// (signal) gboolean handle-query-end-response ( invocation /*none*/, gchar* arg_session_handle /*none*/);
// (signal) gboolean handle-query-end-response (::GDBusMethodInvocation* invocation /*none*/, char* arg_session_handle /*none*/);
gi::signal_proxy<bool(XdpInhibit::Inhibit, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_session_handle)> signal_handle_query_end_response()
{ return gi::signal_proxy<bool(XdpInhibit::Inhibit, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_session_handle)> (*this, "handle-query-end-response"); }

// (signal) void state-changed (gchar* arg_session_handle /*none*/,  arg_state /*none*/);
// (signal) void state-changed (char* arg_session_handle /*none*/, ::GVariant* arg_state /*none*/);
gi::signal_proxy<void(XdpInhibit::Inhibit, gi::cstring_v arg_session_handle, GLib::Variant arg_state)> signal_state_changed()
{ return gi::signal_proxy<void(XdpInhibit::Inhibit, gi::cstring_v arg_session_handle, GLib::Variant arg_state)> (*this, "state-changed"); }

}; // class

} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibit_extra_def.hpp>)
#include <xdpinhibit/inhibit_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibit_extra.hpp>)
#include <xdpinhibit/inhibit_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

class Inhibit : public GI_XDPINHIBIT_INHIBIT_BASE
{ typedef GI_XDPINHIBIT_INHIBIT_BASE super_type; using super_type::super_type; };

} // namespace XdpInhibit

template<> struct declare_cpptype_of<::XdpInhibitInhibit>
{ typedef XdpInhibit::Inhibit type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {


class InhibitIfaceDef
{
typedef InhibitIfaceDef self;
public:
typedef XdpInhibit::Inhibit instance_type;
typedef ::XdpInhibitInhibitIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_create_monitor) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_inhibit) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_query_end_response) = self;
using GI_MEMBER_CHECK_CONFLICT(state_changed) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~InhibitIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Inhibit::handle_create_monitor (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_window /*none*/, GVariant* arg_options /*none*/);
// gboolean Inhibit::handle_create_monitor (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_window /*none*/, ::GVariant* arg_options /*none*/);
virtual bool handle_create_monitor_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, GLib::Variant arg_options) noexcept = 0;

// gboolean Inhibit::handle_inhibit (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_window /*none*/, guint arg_flags, GVariant* arg_options /*none*/);
// gboolean Inhibit::handle_inhibit (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/);
virtual bool handle_inhibit_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options) noexcept = 0;

// gboolean Inhibit::handle_query_end_response (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_session_handle /*none*/);
// gboolean Inhibit::handle_query_end_response (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_session_handle /*none*/);
virtual bool handle_query_end_response_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_session_handle) noexcept = 0;

// void Inhibit::state_changed (XdpInhibitInhibit* object /*none*/, const gchar* arg_session_handle /*none*/, GVariant* arg_state /*none*/);
// void Inhibit::state_changed (::XdpInhibitInhibit* object /*none*/, const char* arg_session_handle /*none*/, ::GVariant* arg_state /*none*/);
virtual void state_changed_ (const gi::cstring_v arg_session_handle, GLib::Variant arg_state) noexcept = 0;


};

using InhibitImpl = detail::InterfaceImpl<InhibitIfaceDef>;

class InhibitIfaceClassImpl: public detail::InterfaceClassImpl<InhibitImpl>
{
friend class internal::InhibitIfaceDef;
typedef InhibitIfaceClassImpl self;
typedef detail::InterfaceClassImpl<InhibitImpl> super;

protected:
using super::super;

// gboolean Inhibit::handle_create_monitor (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_window /*none*/, GVariant* arg_options /*none*/);
// gboolean Inhibit::handle_create_monitor (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_window /*none*/, ::GVariant* arg_options /*none*/);
GI_INLINE_DECL bool handle_create_monitor_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, GLib::Variant arg_options) noexcept override;

// gboolean Inhibit::handle_inhibit (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_window /*none*/, guint arg_flags, GVariant* arg_options /*none*/);
// gboolean Inhibit::handle_inhibit (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_window /*none*/, guint arg_flags, ::GVariant* arg_options /*none*/);
GI_INLINE_DECL bool handle_inhibit_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_window, guint arg_flags, GLib::Variant arg_options) noexcept override;

// gboolean Inhibit::handle_query_end_response (XdpInhibitInhibit* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_session_handle /*none*/);
// gboolean Inhibit::handle_query_end_response (::XdpInhibitInhibit* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_session_handle /*none*/);
GI_INLINE_DECL bool handle_query_end_response_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_session_handle) noexcept override;

// void Inhibit::state_changed (XdpInhibitInhibit* object /*none*/, const gchar* arg_session_handle /*none*/, GVariant* arg_state /*none*/);
// void Inhibit::state_changed (::XdpInhibitInhibit* object /*none*/, const char* arg_session_handle /*none*/, ::GVariant* arg_state /*none*/);
GI_INLINE_DECL void state_changed_ (const gi::cstring_v arg_session_handle, GLib::Variant arg_state) noexcept override;


};


struct InhibitIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(InhibitIfaceClassImpl, handle_create_monitor)
  GI_MEMBER_DEFINE(InhibitIfaceClassImpl, handle_inhibit)
  GI_MEMBER_DEFINE(InhibitIfaceClassImpl, handle_query_end_response)
  GI_MEMBER_DEFINE(InhibitIfaceClassImpl, state_changed)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_create_monitor),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_inhibit),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_query_end_response),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, state_changed)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdpInhibit

} // namespace repository

} // namespace gi

#endif
