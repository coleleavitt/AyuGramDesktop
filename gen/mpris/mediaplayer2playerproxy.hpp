// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2PLAYERPROXY_HPP_
#define _GI_MPRIS_MEDIAPLAYER2PLAYERPROXY_HPP_


namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2Player;

class MediaPlayer2PlayerProxy;

namespace base {


#define GI_MPRIS_MEDIAPLAYER2PLAYERPROXY_BASE base::MediaPlayer2PlayerProxyBase
class MediaPlayer2PlayerProxyBase : public Gio::DBusProxy
{
typedef Gio::DBusProxy super_type;
public:
typedef ::MprisMediaPlayer2PlayerProxy BaseObjectType;

MediaPlayer2PlayerProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_media_player2_player_proxy_get_type(); } 

GI_INLINE_DECL Mpris::MediaPlayer2Player interface_ (gi::interface_tag<Mpris::MediaPlayer2Player>);

GI_INLINE_DECL operator Mpris::MediaPlayer2Player ();

// MprisMediaPlayer2Player* /*full*/ mpris_media_player2_player_proxy_new_finish (GAsyncResult* res /*none*/, GError ** error);
// ::MprisMediaPlayer2PlayerProxy* /*full*/ mpris_media_player2_player_proxy_new_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Mpris::MediaPlayer2PlayerProxy> new_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Mpris::MediaPlayer2PlayerProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// MprisMediaPlayer2Player* /*full*/ mpris_media_player2_player_proxy_new_for_bus_finish (GAsyncResult* res /*none*/, GError ** error);
// ::MprisMediaPlayer2PlayerProxy* /*full*/ mpris_media_player2_player_proxy_new_for_bus_finish (::GAsyncResult* res /*none*/, GError ** error);
static GI_INLINE_DECL gi::result<Mpris::MediaPlayer2PlayerProxy> new_for_bus_finish (Gio::AsyncResult res) noexcept;
static GI_INLINE_DECL Mpris::MediaPlayer2PlayerProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// MprisMediaPlayer2Player* /*full*/ mpris_media_player2_player_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::MprisMediaPlayer2PlayerProxy* /*full*/ mpris_media_player2_player_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Mpris::MediaPlayer2PlayerProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Mpris::MediaPlayer2PlayerProxy> new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Mpris::MediaPlayer2PlayerProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Mpris::MediaPlayer2PlayerProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// MprisMediaPlayer2Player* /*full*/ mpris_media_player2_player_proxy_new_sync (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// ::MprisMediaPlayer2PlayerProxy* /*full*/ mpris_media_player2_player_proxy_new_sync (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
static GI_INLINE_DECL gi::result<Mpris::MediaPlayer2PlayerProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable) noexcept;
static GI_INLINE_DECL gi::result<Mpris::MediaPlayer2PlayerProxy> new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path) noexcept;
static GI_INLINE_DECL Mpris::MediaPlayer2PlayerProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Mpris::MediaPlayer2PlayerProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, GLib::Error * _error) noexcept;

// void mpris_media_player2_player_proxy_new (GDBusConnection* connection /*none*/, GDBusProxyFlags flags, const gchar* name /*none,nullable*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_proxy_new (::GDBusConnection* connection /*none*/, ::GDBusProxyFlags flags, const char* name /*none,nullable*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

// void mpris_media_player2_player_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, const gchar* name /*none*/, const gchar* object_path /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, const char* name /*none*/, const char* object_path /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const gi::cstring_v name, const gi::cstring_v object_path, Gio::AsyncReadyCallback callback) noexcept;

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2playerproxy_extra_def.hpp>)
#include <mpris/mediaplayer2playerproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2playerproxy_extra.hpp>)
#include <mpris/mediaplayer2playerproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2PlayerProxy : public GI_MPRIS_MEDIAPLAYER2PLAYERPROXY_BASE
{ typedef GI_MPRIS_MEDIAPLAYER2PLAYERPROXY_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisMediaPlayer2PlayerProxy>
{ typedef Mpris::MediaPlayer2PlayerProxy type; }; 

} // namespace repository

} // namespace gi

#include "mediaplayer2player.hpp"

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class MediaPlayer2PlayerProxyClassDef
{
typedef MediaPlayer2PlayerProxyClassDef self;
public:
typedef Mpris::MediaPlayer2PlayerProxy instance_type;
typedef ::MprisMediaPlayer2PlayerProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaPlayer2PlayerProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MediaPlayer2PlayerProxyClass: public detail::ClassTemplate<Mpris::impl::internal::MediaPlayer2PlayerProxyClassDef, Gio::impl::internal::DBusProxyClass, Mpris::impl::internal::MediaPlayer2PlayerIfaceClassImpl>
{
friend class internal::MediaPlayer2PlayerProxyClassDef;
typedef MediaPlayer2PlayerProxyClass self;
typedef detail::ClassTemplate<Mpris::impl::internal::MediaPlayer2PlayerProxyClassDef, Gio::impl::internal::DBusProxyClass, Mpris::impl::internal::MediaPlayer2PlayerIfaceClassImpl> super;

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


struct MediaPlayer2PlayerProxyClassDef::TypeInitData
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

using MediaPlayer2PlayerProxyImpl = detail::ObjectImpl<MediaPlayer2PlayerProxy, internal::MediaPlayer2PlayerProxyClass>;

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
