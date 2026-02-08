// AUTO-GENERATED

#ifndef _GI_MPRIS_OBJECT_IMPL_HPP_
#define _GI_MPRIS_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Mpris {

namespace base {

// MprisMediaPlayer2* /*full,nullable*/ mpris_object_get_media_player2 (MprisObject* object /*none*/);
// ::MprisMediaPlayer2* /*full,nullable*/ mpris_object_get_media_player2 (::MprisObject* object /*none*/);
Mpris::MediaPlayer2 base::ObjectBase::get_media_player2 () noexcept
{
  typedef ::MprisMediaPlayer2* (*call_wrap_t) (::MprisObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_get_media_player2;
  auto _temp_ret = call_wrap_v ((::MprisObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// MprisMediaPlayer2Player* /*full,nullable*/ mpris_object_get_media_player2_player (MprisObject* object /*none*/);
// ::MprisMediaPlayer2Player* /*full,nullable*/ mpris_object_get_media_player2_player (::MprisObject* object /*none*/);
Mpris::MediaPlayer2Player base::ObjectBase::get_media_player2_player () noexcept
{
  typedef ::MprisMediaPlayer2Player* (*call_wrap_t) (::MprisObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_get_media_player2_player;
  auto _temp_ret = call_wrap_v ((::MprisObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// MprisMediaPlayer2* /*none,nullable*/ mpris_object_peek_media_player2 (MprisObject* object /*none*/);
// ::MprisMediaPlayer2* /*none,nullable*/ mpris_object_peek_media_player2 (::MprisObject* object /*none*/);
Mpris::MediaPlayer2 base::ObjectBase::peek_media_player2 () noexcept
{
  typedef ::MprisMediaPlayer2* (*call_wrap_t) (::MprisObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_peek_media_player2;
  auto _temp_ret = call_wrap_v ((::MprisObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// MprisMediaPlayer2Player* /*none,nullable*/ mpris_object_peek_media_player2_player (MprisObject* object /*none*/);
// ::MprisMediaPlayer2Player* /*none,nullable*/ mpris_object_peek_media_player2_player (::MprisObject* object /*none*/);
Mpris::MediaPlayer2Player base::ObjectBase::peek_media_player2_player () noexcept
{
  typedef ::MprisMediaPlayer2Player* (*call_wrap_t) (::MprisObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_peek_media_player2_player;
  auto _temp_ret = call_wrap_v ((::MprisObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/object_extra_def_impl.hpp>)
#include <mpris/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/object_extra_impl.hpp>)
#include <mpris/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {

void ObjectIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::MprisObjectIface *methods = (::MprisObjectIface *) interface_struct;
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
