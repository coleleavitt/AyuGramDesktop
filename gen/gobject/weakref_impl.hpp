// AUTO-GENERATED

#ifndef _GI_GOBJECT_WEAKREF_IMPL_HPP_
#define _GI_GOBJECT_WEAKREF_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// void g_weak_ref_clear (GWeakRef* weak_ref /*none*/);
// void g_weak_ref_clear (::GWeakRef* weak_ref /*none*/);
void base::WeakRefBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GWeakRef* weak_ref);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_weak_ref_clear;
  call_wrap_v ((::GWeakRef*) (gobj_()));
}

// gpointer /*full*/ g_weak_ref_get (GWeakRef* weak_ref /*none*/);
// ::GObject* /*full*/ g_weak_ref_get (::GWeakRef* weak_ref /*none*/);
GObject::Object base::WeakRefBase::get () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GWeakRef* weak_ref);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_weak_ref_get;
  auto _temp_ret = call_wrap_v ((::GWeakRef*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_weak_ref_init (GWeakRef* weak_ref /*none*/, gpointer object /*none,nullable*/);
// void g_weak_ref_init (::GWeakRef* weak_ref /*none*/, ::GObject* object /*none,nullable*/);
void base::WeakRefBase::init (GObject::Object object) noexcept
{
  typedef void (*call_wrap_t) (::GWeakRef* weak_ref, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_weak_ref_init;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GWeakRef*) (gobj_()), (::GObject*) (object_to_c));
}
void base::WeakRefBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GWeakRef* weak_ref, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_weak_ref_init;
  auto object_to_c = nullptr;
  call_wrap_v ((::GWeakRef*) (gobj_()), (::GObject*) (object_to_c));
}

// void g_weak_ref_set (GWeakRef* weak_ref /*none*/, gpointer object /*none,nullable*/);
// void g_weak_ref_set (::GWeakRef* weak_ref /*none*/, ::GObject* object /*none,nullable*/);
void base::WeakRefBase::set (GObject::Object object) noexcept
{
  typedef void (*call_wrap_t) (::GWeakRef* weak_ref, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_weak_ref_set;
  auto object_to_c = gi::unwrap (object, gi::transfer_none);
  call_wrap_v ((::GWeakRef*) (gobj_()), (::GObject*) (object_to_c));
}
void base::WeakRefBase::set () noexcept
{
  typedef void (*call_wrap_t) (::GWeakRef* weak_ref, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_weak_ref_set;
  auto object_to_c = nullptr;
  call_wrap_v ((::GWeakRef*) (gobj_()), (::GObject*) (object_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/weakref_extra_def_impl.hpp>)
#include <gobject/weakref_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/weakref_extra_impl.hpp>)
#include <gobject/weakref_extra_impl.hpp>
#endif
#endif

#endif
