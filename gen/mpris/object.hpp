// AUTO-GENERATED

#ifndef _GI_MPRIS_OBJECT_HPP_
#define _GI_MPRIS_OBJECT_HPP_


namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2;
class MediaPlayer2Player;

class Object;

namespace base {


#define GI_MPRIS_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::MprisObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_object_get_type(); } 

// MprisMediaPlayer2* /*full,nullable*/ mpris_object_get_media_player2 (MprisObject* object /*none*/);
// ::MprisMediaPlayer2* /*full,nullable*/ mpris_object_get_media_player2 (::MprisObject* object /*none*/);
GI_INLINE_DECL Mpris::MediaPlayer2 get_media_player2 () noexcept;

// MprisMediaPlayer2Player* /*full,nullable*/ mpris_object_get_media_player2_player (MprisObject* object /*none*/);
// ::MprisMediaPlayer2Player* /*full,nullable*/ mpris_object_get_media_player2_player (::MprisObject* object /*none*/);
GI_INLINE_DECL Mpris::MediaPlayer2Player get_media_player2_player () noexcept;

// MprisMediaPlayer2* /*none,nullable*/ mpris_object_peek_media_player2 (MprisObject* object /*none*/);
// ::MprisMediaPlayer2* /*none,nullable*/ mpris_object_peek_media_player2 (::MprisObject* object /*none*/);
GI_INLINE_DECL Mpris::MediaPlayer2 peek_media_player2 () noexcept;

// MprisMediaPlayer2Player* /*none,nullable*/ mpris_object_peek_media_player2_player (MprisObject* object /*none*/);
// ::MprisMediaPlayer2Player* /*none,nullable*/ mpris_object_peek_media_player2_player (::MprisObject* object /*none*/);
GI_INLINE_DECL Mpris::MediaPlayer2Player peek_media_player2_player () noexcept;

gi::property_proxy<Mpris::MediaPlayer2, base::ObjectBase> property_media_player2()
{ return gi::property_proxy<Mpris::MediaPlayer2, base::ObjectBase> (*this, "media-player2"); }
const gi::property_proxy<Mpris::MediaPlayer2, base::ObjectBase> property_media_player2() const
{ return gi::property_proxy<Mpris::MediaPlayer2, base::ObjectBase> (*this, "media-player2"); }

gi::property_proxy<Mpris::MediaPlayer2Player, base::ObjectBase> property_media_player2_player()
{ return gi::property_proxy<Mpris::MediaPlayer2Player, base::ObjectBase> (*this, "media-player2-player"); }
const gi::property_proxy<Mpris::MediaPlayer2Player, base::ObjectBase> property_media_player2_player() const
{ return gi::property_proxy<Mpris::MediaPlayer2Player, base::ObjectBase> (*this, "media-player2-player"); }

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/object_extra_def.hpp>)
#include <mpris/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/object_extra.hpp>)
#include <mpris/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class Object : public GI_MPRIS_OBJECT_BASE
{ typedef GI_MPRIS_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisObject>
{ typedef Mpris::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef Mpris::Object instance_type;
typedef ::MprisObjectIface interface_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using ObjectImpl = detail::InterfaceImpl<ObjectIfaceDef>;

class ObjectIfaceClassImpl: public detail::InterfaceClassImpl<ObjectImpl>
{
friend class internal::ObjectIfaceDef;
typedef ObjectIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ObjectImpl> super;

protected:
using super::super;


};


struct ObjectIfaceDef::TypeInitData
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

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
