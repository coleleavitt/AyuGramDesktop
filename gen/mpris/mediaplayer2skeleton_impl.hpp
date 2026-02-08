// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2SKELETON_IMPL_HPP_
#define _GI_MPRIS_MEDIAPLAYER2SKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Mpris {

namespace base {

Mpris::MediaPlayer2 MediaPlayer2SkeletonBase::interface_ (gi::interface_tag<Mpris::MediaPlayer2>)
{ return gi::wrap ((Mpris::MediaPlayer2::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

MediaPlayer2SkeletonBase::operator Mpris::MediaPlayer2 ()
{ return interface_ (gi::interface_tag<Mpris::MediaPlayer2>()); }

// MprisMediaPlayer2* /*full*/ mpris_media_player2_skeleton_new ();
// ::MprisMediaPlayer2Skeleton* /*full*/ mpris_media_player2_skeleton_new ();
Mpris::MediaPlayer2Skeleton base::MediaPlayer2SkeletonBase::new_ () noexcept
{
  typedef ::MprisMediaPlayer2Skeleton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) mpris_media_player2_skeleton_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2skeleton_extra_def_impl.hpp>)
#include <mpris/mediaplayer2skeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2skeleton_extra_impl.hpp>)
#include <mpris/mediaplayer2skeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {

void MediaPlayer2SkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::MprisMediaPlayer2SkeletonClass *methods = (::MprisMediaPlayer2SkeletonClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

}

} // namespace internal

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
