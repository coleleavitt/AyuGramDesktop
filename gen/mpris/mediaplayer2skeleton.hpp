// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2SKELETON_HPP_
#define _GI_MPRIS_MEDIAPLAYER2SKELETON_HPP_


namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2;

class MediaPlayer2Skeleton;

namespace base {


#define GI_MPRIS_MEDIAPLAYER2SKELETON_BASE base::MediaPlayer2SkeletonBase
class MediaPlayer2SkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::MprisMediaPlayer2Skeleton BaseObjectType;

MediaPlayer2SkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_media_player2_skeleton_get_type(); } 

GI_INLINE_DECL Mpris::MediaPlayer2 interface_ (gi::interface_tag<Mpris::MediaPlayer2>);

GI_INLINE_DECL operator Mpris::MediaPlayer2 ();

// MprisMediaPlayer2* /*full*/ mpris_media_player2_skeleton_new ();
// ::MprisMediaPlayer2Skeleton* /*full*/ mpris_media_player2_skeleton_new ();
static GI_INLINE_DECL Mpris::MediaPlayer2Skeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2skeleton_extra_def.hpp>)
#include <mpris/mediaplayer2skeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2skeleton_extra.hpp>)
#include <mpris/mediaplayer2skeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2Skeleton : public GI_MPRIS_MEDIAPLAYER2SKELETON_BASE
{ typedef GI_MPRIS_MEDIAPLAYER2SKELETON_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisMediaPlayer2Skeleton>
{ typedef Mpris::MediaPlayer2Skeleton type; }; 

} // namespace repository

} // namespace gi

#include "mediaplayer2.hpp"

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class MediaPlayer2SkeletonClassDef
{
typedef MediaPlayer2SkeletonClassDef self;
public:
typedef Mpris::MediaPlayer2Skeleton instance_type;
typedef ::MprisMediaPlayer2SkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaPlayer2SkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MediaPlayer2SkeletonClass: public detail::ClassTemplate<Mpris::impl::internal::MediaPlayer2SkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Mpris::impl::internal::MediaPlayer2IfaceClassImpl>
{
friend class internal::MediaPlayer2SkeletonClassDef;
typedef MediaPlayer2SkeletonClass self;
typedef detail::ClassTemplate<Mpris::impl::internal::MediaPlayer2SkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Mpris::impl::internal::MediaPlayer2IfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Mpris::impl::internal::MediaPlayer2IfaceClassImpl MprisMediaPlayer2Iface_type;



};


struct MediaPlayer2SkeletonClassDef::TypeInitData
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

using MediaPlayer2SkeletonImpl = detail::ObjectImpl<MediaPlayer2Skeleton, internal::MediaPlayer2SkeletonClass>;

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
