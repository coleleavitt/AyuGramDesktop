// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_OBJECT_HPP_
#define _GI_XDPINHIBIT_OBJECT_HPP_


namespace gi {

namespace repository {

namespace XdpInhibit {

class Inhibit;

class Object;

namespace base {


#define GI_XDPINHIBIT_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpInhibitObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_inhibit_object_get_type(); } 

// XdpInhibitInhibit* /*full,nullable*/ xdp_inhibit_object_get_inhibit (XdpInhibitObject* object /*none*/);
// ::XdpInhibitInhibit* /*full,nullable*/ xdp_inhibit_object_get_inhibit (::XdpInhibitObject* object /*none*/);
GI_INLINE_DECL XdpInhibit::Inhibit get_inhibit () noexcept;

// XdpInhibitInhibit* /*none,nullable*/ xdp_inhibit_object_peek_inhibit (XdpInhibitObject* object /*none*/);
// ::XdpInhibitInhibit* /*none,nullable*/ xdp_inhibit_object_peek_inhibit (::XdpInhibitObject* object /*none*/);
GI_INLINE_DECL XdpInhibit::Inhibit peek_inhibit () noexcept;

gi::property_proxy<XdpInhibit::Inhibit, base::ObjectBase> property_inhibit()
{ return gi::property_proxy<XdpInhibit::Inhibit, base::ObjectBase> (*this, "inhibit"); }
const gi::property_proxy<XdpInhibit::Inhibit, base::ObjectBase> property_inhibit() const
{ return gi::property_proxy<XdpInhibit::Inhibit, base::ObjectBase> (*this, "inhibit"); }

}; // class

} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/object_extra_def.hpp>)
#include <xdpinhibit/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/object_extra.hpp>)
#include <xdpinhibit/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

class Object : public GI_XDPINHIBIT_OBJECT_BASE
{ typedef GI_XDPINHIBIT_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdpInhibit

template<> struct declare_cpptype_of<::XdpInhibitObject>
{ typedef XdpInhibit::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdpInhibit::Object instance_type;
typedef ::XdpInhibitObjectIface interface_type;


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

} // namespace XdpInhibit

} // namespace repository

} // namespace gi

#endif
