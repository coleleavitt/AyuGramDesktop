// AUTO-GENERATED

#ifndef _GI_XDPSETTINGS_SETTINGSSKELETON_IMPL_HPP_
#define _GI_XDPSETTINGS_SETTINGSSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpSettings {

namespace base {

XdpSettings::Settings SettingsSkeletonBase::interface_ (gi::interface_tag<XdpSettings::Settings>)
{ return gi::wrap ((XdpSettings::Settings::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

SettingsSkeletonBase::operator XdpSettings::Settings ()
{ return interface_ (gi::interface_tag<XdpSettings::Settings>()); }

// XdpSettingsSettings* /*full*/ xdp_settings_settings_skeleton_new ();
// ::XdpSettingsSettingsSkeleton* /*full*/ xdp_settings_settings_skeleton_new ();
XdpSettings::SettingsSkeleton base::SettingsSkeletonBase::new_ () noexcept
{
  typedef ::XdpSettingsSettingsSkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_settings_settings_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdpSettings

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpsettings/settingsskeleton_extra_def_impl.hpp>)
#include <xdpsettings/settingsskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpsettings/settingsskeleton_extra_impl.hpp>)
#include <xdpsettings/settingsskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpSettings {

namespace impl {

namespace internal {

void SettingsSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpSettingsSettingsSkeletonClass *methods = (::XdpSettingsSettingsSkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpSettings

} // namespace repository

} // namespace gi

#endif
