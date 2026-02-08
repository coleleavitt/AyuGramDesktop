// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_HAPTIC_HPP_
#define _GI_SIGXCPUFEEDBACK_HAPTIC_HPP_


namespace gi {

namespace repository {

namespace SigxcpuFeedback {


class Haptic;

namespace base {


#define GI_SIGXCPUFEEDBACK_HAPTIC_BASE base::HapticBase
class HapticBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SigxcpuFeedbackHaptic BaseObjectType;

HapticBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return sigxcpu_feedback_haptic_get_type(); } 

// GDBusInterfaceInfo* /*none*/ sigxcpu_feedback_haptic_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ sigxcpu_feedback_haptic_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint sigxcpu_feedback_haptic_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint sigxcpu_feedback_haptic_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void sigxcpu_feedback_haptic_call_vibrate (SigxcpuFeedbackHaptic* proxy /*none*/, const gchar* arg_app_id /*none*/, GVariant* arg_pattern /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void sigxcpu_feedback_haptic_call_vibrate (::SigxcpuFeedbackHaptic* proxy /*none*/, const char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_vibrate (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_vibrate (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::AsyncReadyCallback callback) noexcept;

// gboolean sigxcpu_feedback_haptic_call_vibrate_finish (SigxcpuFeedbackHaptic* proxy /*none*/, gboolean* out_success, GAsyncResult* res /*none*/, GError ** error);
// gboolean sigxcpu_feedback_haptic_call_vibrate_finish (::SigxcpuFeedbackHaptic* proxy /*none*/, gboolean* out_success, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_vibrate_finish (bool * out_success, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_vibrate_finish (bool * out_success, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_vibrate_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_vibrate_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean sigxcpu_feedback_haptic_call_vibrate_sync (SigxcpuFeedbackHaptic* proxy /*none*/, const gchar* arg_app_id /*none*/, GVariant* arg_pattern /*none*/, gboolean* out_success, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean sigxcpu_feedback_haptic_call_vibrate_sync (::SigxcpuFeedbackHaptic* proxy /*none*/, const char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/, gboolean* out_success, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success) noexcept;
GI_INLINE_DECL bool call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, bool * out_success, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, bool>> call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, bool> call_vibrate_sync (const gi::cstring_v arg_app_id, GLib::Variant arg_pattern, GLib::Error * _error) noexcept;

// void sigxcpu_feedback_haptic_complete_vibrate (SigxcpuFeedbackHaptic* object /*none*/, GDBusMethodInvocation* invocation /*full*/, gboolean success);
// void sigxcpu_feedback_haptic_complete_vibrate (::SigxcpuFeedbackHaptic* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, gboolean success);
GI_INLINE_DECL void complete_vibrate (Gio::DBusMethodInvocation invocation, gboolean success) noexcept;

// (signal) gboolean handle-vibrate ( invocation /*none*/, gchar* arg_app_id /*none*/,  arg_pattern /*none*/);
// (signal) gboolean handle-vibrate (::GDBusMethodInvocation* invocation /*none*/, char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/);
gi::signal_proxy<bool(SigxcpuFeedback::Haptic, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_app_id, GLib::Variant arg_pattern)> signal_handle_vibrate()
{ return gi::signal_proxy<bool(SigxcpuFeedback::Haptic, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_app_id, GLib::Variant arg_pattern)> (*this, "handle-vibrate"); }

}; // class

} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/haptic_extra_def.hpp>)
#include <sigxcpufeedback/haptic_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/haptic_extra.hpp>)
#include <sigxcpufeedback/haptic_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class Haptic : public GI_SIGXCPUFEEDBACK_HAPTIC_BASE
{ typedef GI_SIGXCPUFEEDBACK_HAPTIC_BASE super_type; using super_type::super_type; };

} // namespace SigxcpuFeedback

template<> struct declare_cpptype_of<::SigxcpuFeedbackHaptic>
{ typedef SigxcpuFeedback::Haptic type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {


class HapticIfaceDef
{
typedef HapticIfaceDef self;
public:
typedef SigxcpuFeedback::Haptic instance_type;
typedef ::SigxcpuFeedbackHapticIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_vibrate) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~HapticIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Haptic::handle_vibrate (SigxcpuFeedbackHaptic* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_app_id /*none*/, GVariant* arg_pattern /*none*/);
// gboolean Haptic::handle_vibrate (::SigxcpuFeedbackHaptic* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/);
virtual bool handle_vibrate_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_app_id, GLib::Variant arg_pattern) noexcept = 0;


};

using HapticImpl = detail::InterfaceImpl<HapticIfaceDef>;

class HapticIfaceClassImpl: public detail::InterfaceClassImpl<HapticImpl>
{
friend class internal::HapticIfaceDef;
typedef HapticIfaceClassImpl self;
typedef detail::InterfaceClassImpl<HapticImpl> super;

protected:
using super::super;

// gboolean Haptic::handle_vibrate (SigxcpuFeedbackHaptic* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_app_id /*none*/, GVariant* arg_pattern /*none*/);
// gboolean Haptic::handle_vibrate (::SigxcpuFeedbackHaptic* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_app_id /*none*/, ::GVariant* arg_pattern /*none*/);
GI_INLINE_DECL bool handle_vibrate_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_app_id, GLib::Variant arg_pattern) noexcept override;


};


struct HapticIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(HapticIfaceClassImpl, handle_vibrate)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_vibrate)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi

#endif
