// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSINTROSPECTABLESKELETON_HPP_
#define _GI_XDGDBUS_DBUSINTROSPECTABLESKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusIntrospectable;

class DBusIntrospectableSkeleton;

namespace base {


#define GI_XDGDBUS_DBUSINTROSPECTABLESKELETON_BASE base::DBusIntrospectableSkeletonBase
class DBusIntrospectableSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgDBusDBusIntrospectableSkeleton BaseObjectType;

DBusIntrospectableSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_introspectable_skeleton_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusIntrospectable interface_ (gi::interface_tag<XdgDBus::DBusIntrospectable>);

GI_INLINE_DECL operator XdgDBus::DBusIntrospectable ();

// XdgDBusDBusIntrospectable* /*full*/ xdg_dbus_dbus_introspectable_skeleton_new ();
// ::XdgDBusDBusIntrospectableSkeleton* /*full*/ xdg_dbus_dbus_introspectable_skeleton_new ();
static GI_INLINE_DECL XdgDBus::DBusIntrospectableSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectableskeleton_extra_def.hpp>)
#include <xdgdbus/dbusintrospectableskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbusintrospectableskeleton_extra.hpp>)
#include <xdgdbus/dbusintrospectableskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusIntrospectableSkeleton : public GI_XDGDBUS_DBUSINTROSPECTABLESKELETON_BASE
{ typedef GI_XDGDBUS_DBUSINTROSPECTABLESKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusIntrospectableSkeleton>
{ typedef XdgDBus::DBusIntrospectableSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusintrospectable.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusIntrospectableSkeletonClassDef
{
typedef DBusIntrospectableSkeletonClassDef self;
public:
typedef XdgDBus::DBusIntrospectableSkeleton instance_type;
typedef ::XdgDBusDBusIntrospectableSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusIntrospectableSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusIntrospectableSkeletonClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusIntrospectableSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusIntrospectableIfaceClassImpl>
{
friend class internal::DBusIntrospectableSkeletonClassDef;
typedef DBusIntrospectableSkeletonClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusIntrospectableSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusIntrospectableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusIntrospectableIfaceClassImpl XdgDBusDBusIntrospectableIface_type;



};


struct DBusIntrospectableSkeletonClassDef::TypeInitData
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

using DBusIntrospectableSkeletonImpl = detail::ObjectImpl<DBusIntrospectableSkeleton, internal::DBusIntrospectableSkeletonClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
