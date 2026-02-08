// AUTO-GENERATED

#ifndef _GI_XDPSETTINGS_OBJECT_IMPL_HPP_
#define _GI_XDPSETTINGS_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpSettings {

namespace base {

// XdpSettingsSettings* /*full,nullable*/ xdp_settings_object_get_settings (XdpSettingsObject* object /*none*/);
// ::XdpSettingsSettings* /*full,nullable*/ xdp_settings_object_get_settings (::XdpSettingsObject* object /*none*/);
XdpSettings::Settings base::ObjectBase::get_settings () noexcept
{
  typedef ::XdpSettingsSettings* (*call_wrap_t) (::XdpSettingsObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_object_get_settings;
  auto _temp_ret = call_wrap_v ((::XdpSettingsObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpSettingsSettings* /*none,nullable*/ xdp_settings_object_peek_settings (XdpSettingsObject* object /*none*/);
// ::XdpSettingsSettings* /*none,nullable*/ xdp_settings_object_peek_settings (::XdpSettingsObject* object /*none*/);
XdpSettings::Settings base::ObjectBase::peek_settings () noexcept
{
  typedef ::XdpSettingsSettings* (*call_wrap_t) (::XdpSettingsObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_settings_object_peek_settings;
  auto _temp_ret = call_wrap_v ((::XdpSettingsObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdpSettings

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpsettings/object_extra_def_impl.hpp>)
#include <xdpsettings/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpsettings/object_extra_impl.hpp>)
#include <xdpsettings/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpSettings {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpSettingsObjectIface *methods = (::XdpSettingsObjectIface *) interface_struct;
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
