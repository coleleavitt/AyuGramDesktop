// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSDEBUGSTATSSKELETON_HPP_
#define _GI_XDGDBUS_DBUSDEBUGSTATSSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusDebugStats;

class DBusDebugStatsSkeleton;

namespace base {


#define GI_XDGDBUS_DBUSDEBUGSTATSSKELETON_BASE base::DBusDebugStatsSkeletonBase
class DBusDebugStatsSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgDBusDBusDebugStatsSkeleton BaseObjectType;

DBusDebugStatsSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_debug_stats_skeleton_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusDebugStats interface_ (gi::interface_tag<XdgDBus::DBusDebugStats>);

GI_INLINE_DECL operator XdgDBus::DBusDebugStats ();

// XdgDBusDBusDebugStats* /*full*/ xdg_dbus_dbus_debug_stats_skeleton_new ();
// ::XdgDBusDBusDebugStatsSkeleton* /*full*/ xdg_dbus_dbus_debug_stats_skeleton_new ();
static GI_INLINE_DECL XdgDBus::DBusDebugStatsSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstatsskeleton_extra_def.hpp>)
#include <xdgdbus/dbusdebugstatsskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusdebugstatsskeleton_extra.hpp>)
#include <xdgdbus/dbusdebugstatsskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusDebugStatsSkeleton : public GI_XDGDBUS_DBUSDEBUGSTATSSKELETON_BASE
{ typedef GI_XDGDBUS_DBUSDEBUGSTATSSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusDebugStatsSkeleton>
{ typedef XdgDBus::DBusDebugStatsSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusdebugstats.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusDebugStatsSkeletonClassDef
{
typedef DBusDebugStatsSkeletonClassDef self;
public:
typedef XdgDBus::DBusDebugStatsSkeleton instance_type;
typedef ::XdgDBusDBusDebugStatsSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusDebugStatsSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusDebugStatsSkeletonClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusDebugStatsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusDebugStatsIfaceClassImpl>
{
friend class internal::DBusDebugStatsSkeletonClassDef;
typedef DBusDebugStatsSkeletonClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusDebugStatsSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusDebugStatsIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusDebugStatsIfaceClassImpl XdgDBusDBusDebugStatsIface_type;



};


struct DBusDebugStatsSkeletonClassDef::TypeInitData
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

using DBusDebugStatsSkeletonImpl = detail::ObjectImpl<DBusDebugStatsSkeleton, internal::DBusDebugStatsSkeletonClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
