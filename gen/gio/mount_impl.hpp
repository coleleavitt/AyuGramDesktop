// AUTO-GENERATED

#ifndef _GI_GIO_MOUNT_IMPL_HPP_
#define _GI_GIO_MOUNT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_mount_can_eject (GMount* mount /*none*/);
// gboolean g_mount_can_eject (::GMount* mount /*none*/);
bool base::MountBase::can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_can_eject;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// gboolean g_mount_can_unmount (GMount* mount /*none*/);
// gboolean g_mount_can_unmount (::GMount* mount /*none*/);
bool base::MountBase::can_unmount () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_can_unmount;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// void g_mount_eject (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_eject (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_eject_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_eject_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_mount_eject_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_eject_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MountBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::eject_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_mount_eject_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_eject_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::result<bool> base::MountBase::eject_with_operation_finish (Gio::AsyncResult result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MountBase::eject_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ g_mount_get_default_location (GMount* mount /*none*/);
// ::GFile* /*full*/ g_mount_get_default_location (::GMount* mount /*none*/);
Gio::File base::MountBase::get_default_location () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_default_location;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDrive* /*full,nullable*/ g_mount_get_drive (GMount* mount /*none*/);
// ::GDrive* /*full,nullable*/ g_mount_get_drive (::GMount* mount /*none*/);
Gio::Drive base::MountBase::get_drive () noexcept
{
  typedef ::GDrive* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_drive;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ g_mount_get_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ g_mount_get_icon (::GMount* mount /*none*/);
Gio::Icon base::MountBase::get_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_mount_get_name (GMount* mount /*none*/);
// char* /*full*/ g_mount_get_name (::GMount* mount /*none*/);
gi::cstring base::MountBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_name;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ g_mount_get_root (GMount* mount /*none*/);
// ::GFile* /*full*/ g_mount_get_root (::GMount* mount /*none*/);
Gio::File base::MountBase::get_root () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_root;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ g_mount_get_sort_key (GMount* mount /*none*/);
// const char* /*none,nullable*/ g_mount_get_sort_key (::GMount* mount /*none*/);
gi::cstring_v base::MountBase::get_sort_key () noexcept
{
  typedef const char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_sort_key;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*full*/ g_mount_get_symbolic_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ g_mount_get_symbolic_icon (::GMount* mount /*none*/);
Gio::Icon base::MountBase::get_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ g_mount_get_uuid (GMount* mount /*none*/);
// char* /*full,nullable*/ g_mount_get_uuid (::GMount* mount /*none*/);
gi::cstring base::MountBase::get_uuid () noexcept
{
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_uuid;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVolume* /*full,nullable*/ g_mount_get_volume (GMount* mount /*none*/);
// ::GVolume* /*full,nullable*/ g_mount_get_volume (::GMount* mount /*none*/);
Gio::Volume base::MountBase::get_volume () noexcept
{
  typedef ::GVolume* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_get_volume;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_mount_guess_content_type (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_guess_content_type (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MountBase::guess_content_type (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto force_rescan_to_c = force_rescan;
  call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::guess_content_type (gboolean force_rescan, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto force_rescan_to_c = force_rescan;
  call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar** /*full*/ g_mount_guess_content_type_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ g_mount_guess_content_type_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::result<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::MountBase::guess_content_type_finish (Gio::AsyncResult result) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::MountBase::guess_content_type_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ g_mount_guess_content_type_sync (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ g_mount_guess_content_type_sync (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::result<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::MountBase::guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto force_rescan_to_c = force_rescan;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::result<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>> base::MountBase::guess_content_type_sync (gboolean force_rescan) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type_sync;
  auto cancellable_to_c = nullptr;
  auto force_rescan_to_c = force_rescan;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::MountBase::guess_content_type_sync (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto force_rescan_to_c = force_rescan;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> base::MountBase::guess_content_type_sync (gboolean force_rescan, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_guess_content_type_sync;
  auto cancellable_to_c = nullptr;
  auto force_rescan_to_c = force_rescan;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gboolean g_mount_is_shadowed (GMount* mount /*none*/);
// gboolean g_mount_is_shadowed (::GMount* mount /*none*/);
bool base::MountBase::is_shadowed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_is_shadowed;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// void g_mount_remount (GMount* mount /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_remount (::GMount* mount /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MountBase::remount (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_remount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::remount (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_remount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_mount_remount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_remount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::result<bool> base::MountBase::remount_finish (Gio::AsyncResult result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_remount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MountBase::remount_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_remount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_mount_shadow (GMount* mount /*none*/);
// void g_mount_shadow (::GMount* mount /*none*/);
void base::MountBase::shadow () noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_shadow;
  call_wrap_v ((::GMount*) (gobj_()));
}

// void g_mount_unmount (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_unmount (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated

// gboolean g_mount_unmount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_unmount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated

// void g_mount_unmount_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void g_mount_unmount_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void base::MountBase::unmount_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_unmount_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::MountBase::unmount_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_unmount_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_mount_unmount_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean g_mount_unmount_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::result<bool> base::MountBase::unmount_with_operation_finish (Gio::AsyncResult result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_unmount_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  if (error) return gi::detail::make_unexpected (error);
  return _temp_ret;
}
bool base::MountBase::unmount_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_unmount_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void g_mount_unshadow (GMount* mount /*none*/);
// void g_mount_unshadow (::GMount* mount /*none*/);
void base::MountBase::unshadow () noexcept
{
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_mount_unshadow;
  call_wrap_v ((::GMount*) (gobj_()));
}





} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/mount_extra_def_impl.hpp>)
#include <gio/mount_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/mount_extra_impl.hpp>)
#include <gio/mount_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void MountIfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GMountIface *methods = (::GMountIface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.can_eject) methods->can_eject = (decltype (methods->can_eject)) gi::detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_eject_>;
  if (init_data.can_unmount) methods->can_unmount = (decltype (methods->can_unmount)) gi::detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::can_unmount_>;
  if (init_data.changed) methods->changed = (decltype (methods->changed)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::changed_>;
  if (init_data.eject && factory) methods->eject = (decltype (methods->eject)) gi::detail::method_wrapper<self, void (*) (::GMountUnmountFlags flags, ::GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data), std::nullptr_t>::wrapper<&self::eject_>;
  if (init_data.eject_finish && factory) methods->eject_finish = (decltype (methods->eject_finish)) gi::detail::method_wrapper<self, gboolean (*) (::GAsyncResult* result, ::GError **error_), std::nullptr_t>::wrapper<&self::eject_finish_>;
  if (init_data.eject_with_operation) methods->eject_with_operation = (decltype (methods->eject_with_operation)) gi::detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::eject_with_operation_>;
  if (init_data.eject_with_operation_finish) methods->eject_with_operation_finish = (decltype (methods->eject_with_operation_finish)) gi::detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::eject_with_operation_finish_>;
  if (init_data.get_default_location) methods->get_default_location = (decltype (methods->get_default_location)) gi::detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_default_location_>;
  if (init_data.get_drive) methods->get_drive = (decltype (methods->get_drive)) gi::detail::method_wrapper<self, Gio::Drive (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_drive_>;
  if (init_data.get_icon) methods->get_icon = (decltype (methods->get_icon)) gi::detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_icon_>;
  if (init_data.get_name) methods->get_name = (decltype (methods->get_name)) gi::detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_name_>;
  if (init_data.get_root) methods->get_root = (decltype (methods->get_root)) gi::detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_root_>;
  if (init_data.get_sort_key) methods->get_sort_key = (decltype (methods->get_sort_key)) gi::detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_sort_key_>;
  if (init_data.get_symbolic_icon) methods->get_symbolic_icon = (decltype (methods->get_symbolic_icon)) gi::detail::method_wrapper<self, Gio::Icon (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_symbolic_icon_>;
  if (init_data.get_uuid) methods->get_uuid = (decltype (methods->get_uuid)) gi::detail::method_wrapper<self, gi::cstring (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_uuid_>;
  if (init_data.get_volume) methods->get_volume = (decltype (methods->get_volume)) gi::detail::method_wrapper<self, Gio::Volume (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_volume_>;
  if (init_data.guess_content_type) methods->guess_content_type = (decltype (methods->guess_content_type)) gi::detail::method_wrapper<self, void (*) (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<2, 3>>>, void  (gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::guess_content_type_>;
  if (init_data.guess_content_type_finish) methods->guess_content_type_finish = (decltype (methods->guess_content_type_finish)) gi::detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::guess_content_type_finish_>;
  if (init_data.guess_content_type_sync) methods->guess_content_type_sync = (decltype (methods->guess_content_type_sync)) gi::detail::method_wrapper<self, gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> (*) (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::guess_content_type_sync_>;
  if (init_data.pre_unmount) methods->pre_unmount = (decltype (methods->pre_unmount)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::pre_unmount_>;
  if (init_data.remount) methods->remount = (decltype (methods->remount)) gi::detail::method_wrapper<self, void (*) (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::remount_>;
  if (init_data.remount_finish) methods->remount_finish = (decltype (methods->remount_finish)) gi::detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::remount_finish_>;
  if (init_data.unmount && factory) methods->unmount = (decltype (methods->unmount)) gi::detail::method_wrapper<self, void (*) (::GMountUnmountFlags flags, ::GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data), std::nullptr_t>::wrapper<&self::unmount_>;
  if (init_data.unmount_finish && factory) methods->unmount_finish = (decltype (methods->unmount_finish)) gi::detail::method_wrapper<self, gboolean (*) (::GAsyncResult* result, ::GError **error_), std::nullptr_t>::wrapper<&self::unmount_finish_>;
  if (init_data.unmount_with_operation) methods->unmount_with_operation = (decltype (methods->unmount_with_operation)) gi::detail::method_wrapper<self, void (*) (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<0>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<1>>, detail::arg_info<gi::transfer_none_t, false, void, detail::args_index<2>>, detail::arg_info<gi::transfer_none_t, false, Gio::internal::AsyncReadyCallback_CB_Trait, detail::args_index<3, 4>>>, void  (::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data)>::wrapper<&self::unmount_with_operation_>;
  if (init_data.unmount_with_operation_finish) methods->unmount_with_operation_finish = (decltype (methods->unmount_with_operation_finish)) gi::detail::method_wrapper<self, bool (*) (Gio::AsyncResult result, GLib::Error * _error), gi::transfer_none_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t>>::wrapper<&self::unmount_with_operation_finish_>;
  if (init_data.unmounted) methods->unmounted = (decltype (methods->unmounted)) gi::detail::method_wrapper<self, void (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::unmounted_>;
}

// gboolean Mount::can_eject (GMount* mount /*none*/);
// gboolean Mount::can_eject (::GMount* mount /*none*/);
bool MountIfaceClassImpl::can_eject_ () noexcept
{
  if (!get_struct_()->can_eject) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_eject;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// gboolean Mount::can_unmount (GMount* mount /*none*/);
// gboolean Mount::can_unmount (::GMount* mount /*none*/);
bool MountIfaceClassImpl::can_unmount_ () noexcept
{
  if (!get_struct_()->can_unmount) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_unmount;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return _temp_ret;
}

// void Mount::changed (GMount* mount /*none*/);
// void Mount::changed (::GMount* mount /*none*/);
void MountIfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GMount*) (gobj_()));
}

// void Mount::eject (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::eject (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated
void MountIfaceClassImpl::eject_ (::GMountUnmountFlags flags, ::GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data) noexcept
{
  if (!get_struct_()->eject) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount*, ::GMountUnmountFlags, ::GCancellable*, GAsyncReadyCallback, gpointer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject;
  call_wrap_v (gobj_(), flags, cancellable, callback, user_data);
}

// gboolean Mount::eject_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::eject_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated
gboolean MountIfaceClassImpl::eject_finish_ (::GAsyncResult* result, ::GError **error_)
{
  if (!get_struct_()->eject_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMount*, ::GAsyncResult*, ::GError **error_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_finish;
  auto result_ = call_wrap_v (gobj_(), result, error_);
  return result_;
}

// void Mount::eject_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::eject_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void MountIfaceClassImpl::eject_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->eject_with_operation) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Mount::eject_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::eject_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool MountIfaceClassImpl::eject_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->eject_with_operation_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->eject_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// GFile* /*full*/ Mount::get_default_location (GMount* mount /*none*/);
// ::GFile* /*full*/ Mount::get_default_location (::GMount* mount /*none*/);
Gio::File MountIfaceClassImpl::get_default_location_ () noexcept
{
  if (!get_struct_()->get_default_location) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_default_location;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GDrive* /*full,nullable*/ Mount::get_drive (GMount* mount /*none*/);
// ::GDrive* /*full,nullable*/ Mount::get_drive (::GMount* mount /*none*/);
Gio::Drive MountIfaceClassImpl::get_drive_ () noexcept
{
  if (!get_struct_()->get_drive) { g_critical ("no method in class struct"); return {}; }
  typedef ::GDrive* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_drive;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GIcon* /*full*/ Mount::get_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ Mount::get_icon (::GMount* mount /*none*/);
Gio::Icon MountIfaceClassImpl::get_icon_ () noexcept
{
  if (!get_struct_()->get_icon) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ Mount::get_name (GMount* mount /*none*/);
// char* /*full*/ Mount::get_name (::GMount* mount /*none*/);
gi::cstring MountIfaceClassImpl::get_name_ () noexcept
{
  if (!get_struct_()->get_name) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GFile* /*full*/ Mount::get_root (GMount* mount /*none*/);
// ::GFile* /*full*/ Mount::get_root (::GMount* mount /*none*/);
Gio::File MountIfaceClassImpl::get_root_ () noexcept
{
  if (!get_struct_()->get_root) { g_critical ("no method in class struct"); return {}; }
  typedef ::GFile* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_root;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const gchar* /*none,nullable*/ Mount::get_sort_key (GMount* mount /*none*/);
// const char* /*none,nullable*/ Mount::get_sort_key (::GMount* mount /*none*/);
gi::cstring_v MountIfaceClassImpl::get_sort_key_ () noexcept
{
  if (!get_struct_()->get_sort_key) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_sort_key;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GIcon* /*full*/ Mount::get_symbolic_icon (GMount* mount /*none*/);
// ::GIcon* /*full*/ Mount::get_symbolic_icon (::GMount* mount /*none*/);
Gio::Icon MountIfaceClassImpl::get_symbolic_icon_ () noexcept
{
  if (!get_struct_()->get_symbolic_icon) { g_critical ("no method in class struct"); return {}; }
  typedef ::GIcon* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full,nullable*/ Mount::get_uuid (GMount* mount /*none*/);
// char* /*full,nullable*/ Mount::get_uuid (::GMount* mount /*none*/);
gi::cstring MountIfaceClassImpl::get_uuid_ () noexcept
{
  if (!get_struct_()->get_uuid) { g_critical ("no method in class struct"); return {}; }
  typedef char* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uuid;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GVolume* /*full,nullable*/ Mount::get_volume (GMount* mount /*none*/);
// ::GVolume* /*full,nullable*/ Mount::get_volume (::GMount* mount /*none*/);
Gio::Volume MountIfaceClassImpl::get_volume_ () noexcept
{
  if (!get_struct_()->get_volume) { g_critical ("no method in class struct"); return {}; }
  typedef ::GVolume* (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_volume;
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void Mount::guess_content_type (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::guess_content_type (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void MountIfaceClassImpl::guess_content_type_ (gboolean force_rescan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->guess_content_type) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->guess_content_type;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto force_rescan_to_c = force_rescan;
  call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar** /*full*/ Mount::guess_content_type_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// char** /*full*/ Mount::guess_content_type_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> MountIfaceClassImpl::guess_content_type_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->guess_content_type_finish) { g_critical ("no method in class struct"); return {}; }
  typedef char** (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->guess_content_type_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// gchar** /*full*/ Mount::guess_content_type_sync (GMount* mount /*none*/, gboolean force_rescan, GCancellable* cancellable /*none,nullable*/, GError ** error);
// char** /*full*/ Mount::guess_content_type_sync (::GMount* mount /*none*/, gboolean force_rescan, ::GCancellable* cancellable /*none,nullable*/, GError ** error);
gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> MountIfaceClassImpl::guess_content_type_sync_ (gboolean force_rescan, Gio::Cancellable cancellable, GLib::Error * _error)
{
  if (!get_struct_()->guess_content_type_sync) { g_critical ("no method in class struct"); return {}; }
  typedef char** (*call_wrap_t) (::GMount* mount, gboolean force_rescan, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->guess_content_type_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto force_rescan_to_c = force_rescan;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (gboolean) (force_rescan_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap_to<gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// void Mount::pre_unmount (GMount* mount /*none*/);
// void Mount::pre_unmount (::GMount* mount /*none*/);
void MountIfaceClassImpl::pre_unmount_ () noexcept
{
  if (!get_struct_()->pre_unmount) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pre_unmount;
  call_wrap_v ((::GMount*) (gobj_()));
}

// void Mount::remount (GMount* mount /*none*/, GMountMountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::remount (::GMount* mount /*none*/, ::GMountMountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void MountIfaceClassImpl::remount_ (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->remount) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remount;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Mount::remount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::remount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool MountIfaceClassImpl::remount_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->remount_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remount_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Mount::unmount (GMount* mount /*none*/, GMountUnmountFlags flags, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::unmount (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
// IGNORE; deprecated
void MountIfaceClassImpl::unmount_ (::GMountUnmountFlags flags, ::GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data) noexcept
{
  if (!get_struct_()->unmount) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount*, ::GMountUnmountFlags, ::GCancellable*, GAsyncReadyCallback, gpointer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmount;
  call_wrap_v (gobj_(), flags, cancellable, callback, user_data);
}

// gboolean Mount::unmount_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::unmount_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
// IGNORE; deprecated
gboolean MountIfaceClassImpl::unmount_finish_ (::GAsyncResult* result, ::GError **error_)
{
  if (!get_struct_()->unmount_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMount*, ::GAsyncResult*, ::GError **error_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmount_finish;
  auto result_ = call_wrap_v (gobj_(), result, error_);
  return result_;
}

// void Mount::unmount_with_operation (GMount* mount /*none*/, GMountUnmountFlags flags, GMountOperation* mount_operation /*none,nullable*/, GCancellable* cancellable /*none,nullable*/, GAsyncReadyCallback callback /*none,nullable*/, gpointer user_data);
// void Mount::unmount_with_operation (::GMount* mount /*none*/, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation /*none,nullable*/, ::GCancellable* cancellable /*none,nullable*/, Gio::AsyncReadyCallback::cfunction_type callback /*none,nullable*/, void* user_data);
void MountIfaceClassImpl::unmount_with_operation_ (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  if (!get_struct_()->unmount_with_operation) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount* mount, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmount_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GMount*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean Mount::unmount_with_operation_finish (GMount* mount /*none*/, GAsyncResult* result /*none*/, GError ** error);
// gboolean Mount::unmount_with_operation_finish (::GMount* mount /*none*/, ::GAsyncResult* result /*none*/, GError ** error);
bool MountIfaceClassImpl::unmount_with_operation_finish_ (Gio::AsyncResult result, GLib::Error * _error)
{
  if (!get_struct_()->unmount_with_operation_finish) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::GMount* mount, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmount_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMount*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// void Mount::unmounted (GMount* mount /*none*/);
// void Mount::unmounted (::GMount* mount /*none*/);
void MountIfaceClassImpl::unmounted_ () noexcept
{
  if (!get_struct_()->unmounted) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GMount* mount);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmounted;
  call_wrap_v ((::GMount*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
