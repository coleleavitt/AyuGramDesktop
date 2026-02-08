// AUTO-GENERATED

#ifndef _GI_XDGDBUS_OBJECTPROXY_HPP_
#define _GI_XDGDBUS_OBJECTPROXY_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class Object;

class ObjectProxy;

namespace base {


#define GI_XDGDBUS_OBJECTPROXY_BASE base::ObjectProxyBase
class ObjectProxyBase : public Gio::DBusObjectProxy
{
typedef Gio::DBusObjectProxy super_type;
public:
typedef ::XdgDBusObjectProxy BaseObjectType;

ObjectProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_object_proxy_get_type(); } 

GI_INLINE_DECL XdgDBus::Object interface_ (gi::interface_tag<XdgDBus::Object>);

GI_INLINE_DECL operator XdgDBus::Object ();

// XdgDBusObjectProxy* /*full*/ xdg_dbus_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::XdgDBusObjectProxy* /*full*/ xdg_dbus_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
static GI_INLINE_DECL XdgDBus::ObjectProxy new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/objectproxy_extra_def.hpp>)
#include <xdgdbus/objectproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/objectproxy_extra.hpp>)
#include <xdgdbus/objectproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class ObjectProxy : public GI_XDGDBUS_OBJECTPROXY_BASE
{ typedef GI_XDGDBUS_OBJECTPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusObjectProxy>
{ typedef XdgDBus::ObjectProxy type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class ObjectProxyClassDef
{
typedef ObjectProxyClassDef self;
public:
typedef XdgDBus::ObjectProxy instance_type;
typedef ::XdgDBusObjectProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectProxyClass: public detail::ClassTemplate<XdgDBus::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, XdgDBus::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectProxyClassDef;
typedef ObjectProxyClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, XdgDBus::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::ObjectIfaceClassImpl XdgDBusObjectIface_type;



};


struct ObjectProxyClassDef::TypeInitData
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

using ObjectProxyImpl = detail::ObjectImpl<ObjectProxy, internal::ObjectProxyClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
