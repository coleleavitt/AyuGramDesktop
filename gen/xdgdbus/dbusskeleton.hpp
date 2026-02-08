// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSSKELETON_HPP_
#define _GI_XDGDBUS_DBUSSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBus;

class DBusSkeleton;

namespace base {


#define GI_XDGDBUS_DBUSSKELETON_BASE base::DBusSkeletonBase
class DBusSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgDBusDBusSkeleton BaseObjectType;

DBusSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_skeleton_get_type(); } 

GI_INLINE_DECL XdgDBus::DBus interface_ (gi::interface_tag<XdgDBus::DBus>);

GI_INLINE_DECL operator XdgDBus::DBus ();

// XdgDBusDBus* /*full*/ xdg_dbus_dbus_skeleton_new ();
// ::XdgDBusDBusSkeleton* /*full*/ xdg_dbus_dbus_skeleton_new ();
static GI_INLINE_DECL XdgDBus::DBusSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusskeleton_extra_def.hpp>)
#include <xdgdbus/dbusskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusskeleton_extra.hpp>)
#include <xdgdbus/dbusskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusSkeleton : public GI_XDGDBUS_DBUSSKELETON_BASE
{ typedef GI_XDGDBUS_DBUSSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusSkeleton>
{ typedef XdgDBus::DBusSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbus.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusSkeletonClassDef
{
typedef DBusSkeletonClassDef self;
public:
typedef XdgDBus::DBusSkeleton instance_type;
typedef ::XdgDBusDBusSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusSkeletonClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusIfaceClassImpl>
{
friend class internal::DBusSkeletonClassDef;
typedef DBusSkeletonClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusIfaceClassImpl XdgDBusDBusIface_type;



};


struct DBusSkeletonClassDef::TypeInitData
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

using DBusSkeletonImpl = detail::ObjectImpl<DBusSkeleton, internal::DBusSkeletonClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
