// AUTO-GENERATED

#ifndef _GI_MPRIS_OBJECTSKELETON_HPP_
#define _GI_MPRIS_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2;
class MediaPlayer2Player;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_MPRIS_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::MprisObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_object_skeleton_get_type(); } 

GI_INLINE_DECL Mpris::Object interface_ (gi::interface_tag<Mpris::Object>);

GI_INLINE_DECL operator Mpris::Object ();

// MprisObjectSkeleton* /*full*/ mpris_object_skeleton_new (const gchar* object_path /*none*/);
// ::MprisObjectSkeleton* /*full*/ mpris_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL Mpris::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void mpris_object_skeleton_set_media_player2 (MprisObjectSkeleton* object /*none*/, MprisMediaPlayer2* interface_ /*none,nullable*/);
// void mpris_object_skeleton_set_media_player2 (::MprisObjectSkeleton* object /*none*/, ::MprisMediaPlayer2* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_media_player2 (Mpris::MediaPlayer2 interface_) noexcept;
GI_INLINE_DECL void set_media_player2 () noexcept;

// void mpris_object_skeleton_set_media_player2_player (MprisObjectSkeleton* object /*none*/, MprisMediaPlayer2Player* interface_ /*none,nullable*/);
// void mpris_object_skeleton_set_media_player2_player (::MprisObjectSkeleton* object /*none*/, ::MprisMediaPlayer2Player* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_media_player2_player (Mpris::MediaPlayer2Player interface_) noexcept;
GI_INLINE_DECL void set_media_player2_player () noexcept;

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/objectskeleton_extra_def.hpp>)
#include <mpris/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/objectskeleton_extra.hpp>)
#include <mpris/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class ObjectSkeleton : public GI_MPRIS_OBJECTSKELETON_BASE
{ typedef GI_MPRIS_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisObjectSkeleton>
{ typedef Mpris::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef Mpris::ObjectSkeleton instance_type;
typedef ::MprisObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<Mpris::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, Mpris::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<Mpris::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, Mpris::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Mpris::impl::internal::ObjectIfaceClassImpl MprisObjectIface_type;



};


struct ObjectSkeletonClassDef::TypeInitData
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

using ObjectSkeletonImpl = detail::ObjectImpl<ObjectSkeleton, internal::ObjectSkeletonClass>;

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
