// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPEERSKELETON_HPP_
#define _GI_XDGDBUS_DBUSPEERSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusPeer;

class DBusPeerSkeleton;

namespace base {


#define GI_XDGDBUS_DBUSPEERSKELETON_BASE base::DBusPeerSkeletonBase
class DBusPeerSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgDBusDBusPeerSkeleton BaseObjectType;

DBusPeerSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_peer_skeleton_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusPeer interface_ (gi::interface_tag<XdgDBus::DBusPeer>);

GI_INLINE_DECL operator XdgDBus::DBusPeer ();

// XdgDBusDBusPeer* /*full*/ xdg_dbus_dbus_peer_skeleton_new ();
// ::XdgDBusDBusPeerSkeleton* /*full*/ xdg_dbus_dbus_peer_skeleton_new ();
static GI_INLINE_DECL XdgDBus::DBusPeerSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeerskeleton_extra_def.hpp>)
#include <xdgdbus/dbuspeerskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspeerskeleton_extra.hpp>)
#include <xdgdbus/dbuspeerskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusPeerSkeleton : public GI_XDGDBUS_DBUSPEERSKELETON_BASE
{ typedef GI_XDGDBUS_DBUSPEERSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusPeerSkeleton>
{ typedef XdgDBus::DBusPeerSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbuspeer.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusPeerSkeletonClassDef
{
typedef DBusPeerSkeletonClassDef self;
public:
typedef XdgDBus::DBusPeerSkeleton instance_type;
typedef ::XdgDBusDBusPeerSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusPeerSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusPeerSkeletonClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusPeerSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusPeerIfaceClassImpl>
{
friend class internal::DBusPeerSkeletonClassDef;
typedef DBusPeerSkeletonClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusPeerSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusPeerIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusPeerIfaceClassImpl XdgDBusDBusPeerIface_type;



};


struct DBusPeerSkeletonClassDef::TypeInitData
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

using DBusPeerSkeletonImpl = detail::ObjectImpl<DBusPeerSkeleton, internal::DBusPeerSkeletonClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
