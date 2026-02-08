// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_OBJECT_IMPL_HPP_
#define _GI_XDGFILEMANAGER1_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace base {

// XdgFileManager1FileManager1* /*full,nullable*/ xdg_file_manager1_object_get_file_manager1 (XdgFileManager1Object* object /*none*/);
// ::XdgFileManager1FileManager1* /*full,nullable*/ xdg_file_manager1_object_get_file_manager1 (::XdgFileManager1Object* object /*none*/);
XdgFileManager1::FileManager1 base::ObjectBase::get_file_manager1 () noexcept
{
  typedef ::XdgFileManager1FileManager1* (*call_wrap_t) (::XdgFileManager1Object* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_object_get_file_manager1;
  auto _temp_ret = call_wrap_v ((::XdgFileManager1Object*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// XdgFileManager1FileManager1* /*none,nullable*/ xdg_file_manager1_object_peek_file_manager1 (XdgFileManager1Object* object /*none*/);
// ::XdgFileManager1FileManager1* /*none,nullable*/ xdg_file_manager1_object_peek_file_manager1 (::XdgFileManager1Object* object /*none*/);
XdgFileManager1::FileManager1 base::ObjectBase::peek_file_manager1 () noexcept
{
  typedef ::XdgFileManager1FileManager1* (*call_wrap_t) (::XdgFileManager1Object* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::xdg_file_manager1_object_peek_file_manager1;
  auto _temp_ret = call_wrap_v ((::XdgFileManager1Object*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/object_extra_def_impl.hpp>)
#include <xdgfilemanager1/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/object_extra_impl.hpp>)
#include <xdgfilemanager1/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::XdgFileManager1ObjectIface *methods = (::XdgFileManager1ObjectIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
