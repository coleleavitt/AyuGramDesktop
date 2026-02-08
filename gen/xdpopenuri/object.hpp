// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OBJECT_HPP_
#define _GI_XDPOPENURI_OBJECT_HPP_


namespace gi {

namespace repository {

namespace XdpOpenURI {

class OpenURI;

class Object;

namespace base {


#define GI_XDPOPENURI_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpOpenURIObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_open_uri_object_get_type(); } 

// XdpOpenURIOpenURI* /*full,nullable*/ xdp_open_uri_object_get_open_uri (XdpOpenURIObject* object /*none*/);
// ::XdpOpenURIOpenURI* /*full,nullable*/ xdp_open_uri_object_get_open_uri (::XdpOpenURIObject* object /*none*/);
GI_INLINE_DECL XdpOpenURI::OpenURI get_open_uri () noexcept;

// XdpOpenURIOpenURI* /*none,nullable*/ xdp_open_uri_object_peek_open_uri (XdpOpenURIObject* object /*none*/);
// ::XdpOpenURIOpenURI* /*none,nullable*/ xdp_open_uri_object_peek_open_uri (::XdpOpenURIObject* object /*none*/);
GI_INLINE_DECL XdpOpenURI::OpenURI peek_open_uri () noexcept;

gi::property_proxy<XdpOpenURI::OpenURI, base::ObjectBase> property_open_uri()
{ return gi::property_proxy<XdpOpenURI::OpenURI, base::ObjectBase> (*this, "open-uri"); }
const gi::property_proxy<XdpOpenURI::OpenURI, base::ObjectBase> property_open_uri() const
{ return gi::property_proxy<XdpOpenURI::OpenURI, base::ObjectBase> (*this, "open-uri"); }

}; // class

} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/object_extra_def.hpp>)
#include <xdpopenuri/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/object_extra.hpp>)
#include <xdpopenuri/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

class Object : public GI_XDPOPENURI_OBJECT_BASE
{ typedef GI_XDPOPENURI_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdpOpenURI

template<> struct declare_cpptype_of<::XdpOpenURIObject>
{ typedef XdpOpenURI::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdpOpenURI::Object instance_type;
typedef ::XdpOpenURIObjectIface interface_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using ObjectImpl = detail::InterfaceImpl<ObjectIfaceDef>;

class ObjectIfaceClassImpl: public detail::InterfaceClassImpl<ObjectImpl>
{
friend class internal::ObjectIfaceDef;
typedef ObjectIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ObjectImpl> super;

protected:
using super::super;


};


struct ObjectIfaceDef::TypeInitData
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

} // namespace impl

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
