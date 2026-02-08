// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_OBJECT_HPP_
#define _GI_SNAPCRAFT_OBJECT_HPP_


namespace gi {

namespace repository {

namespace Snapcraft {

class Settings;

class Object;

namespace base {


#define GI_SNAPCRAFT_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SnapcraftObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return snapcraft_object_get_type(); } 

// SnapcraftSettings* /*full,nullable*/ snapcraft_object_get_settings (SnapcraftObject* object /*none*/);
// ::SnapcraftSettings* /*full,nullable*/ snapcraft_object_get_settings (::SnapcraftObject* object /*none*/);
GI_INLINE_DECL Snapcraft::Settings get_settings () noexcept;

// SnapcraftSettings* /*none,nullable*/ snapcraft_object_peek_settings (SnapcraftObject* object /*none*/);
// ::SnapcraftSettings* /*none,nullable*/ snapcraft_object_peek_settings (::SnapcraftObject* object /*none*/);
GI_INLINE_DECL Snapcraft::Settings peek_settings () noexcept;

gi::property_proxy<Snapcraft::Settings, base::ObjectBase> property_settings()
{ return gi::property_proxy<Snapcraft::Settings, base::ObjectBase> (*this, "settings"); }
const gi::property_proxy<Snapcraft::Settings, base::ObjectBase> property_settings() const
{ return gi::property_proxy<Snapcraft::Settings, base::ObjectBase> (*this, "settings"); }

}; // class

} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/object_extra_def.hpp>)
#include <snapcraft/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/object_extra.hpp>)
#include <snapcraft/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

class Object : public GI_SNAPCRAFT_OBJECT_BASE
{ typedef GI_SNAPCRAFT_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace Snapcraft

template<> struct declare_cpptype_of<::SnapcraftObject>
{ typedef Snapcraft::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef Snapcraft::Object instance_type;
typedef ::SnapcraftObjectIface interface_type;


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

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
