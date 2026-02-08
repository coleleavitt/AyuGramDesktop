// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2PLAYERSKELETON_HPP_
#define _GI_MPRIS_MEDIAPLAYER2PLAYERSKELETON_HPP_


namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2Player;

class MediaPlayer2PlayerSkeleton;

namespace base {


#define GI_MPRIS_MEDIAPLAYER2PLAYERSKELETON_BASE base::MediaPlayer2PlayerSkeletonBase
class MediaPlayer2PlayerSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::MprisMediaPlayer2PlayerSkeleton BaseObjectType;

MediaPlayer2PlayerSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_media_player2_player_skeleton_get_type(); } 

GI_INLINE_DECL Mpris::MediaPlayer2Player interface_ (gi::interface_tag<Mpris::MediaPlayer2Player>);

GI_INLINE_DECL operator Mpris::MediaPlayer2Player ();

// MprisMediaPlayer2Player* /*full*/ mpris_media_player2_player_skeleton_new ();
// ::MprisMediaPlayer2PlayerSkeleton* /*full*/ mpris_media_player2_player_skeleton_new ();
static GI_INLINE_DECL Mpris::MediaPlayer2PlayerSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2playerskeleton_extra_def.hpp>)
#include <mpris/mediaplayer2playerskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2playerskeleton_extra.hpp>)
#include <mpris/mediaplayer2playerskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2PlayerSkeleton : public GI_MPRIS_MEDIAPLAYER2PLAYERSKELETON_BASE
{ typedef GI_MPRIS_MEDIAPLAYER2PLAYERSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisMediaPlayer2PlayerSkeleton>
{ typedef Mpris::MediaPlayer2PlayerSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "mediaplayer2player.hpp"

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class MediaPlayer2PlayerSkeletonClassDef
{
typedef MediaPlayer2PlayerSkeletonClassDef self;
public:
typedef Mpris::MediaPlayer2PlayerSkeleton instance_type;
typedef ::MprisMediaPlayer2PlayerSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaPlayer2PlayerSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MediaPlayer2PlayerSkeletonClass: public detail::ClassTemplate<Mpris::impl::internal::MediaPlayer2PlayerSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Mpris::impl::internal::MediaPlayer2PlayerIfaceClassImpl>
{
friend class internal::MediaPlayer2PlayerSkeletonClassDef;
typedef MediaPlayer2PlayerSkeletonClass self;
typedef detail::ClassTemplate<Mpris::impl::internal::MediaPlayer2PlayerSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Mpris::impl::internal::MediaPlayer2PlayerIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Mpris::impl::internal::MediaPlayer2PlayerIfaceClassImpl MprisMediaPlayer2PlayerIface_type;



};


struct MediaPlayer2PlayerSkeletonClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using MediaPlayer2PlayerSkeletonImpl = detail::ObjectImpl<MediaPlayer2PlayerSkeleton, internal::MediaPlayer2PlayerSkeletonClass>;

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
