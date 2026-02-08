// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSMONITORINGSKELETON_HPP_
#define _GI_XDGDBUS_DBUSMONITORINGSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusMonitoring;

class DBusMonitoringSkeleton;

namespace base {


#define GI_XDGDBUS_DBUSMONITORINGSKELETON_BASE base::DBusMonitoringSkeletonBase
class DBusMonitoringSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgDBusDBusMonitoringSkeleton BaseObjectType;

DBusMonitoringSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_monitoring_skeleton_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusMonitoring interface_ (gi::interface_tag<XdgDBus::DBusMonitoring>);

GI_INLINE_DECL operator XdgDBus::DBusMonitoring ();

// XdgDBusDBusMonitoring* /*full*/ xdg_dbus_dbus_monitoring_skeleton_new ();
// ::XdgDBusDBusMonitoringSkeleton* /*full*/ xdg_dbus_dbus_monitoring_skeleton_new ();
static GI_INLINE_DECL XdgDBus::DBusMonitoringSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoringskeleton_extra_def.hpp>)
#include <xdgdbus/dbusmonitoringskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusmonitoringskeleton_extra.hpp>)
#include <xdgdbus/dbusmonitoringskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusMonitoringSkeleton : public GI_XDGDBUS_DBUSMONITORINGSKELETON_BASE
{ typedef GI_XDGDBUS_DBUSMONITORINGSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusMonitoringSkeleton>
{ typedef XdgDBus::DBusMonitoringSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusmonitoring.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusMonitoringSkeletonClassDef
{
typedef DBusMonitoringSkeletonClassDef self;
public:
typedef XdgDBus::DBusMonitoringSkeleton instance_type;
typedef ::XdgDBusDBusMonitoringSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusMonitoringSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusMonitoringSkeletonClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusMonitoringSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusMonitoringIfaceClassImpl>
{
friend class internal::DBusMonitoringSkeletonClassDef;
typedef DBusMonitoringSkeletonClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusMonitoringSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusMonitoringIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusMonitoringIfaceClassImpl XdgDBusDBusMonitoringIface_type;



};


struct DBusMonitoringSkeletonClassDef::TypeInitData
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

using DBusMonitoringSkeletonImpl = detail::ObjectImpl<DBusMonitoringSkeleton, internal::DBusMonitoringSkeletonClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
