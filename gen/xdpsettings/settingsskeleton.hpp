// AUTO-GENERATED

#ifndef _GI_XDPSETTINGS_SETTINGSSKELETON_HPP_
#define _GI_XDPSETTINGS_SETTINGSSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpSettings {

class Settings;

class SettingsSkeleton;

namespace base {


#define GI_XDPSETTINGS_SETTINGSSKELETON_BASE base::SettingsSkeletonBase
class SettingsSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdpSettingsSettingsSkeleton BaseObjectType;

SettingsSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_settings_settings_skeleton_get_type(); } 

GI_INLINE_DECL XdpSettings::Settings interface_ (gi::interface_tag<XdpSettings::Settings>);

GI_INLINE_DECL operator XdpSettings::Settings ();

// XdpSettingsSettings* /*full*/ xdp_settings_settings_skeleton_new ();
// ::XdpSettingsSettingsSkeleton* /*full*/ xdp_settings_settings_skeleton_new ();
static GI_INLINE_DECL XdpSettings::SettingsSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdpSettings

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpsettings/settingsskeleton_extra_def.hpp>)
#include <xdpsettings/settingsskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpsettings/settingsskeleton_extra.hpp>)
#include <xdpsettings/settingsskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpSettings {

class SettingsSkeleton : public GI_XDPSETTINGS_SETTINGSSKELETON_BASE
{ typedef GI_XDPSETTINGS_SETTINGSSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpSettings

template<> struct declare_cpptype_of<::XdpSettingsSettingsSkeleton>
{ typedef XdpSettings::SettingsSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "settings.hpp"

namespace gi {

namespace repository {

namespace XdpSettings {

namespace impl {

namespace internal {


class SettingsSkeletonClassDef
{
typedef SettingsSkeletonClassDef self;
public:
typedef XdpSettings::SettingsSkeleton instance_type;
typedef ::XdpSettingsSettingsSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SettingsSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SettingsSkeletonClass: public detail::ClassTemplate<XdpSettings::impl::internal::SettingsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpSettings::impl::internal::SettingsIfaceClassImpl>
{
friend class internal::SettingsSkeletonClassDef;
typedef SettingsSkeletonClass self;
typedef detail::ClassTemplate<XdpSettings::impl::internal::SettingsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpSettings::impl::internal::SettingsIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpSettings::impl::internal::SettingsIfaceClassImpl XdpSettingsSettingsIface_type;



};


struct SettingsSkeletonClassDef::TypeInitData
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

using SettingsSkeletonImpl = detail::ObjectImpl<SettingsSkeleton, internal::SettingsSkeletonClass>;

} // namespace impl

} // namespace XdpSettings

} // namespace repository

} // namespace gi

#endif
