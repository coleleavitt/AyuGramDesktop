// AUTO-GENERATED

#ifndef _GI_GIO_UNIXMOUNTENTRY_IMPL_HPP_
#define _GI_GIO_UNIXMOUNTENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gint g_unix_mount_entry_compare (GUnixMountEntry* mount1 /*none*/, GUnixMountEntry* mount2 /*none*/);
// gint g_unix_mount_entry_compare (::GUnixMountEntry* mount1 /*none*/, ::GUnixMountEntry* mount2 /*none*/);
gint base::UnixMountEntryBase::compare (Gio::UnixMountEntry_Ref mount2) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixMountEntry* mount1, ::GUnixMountEntry* mount2);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_compare;
  auto mount2_to_c = gi::unwrap (mount2, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()), (::GUnixMountEntry*) (mount2_to_c));
  return _temp_ret;
}

// GUnixMountEntry* /*full*/ g_unix_mount_entry_copy (GUnixMountEntry* mount_entry /*none*/);
// ::GUnixMountEntry* /*full*/ g_unix_mount_entry_copy (::GUnixMountEntry* mount_entry /*none*/);
Gio::UnixMountEntry base::UnixMountEntryBase::copy () noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_copy;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_unix_mount_entry_free (GUnixMountEntry* mount_entry /*none*/);
// void g_unix_mount_entry_free (::GUnixMountEntry* mount_entry /*none*/);
// IGNORE; marked ignore

// const char* /*none*/ g_unix_mount_entry_get_device_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_entry_get_device_path (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v base::UnixMountEntryBase::get_device_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_get_device_path;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_unix_mount_entry_get_fs_type (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_entry_get_fs_type (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v base::UnixMountEntryBase::get_fs_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_get_fs_type;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ g_unix_mount_entry_get_mount_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_entry_get_mount_path (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v base::UnixMountEntryBase::get_mount_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_get_mount_path;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_unix_mount_entry_get_options (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_entry_get_options (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v base::UnixMountEntryBase::get_options () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_get_options;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none,nullable*/ g_unix_mount_entry_get_root_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_entry_get_root_path (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring_v base::UnixMountEntryBase::get_root_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_get_root_path;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean g_unix_mount_entry_guess_can_eject (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_guess_can_eject (::GUnixMountEntry* mount_entry /*none*/);
bool base::UnixMountEntryBase::guess_can_eject () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_guess_can_eject;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return _temp_ret;
}

// GIcon* /*full*/ g_unix_mount_entry_guess_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_entry_guess_icon (::GUnixMountEntry* mount_entry /*none*/);
Gio::Icon base::UnixMountEntryBase::guess_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_guess_icon;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// char* /*full*/ g_unix_mount_entry_guess_name (GUnixMountEntry* mount_entry /*none*/);
// char* /*full*/ g_unix_mount_entry_guess_name (::GUnixMountEntry* mount_entry /*none*/);
gi::cstring base::UnixMountEntryBase::guess_name () noexcept
{
  typedef char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_guess_name;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_unix_mount_entry_guess_should_display (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_guess_should_display (::GUnixMountEntry* mount_entry /*none*/);
bool base::UnixMountEntryBase::guess_should_display () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_guess_should_display;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return _temp_ret;
}

// GIcon* /*full*/ g_unix_mount_entry_guess_symbolic_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_entry_guess_symbolic_icon (::GUnixMountEntry* mount_entry /*none*/);
Gio::Icon base::UnixMountEntryBase::guess_symbolic_icon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_guess_symbolic_icon;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean g_unix_mount_entry_is_readonly (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_is_readonly (::GUnixMountEntry* mount_entry /*none*/);
bool base::UnixMountEntryBase::is_readonly () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_is_readonly;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean g_unix_mount_entry_is_system_internal (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_is_system_internal (::GUnixMountEntry* mount_entry /*none*/);
bool base::UnixMountEntryBase::is_system_internal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_is_system_internal;
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (gobj_()));
  return _temp_ret;
}

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_at (const char* mount_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_at (const char* mount_path /*none*/, guint64* time_read);
Gio::UnixMountEntry base::UnixMountEntryBase::at (const gi::cstring_v mount_path, guint64 * time_read) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::UnixMountEntry, guint64> base::UnixMountEntryBase::at (const gi::cstring_v mount_path) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (&time_read_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = time_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_for (const char* file_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_for (const char* file_path /*none*/, guint64* time_read);
Gio::UnixMountEntry base::UnixMountEntryBase::for_ (const gi::cstring_v file_path, guint64 * time_read) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* file_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_for;
  guint64 time_read_o {};
  auto file_path_to_c = gi::unwrap (file_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_path_to_c), (guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap (_temp_ret, gi::transfer_full);
}
std::tuple<Gio::UnixMountEntry, guint64> base::UnixMountEntryBase::for_ (const gi::cstring_v file_path) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* file_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_unix_mount_entry_for;
  guint64 time_read_o {};
  auto file_path_to_c = gi::unwrap (file_path, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (file_path_to_c), (guint64*) (&time_read_o));
  auto &&tmp_return_1 = gi::wrap (_temp_ret, gi::transfer_full);
  auto &&tmp_return_2 = time_read_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixmountentry_extra_def_impl.hpp>)
#include <gio/unixmountentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixmountentry_extra_impl.hpp>)
#include <gio/unixmountentry_extra_impl.hpp>
#endif
#endif

#endif
