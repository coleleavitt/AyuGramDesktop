// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2PLAYER_IMPL_HPP_
#define _GI_MPRIS_MEDIAPLAYER2PLAYER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Mpris {

namespace base {

// GDBusInterfaceInfo* /*none*/ mpris_media_player2_player_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ mpris_media_player2_player_interface_info ();
Gio::DBusInterfaceInfo_Ref base::MediaPlayer2PlayerBase::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint mpris_media_player2_player_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint mpris_media_player2_player_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void mpris_media_player2_player_call_next (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_next (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_next (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_next (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_next_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_next_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_next_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_next_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_next_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_next_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_next_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_next_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_next_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_next_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_next_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_open_uri (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_Uri /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_open_uri (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_Uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_open_uri (const gi::cstring_v arg_Uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_Uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Uri_to_c = gi::unwrap (arg_Uri, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_Uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_open_uri (const gi::cstring_v arg_Uri, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_Uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_Uri_to_c = gi::unwrap (arg_Uri, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_Uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_open_uri_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_open_uri_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_open_uri_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_open_uri_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_open_uri_sync (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_Uri /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_open_uri_sync (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_Uri /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_open_uri_sync (const gi::cstring_v arg_Uri, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_Uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Uri_to_c = gi::unwrap (arg_Uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_Uri_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_open_uri_sync (const gi::cstring_v arg_Uri) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_Uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri_sync;
  auto cancellable_to_c = nullptr;
  auto arg_Uri_to_c = gi::unwrap (arg_Uri, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_Uri_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_open_uri_sync (const gi::cstring_v arg_Uri, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_Uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Uri_to_c = gi::unwrap (arg_Uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_Uri_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_open_uri_sync (const gi::cstring_v arg_Uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_Uri, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_open_uri_sync;
  auto cancellable_to_c = nullptr;
  auto arg_Uri_to_c = gi::unwrap (arg_Uri, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_Uri_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_pause (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_pause (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_pause (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_pause (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_pause_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_pause_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_pause_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_pause_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_pause_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_pause_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_pause_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_pause_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_pause_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_pause_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_pause_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_play (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_play (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_play (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_play (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_play_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_play_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_play_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_play_pause (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_play_pause (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_play_pause (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_play_pause (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_play_pause_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_pause_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_play_pause_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_play_pause_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_play_pause_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_pause_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_play_pause_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_play_pause_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_play_pause_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_play_pause_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_pause_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_play_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_play_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_play_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_play_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_play_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_play_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_play_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_previous (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_previous (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_previous (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_previous (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_previous_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_previous_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_previous_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_previous_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_previous_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_previous_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_previous_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_previous_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_previous_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_previous_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_previous_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_seek (MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_seek (::MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_seek (gint64 arg_Offset, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, gint64 arg_Offset, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Offset_to_c = arg_Offset;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Offset_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_seek (gint64 arg_Offset, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, gint64 arg_Offset, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_Offset_to_c = arg_Offset;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Offset_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_seek_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_seek_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_seek_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_seek_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_seek_sync (MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_seek_sync (::MprisMediaPlayer2Player* proxy /*none*/, gint64 arg_Offset, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_seek_sync (gint64 arg_Offset, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, gint64 arg_Offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Offset_to_c = arg_Offset;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Offset_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_seek_sync (gint64 arg_Offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, gint64 arg_Offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek_sync;
  auto cancellable_to_c = nullptr;
  auto arg_Offset_to_c = arg_Offset;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Offset_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_seek_sync (gint64 arg_Offset, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, gint64 arg_Offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Offset_to_c = arg_Offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Offset_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_seek_sync (gint64 arg_Offset, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, gint64 arg_Offset, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_seek_sync;
  auto cancellable_to_c = nullptr;
  auto arg_Offset_to_c = arg_Offset;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Offset_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_set_position (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_TrackId /*none*/, gint64 arg_Position, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_set_position (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_TrackId /*none*/, gint64 arg_Position, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_set_position (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_TrackId, gint64 arg_Position, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Position_to_c = arg_Position;
  auto arg_TrackId_to_c = gi::unwrap (arg_TrackId, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_TrackId_to_c), (gint64) (arg_Position_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_set_position (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_TrackId, gint64 arg_Position, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto arg_Position_to_c = arg_Position;
  auto arg_TrackId_to_c = gi::unwrap (arg_TrackId, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_TrackId_to_c), (gint64) (arg_Position_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_set_position_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_set_position_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_set_position_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_set_position_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_set_position_sync (MprisMediaPlayer2Player* proxy /*none*/, const gchar* arg_TrackId /*none*/, gint64 arg_Position, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_set_position_sync (::MprisMediaPlayer2Player* proxy /*none*/, const char* arg_TrackId /*none*/, gint64 arg_Position, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_TrackId, gint64 arg_Position, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Position_to_c = arg_Position;
  auto arg_TrackId_to_c = gi::unwrap (arg_TrackId, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_TrackId_to_c), (gint64) (arg_Position_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_TrackId, gint64 arg_Position, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position_sync;
  auto cancellable_to_c = nullptr;
  auto arg_Position_to_c = arg_Position;
  auto arg_TrackId_to_c = gi::unwrap (arg_TrackId, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_TrackId_to_c), (gint64) (arg_Position_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_TrackId, gint64 arg_Position, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto arg_Position_to_c = arg_Position;
  auto arg_TrackId_to_c = gi::unwrap (arg_TrackId, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_TrackId_to_c), (gint64) (arg_Position_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_set_position_sync (const gi::cstring_v arg_TrackId, gint64 arg_Position, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, const char* arg_TrackId, gint64 arg_Position, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_set_position_sync;
  auto cancellable_to_c = nullptr;
  auto arg_Position_to_c = arg_Position;
  auto arg_TrackId_to_c = gi::unwrap (arg_TrackId, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (arg_TrackId_to_c), (gint64) (arg_Position_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_call_stop (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_player_call_stop (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2PlayerBase::call_stop (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2PlayerBase::call_stop (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_player_call_stop_finish (MprisMediaPlayer2Player* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_player_call_stop_finish (::MprisMediaPlayer2Player* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_stop_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_stop_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_player_call_stop_sync (MprisMediaPlayer2Player* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_player_call_stop_sync (::MprisMediaPlayer2Player* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2PlayerBase::call_stop_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2PlayerBase::call_stop_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_stop_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2PlayerBase::call_stop_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_call_stop_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_player_complete_next (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_next (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_next (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_next;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_open_uri (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_open_uri (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_open_uri (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_open_uri;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_pause (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_pause;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_play (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_play (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_play (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_play;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_play_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_play_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_play_pause (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_play_pause;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_previous (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_previous (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_previous (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_previous;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_seek (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_seek (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_seek (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_seek;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_set_position (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_set_position (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_set_position (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_set_position;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_player_complete_stop (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_player_complete_stop (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2PlayerBase::complete_stop (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_complete_stop;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// gchar* /*full,nullable*/ mpris_media_player2_player_dup_loop_status (MprisMediaPlayer2Player* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_player_dup_loop_status (::MprisMediaPlayer2Player* object /*none*/);
gi::cstring base::MediaPlayer2PlayerBase::dup_loop_status () noexcept
{
  typedef char* (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_dup_loop_status;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVariant* /*full,nullable*/ mpris_media_player2_player_dup_metadata (MprisMediaPlayer2Player* object /*none*/);
// ::GVariant* /*full,nullable*/ mpris_media_player2_player_dup_metadata (::MprisMediaPlayer2Player* object /*none*/);
GLib::Variant base::MediaPlayer2PlayerBase::dup_metadata () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_dup_metadata;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ mpris_media_player2_player_dup_playback_status (MprisMediaPlayer2Player* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_player_dup_playback_status (::MprisMediaPlayer2Player* object /*none*/);
gi::cstring base::MediaPlayer2PlayerBase::dup_playback_status () noexcept
{
  typedef char* (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_dup_playback_status;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void mpris_media_player2_player_emit_seeked (MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
// void mpris_media_player2_player_emit_seeked (::MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
void base::MediaPlayer2PlayerBase::emit_seeked (gint64 arg_Position) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gint64 arg_Position);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_emit_seeked;
  auto arg_Position_to_c = arg_Position;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Position_to_c));
}

// gboolean mpris_media_player2_player_get_can_control (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_control (::MprisMediaPlayer2Player* object /*none*/);
bool base::MediaPlayer2PlayerBase::get_can_control () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_can_control;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_player_get_can_go_next (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_go_next (::MprisMediaPlayer2Player* object /*none*/);
bool base::MediaPlayer2PlayerBase::get_can_go_next () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_can_go_next;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_player_get_can_go_previous (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_go_previous (::MprisMediaPlayer2Player* object /*none*/);
bool base::MediaPlayer2PlayerBase::get_can_go_previous () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_can_go_previous;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_player_get_can_pause (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_pause (::MprisMediaPlayer2Player* object /*none*/);
bool base::MediaPlayer2PlayerBase::get_can_pause () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_can_pause;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_player_get_can_play (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_play (::MprisMediaPlayer2Player* object /*none*/);
bool base::MediaPlayer2PlayerBase::get_can_play () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_can_play;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_player_get_can_seek (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_can_seek (::MprisMediaPlayer2Player* object /*none*/);
bool base::MediaPlayer2PlayerBase::get_can_seek () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_can_seek;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ mpris_media_player2_player_get_loop_status (MprisMediaPlayer2Player* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_player_get_loop_status (::MprisMediaPlayer2Player* object /*none*/);
gi::cstring_v base::MediaPlayer2PlayerBase::get_loop_status () noexcept
{
  typedef const char* (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_loop_status;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gdouble mpris_media_player2_player_get_maximum_rate (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_maximum_rate (::MprisMediaPlayer2Player* object /*none*/);
gdouble base::MediaPlayer2PlayerBase::get_maximum_rate () noexcept
{
  typedef gdouble (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_maximum_rate;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// GVariant* /*none,nullable*/ mpris_media_player2_player_get_metadata (MprisMediaPlayer2Player* object /*none*/);
// ::GVariant* /*none,nullable*/ mpris_media_player2_player_get_metadata (::MprisMediaPlayer2Player* object /*none*/);
GLib::Variant base::MediaPlayer2PlayerBase::get_metadata () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_metadata;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gdouble mpris_media_player2_player_get_minimum_rate (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_minimum_rate (::MprisMediaPlayer2Player* object /*none*/);
gdouble base::MediaPlayer2PlayerBase::get_minimum_rate () noexcept
{
  typedef gdouble (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_minimum_rate;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ mpris_media_player2_player_get_playback_status (MprisMediaPlayer2Player* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_player_get_playback_status (::MprisMediaPlayer2Player* object /*none*/);
gi::cstring_v base::MediaPlayer2PlayerBase::get_playback_status () noexcept
{
  typedef const char* (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_playback_status;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gint64 mpris_media_player2_player_get_position (MprisMediaPlayer2Player* object /*none*/);
// gint64 mpris_media_player2_player_get_position (::MprisMediaPlayer2Player* object /*none*/);
gint64 base::MediaPlayer2PlayerBase::get_position () noexcept
{
  typedef gint64 (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_position;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gdouble mpris_media_player2_player_get_rate (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_rate (::MprisMediaPlayer2Player* object /*none*/);
gdouble base::MediaPlayer2PlayerBase::get_rate () noexcept
{
  typedef gdouble (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_rate;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_player_get_shuffle (MprisMediaPlayer2Player* object /*none*/);
// gboolean mpris_media_player2_player_get_shuffle (::MprisMediaPlayer2Player* object /*none*/);
bool base::MediaPlayer2PlayerBase::get_shuffle () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_shuffle;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// gdouble mpris_media_player2_player_get_volume (MprisMediaPlayer2Player* object /*none*/);
// gdouble mpris_media_player2_player_get_volume (::MprisMediaPlayer2Player* object /*none*/);
gdouble base::MediaPlayer2PlayerBase::get_volume () noexcept
{
  typedef gdouble (*call_wrap_t) (::MprisMediaPlayer2Player* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_get_volume;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()));
  return _temp_ret;
}

// void mpris_media_player2_player_set_can_control (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_control (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
void base::MediaPlayer2PlayerBase::set_can_control (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_can_control;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_player_set_can_go_next (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_go_next (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
void base::MediaPlayer2PlayerBase::set_can_go_next (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_can_go_next;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_player_set_can_go_previous (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_go_previous (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
void base::MediaPlayer2PlayerBase::set_can_go_previous (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_can_go_previous;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_player_set_can_pause (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_pause (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
void base::MediaPlayer2PlayerBase::set_can_pause (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_can_pause;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_player_set_can_play (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_play (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
void base::MediaPlayer2PlayerBase::set_can_play (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_can_play;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_player_set_can_seek (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_can_seek (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
void base::MediaPlayer2PlayerBase::set_can_seek (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_can_seek;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_player_set_loop_status (MprisMediaPlayer2Player* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_player_set_loop_status (::MprisMediaPlayer2Player* object /*none*/, const char* value /*none*/);
void base::MediaPlayer2PlayerBase::set_loop_status (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_loop_status;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (value_to_c));
}

// void mpris_media_player2_player_set_maximum_rate (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_maximum_rate (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
void base::MediaPlayer2PlayerBase::set_maximum_rate (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_maximum_rate;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gdouble) (value_to_c));
}

// void mpris_media_player2_player_set_metadata (MprisMediaPlayer2Player* object /*none*/, GVariant* value /*none*/);
// void mpris_media_player2_player_set_metadata (::MprisMediaPlayer2Player* object /*none*/, ::GVariant* value /*none*/);
void base::MediaPlayer2PlayerBase::set_metadata (GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_metadata;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GVariant*) (value_to_c));
}

// void mpris_media_player2_player_set_minimum_rate (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_minimum_rate (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
void base::MediaPlayer2PlayerBase::set_minimum_rate (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_minimum_rate;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gdouble) (value_to_c));
}

// void mpris_media_player2_player_set_playback_status (MprisMediaPlayer2Player* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_player_set_playback_status (::MprisMediaPlayer2Player* object /*none*/, const char* value /*none*/);
void base::MediaPlayer2PlayerBase::set_playback_status (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_playback_status;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (const char*) (value_to_c));
}

// void mpris_media_player2_player_set_position (MprisMediaPlayer2Player* object /*none*/, gint64 value);
// void mpris_media_player2_player_set_position (::MprisMediaPlayer2Player* object /*none*/, gint64 value);
void base::MediaPlayer2PlayerBase::set_position (gint64 value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_position;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (value_to_c));
}

// void mpris_media_player2_player_set_rate (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_rate (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
void base::MediaPlayer2PlayerBase::set_rate (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_rate;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gdouble) (value_to_c));
}

// void mpris_media_player2_player_set_shuffle (MprisMediaPlayer2Player* object /*none*/, gboolean value);
// void mpris_media_player2_player_set_shuffle (::MprisMediaPlayer2Player* object /*none*/, gboolean value);
void base::MediaPlayer2PlayerBase::set_shuffle (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_shuffle;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_player_set_volume (MprisMediaPlayer2Player* object /*none*/, gdouble value);
// void mpris_media_player2_player_set_volume (::MprisMediaPlayer2Player* object /*none*/, gdouble value);
void base::MediaPlayer2PlayerBase::set_volume (gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_player_set_volume;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gdouble) (value_to_c));
}












} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2player_extra_def_impl.hpp>)
#include <mpris/mediaplayer2player_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2player_extra_impl.hpp>)
#include <mpris/mediaplayer2player_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {

void MediaPlayer2PlayerIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::MprisMediaPlayer2PlayerIface *methods = (::MprisMediaPlayer2PlayerIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_next) methods->handle_next = (decltype (methods->handle_next)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_next_>;
  if (init_data.handle_open_uri) methods->handle_open_uri = (decltype (methods->handle_open_uri)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_Uri), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_open_uri_>;
  if (init_data.handle_pause) methods->handle_pause = (decltype (methods->handle_pause)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_pause_>;
  if (init_data.handle_play) methods->handle_play = (decltype (methods->handle_play)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_play_>;
  if (init_data.handle_play_pause) methods->handle_play_pause = (decltype (methods->handle_play_pause)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_play_pause_>;
  if (init_data.handle_previous) methods->handle_previous = (decltype (methods->handle_previous)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_previous_>;
  if (init_data.handle_seek) methods->handle_seek = (decltype (methods->handle_seek)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, gint64 arg_Offset), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_seek_>;
  if (init_data.handle_set_position) methods->handle_set_position = (decltype (methods->handle_set_position)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_TrackId, gint64 arg_Position), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>>::wrapper<&self::handle_set_position_>;
  if (init_data.handle_stop) methods->handle_stop = (decltype (methods->handle_stop)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_stop_>;
  if (init_data.seeked) methods->seeked = (decltype (methods->seeked)) gi::detail::method_wrapper<self, void (*) (gint64 arg_Position), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::seeked_>;
}

// gboolean MediaPlayer2Player::handle_next (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_next (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2PlayerIfaceClassImpl::handle_next_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_next) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_next;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_open_uri (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_Uri /*none*/);
// gboolean MediaPlayer2Player::handle_open_uri (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_Uri /*none*/);
bool MediaPlayer2PlayerIfaceClassImpl::handle_open_uri_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_Uri) noexcept
{
  if (!get_struct_()->handle_open_uri) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation, const char* arg_Uri);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_open_uri;
  auto arg_Uri_to_c = gi::unwrap (arg_Uri, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_Uri_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2PlayerIfaceClassImpl::handle_pause_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_pause) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_pause;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_play (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_play (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2PlayerIfaceClassImpl::handle_play_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_play) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_play;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_play_pause (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_play_pause (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2PlayerIfaceClassImpl::handle_play_pause_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_play_pause) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_play_pause;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_previous (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_previous (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2PlayerIfaceClassImpl::handle_previous_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_previous) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_previous;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_seek (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, gint64 arg_Offset);
// gboolean MediaPlayer2Player::handle_seek (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, gint64 arg_Offset);
bool MediaPlayer2PlayerIfaceClassImpl::handle_seek_ (Gio::DBusMethodInvocation invocation, gint64 arg_Offset) noexcept
{
  if (!get_struct_()->handle_seek) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation, gint64 arg_Offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_seek;
  auto arg_Offset_to_c = arg_Offset;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (gint64) (arg_Offset_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_set_position (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/, const gchar* arg_TrackId /*none*/, gint64 arg_Position);
// gboolean MediaPlayer2Player::handle_set_position (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/, const char* arg_TrackId /*none*/, gint64 arg_Position);
bool MediaPlayer2PlayerIfaceClassImpl::handle_set_position_ (Gio::DBusMethodInvocation invocation, const gi::cstring_v arg_TrackId, gint64 arg_Position) noexcept
{
  if (!get_struct_()->handle_set_position) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation, const char* arg_TrackId, gint64 arg_Position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_set_position;
  auto arg_Position_to_c = arg_Position;
  auto arg_TrackId_to_c = gi::unwrap (arg_TrackId, gi::transfer_none);
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c), (const char*) (arg_TrackId_to_c), (gint64) (arg_Position_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2Player::handle_stop (MprisMediaPlayer2Player* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2Player::handle_stop (::MprisMediaPlayer2Player* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2PlayerIfaceClassImpl::handle_stop_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_stop) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2Player* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_stop;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// void MediaPlayer2Player::seeked (MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
// void MediaPlayer2Player::seeked (::MprisMediaPlayer2Player* object /*none*/, gint64 arg_Position);
void MediaPlayer2PlayerIfaceClassImpl::seeked_ (gint64 arg_Position) noexcept
{
  if (!get_struct_()->seeked) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::MprisMediaPlayer2Player* object, gint64 arg_Position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->seeked;
  auto arg_Position_to_c = arg_Position;
  call_wrap_v ((::MprisMediaPlayer2Player*) (gobj_()), (gint64) (arg_Position_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
