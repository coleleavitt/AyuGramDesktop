// AUTO-GENERATED

#ifndef _GI_XDPSETTINGS_OBJECTPROXY_HPP_
#define _GI_XDPSETTINGS_OBJECTPROXY_HPP_


namespace gi {

namespace repository {

namespace XdpSettings {

class Object;

class ObjectProxy;

namespace base {


#define GI_XDPSETTINGS_OBJECTPROXY_BASE base::ObjectProxyBase
class ObjectProxyBase : public Gio::DBusObjectProxy
{
typedef Gio::DBusObjectProxy super_type;
public:
typedef ::XdpSettingsObjectProxy BaseObjectType;

ObjectProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_settings_object_proxy_get_type(); } 

GI_INLINE_DECL XdpSettings::Object interface_ (gi::interface_tag<XdpSettings::Object>);

GI_INLINE_DECL operator XdpSettings::Object ();

// XdpSettingsObjectProxy* /*full*/ xdp_settings_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::XdpSettingsObjectProxy* /*full*/ xdp_settings_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
static GI_INLINE_DECL XdpSettings::ObjectProxy new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept;

}; // class

} // namespace base

} // namespace XdpSettings

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpsettings/objectproxy_extra_def.hpp>)
#include <xdpsettings/objectproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpsettings/objectproxy_extra.hpp>)
#include <xdpsettings/objectproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpSettings {

class ObjectProxy : public GI_XDPSETTINGS_OBJECTPROXY_BASE
{ typedef GI_XDPSETTINGS_OBJECTPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdpSettings

template<> struct declare_cpptype_of<::XdpSettingsObjectProxy>
{ typedef XdpSettings::ObjectProxy type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdpSettings {

namespace impl {

namespace internal {


class ObjectProxyClassDef
{
typedef ObjectProxyClassDef self;
public:
typedef XdpSettings::ObjectProxy instance_type;
typedef ::XdpSettingsObjectProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectProxyClass: public detail::ClassTemplate<XdpSettings::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, XdpSettings::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectProxyClassDef;
typedef ObjectProxyClass self;
typedef detail::ClassTemplate<XdpSettings::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, XdpSettings::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpSettings::impl::internal::ObjectIfaceClassImpl XdpSettingsObjectIface_type;



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

} // namespace XdpSettings

} // namespace repository

} // namespace gi

#endif
