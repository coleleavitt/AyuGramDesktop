// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_OBJECTPROXY_HPP_
#define _GI_XDGFILEMANAGER1_OBJECTPROXY_HPP_


namespace gi {

namespace repository {

namespace XdgFileManager1 {

class Object;

class ObjectProxy;

namespace base {


#define GI_XDGFILEMANAGER1_OBJECTPROXY_BASE base::ObjectProxyBase
class ObjectProxyBase : public Gio::DBusObjectProxy
{
typedef Gio::DBusObjectProxy super_type;
public:
typedef ::XdgFileManager1ObjectProxy BaseObjectType;

ObjectProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_file_manager1_object_proxy_get_type(); } 

GI_INLINE_DECL XdgFileManager1::Object interface_ (gi::interface_tag<XdgFileManager1::Object>);

GI_INLINE_DECL operator XdgFileManager1::Object ();

// XdgFileManager1ObjectProxy* /*full*/ xdg_file_manager1_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::XdgFileManager1ObjectProxy* /*full*/ xdg_file_manager1_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
static GI_INLINE_DECL XdgFileManager1::ObjectProxy new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept;

}; // class

} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectproxy_extra_def.hpp>)
#include <xdgfilemanager1/objectproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectproxy_extra.hpp>)
#include <xdgfilemanager1/objectproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

class ObjectProxy : public GI_XDGFILEMANAGER1_OBJECTPROXY_BASE
{ typedef GI_XDGFILEMANAGER1_OBJECTPROXY_BASE super_type; using super_type::super_type; };

} // namespace XdgFileManager1

template<> struct declare_cpptype_of<::XdgFileManager1ObjectProxy>
{ typedef XdgFileManager1::ObjectProxy type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {


class ObjectProxyClassDef
{
typedef ObjectProxyClassDef self;
public:
typedef XdgFileManager1::ObjectProxy instance_type;
typedef ::XdgFileManager1ObjectProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectProxyClass: public detail::ClassTemplate<XdgFileManager1::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, XdgFileManager1::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectProxyClassDef;
typedef ObjectProxyClass self;
typedef detail::ClassTemplate<XdgFileManager1::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, XdgFileManager1::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgFileManager1::impl::internal::ObjectIfaceClassImpl XdgFileManager1ObjectIface_type;



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

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
