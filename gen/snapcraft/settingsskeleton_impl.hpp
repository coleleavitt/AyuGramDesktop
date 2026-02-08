// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_SETTINGSSKELETON_IMPL_HPP_
#define _GI_SNAPCRAFT_SETTINGSSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Snapcraft {

namespace base {

Snapcraft::Settings SettingsSkeletonBase::interface_ (gi::interface_tag<Snapcraft::Settings>)
{ return gi::wrap ((Snapcraft::Settings::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SettingsSkeletonBase::operator Snapcraft::Settings ()
{ return interface_ (gi::interface_tag<Snapcraft::Settings>()); }

// SnapcraftSettings* /*full*/ snapcraft_settings_skeleton_new ();
// ::SnapcraftSettingsSkeleton* /*full*/ snapcraft_settings_skeleton_new ();
Snapcraft::SettingsSkeleton base::SettingsSkeletonBase::new_ () noexcept
{
  typedef ::SnapcraftSettingsSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) snapcraft_settings_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/settingsskeleton_extra_def_impl.hpp>)
#include <snapcraft/settingsskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/settingsskeleton_extra_impl.hpp>)
#include <snapcraft/settingsskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {

void SettingsSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::SnapcraftSettingsSkeletonClass *methods = (::SnapcraftSettingsSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
