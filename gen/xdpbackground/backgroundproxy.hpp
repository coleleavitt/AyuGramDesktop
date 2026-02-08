// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_BACKGROUNDPROXY_HPP_
#define _GI_XDPBACKGROUND_BACKGROUNDPROXY_HPP_


namespace gi {

namespace repository {

namespace XdpBackground {

class Background;

class BackgroundProxy;

namespace base {


#define GI_XDPBACKGROUND_BACKGROUNDPROXY_BASE base::BackgroundProxyBase
class BackgroundProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::XdpBackgroundBackgroundProxy BaseObjectType;

BackgroundProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_background_background_proxy_get_type(); } 

GI_INLINE_DECL XdpBackground::Background interface_ (gi::interface_tag<XdpBackground::Background>);

GI_INLINE_DECL operator XdpBackground::Background ();

// XdpBackgroundBackground* /*full*/ xdp_background_background_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpBackgroundBackgroundProxy* /*full*/ xdp_background_background_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpBackground::BackgroundProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdpBackground::BackgroundProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdpBackgroundBackground* /*full*/ xdp_background_background_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::XdpBackgroundBackgroundProxy* /*full*/ xdp_background_background_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpBackground::BackgroundProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL XdpBackground::BackgroundProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// XdpBackgroundBackground* /*full*/ xdp_background_background_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpBackgroundBackgroundProxy* /*full*/ xdp_background_background_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpBackground::BackgroundProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdpBackground::BackgroundProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdpBackground::BackgroundProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdpBackground::BackgroundProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// XdpBackgroundBackground* /*full*/ xdp_background_background_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::XdpBackgroundBackgroundProxy* /*full*/ xdp_background_background_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<XdpBackground::BackgroundProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<XdpBackground::BackgroundProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL XdpBackground::BackgroundProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL XdpBackground::BackgroundProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void xdp_background_background_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_background_background_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void xdp_background_background_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void xdp_background_background_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/backgroundproxy_extra_def.hpp>)
#include <xdpbackground/backgroundproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/backgroundproxy_extra.hpp>)
#include <xdpbackground/backgroundproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

class BackgroundProxy : public GI_XDPBACKGROUND_BACKGROUNDPROXY_BASE
{ typedef GI_XDPBACKGROUND_BACKGROUNDPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdpBackground

template<> struct declare_cpptype_of<::XdpBackgroundBackgroundProxy>
{ typedef XdpBackground::BackgroundProxy type; }; 

} // namespace repository

} // namespace gi

#include "background.hpp"

namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {


class BackgroundProxyClassDef
{
typedef BackgroundProxyClassDef self;
public:
typedef XdpBackground::BackgroundProxy instance_type;
typedef ::XdpBackgroundBackgroundProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BackgroundProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BackgroundProxyClass: public detail::ClassTemplate<XdpBackground::impl::internal::BackgroundProxyClassDef, Gio::impl::internal::DBusProxyClass, XdpBackground::impl::internal::BackgroundIfaceClassImpl>
{
friend class internal::BackgroundProxyClassDef;
typedef BackgroundProxyClass self;
typedef detail::ClassTemplate<XdpBackground::impl::internal::BackgroundProxyClassDef, Gio::impl::internal::DBusProxyClass, XdpBackground::impl::internal::BackgroundIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpBackground::impl::internal::BackgroundIfaceClassImpl XdpBackgroundBackgroundIface_type;



};


struct BackgroundProxyClassDef::TypeInitData
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

using BackgroundProxyImpl = detail::ObjectImpl<BackgroundProxy, internal::BackgroundProxyClass>;

} // namespace impl

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
