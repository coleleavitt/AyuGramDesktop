// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSINTROSPECTABLE_HPP_
#define _GI_XDGDBUS_DBUSINTROSPECTABLE_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {


class DBusIntrospectable;

namespace base {


#define GI_XDGDBUS_DBUSINTROSPECTABLE_BASE base::DBusIntrospectableBase
class DBusIntrospectableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgDBusDBusIntrospectable BaseObjectType;

DBusIntrospectableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_introspectable_get_type(); } 

// GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_introspectable_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ xdg_dbus_dbus_introspectable_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint xdg_dbus_dbus_introspectable_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint xdg_dbus_dbus_introspectable_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void xdg_dbus_dbus_introspectable_call_introspect (XdgDBusDBusIntrospectable* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdg_dbus_dbus_introspectable_call_introspect (::XdgDBusDBusIntrospectable* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_introspect (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_introspect (Gio::AsyncReadyCallback callback) noexcept;

// gboolean xdg_dbus_dbus_introspectable_call_introspect_finish (XdgDBusDBusIntrospectable* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean xdg_dbus_dbus_introspectable_call_introspect_finish (::XdgDBusDBusIntrospectable* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_introspect_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_introspect_finish (gi::cstring * out_unnamed_arg0, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_introspect_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_introspect_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean xdg_dbus_dbus_introspectable_call_introspect_sync (XdgDBusDBusIntrospectable* proxy /*none*/, gchar** out_unnamed_arg0 /*full,out,opt*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean xdg_dbus_dbus_introspectable_call_introspect_sync (::XdgDBusDBusIntrospectable* proxy /*none*/, char** out_unnamed_arg0 /*full,out,opt*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_introspect_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_introspect_sync (gi::cstring * out_unnamed_arg0) noexcept;
GI_INLINE_DECL bool call_introspect_sync (gi::cstring * out_unnamed_arg0, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_introspect_sync (gi::cstring * out_unnamed_arg0, GLib::Error * _error) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_introspect_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<std::tuple<bool, gi::cstring>> call_introspect_sync () noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_introspect_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring> call_introspect_sync (GLib::Error * _error) noexcept;

// void xdg_dbus_dbus_introspectable_complete_introspect (XdgDBusDBusIntrospectable* object /*none*/, GDBusMethodInvocation* invocation /*full*/, const gchar* unnamed_arg0 /*none*/);
// void xdg_dbus_dbus_introspectable_complete_introspect (::XdgDBusDBusIntrospectable* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/, const char* unnamed_arg0 /*none*/);
GI_INLINE_DECL void complete_introspect (Gio::DBusMethodInvocation invocation, const gi::cstring_v unnamed_arg0) noexcept;

// (signal) gboolean handle-introspect ( invocation /*none*/);
// (signal) gboolean handle-introspect (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(XdgDBus::DBusIntrospectable, Gio::DBusMethodInvocation invocation)> signal_handle_introspect()
{ return gi::signal_proxy<bool(XdgDBus::DBusIntrospectable, Gio::DBusMethodInvocation invocation)> (*this, "handle-introspect"); }

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectable_extra_def.hpp>)
#include <xdgdbus/dbusintrospectable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectable_extra.hpp>)
#include <xdgdbus/dbusintrospectable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusIntrospectable : public GI_XDGDBUS_DBUSINTROSPECTABLE_BASE
{ typedef GI_XDGDBUS_DBUSINTROSPECTABLE_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusIntrospectable>
{ typedef XdgDBus::DBusIntrospectable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusIntrospectableIfaceDef
{
typedef DBusIntrospectableIfaceDef self;
public:
typedef XdgDBus::DBusIntrospectable instance_type;
typedef ::XdgDBusDBusIntrospectableIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_introspect) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusIntrospectableIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DBusIntrospectable::handle_introspect (XdgDBusDBusIntrospectable* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusIntrospectable::handle_introspect (::XdgDBusDBusIntrospectable* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_introspect_ (Gio::DBusMethodInvocation invocation) noexcept = 0;


};

using DBusIntrospectableImpl = detail::InterfaceImpl<DBusIntrospectableIfaceDef>;

class DBusIntrospectableIfaceClassImpl: public detail::InterfaceClassImpl<DBusIntrospectableImpl>
{
friend class internal::DBusIntrospectableIfaceDef;
typedef DBusIntrospectableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DBusIntrospectableImpl> super;

protected:
using super::super;

// gboolean DBusIntrospectable::handle_introspect (XdgDBusDBusIntrospectable* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean DBusIntrospectable::handle_introspect (::XdgDBusDBusIntrospectable* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_introspect_ (Gio::DBusMethodInvocation invocation) noexcept override;


};


struct DBusIntrospectableIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(DBusIntrospectableIfaceClassImpl, handle_introspect)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_introspect)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
