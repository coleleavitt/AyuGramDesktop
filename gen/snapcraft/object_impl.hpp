// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_OBJECT_IMPL_HPP_
#define _GI_SNAPCRAFT_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Snapcraft {

namespace base {

// SnapcraftSettings* /*full,nullable*/ snapcraft_object_get_settings (SnapcraftObject* object /*none*/);
// ::SnapcraftSettings* /*full,nullable*/ snapcraft_object_get_settings (::SnapcraftObject* object /*none*/);
Snapcraft::Settings base::ObjectBase::get_settings () noexcept
{
  typedef ::SnapcraftSettings* (*call_wrap_t) (::SnapcraftObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_object_get_settings;
  auto _temp_ret = call_wrap_v ((::SnapcraftObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// SnapcraftSettings* /*none,nullable*/ snapcraft_object_peek_settings (SnapcraftObject* object /*none*/);
// ::SnapcraftSettings* /*none,nullable*/ snapcraft_object_peek_settings (::SnapcraftObject* object /*none*/);
Snapcraft::Settings base::ObjectBase::peek_settings () noexcept
{
  typedef ::SnapcraftSettings* (*call_wrap_t) (::SnapcraftObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::snapcraft_object_peek_settings;
  auto _temp_ret = call_wrap_v ((::SnapcraftObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/object_extra_def_impl.hpp>)
#include <snapcraft/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/object_extra_impl.hpp>)
#include <snapcraft/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::SnapcraftObjectIface *methods = (::SnapcraftObjectIface *) interface_struct;
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
