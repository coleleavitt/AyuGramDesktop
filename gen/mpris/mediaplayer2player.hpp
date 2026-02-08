// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2PLAYER_HPP_
#define _GI_MPRIS_MEDIAPLAYER2PLAYER_HPP_


namespace gi {

namespace repository {

namespace Mpris {


class MediaPlayer2Player;

namespace base {


#define GI_MPRIS_MEDIAPLAYER2PLAYER_BASE base::MediaPlayer2PlayerBase
class MediaPlayer2PlayerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::MprisMediaPlayer2Player BaseObjectType;

MediaPlayer2PlayerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mpris_media_player2_player_get_type(); } 

// GDBusInterfaceInfo* /*none*/ mpris_media_player2_player_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ mpris_media_player2_player_interface_info ();
static GI_INLINE_DECL Gio::DBusInterfaceInfo_Ref interface_info () noexcept;

// guint mpris_media_player2_player_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint mpris_media_player2_player_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void mpris_media_player2_player_call_next (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_next (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_next (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_next (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_next_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_next_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_next_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_next_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_next_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_next_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_next_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_next_sync () noexcept;
GI_INLINE_DECL bool call_next_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_next_sync (GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_open_uri (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_Uri /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_open_uri (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_Uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_open_uri (const gi::cstring_v arg_Uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_open_uri (const gi::cstring_v arg_Uri, Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_open_uri_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_open_uri_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_uri_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_open_uri_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_open_uri_sync (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_Uri /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_open_uri_sync (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_Uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_open_uri_sync (const gi::cstring_v arg_Uri, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_open_uri_sync (const gi::cstring_v arg_Uri) noexcept;
GI_INLINE_DECL bool call_open_uri_sync (const gi::cstring_v arg_Uri, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_open_uri_sync (const gi::cstring_v arg_Uri, GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_pause (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_pause (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_pause (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_pause (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_pause_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_pause_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_pause_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_pause_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_pause_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_pause_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_pause_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_pause_sync () noexcept;
GI_INLINE_DECL bool call_pause_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_pause_sync (GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_play (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_play (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_play (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_play (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_play_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_play_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_play_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_play_pause (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_play_pause (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_play_pause (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_play_pause (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_play_pause_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_pause_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_play_pause_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_play_pause_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_play_pause_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_pause_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_play_pause_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_play_pause_sync () noexcept;
GI_INLINE_DECL bool call_play_pause_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_play_pause_sync (GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_play_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_play_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_play_sync () noexcept;
GI_INLINE_DECL bool call_play_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_play_sync (GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_previous (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_previous (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_previous (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_previous (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_previous_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_previous_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_previous_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_previous_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_previous_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_previous_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_previous_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_previous_sync () noexcept;
GI_INLINE_DECL bool call_previous_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_previous_sync (GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_seek (MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_seek (::MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_seek (gint64 arg_Offset, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_seek (gint64 arg_Offset, Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_seek_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_seek_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_seek_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_seek_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_seek_sync (MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_seek_sync (::MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_seek_sync (gint64 arg_Offset, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_seek_sync (gint64 arg_Offset) noexcept;
GI_INLINE_DECL bool call_seek_sync (gint64 arg_Offset, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_seek_sync (gint64 arg_Offset, GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_set_position (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_TrackId /*none*/, gint64 arg_Position, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_set_position (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_TrackId /*none*/, gint64 arg_Position, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_set_position (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_set_position (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_set_position_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_set_position_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_position_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_set_position_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_set_position_sync (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_TrackId /*none*/, gint64 arg_Position, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_set_position_sync (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_TrackId /*none*/, gint64 arg_Position, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position) noexcept;
GI_INLINE_DECL bool call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position, GLib::Error * _error) noexcept;

// void mpris_media_player2_player_call_stop (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_stop (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
GI_INLINE_DECL void call_stop (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_stop (Gio::AsyncReadyCallback callback) noexcept;

// gboolean mpris_media_player2_player_call_stop_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_stop_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_stop_finish (Gio::AsyncResult res) noexcept;
GI_INLINE_DECL bool call_stop_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean mpris_media_player2_player_call_stop_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_stop_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
GI_INLINE_DECL gi::result<bool> call_stop_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL gi::result<bool> call_stop_sync () noexcept;
GI_INLINE_DECL bool call_stop_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool call_stop_sync (GLib::Error * _error) noexcept;

// void mpris_media_player2_player_complete_next (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_next (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_next (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_open_uri (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_open_uri (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_open_uri (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_pause (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_play (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_play (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_play (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_play_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_play_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_play_pause (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_previous (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_previous (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_previous (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_seek (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_seek (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_seek (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_set_position (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_set_position (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_set_position (Gio::DBusMethodInvocation invocation) noexcept;

// void mpris_media_player2_player_complete_stop (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_stop (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
GI_INLINE_DECL void complete_stop (Gio::DBusMethodInvocation invocation) noexcept;

// gchar* /*full,nullable*/ mpris_media_player2_player_dup_loop_status (MprisMediaPlayer2Player* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_player_dup_loop_status (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gi::cstring dup_loop_status () noexcept;

// GVariant* /*full,nullable*/ mpris_media_player2_player_dup_metadata (MprisMediaPlayer2Player* object /*none*/);
// ::GVariant* /*full,nullable*/ mpris_media_player2_player_dup_metadata (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL GLib::Variant dup_metadata () noexcept;

// gchar* /*full,nullable*/ mpris_media_player2_player_dup_playback_status (MprisMediaPlayer2Player* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_player_dup_playback_status (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gi::cstring dup_playback_status () noexcept;

// void mpris_media_player2_player_emit_seeked (MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
// void mpris_media_player2_player_emit_seeked (::MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
GI_INLINE_DECL void emit_seeked (gint64 arg_Position) noexcept;

// gboolean mpris_media_player2_player_get_can_control (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_control (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL bool get_can_control () noexcept;

// gboolean mpris_media_player2_player_get_can_go_next (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_go_next (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL bool get_can_go_next () noexcept;

// gboolean mpris_media_player2_player_get_can_go_previous (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_go_previous (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL bool get_can_go_previous () noexcept;

// gboolean mpris_media_player2_player_get_can_pause (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_pause (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL bool get_can_pause () noexcept;

// gboolean mpris_media_player2_player_get_can_play (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_play (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL bool get_can_play () noexcept;

// gboolean mpris_media_player2_player_get_can_seek (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_seek (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL bool get_can_seek () noexcept;

// const gchar* /*none,nullable*/ mpris_media_player2_player_get_loop_status (MprisMediaPlayer2Player* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_player_get_loop_status (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gi::cstring_v get_loop_status () noexcept;

// gdouble mpris_media_player2_player_get_maximum_rate (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_maximum_rate (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gdouble get_maximum_rate () noexcept;

// GVariant* /*none,nullable*/ mpris_media_player2_player_get_metadata (MprisMediaPlayer2Player* object /*none*/);
// ::GVariant* /*none,nullable*/ mpris_media_player2_player_get_metadata (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL GLib::Variant get_metadata () noexcept;

// gdouble mpris_media_player2_player_get_minimum_rate (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_minimum_rate (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gdouble get_minimum_rate () noexcept;

// const gchar* /*none,nullable*/ mpris_media_player2_player_get_playback_status (MprisMediaPlayer2Player* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_player_get_playback_status (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gi::cstring_v get_playback_status () noexcept;

// gint64 mpris_media_player2_player_get_position (MprisMediaPlayer2Player* object /*none*/);
// gint64 mpris_media_player2_player_get_position (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gint64 get_position () noexcept;

// gdouble mpris_media_player2_player_get_rate (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_rate (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gdouble get_rate () noexcept;

// gboolean mpris_media_player2_player_get_shuffle (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_shuffle (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL bool get_shuffle () noexcept;

// gdouble mpris_media_player2_player_get_volume (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_volume (::MprisMediaPlayer2Player* object /*none*/);
GI_INLINE_DECL gdouble get_volume () noexcept;

// void mpris_media_player2_player_set_can_control (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_control (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_control (gboolean value) noexcept;

// void mpris_media_player2_player_set_can_go_next (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_go_next (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_go_next (gboolean value) noexcept;

// void mpris_media_player2_player_set_can_go_previous (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_go_previous (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_go_previous (gboolean value) noexcept;

// void mpris_media_player2_player_set_can_pause (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_pause (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_pause (gboolean value) noexcept;

// void mpris_media_player2_player_set_can_play (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_play (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_play (gboolean value) noexcept;

// void mpris_media_player2_player_set_can_seek (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_seek (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
GI_INLINE_DECL void set_can_seek (gboolean value) noexcept;

// void mpris_media_player2_player_set_loop_status (MprisMediaPlayer2Player* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_player_set_loop_status (::MprisMediaPlayer2Player* object /*none*/, const char* value /*none*/);
GI_INLINE_DECL void set_loop_status (const gi::cstring_v value) noexcept;

// void mpris_media_player2_player_set_maximum_rate (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_maximum_rate (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
GI_INLINE_DECL void set_maximum_rate (gdouble value) noexcept;

// void mpris_media_player2_player_set_metadata (MprisMediaPlayer2Player* object /*none*/, GVariant* value /*none*/);
// void mpris_media_player2_player_set_metadata (::MprisMediaPlayer2Player* object /*none*/, ::GVariant* value /*none*/);
GI_INLINE_DECL void set_metadata (GLib::Variant value) noexcept;

// void mpris_media_player2_player_set_minimum_rate (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_minimum_rate (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
GI_INLINE_DECL void set_minimum_rate (gdouble value) noexcept;

// void mpris_media_player2_player_set_playback_status (MprisMediaPlayer2Player* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_player_set_playback_status (::MprisMediaPlayer2Player* object /*none*/, const char* value /*none*/);
GI_INLINE_DECL void set_playback_status (const gi::cstring_v value) noexcept;

// void mpris_media_player2_player_set_position (MprisMediaPlayer2Player* object /*none*/, gint64 value);
// void mpris_media_player2_player_set_position (::MprisMediaPlayer2Player* object /*none*/, gint64 value);
GI_INLINE_DECL void set_position (gint64 value) noexcept;

// void mpris_media_player2_player_set_rate (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_rate (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
GI_INLINE_DECL void set_rate (gdouble value) noexcept;

// void mpris_media_player2_player_set_shuffle (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_shuffle (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
GI_INLINE_DECL void set_shuffle (gboolean value) noexcept;

// void mpris_media_player2_player_set_volume (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_volume (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
GI_INLINE_DECL void set_volume (gdouble value) noexcept;

gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_control()
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-control"); }
const gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_control() const
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-control"); }

gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_go_next()
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-go-next"); }
const gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_go_next() const
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-go-next"); }

gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_go_previous()
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-go-previous"); }
const gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_go_previous() const
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-go-previous"); }

gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_pause()
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-pause"); }
const gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_pause() const
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-pause"); }

gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_play()
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-play"); }
const gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_play() const
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-play"); }

gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_seek()
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-seek"); }
const gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_can_seek() const
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "can-seek"); }

gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> property_loop_status()
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> (*this, "loop-status"); }
const gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> property_loop_status() const
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> (*this, "loop-status"); }

gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_maximum_rate()
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "maximum-rate"); }
const gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_maximum_rate() const
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "maximum-rate"); }

gi::property_proxy<GLib::Variant, base::MediaPlayer2PlayerBase> property_metadata()
{ return gi::property_proxy<GLib::Variant, base::MediaPlayer2PlayerBase> (*this, "metadata"); }
const gi::property_proxy<GLib::Variant, base::MediaPlayer2PlayerBase> property_metadata() const
{ return gi::property_proxy<GLib::Variant, base::MediaPlayer2PlayerBase> (*this, "metadata"); }

gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_minimum_rate()
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "minimum-rate"); }
const gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_minimum_rate() const
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "minimum-rate"); }

gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> property_playback_status()
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> (*this, "playback-status"); }
const gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> property_playback_status() const
{ return gi::property_proxy<gi::cstring, base::MediaPlayer2PlayerBase> (*this, "playback-status"); }

gi::property_proxy<gint64, base::MediaPlayer2PlayerBase> property_position()
{ return gi::property_proxy<gint64, base::MediaPlayer2PlayerBase> (*this, "position"); }
const gi::property_proxy<gint64, base::MediaPlayer2PlayerBase> property_position() const
{ return gi::property_proxy<gint64, base::MediaPlayer2PlayerBase> (*this, "position"); }

gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_rate()
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "rate"); }
const gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_rate() const
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "rate"); }

gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_shuffle()
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "shuffle"); }
const gi::property_proxy<bool, base::MediaPlayer2PlayerBase> property_shuffle() const
{ return gi::property_proxy<bool, base::MediaPlayer2PlayerBase> (*this, "shuffle"); }

gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_volume()
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "volume"); }
const gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> property_volume() const
{ return gi::property_proxy<gdouble, base::MediaPlayer2PlayerBase> (*this, "volume"); }

// (signal) gboolean handle-next ( invocation /*none*/);
// (signal) gboolean handle-next (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> signal_handle_next()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> (*this, "handle-next"); }

// (signal) gboolean handle-open-uri ( invocation /*none*/, gchar* arg_Uri /*none*/);
// (signal) gboolean handle-open-uri (::GDBusMethodInvocation* invocation /*none*/, char* arg_Uri /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_Uri)> signal_handle_open_uri()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_Uri)> (*this, "handle-open-uri"); }

// (signal) gboolean handle-pause ( invocation /*none*/);
// (signal) gboolean handle-pause (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> signal_handle_pause()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> (*this, "handle-pause"); }

// (signal) gboolean handle-play ( invocation /*none*/);
// (signal) gboolean handle-play (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> signal_handle_play()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> (*this, "handle-play"); }

// (signal) gboolean handle-play-pause ( invocation /*none*/);
// (signal) gboolean handle-play-pause (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> signal_handle_play_pause()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> (*this, "handle-play-pause"); }

// (signal) gboolean handle-previous ( invocation /*none*/);
// (signal) gboolean handle-previous (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> signal_handle_previous()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> (*this, "handle-previous"); }

// (signal) gboolean handle-seek ( invocation /*none*/, gint64 arg_Offset);
// (signal) gboolean handle-seek (::GDBusMethodInvocation* invocation /*none*/, gint64 arg_Offset);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation, long long arg_Offset)> signal_handle_seek()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation, long long arg_Offset)> (*this, "handle-seek"); }

// (signal) gboolean handle-set-position ( invocation /*none*/, gchar* arg_TrackId /*none*/, gint64 arg_Position);
// (signal) gboolean handle-set-position (::GDBusMethodInvocation* invocation /*none*/, char* arg_TrackId /*none*/, gint64 arg_Position);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_TrackId, long long arg_Position)> signal_handle_set_position()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation, gi::cstring_v arg_TrackId, long long arg_Position)> (*this, "handle-set-position"); }

// (signal) gboolean handle-stop ( invocation /*none*/);
// (signal) gboolean handle-stop (::GDBusMethodInvocation* invocation /*none*/);
gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> signal_handle_stop()
{ return gi::signal_proxy<bool(Mpris::MediaPlayer2Player, Gio::DBusMethodInvocation invocation)> (*this, "handle-stop"); }

// (signal) void seeked (gint64 arg_Position);
// (signal) void seeked (gint64 arg_Position);
gi::signal_proxy<void(Mpris::MediaPlayer2Player, long long arg_Position)> signal_seeked()
{ return gi::signal_proxy<void(Mpris::MediaPlayer2Player, long long arg_Position)> (*this, "seeked"); }

}; // class

} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2player_extra_def.hpp>)
#include <mpris/mediaplayer2player_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2player_extra.hpp>)
#include <mpris/mediaplayer2player_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

class MediaPlayer2Player : public GI_MPRIS_MEDIAPLAYER2PLAYER_BASE
{ typedef GI_MPRIS_MEDIAPLAYER2PLAYER_BASE super_type; using super_type::super_type; };

} // namespace Mpris

template<> struct declare_cpptype_of<::MprisMediaPlayer2Player>
{ typedef Mpris::MediaPlayer2Player type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {


class MediaPlayer2PlayerIfaceDef
{
typedef MediaPlayer2PlayerIfaceDef self;
public:
typedef Mpris::MediaPlayer2Player instance_type;
typedef ::MprisMediaPlayer2PlayerIface interface_type;

using GI_MEMBER_CHECK_CONFLICT(handle_next) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_open_uri) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_pause) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_play) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_play_pause) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_previous) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_seek) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_set_position) = self;
using GI_MEMBER_CHECK_CONFLICT(handle_stop) = self;
using GI_MEMBER_CHECK_CONFLICT(seeked) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~MediaPlayer2PlayerIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean MediaPlayer2Player::handle_next (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_next (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_next_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean MediaPlayer2Player::handle_open_uri (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_Uri /*none*/);
// gboolean MediaPlayer2Player::handle_open_uri (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_Uri /*none*/);
virtual bool handle_open_uri_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_Uri) noexcept = 0;

// gboolean MediaPlayer2Player::handle_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_pause_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean MediaPlayer2Player::handle_play (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_play (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_play_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean MediaPlayer2Player::handle_play_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_play_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_play_pause_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean MediaPlayer2Player::handle_previous (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_previous (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_previous_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// gboolean MediaPlayer2Player::handle_seek (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint64 arg_Offset);
// gboolean MediaPlayer2Player::handle_seek (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint64 arg_Offset);
virtual bool handle_seek_ (Gio::DBusMethodInvocation invocation, gint64 arg_Offset) noexcept = 0;

// gboolean MediaPlayer2Player::handle_set_position (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_TrackId /*none*/, gint64 arg_Position);
// gboolean MediaPlayer2Player::handle_set_position (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_TrackId /*none*/, gint64 arg_Position);
virtual bool handle_set_position_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_TrackId, gint64 arg_Position) noexcept = 0;

// gboolean MediaPlayer2Player::handle_stop (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_stop (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
virtual bool handle_stop_ (Gio::DBusMethodInvocation invocation) noexcept = 0;

// void MediaPlayer2Player::seeked (MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
// void MediaPlayer2Player::seeked (::MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
virtual void seeked_ (gint64 arg_Position) noexcept = 0;


};

using MediaPlayer2PlayerImpl = detail::InterfaceImpl<MediaPlayer2PlayerIfaceDef>;

class MediaPlayer2PlayerIfaceClassImpl: public detail::InterfaceClassImpl<MediaPlayer2PlayerImpl>
{
friend class internal::MediaPlayer2PlayerIfaceDef;
typedef MediaPlayer2PlayerIfaceClassImpl self;
typedef detail::InterfaceClassImpl<MediaPlayer2PlayerImpl> super;

protected:
using super::super;

// gboolean MediaPlayer2Player::handle_next (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_next (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_next_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean MediaPlayer2Player::handle_open_uri (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_Uri /*none*/);
// gboolean MediaPlayer2Player::handle_open_uri (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_Uri /*none*/);
GI_INLINE_DECL bool handle_open_uri_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_Uri) noexcept override;

// gboolean MediaPlayer2Player::handle_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_pause_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean MediaPlayer2Player::handle_play (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_play (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_play_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean MediaPlayer2Player::handle_play_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_play_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_play_pause_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean MediaPlayer2Player::handle_previous (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_previous (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_previous_ (Gio::DBusMethodInvocation invocation) noexcept override;

// gboolean MediaPlayer2Player::handle_seek (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint64 arg_Offset);
// gboolean MediaPlayer2Player::handle_seek (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint64 arg_Offset);
GI_INLINE_DECL bool handle_seek_ (Gio::DBusMethodInvocation invocation, gint64 arg_Offset) noexcept override;

// gboolean MediaPlayer2Player::handle_set_position (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_TrackId /*none*/, gint64 arg_Position);
// gboolean MediaPlayer2Player::handle_set_position (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_TrackId /*none*/, gint64 arg_Position);
GI_INLINE_DECL bool handle_set_position_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_TrackId, gint64 arg_Position) noexcept override;

// gboolean MediaPlayer2Player::handle_stop (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_stop (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
GI_INLINE_DECL bool handle_stop_ (Gio::DBusMethodInvocation invocation) noexcept override;

// void MediaPlayer2Player::seeked (MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
// void MediaPlayer2Player::seeked (::MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
GI_INLINE_DECL void seeked_ (gint64 arg_Position) noexcept override;


};


struct MediaPlayer2PlayerIfaceDef::TypeInitData
{
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_next)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_open_uri)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_pause)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_play)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_play_pause)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_previous)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_seek)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_set_position)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, handle_stop)
  GI_MEMBER_DEFINE(MediaPlayer2PlayerIfaceClassImpl, seeked)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_next),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_open_uri),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_pause),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_play),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_play_pause),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_previous),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_seek),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_set_position),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, handle_stop),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, seeked)
  };
}
};
} // namespace internal

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
