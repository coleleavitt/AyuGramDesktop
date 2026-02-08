// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_SETTINGSSKELETON_HPP_
#define _GI_SNAPCRAFT_SETTINGSSKELETON_HPP_


namespace gi {

namespace repository {

namespace Snapcraft {

class Settings;

class SettingsSkeleton;

namespace base {


#define GI_SNAPCRAFT_SETTINGSSKELETON_BASE base::SettingsSkeletonBase
class SettingsSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::SnapcraftSettingsSkeleton BaseObjectType;

SettingsSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return snapcraft_settings_skeleton_get_type(); } 

GI_INLINE_DECL Snapcraft::Settings interface_ (gi::interface_tag<Snapcraft::Settings>);

GI_INLINE_DECL operator Snapcraft::Settings ();

// SnapcraftSettings* /*full*/ snapcraft_settings_skeleton_new ();
// ::SnapcraftSettingsSkeleton* /*full*/ snapcraft_settings_skeleton_new ();
static GI_INLINE_DECL Snapcraft::SettingsSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/settingsskeleton_extra_def.hpp>)
#include <snapcraft/settingsskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/settingsskeleton_extra.hpp>)
#include <snapcraft/settingsskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

class SettingsSkeleton : public GI_SNAPCRAFT_SETTINGSSKELETON_BASE
{ typedef GI_SNAPCRAFT_SETTINGSSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Snapcraft

template<> struct declare_cpptype_of<::SnapcraftSettingsSkeleton>
{ typedef Snapcraft::SettingsSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "settings.hpp"

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {


class SettingsSkeletonClassDef
{
typedef SettingsSkeletonClassDef self;
public:
typedef Snapcraft::SettingsSkeleton instance_type;
typedef ::SnapcraftSettingsSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~SettingsSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SettingsSkeletonClass: public detail::ClassTemplate<Snapcraft::impl::internal::SettingsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Snapcraft::impl::internal::SettingsIfaceClassImpl>
{
friend class internal::SettingsSkeletonClassDef;
typedef SettingsSkeletonClass self;
typedef detail::ClassTemplate<Snapcraft::impl::internal::SettingsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Snapcraft::impl::internal::SettingsIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Snapcraft::impl::internal::SettingsIfaceClassImpl SnapcraftSettingsIface_type;



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

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
