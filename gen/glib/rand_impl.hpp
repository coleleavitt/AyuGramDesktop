// AUTO-GENERATED

#ifndef _GI_GLIB_RAND_IMPL_HPP_
#define _GI_GLIB_RAND_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GRand* /*full*/ g_rand_new ();
// ::GRand* /*full*/ g_rand_new ();
GLib::Rand base::RandBase::new_ () noexcept
{
  typedef ::GRand* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_rand_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GRand* /*full*/ g_rand_new_with_seed (guint32 seed);
// ::GRand* /*full*/ g_rand_new_with_seed (guint32 seed);
GLib::Rand base::RandBase::new_with_seed (guint32 seed) noexcept
{
  typedef ::GRand* (*call_wrap_t) (guint32 seed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rand_new_with_seed;
  auto seed_to_c = seed;
  auto _temp_ret = call_wrap_v ((guint32) (seed_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GRand* /*full*/ g_rand_new_with_seed_array (const guint32* seed, guint seed_length);
// ::GRand* /*full*/ g_rand_new_with_seed_array (const guint32 seed, guint seed_length);
// SKIP; inconsistent seed in pointer depth (1 vs 0)

// GRand* /*full*/ g_rand_copy (GRand* rand_ /*none*/);
// ::GRand* /*full*/ g_rand_copy (::GRand* rand_ /*none*/);
GLib::Rand base::RandBase::copy () noexcept
{
  typedef ::GRand* (*call_wrap_t) (::GRand* rand_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rand_copy;
  auto _temp_ret = call_wrap_v ((::GRand*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gdouble g_rand_double (GRand* rand_ /*none*/);
// gdouble g_rand_double (::GRand* rand_ /*none*/);
gdouble base::RandBase::double_ () noexcept
{
  typedef gdouble (*call_wrap_t) (::GRand* rand_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rand_double;
  auto _temp_ret = call_wrap_v ((::GRand*) (gobj_()));
  return _temp_ret;
}

// gdouble g_rand_double_range (GRand* rand_ /*none*/, gdouble begin, gdouble end);
// gdouble g_rand_double_range (::GRand* rand_ /*none*/, gdouble begin, gdouble end);
gdouble base::RandBase::double_range (gdouble begin, gdouble end) noexcept
{
  typedef gdouble (*call_wrap_t) (::GRand* rand_, gdouble begin, gdouble end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rand_double_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((::GRand*) (gobj_()), (gdouble) (begin_to_c), (gdouble) (end_to_c));
  return _temp_ret;
}

// void g_rand_free (GRand* rand_ /*none*/);
// void g_rand_free (::GRand* rand_ /*none*/);
// IGNORE; marked ignore

// guint32 g_rand_int (GRand* rand_ /*none*/);
// guint32 g_rand_int (::GRand* rand_ /*none*/);
guint32 base::RandBase::int_ () noexcept
{
  typedef guint32 (*call_wrap_t) (::GRand* rand_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rand_int;
  auto _temp_ret = call_wrap_v ((::GRand*) (gobj_()));
  return _temp_ret;
}

// gint32 g_rand_int_range (GRand* rand_ /*none*/, gint32 begin, gint32 end);
// gint32 g_rand_int_range (::GRand* rand_ /*none*/, gint32 begin, gint32 end);
gint32 base::RandBase::int_range (gint32 begin, gint32 end) noexcept
{
  typedef gint32 (*call_wrap_t) (::GRand* rand_, gint32 begin, gint32 end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rand_int_range;
  auto end_to_c = end;
  auto begin_to_c = begin;
  auto _temp_ret = call_wrap_v ((::GRand*) (gobj_()), (gint32) (begin_to_c), (gint32) (end_to_c));
  return _temp_ret;
}

// void g_rand_set_seed (GRand* rand_ /*none*/, guint32 seed);
// void g_rand_set_seed (::GRand* rand_ /*none*/, guint32 seed);
void base::RandBase::set_seed (guint32 seed) noexcept
{
  typedef void (*call_wrap_t) (::GRand* rand_, guint32 seed);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_rand_set_seed;
  auto seed_to_c = seed;
  call_wrap_v ((::GRand*) (gobj_()), (guint32) (seed_to_c));
}

// void g_rand_set_seed_array (GRand* rand_ /*none*/, const guint32* seed, guint seed_length);
// void g_rand_set_seed_array (::GRand* rand_ /*none*/, const guint32 seed, guint seed_length);
// SKIP; inconsistent seed in pointer depth (1 vs 0)


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/rand_extra_def_impl.hpp>)
#include <glib/rand_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/rand_extra_impl.hpp>)
#include <glib/rand_extra_impl.hpp>
#endif
#endif

#endif
