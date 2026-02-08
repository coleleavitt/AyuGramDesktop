// AUTO-GENERATED

#ifndef _GI_WEBVIEW_OBJECT_IMPL_HPP_
#define _GI_WEBVIEW_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Webview {

namespace base {

// WebviewHelper* /*full,nullable*/ webview_object_get_helper (WebviewObject* object /*none*/);
// ::WebviewHelper* /*full,nullable*/ webview_object_get_helper (::WebviewObject* object /*none*/);
Webview::Helper base::ObjectBase::get_helper () noexcept
{
  typedef ::WebviewHelper* (*call_wrap_t) (::WebviewObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_get_helper;
  auto _temp_ret = call_wrap_v ((::WebviewObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// WebviewMaster* /*full,nullable*/ webview_object_get_master (WebviewObject* object /*none*/);
// ::WebviewMaster* /*full,nullable*/ webview_object_get_master (::WebviewObject* object /*none*/);
Webview::Master base::ObjectBase::get_master () noexcept
{
  typedef ::WebviewMaster* (*call_wrap_t) (::WebviewObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_get_master;
  auto _temp_ret = call_wrap_v ((::WebviewObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// WebviewHelper* /*none,nullable*/ webview_object_peek_helper (WebviewObject* object /*none*/);
// ::WebviewHelper* /*none,nullable*/ webview_object_peek_helper (::WebviewObject* object /*none*/);
Webview::Helper base::ObjectBase::peek_helper () noexcept
{
  typedef ::WebviewHelper* (*call_wrap_t) (::WebviewObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_peek_helper;
  auto _temp_ret = call_wrap_v ((::WebviewObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// WebviewMaster* /*none,nullable*/ webview_object_peek_master (WebviewObject* object /*none*/);
// ::WebviewMaster* /*none,nullable*/ webview_object_peek_master (::WebviewObject* object /*none*/);
Webview::Master base::ObjectBase::peek_master () noexcept
{
  typedef ::WebviewMaster* (*call_wrap_t) (::WebviewObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::webview_object_peek_master;
  auto _temp_ret = call_wrap_v ((::WebviewObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/object_extra_def_impl.hpp>)
#include <webview/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/object_extra_impl.hpp>)
#include <webview/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::WebviewObjectIface *methods = (::WebviewObjectIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
