// AUTO-GENERATED

#ifndef _GI_GIO_UNIXMOUNTENTRY_HPP_
#define _GI_GIO_UNIXMOUNTENTRY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;
class UnixMountEntry_Ref;

class UnixMountEntry;

namespace base {


#define GI_GIO_UNIXMOUNTENTRY_BASE base::UnixMountEntryBase
class UnixMountEntryBase : public gi::detail::GBoxedWrapperBase<UnixMountEntryBase, ::GUnixMountEntry>
{
typedef gi::detail::GBoxedWrapperBase<UnixMountEntryBase, ::GUnixMountEntry> super_type;
public:

UnixMountEntryBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_unix_mount_entry_get_type(); } 

// gint g_unix_mount_entry_compare (GUnixMountEntry* mount1 /*none*/, GUnixMountEntry* mount2 /*none*/);
// gint g_unix_mount_entry_compare (::GUnixMountEntry* mount1 /*none*/, ::GUnixMountEntry* mount2 /*none*/);
GI_INLINE_DECL gint compare (Gio::UnixMountEntry_Ref mount2) noexcept;

// GUnixMountEntry* /*full*/ g_unix_mount_entry_copy (GUnixMountEntry* mount_entry /*none*/);
// ::GUnixMountEntry* /*full*/ g_unix_mount_entry_copy (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL Gio::UnixMountEntry copy () noexcept;

// void g_unix_mount_entry_free (GUnixMountEntry* mount_entry /*none*/);
// void g_unix_mount_entry_free (::GUnixMountEntry* mount_entry /*none*/);
// IGNORE; marked ignore

// const char* /*none*/ g_unix_mount_entry_get_device_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_entry_get_device_path (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v get_device_path () noexcept;

// const char* /*none*/ g_unix_mount_entry_get_fs_type (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_entry_get_fs_type (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v get_fs_type () noexcept;

// const char* /*none*/ g_unix_mount_entry_get_mount_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none*/ g_unix_mount_entry_get_mount_path (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v get_mount_path () noexcept;

// const char* /*none,nullable*/ g_unix_mount_entry_get_options (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_entry_get_options (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v get_options () noexcept;

// const char* /*none,nullable*/ g_unix_mount_entry_get_root_path (GUnixMountEntry* mount_entry /*none*/);
// const char* /*none,nullable*/ g_unix_mount_entry_get_root_path (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring_v get_root_path () noexcept;

// gboolean g_unix_mount_entry_guess_can_eject (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_guess_can_eject (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool guess_can_eject () noexcept;

// GIcon* /*full*/ g_unix_mount_entry_guess_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_entry_guess_icon (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL Gio::Icon guess_icon () noexcept;

// char* /*full*/ g_unix_mount_entry_guess_name (GUnixMountEntry* mount_entry /*none*/);
// char* /*full*/ g_unix_mount_entry_guess_name (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL gi::cstring guess_name () noexcept;

// gboolean g_unix_mount_entry_guess_should_display (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_guess_should_display (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool guess_should_display () noexcept;

// GIcon* /*full*/ g_unix_mount_entry_guess_symbolic_icon (GUnixMountEntry* mount_entry /*none*/);
// ::GIcon* /*full*/ g_unix_mount_entry_guess_symbolic_icon (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL Gio::Icon guess_symbolic_icon () noexcept;

// gboolean g_unix_mount_entry_is_readonly (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_is_readonly (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool is_readonly () noexcept;

// gboolean g_unix_mount_entry_is_system_internal (GUnixMountEntry* mount_entry /*none*/);
// gboolean g_unix_mount_entry_is_system_internal (::GUnixMountEntry* mount_entry /*none*/);
GI_INLINE_DECL bool is_system_internal () noexcept;

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_at (const char* mount_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_at (const char* mount_path /*none*/, guint64* time_read);
static GI_INLINE_DECL Gio::UnixMountEntry at (const gi::cstring_v mount_path, guint64 * time_read) noexcept;
static GI_INLINE_DECL std::tuple<Gio::UnixMountEntry, guint64> at (const gi::cstring_v mount_path) noexcept;

// GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_for (const char* file_path /*none*/, guint64* time_read);
// ::GUnixMountEntry* /*full,nullable*/ g_unix_mount_entry_for (const char* file_path /*none*/, guint64* time_read);
static GI_INLINE_DECL Gio::UnixMountEntry for_ (const gi::cstring_v file_path, guint64 * time_read) noexcept;
static GI_INLINE_DECL std::tuple<Gio::UnixMountEntry, guint64> for_ (const gi::cstring_v file_path) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixmountentry_extra_def.hpp>)
#include <gio/unixmountentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixmountentry_extra.hpp>)
#include <gio/unixmountentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixMountEntry_Ref;

class UnixMountEntry : public gi::detail::GBoxedWrapper<UnixMountEntry, ::GUnixMountEntry, GI_GIO_UNIXMOUNTENTRY_BASE, UnixMountEntry_Ref>
{ typedef gi::detail::GBoxedWrapper<UnixMountEntry, ::GUnixMountEntry, GI_GIO_UNIXMOUNTENTRY_BASE, UnixMountEntry_Ref> super_type; using super_type::super_type; };


class UnixMountEntry_Ref : public gi::detail::GBoxedRefWrapper<UnixMountEntry, ::GUnixMountEntry, GI_GIO_UNIXMOUNTENTRY_BASE>
{ typedef gi::detail::GBoxedRefWrapper<UnixMountEntry, ::GUnixMountEntry, GI_GIO_UNIXMOUNTENTRY_BASE> super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixMountEntry>
{ typedef Gio::UnixMountEntry type; }; 

} // namespace repository

} // namespace gi

#endif
