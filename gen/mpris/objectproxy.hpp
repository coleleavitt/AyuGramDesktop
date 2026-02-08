// AUTO-GENERATED

#ifndef _GI_MPRIS_OBJECTPROXY_HPP_
#define _GI_MPRIS_OBJECTPROXY_HPP_


namespace gi {

namespace repository {

namespace Mpris {

class Object;

class ObjectProxy;

namespace base {


#define GI_MPRIS_OBJECTPROXY_BASE base::ObjectProxyBase
class ObjectProxyBase : public Gio::DBusObjectProxy
{
typedef Gio::DBusObjectProxy super_type;
public:
typedef ::MprisObjectProxy BaseObjectType;

ObjectProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_object_proxy_get_type(); } 

GI_INLINE_DECL Mpris::Object interface_ (gi::interface_tag<Mpris::Object>);

GI_INLINE_DECL operator Mpris::Object ();

// MprisObjectProxy* /*full*/ mpris_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::MprisObjectProxy* /*full*/ mpris_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
static GI_INLINE_DECL Mpris::ObjectProxy new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept;

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/objectproxy_extra_def.hpp>)
#include <mpris/objectproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/objectproxy_extra.hpp>)
#include <mpris/objectproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class ObjectProxy : public GI_MPRIS_OBJECTPROXY_BASE
{ typedef GI_MPRIS_OBJECTPROXY_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisObjectProxy>
{ typedef Mpris::ObjectProxy type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class ObjectProxyClassDef
{
typedef ObjectProxyClassDef self;
public:
typedef Mpris::ObjectProxy instance_type;
typedef ::MprisObjectProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectProxyClass: public detail::ClassTemplate<Mpris::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, Mpris::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectProxyClassDef;
typedef ObjectProxyClass self;
typedef detail::ClassTemplate<Mpris::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, Mpris::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Mpris::impl::internal::ObjectIfaceClassImpl MprisObjectIface_type;



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

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
