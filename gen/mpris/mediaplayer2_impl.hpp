// AUTO-GENERATED

#ifndef _GI_MPRIS_MEDIAPLAYER2_IMPL_HPP_
#define _GI_MPRIS_MEDIAPLAYER2_IMPL_HPP_

namespace gi {

namespace repository {

namespace Mpris {

namespace base {

// GDBusInterfaceInfo* /*none*/ mpris_media_player2_interface_info ();
// ::GDBusInterfaceInfo* /*none*/ mpris_media_player2_interface_info ();
Gio::DBusInterfaceInfo_Ref base::MediaPlayer2Base::interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_interface_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// guint mpris_media_player2_override_properties (GObjectClass* klass /*none*/, guint property_id_begin);
// guint mpris_media_player2_override_properties (::GObjectClass klass /*none*/, guint property_id_begin);
// SKIP; klass type GObject::ObjectClass not supported

// void mpris_media_player2_call_quit (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_call_quit (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2Base::call_quit (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2Base::call_quit (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_call_quit_finish (MprisMediaPlayer2* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_call_quit_finish (::MprisMediaPlayer2* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2Base::call_quit_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2Base::call_quit_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_call_quit_sync (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_call_quit_sync (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2Base::call_quit_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2Base::call_quit_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2Base::call_quit_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2Base::call_quit_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_quit_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_call_raise (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void mpris_media_player2_call_raise (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MediaPlayer2Base::call_raise (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MediaPlayer2Base::call_raise (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean mpris_media_player2_call_raise_finish (MprisMediaPlayer2* proxy /*none*/, GAsyncResult* res /*none*/, GError ** error);
// gboolean mpris_media_player2_call_raise_finish (::MprisMediaPlayer2* proxy /*none*/, ::GAsyncResult* res /*none*/, GError ** error);
gi::result<bool> base::MediaPlayer2Base::call_raise_finish (Gio::AsyncResult res) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2Base::call_raise_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean mpris_media_player2_call_raise_sync (MprisMediaPlayer2* proxy /*none*/, GCancellable* cancellable /*none,nullable*/, GError ** error);
// gboolean mpris_media_player2_call_raise_sync (::MprisMediaPlayer2* proxy /*none*/, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<bool> base::MediaPlayer2Base::call_raise_sync (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
gi::result<bool> base::MediaPlayer2Base::call_raise_sync () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MediaPlayer2Base::call_raise_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}
bool base::MediaPlayer2Base::call_raise_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* proxy, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_call_raise_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void mpris_media_player2_complete_quit (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_complete_quit (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2Base::complete_quit (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_complete_quit;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// void mpris_media_player2_complete_raise (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*full*/);
// void mpris_media_player2_complete_raise (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*full*/);
void base::MediaPlayer2Base::complete_raise (Gio::DBusMethodInvocation invocation) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_complete_raise;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_full);
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
}

// gchar* /*full,nullable*/ mpris_media_player2_dup_desktop_entry (MprisMediaPlayer2* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_dup_desktop_entry (::MprisMediaPlayer2* object /*none*/);
gi::cstring base::MediaPlayer2Base::dup_desktop_entry () noexcept
{
  typedef char* (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_dup_desktop_entry;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar* /*full,nullable*/ mpris_media_player2_dup_identity (MprisMediaPlayer2* object /*none*/);
// char* /*full,nullable*/ mpris_media_player2_dup_identity (::MprisMediaPlayer2* object /*none*/);
gi::cstring base::MediaPlayer2Base::dup_identity () noexcept
{
  typedef char* (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_dup_identity;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gchar** /*full,nullable*/ mpris_media_player2_dup_supported_mime_types (MprisMediaPlayer2* object /*none*/);
// char** /*full,nullable*/ mpris_media_player2_dup_supported_mime_types (::MprisMediaPlayer2* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::MediaPlayer2Base::dup_supported_mime_types () noexcept
{
  typedef char** (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_dup_supported_mime_types;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full,nullable*/ mpris_media_player2_dup_supported_uri_schemes (MprisMediaPlayer2* object /*none*/);
// char** /*full,nullable*/ mpris_media_player2_dup_supported_uri_schemes (::MprisMediaPlayer2* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::MediaPlayer2Base::dup_supported_uri_schemes () noexcept
{
  typedef char** (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_dup_supported_uri_schemes;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean mpris_media_player2_get_can_quit (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_can_quit (::MprisMediaPlayer2* object /*none*/);
bool base::MediaPlayer2Base::get_can_quit () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_can_quit;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_get_can_raise (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_can_raise (::MprisMediaPlayer2* object /*none*/);
bool base::MediaPlayer2Base::get_can_raise () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_can_raise;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_get_can_set_fullscreen (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_can_set_fullscreen (::MprisMediaPlayer2* object /*none*/);
bool base::MediaPlayer2Base::get_can_set_fullscreen () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_can_set_fullscreen;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ mpris_media_player2_get_desktop_entry (MprisMediaPlayer2* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_get_desktop_entry (::MprisMediaPlayer2* object /*none*/);
gi::cstring_v base::MediaPlayer2Base::get_desktop_entry () noexcept
{
  typedef const char* (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_desktop_entry;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean mpris_media_player2_get_fullscreen (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_fullscreen (::MprisMediaPlayer2* object /*none*/);
bool base::MediaPlayer2Base::get_fullscreen () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_fullscreen;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return _temp_ret;
}

// gboolean mpris_media_player2_get_has_track_list (MprisMediaPlayer2* object /*none*/);
// gboolean mpris_media_player2_get_has_track_list (::MprisMediaPlayer2* object /*none*/);
bool base::MediaPlayer2Base::get_has_track_list () noexcept
{
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_has_track_list;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return _temp_ret;
}

// const gchar* /*none,nullable*/ mpris_media_player2_get_identity (MprisMediaPlayer2* object /*none*/);
// const char* /*none,nullable*/ mpris_media_player2_get_identity (::MprisMediaPlayer2* object /*none*/);
gi::cstring_v base::MediaPlayer2Base::get_identity () noexcept
{
  typedef const char* (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_identity;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const gchar* const* /*none,nullable*/ mpris_media_player2_get_supported_mime_types (MprisMediaPlayer2* object /*none*/);
// const char** /*none,nullable*/ mpris_media_player2_get_supported_mime_types (::MprisMediaPlayer2* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::MediaPlayer2Base::get_supported_mime_types () noexcept
{
  typedef const char** (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_supported_mime_types;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// const gchar* const* /*none,nullable*/ mpris_media_player2_get_supported_uri_schemes (MprisMediaPlayer2* object /*none*/);
// const char** /*none,nullable*/ mpris_media_player2_get_supported_uri_schemes (::MprisMediaPlayer2* object /*none*/);
gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> base::MediaPlayer2Base::get_supported_uri_schemes () noexcept
{
  typedef const char** (*call_wrap_t) (::MprisMediaPlayer2* object);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_get_supported_uri_schemes;
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()));
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// void mpris_media_player2_set_can_quit (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_can_quit (::MprisMediaPlayer2* object /*none*/, gboolean value);
void base::MediaPlayer2Base::set_can_quit (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_set_can_quit;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_set_can_raise (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_can_raise (::MprisMediaPlayer2* object /*none*/, gboolean value);
void base::MediaPlayer2Base::set_can_raise (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_set_can_raise;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_set_can_set_fullscreen (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_can_set_fullscreen (::MprisMediaPlayer2* object /*none*/, gboolean value);
void base::MediaPlayer2Base::set_can_set_fullscreen (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_set_can_set_fullscreen;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_set_desktop_entry (MprisMediaPlayer2* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_set_desktop_entry (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
void base::MediaPlayer2Base::set_desktop_entry (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_set_desktop_entry;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (const char*) (value_to_c));
}

// void mpris_media_player2_set_fullscreen (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_fullscreen (::MprisMediaPlayer2* object /*none*/, gboolean value);
void base::MediaPlayer2Base::set_fullscreen (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_set_fullscreen;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_set_has_track_list (MprisMediaPlayer2* object /*none*/, gboolean value);
// void mpris_media_player2_set_has_track_list (::MprisMediaPlayer2* object /*none*/, gboolean value);
void base::MediaPlayer2Base::set_has_track_list (gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_set_has_track_list;
  auto value_to_c = value;
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (gboolean) (value_to_c));
}

// void mpris_media_player2_set_identity (MprisMediaPlayer2* object /*none*/, const gchar* value /*none*/);
// void mpris_media_player2_set_identity (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
void base::MediaPlayer2Base::set_identity (const gi::cstring_v value) noexcept
{
  typedef void (*call_wrap_t) (::MprisMediaPlayer2* object, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) ::mpris_media_player2_set_identity;
  auto value_to_c = gi::unwrap (value, gi::transfer_none);
  call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (const char*) (value_to_c));
}

// void mpris_media_player2_set_supported_mime_types (MprisMediaPlayer2* object /*none*/, const gchar* const* value /*none*/);
// void mpris_media_player2_set_supported_mime_types (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)

// void mpris_media_player2_set_supported_uri_schemes (MprisMediaPlayer2* object /*none*/, const gchar* const* value /*none*/);
// void mpris_media_player2_set_supported_uri_schemes (::MprisMediaPlayer2* object /*none*/, const char* value /*none*/);
// IGNORE; not introspectable, inconsistent value in pointer depth (2 vs 1)




} // namespace base

} // namespace Mpris

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2_extra_def_impl.hpp>)
#include <mpris/mediaplayer2_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mpris/mediaplayer2_extra_impl.hpp>)
#include <mpris/mediaplayer2_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Mpris {

namespace impl {

namespace internal {

void MediaPlayer2IfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::MprisMediaPlayer2Iface *methods = (::MprisMediaPlayer2Iface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.handle_quit) methods->handle_quit = (decltype (methods->handle_quit)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_quit_>;
  if (init_data.handle_raise) methods->handle_raise = (decltype (methods->handle_raise)) gi::detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::handle_raise_>;
}

// gboolean MediaPlayer2::handle_quit (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2::handle_quit (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2IfaceClassImpl::handle_quit_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_quit) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_quit;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

// gboolean MediaPlayer2::handle_raise (MprisMediaPlayer2* object /*none*/, GDBusMethodInvocation* invocation /*none*/);
// gboolean MediaPlayer2::handle_raise (::MprisMediaPlayer2* object /*none*/, ::GDBusMethodInvocation* invocation /*none*/);
bool MediaPlayer2IfaceClassImpl::handle_raise_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->handle_raise) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::MprisMediaPlayer2* object, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_raise;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::MprisMediaPlayer2*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Mpris

} // namespace repository

} // namespace gi

#endif
