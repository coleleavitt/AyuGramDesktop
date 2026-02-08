// AUTO-GENERATED

#ifndef _GI_XDPSETTINGS_OBJECT_HPP_
#define _GI_XDPSETTINGS_OBJECT_HPP_


namespace gi {

namespace repository {

namespace XdpSettings {

class Settings;

class Object;

namespace base {


#define GI_XDPSETTINGS_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpSettingsObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_settings_object_get_type(); } 

// XdpSettingsSettings* /*full,nullable*/ xdp_settings_object_get_settings (XdpSettingsObject* object /*none*/);
// ::XdpSettingsSettings* /*full,nullable*/ xdp_settings_object_get_settings (::XdpSettingsObject* object /*none*/);
GI_INLINE_DECL XdpSettings::Settings get_settings () noexcept;

// XdpSettingsSettings* /*none,nullable*/ xdp_settings_object_peek_settings (XdpSettingsObject* object /*none*/);
// ::XdpSettingsSettings* /*none,nullable*/ xdp_settings_object_peek_settings (::XdpSettingsObject* object /*none*/);
GI_INLINE_DECL XdpSettings::Settings peek_settings () noexcept;

gi::property_proxy<XdpSettings::Settings, base::ObjectBase> property_settings()
{ return gi::property_proxy<XdpSettings::Settings, base::ObjectBase> (*this, "settings"); }
const gi::property_proxy<XdpSettings::Settings, base::ObjectBase> property_settings() const
{ return gi::property_proxy<XdpSettings::Settings, base::ObjectBase> (*this, "settings"); }

}; // class

} // namespace base

} // namespace XdpSettings

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpsettings/object_extra_def.hpp>)
#include <xdpsettings/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpsettings/object_extra.hpp>)
#include <xdpsettings/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpSettings {

class Object : public GI_XDPSETTINGS_OBJECT_BASE
{ typedef GI_XDPSETTINGS_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdpSettings

template<> struct declare_cpptype_of<::XdpSettingsObject>
{ typedef XdpSettings::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpSettings {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdpSettings::Object instance_type;
typedef ::XdpSettingsObjectIface interface_type;


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

} // namespace XdpSettings

} // namespace repository

} // namespace gi

#endif
