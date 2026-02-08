// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2_HPP_
#define _GI_MPRIS_MEDIAPLAYER2_HPP_


namespace gi {

namespace repository {

namespace Mpris {


class MediaPlayer2;

namespace base {


#define GI_MPRIS_MEDIAPLAYER2_BASE base::MediaPlayer2Base
class MediaPlayer2Base : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::MprisMediaPlayer2 BaseObjectType;

MediaPlayer2Base (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_media_player2_get_type(); } 

// GDBusInterfaceInfo* /*none*/ mpris_media_player2_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ mpris_media_player2_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint mpris_media_player2_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint mpris_media_player2_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void mpris_media_player2_call_quit (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_call_quit (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_quit (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_quit (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_call_quit_finish (MprisMediaPlayer2* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_call_quit_finish (::MprisMediaPlayer2* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_quit_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_quit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_call_quit_sync (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_call_quit_sync (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_quit_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_quit_sync () noexcept;
GI_INLINE_DECL bool call_quit_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_quit_sync (GLib::Error * _error) noexcept;

// void mpris_media_player2_call_raise (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_call_raise (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_raise (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_raise (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_call_raise_finish (MprisMediaPlayer2* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_call_raise_finish (::MprisMediaPlayer2* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_raise_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_raise_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_call_raise_sync (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_call_raise_sync (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_raise_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_raise_sync () noexcept;
GI_INLINE_DECL bool call_raise_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_raise_sync (GLib::Error * _error) noexcept;

// void mpris_media_player2_complete_quit (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_complete_quit (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_quit (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_complete_raise (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_complete_raise (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_raise (Gio::DBusMethodInvocation invocation) noexcept;

// gchar* /*full,nullable*/ mpris_media_player2_dup_desktop_entry (MprisMediaPlayer2* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_dup_desktop_entry (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::cstring dup_desktop_entry () noexcept;

// gchar* /*full,nullable*/ mpris_media_player2_dup_identity (MprisMediaPlayer2* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_dup_identity (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::cstring dup_identity () noexcept;

// gchar** /*full,nullable*/ mpris_media_player2_dup_supported_mime_types (MprisMediaPlayer2* object /*none*/);
// char** /*full,nullable*/ mpris_media_player2_dup_supported_mime_types (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> dup_supported_mime_types () noexcept;

// gchar** /*full,nullable*/ mpris_media_player2_dup_supported_uri_schemes (MprisMediaPlayer2* object /*none*/);
// char** /*full,nullable*/ mpris_media_player2_dup_supported_uri_schemes (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> dup_supported_uri_schemes () noexcept;

// gboolean mpris_media_player2_get_can_quit (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_can_quit (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL bool get_can_quit () noexcept;

// gboolean mpris_media_player2_get_can_raise (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_can_raise (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL bool get_can_raise () noexcept;

// gboolean mpris_media_player2_get_can_set_fullscreen (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_can_set_fullscreen (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL bool get_can_set_fullscreen () noexcept;

// const gchar* /*none,nullable*/ mpris_media_player2_get_desktop_entry (MprisMediaPlayer2* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_get_desktop_entry (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::cstring_v get_desktop_entry () noexcept;

// gboolean mpris_media_player2_get_fullscreen (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_fullscreen (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL bool get_fullscreen () noexcept;

// gboolean mpris_media_player2_get_has_track_list (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_has_track_list (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL bool get_has_track_list () noexcept;

// const gchar* /*none,nullable*/ mpris_media_player2_get_identity (MprisMediaPlayer2* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_get_identity (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::cstring_v get_identity () noexcept;

// const gchar* const* /*none,nullable*/ mpris_media_player2_get_supported_mime_types (MprisMediaPlayer2* object /*none*/);
// const char** /*none,nullable*/ mpris_media_player2_get_supported_mime_types (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_mime_types () noexcept;

// const gchar* const* /*none,nullable*/ mpris_media_player2_get_supported_uri_schemes (MprisMediaPlayer2* object /*none*/);
// const char** /*none,nullable*/ mpris_media_player2_get_supported_uri_schemes (::MprisMediaPlayer2* object /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_supported_uri_schemes () noexcept;

// void mpris_media_player2_set_can_quit (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_can_quit (::MprisMediaPlayer2* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_quit (gboolean value) noexcept;

// void mpris_media_player2_set_can_raise (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_can_raise (::MprisMediaPlayer2* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_raise (gboolean value) noexcept;

// void mpris_media_player2_set_can_set_fullscreen (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_can_set_fullscreen (::MprisMediaPlayer2* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_set_fullscreen (gboolean value) noexcept;

// void mpris_media_player2_set_desktop_entry (MprisMediaPlayer2* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_set_desktop_entry (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
GI_INLINE_DECL void set_desktop_entry (const gi::cstring_v value) noexcept;

// void mpris_media_player2_set_fullscreen (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_fullscreen (::MprisMediaPlayer2* object /*none*/, gboolean value);
GI_INLINE_DECL void set_fullscreen (gboolean value) noexcept;

// void mpris_media_player2_set_has_track_list (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_has_track_list (::MprisMediaPlayer2* object /*none*/, gboolean value);
GI_INLINE_DECL void set_has_track_list (gboolean value) noexcept;

// void mpris_media_player2_set_identity (MprisMediaPlayer2* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_set_identity (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
GI_INLINE_DECL void set_identity (const gi::cstring_v value) noexcept;

// void mpris_media_player2_set_supported_mime_types (MprisMediaPlayer2* object /*none*/, const gchar* const* value /*none*/);
// void mpris_media_player2_set_supported_mime_types (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)

// void mpris_media_player2_set_supported_uri_schemes (MprisMediaPlayer2* object /*none*/, const gchar* const* value /*none*/);
// void mpris_media_player2_set_supported_uri_schemes (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)

gi::property_proxy<bool, base::MediaPlayer2Base> property_can_quit()
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "can-quit"); }
const gi::property_proxy<bool, base::MediaPlayer2Base> property_can_quit() const
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "can-quit"); }

gi::property_proxy<bool, base::MediaPlayer2Base> property_can_raise()
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "can-raise"); }
const gi::property_proxy<bool, base::MediaPlayer2Base> property_can_raise() const
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "can-raise"); }

gi::property_proxy<bool, base::MediaPlayer2Base> property_can_set_fullscreen()
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "can-set-fullscreen"); }
const gi::property_proxy<bool, base::MediaPlayer2Base> property_can_set_fullscreen() const
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "can-set-fullscreen"); }

gi::property_proxy<gi::cstring, base::MediaPlayer2Base> property_desktop_entry()
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2Base> (*this, "desktop-entry"); }
const gi::property_proxy<gi::cstring, base::MediaPlayer2Base> property_desktop_entry() const
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2Base> (*this, "desktop-entry"); }

gi::property_proxy<bool, base::MediaPlayer2Base> property_fullscreen()
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "fullscreen"); }
const gi::property_proxy<bool, base::MediaPlayer2Base> property_fullscreen() const
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "fullscreen"); }

gi::property_proxy<bool, base::MediaPlayer2Base> property_has_track_list()
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "has-track-list"); }
const gi::property_proxy<bool, base::MediaPlayer2Base> property_has_track_list() const
{ return gi::property_proxy<bool, base::MediaPlayer2Base> (*this, "has-track-list"); }

gi::property_proxy<gi::cstring, base::MediaPlayer2Base> property_identity()
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2Base> (*this, "identity"); }
const gi::property_proxy<gi::cstring, base::MediaPlayer2Base> property_identity() const
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2Base> (*this, "identity"); }

// (signal) gboolean handle-quit ( invocation /*none*/);
// (signal) gboolean handle-quit (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2, Gio::DBusMethodInvocation invocation)> signal_handle_quit()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2, Gio::DBusMethodInvocation invocation)> (*this, "handle-quit"); }

// (signal) gboolean handle-raise ( invocation /*none*/);
// (signal) gboolean handle-raise (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2, Gio::DBusMethodInvocation invocation)> signal_handle_raise()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2, Gio::DBusMethodInvocation invocation)> (*this, "handle-raise"); }

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2_extra_def.hpp>)
#include <mpris/mediaplayer2_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2_extra.hpp>)
#include <mpris/mediaplayer2_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2 : public GI_MPRIS_MEDIAPLAYER2_BASE
{ typedef GI_MPRIS_MEDIAPLAYER2_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisMediaPlayer2>
{ typedef Mpris::MediaPlayer2 type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class MediaPlayer2IfaceDef
{
typedef MediaPlayer2IfaceDef self;
public:
typedef Mpris::MediaPlayer2 instance_type;
typedef ::MprisMediaPlayer2Iface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_quit) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_raise) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaPlayer2IfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean MediaPlayer2::handle_quit (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2::handle_quit (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_quit_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean MediaPlayer2::handle_raise (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2::handle_raise (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_raise_ (Gio::DBusMethodInvocation invocation) noexcept = 0;


};

using MediaPlayer2Impl = detail::InterfaceImpl<MediaPlayer2IfaceDef>;

class MediaPlayer2IfaceClassImpl: public detail::InterfaceClassImpl<MediaPlayer2Impl>
{
friend class internal::MediaPlayer2IfaceDef;
typedef MediaPlayer2IfaceClassImpl self;
typedef detail::InterfaceClassImpl<MediaPlayer2Impl> super;

protected:
using super::super;

// gboolean MediaPlayer2::handle_quit (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2::handle_quit (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_quit_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean MediaPlayer2::handle_raise (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2::handle_raise (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_raise_ (Gio::DBusMethodInvocation invocation) noexcept override;


};


struct MediaPlayer2IfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(MediaPlayer2IfaceClassImpl, handle_quit)
  GI_MEMBER_DEFINE(MediaPlayer2IfaceClassImpl, handle_raise)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_quit),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_raise)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
