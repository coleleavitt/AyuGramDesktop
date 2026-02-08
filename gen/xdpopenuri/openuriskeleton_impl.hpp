// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OPENURISKELETON_IMPL_HPP_
#define _GI_XDPOPENURI_OPENURISKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace base {

XdpOpenURI::OpenURI OpenURISkeletonBase::interface_ (gi::interface_tag<XdpOpenURI::OpenURI>)
{ return gi::wrap ((XdpOpenURI::OpenURI::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

OpenURISkeletonBase::operator XdpOpenURI::OpenURI ()
{ return interface_ (gi::interface_tag<XdpOpenURI::OpenURI>()); }

// XdpOpenURIOpenURI* /*full*/ xdp_open_uri_open_uri_skeleton_new ();
// ::XdpOpenURIOpenURISkeleton* /*full*/ xdp_open_uri_open_uri_skeleton_new ();
XdpOpenURI::OpenURISkeleton base::OpenURISkeletonBase::new_ () noexcept
{
  typedef ::XdpOpenURIOpenURISkeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) xdp_open_uri_open_uri_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuriskeleton_extra_def_impl.hpp>)
#include <xdpopenuri/openuriskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuriskeleton_extra_impl.hpp>)
#include <xdpopenuri/openuriskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {

void OpenURISkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::XdpOpenURIOpenURISkeletonClass *methods = (::XdpOpenURIOpenURISkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
