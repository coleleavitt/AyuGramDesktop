// AUTO-GENERATED

#ifndef _GI_GLIB_RAND_HPP_
#define _GI_GLIB_RAND_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Rand_Ref;

class Rand;

namespace base {


#define GI_GLIB_RAND_BASE base::RandBase
class RandBase : public gi::detail::GBoxedWrapperBase<RandBase, ::GRand>
{
typedef gi::detail::GBoxedWrapperBase<RandBase, ::GRand> super_type;
public:

RandBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_rand_get_type(); } 

// GRand* /*full*/ g_rand_new ();
// ::GRand* /*full*/ g_rand_new ();
static GI_INLINE_DECL GLib::Rand new_ () noexcept;

// GRand* /*full*/ g_rand_new_with_seed (guint32 seed);
// ::GRand* /*full*/ g_rand_new_with_seed (guint32 seed);
static GI_INLINE_DECL GLib::Rand new_with_seed (guint32 seed) noexcept;

// GRand* /*full*/ g_rand_new_with_seed_array (const guint32* seed, guint seed_length);
// ::GRand* /*full*/ g_rand_new_with_seed_array (const guint32 seed, guint seed_length);
// SKIP; inconsistent seed in pointer depth (1 vs 0)

// GRand* /*full*/ g_rand_copy (GRand* rand_ /*none*/);
// ::GRand* /*full*/ g_rand_copy (::GRand* rand_ /*none*/);
GI_INLINE_DECL GLib::Rand copy () noexcept;

// gdouble g_rand_double (GRand* rand_ /*none*/);
// gdouble g_rand_double (::GRand* rand_ /*none*/);
GI_INLINE_DECL gdouble double_ () noexcept;

// gdouble g_rand_double_range (GRand* rand_ /*none*/, gdouble begin, gdouble end);
// gdouble g_rand_double_range (::GRand* rand_ /*none*/, gdouble begin, gdouble end);
GI_INLINE_DECL gdouble double_range (gdouble begin, gdouble end) noexcept;

// void g_rand_free (GRand* rand_ /*none*/);
// void g_rand_free (::GRand* rand_ /*none*/);
// IGNORE; marked ignore

// guint32 g_rand_int (GRand* rand_ /*none*/);
// guint32 g_rand_int (::GRand* rand_ /*none*/);
GI_INLINE_DECL guint32 int_ () noexcept;

// gint32 g_rand_int_range (GRand* rand_ /*none*/, gint32 begin, gint32 end);
// gint32 g_rand_int_range (::GRand* rand_ /*none*/, gint32 begin, gint32 end);
GI_INLINE_DECL gint32 int_range (gint32 begin, gint32 end) noexcept;

// void g_rand_set_seed (GRand* rand_ /*none*/, guint32 seed);
// void g_rand_set_seed (::GRand* rand_ /*none*/, guint32 seed);
GI_INLINE_DECL void set_seed (guint32 seed) noexcept;

// void g_rand_set_seed_array (GRand* rand_ /*none*/, const guint32* seed, guint seed_length);
// void g_rand_set_seed_array (::GRand* rand_ /*none*/, const guint32 seed, guint seed_length);
// SKIP; inconsistent seed in pointer depth (1 vs 0)

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/rand_extra_def.hpp>)
#include <glib/rand_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/rand_extra.hpp>)
#include <glib/rand_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Rand_Ref;

class Rand : public gi::detail::GBoxedWrapper<Rand, ::GRand, GI_GLIB_RAND_BASE, Rand_Ref>
{ typedef gi::detail::GBoxedWrapper<Rand, ::GRand, GI_GLIB_RAND_BASE, Rand_Ref> super_type; using super_type::super_type; };


class Rand_Ref : public gi::detail::GBoxedRefWrapper<Rand, ::GRand, GI_GLIB_RAND_BASE>
{ typedef gi::detail::GBoxedRefWrapper<Rand, ::GRand, GI_GLIB_RAND_BASE> super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GRand>
{ typedef GLib::Rand type; }; 

} // namespace repository

} // namespace gi

#endif
