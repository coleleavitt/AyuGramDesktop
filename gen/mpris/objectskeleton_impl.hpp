// AUTO-GENERATED

#ifndef _GI_MPRIS_OBJECTSKELETON_IMPL_HPP_
#define _GI_MPRIS_OBJECTSKELETON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Mpris {

namespace base {

Mpris::Object ObjectSkeletonBase::interface_ (gi::interface_tag<Mpris::Object>)
{ return gi::wrap ((Mpris::Object::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

ObjectSkeletonBase::operator Mpris::Object ()
{ return interface_ (gi::interface_tag<Mpris::Object>()); }

// MprisObjectSkeleton* /*full*/ mpris_object_skeleton_new (const gchar* object_path /*none*/);
// ::MprisObjectSkeleton* /*full*/ mpris_object_skeleton_new (const char* object_path /*none*/);
Mpris::ObjectSkeleton base::ObjectSkeletonBase::new_ (const gi::cstring_v object_path) noexcept
{
  typedef ::MprisObjectSkeleton* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) mpris_object_skeleton_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void mpris_object_skeleton_set_media_player2 (MprisObjectSkeleton* object /*none*/, MprisMediaPlayer2* interface_ /*none,nullable*/);
// void mpris_object_skeleton_set_media_player2 (::MprisObjectSkeleton* object /*none*/, ::MprisMediaPlayer2* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_media_player2 (Mpris::MediaPlayer2 interface_) noexcept
{
  typedef void (*call_wrap_t) (::MprisObjectSkeleton* object, ::MprisMediaPlayer2* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_skeleton_set_media_player2;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::MprisObjectSkeleton*) (gobj_()), (::MprisMediaPlayer2*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_media_player2 () noexcept
{
  typedef void (*call_wrap_t) (::MprisObjectSkeleton* object, ::MprisMediaPlayer2* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_skeleton_set_media_player2;
  auto interface__to_c = nullptr;
  call_wrap_v ((::MprisObjectSkeleton*) (gobj_()), (::MprisMediaPlayer2*) (interface__to_c));
}

// void mpris_object_skeleton_set_media_player2_player (MprisObjectSkeleton* object /*none*/, MprisMediaPlayer2Player* interface_ /*none,nullable*/);
// void mpris_object_skeleton_set_media_player2_player (::MprisObjectSkeleton* object /*none*/, ::MprisMediaPlayer2Player* interface_ /*none,nullable*/);
void base::ObjectSkeletonBase::set_media_player2_player (Mpris::MediaPlayer2Player interface_) noexcept
{
  typedef void (*call_wrap_t) (::MprisObjectSkeleton* object, ::MprisMediaPlayer2Player* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_skeleton_set_media_player2_player;
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none);
  call_wrap_v ((::MprisObjectSkeleton*) (gobj_()), (::MprisMediaPlayer2Player*) (interface__to_c));
}
void base::ObjectSkeletonBase::set_media_player2_player () noexcept
{
  typedef void (*call_wrap_t) (::MprisObjectSkeleton* object, ::MprisMediaPlayer2Player* interface_);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_object_skeleton_set_media_player2_player;
  auto interface__to_c = nullptr;
  call_wrap_v ((::MprisObjectSkeleton*) (gobj_()), (::MprisMediaPlayer2Player*) (interface__to_c));
}


} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/objectskeleton_extra_def_impl.hpp>)
#include <mpris/objectskeleton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/objectskeleton_extra_impl.hpp>)
#include <mpris/objectskeleton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {

void ObjectSkeletonClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::MprisObjectSkeletonClass *methods = (::MprisObjectSkeletonClass *) class_struct;
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
