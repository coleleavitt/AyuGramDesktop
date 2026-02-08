// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_OBJECT_IMPL_HPP_
#define _GI_XDPBACKGROUND_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpBackground {

namespace base {

// XdpBackgroundBackground* /*full,nullable*/ xdp_background_object_get_background (XdpBackgroundObject* object /*none*/);
// ::XdpBackgroundBackground* /*full,nullable*/ xdp_background_object_get_background (::XdpBackgroundObject* object /*none*/);
XdpBackground::Background base::ObjectBase::get_background () noexcept
{
  typedef ::XdpBackgroundBackground* (*call_wrap_t) (::XdpBackgroundObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_object_get_background;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpBackgroundBackground* /*none,nullable*/ xdp_background_object_peek_background (XdpBackgroundObject* object /*none*/);
// ::XdpBackgroundBackground* /*none,nullable*/ xdp_background_object_peek_background (::XdpBackgroundObject* object /*none*/);
XdpBackground::Background base::ObjectBase::peek_background () noexcept
{
  typedef ::XdpBackgroundBackground* (*call_wrap_t) (::XdpBackgroundObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_background_object_peek_background;
  auto _temp_ret = call_wrap_v ((::XdpBackgroundObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/object_extra_def_impl.hpp>)
#include <xdpbackground/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/object_extra_impl.hpp>)
#include <xdpbackground/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpBackgroundObjectIface *methods = (::XdpBackgroundObjectIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
