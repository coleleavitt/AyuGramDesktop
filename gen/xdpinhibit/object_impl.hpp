// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_OBJECT_IMPL_HPP_
#define _GI_XDPINHIBIT_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace base {

// XdpInhibitInhibit* /*full,nullable*/ xdp_inhibit_object_get_inhibit (XdpInhibitObject* object /*none*/);
// ::XdpInhibitInhibit* /*full,nullable*/ xdp_inhibit_object_get_inhibit (::XdpInhibitObject* object /*none*/);
XdpInhibit::Inhibit base::ObjectBase::get_inhibit () noexcept
{
  typedef ::XdpInhibitInhibit* (*call_wrap_t) (::XdpInhibitObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_object_get_inhibit;
  auto _temp_ret = call_wrap_v ((::XdpInhibitObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdpInhibitInhibit* /*none,nullable*/ xdp_inhibit_object_peek_inhibit (XdpInhibitObject* object /*none*/);
// ::XdpInhibitInhibit* /*none,nullable*/ xdp_inhibit_object_peek_inhibit (::XdpInhibitObject* object /*none*/);
XdpInhibit::Inhibit base::ObjectBase::peek_inhibit () noexcept
{
  typedef ::XdpInhibitInhibit* (*call_wrap_t) (::XdpInhibitObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdp_inhibit_object_peek_inhibit;
  auto _temp_ret = call_wrap_v ((::XdpInhibitObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/object_extra_def_impl.hpp>)
#include <xdpinhibit/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/object_extra_impl.hpp>)
#include <xdpinhibit/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdpInhibitObjectIface *methods = (::XdpInhibitObjectIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpInhibit

} // namespace repository

} // namespace gi

#endif
