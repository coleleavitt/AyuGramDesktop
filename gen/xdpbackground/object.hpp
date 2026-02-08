// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_OBJECT_HPP_
#define _GI_XDPBACKGROUND_OBJECT_HPP_


namespace gi {

namespace repository {

namespace XdpBackground {

class Background;

class Object;

namespace base {


#define GI_XDPBACKGROUND_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpBackgroundObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_background_object_get_type(); } 

// XdpBackgroundBackground* /*full,nullable*/ xdp_background_object_get_background (XdpBackgroundObject* object /*none*/);
// ::XdpBackgroundBackground* /*full,nullable*/ xdp_background_object_get_background (::XdpBackgroundObject* object /*none*/);
GI_INLINE_DECL XdpBackground::Background get_background () noexcept;

// XdpBackgroundBackground* /*none,nullable*/ xdp_background_object_peek_background (XdpBackgroundObject* object /*none*/);
// ::XdpBackgroundBackground* /*none,nullable*/ xdp_background_object_peek_background (::XdpBackgroundObject* object /*none*/);
GI_INLINE_DECL XdpBackground::Background peek_background () noexcept;

gi::property_proxy<XdpBackground::Background, base::ObjectBase> property_background()
{ return gi::property_proxy<XdpBackground::Background, base::ObjectBase> (*this, "background"); }
const gi::property_proxy<XdpBackground::Background, base::ObjectBase> property_background() const
{ return gi::property_proxy<XdpBackground::Background, base::ObjectBase> (*this, "background"); }

}; // class

} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/object_extra_def.hpp>)
#include <xdpbackground/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/object_extra.hpp>)
#include <xdpbackground/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

class Object : public GI_XDPBACKGROUND_OBJECT_BASE
{ typedef GI_XDPBACKGROUND_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdpBackground

template<> struct declare_cpptype_of<::XdpBackgroundObject>
{ typedef XdpBackground::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdpBackground::Object instance_type;
typedef ::XdpBackgroundObjectIface interface_type;


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

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
