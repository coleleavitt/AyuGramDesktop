// AUTO-GENERATED

#ifndef _GI_XDGDBUS_DBUSPROPERTIESSKELETON_HPP_
#define _GI_XDGDBUS_DBUSPROPERTIESSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgDBus {

class DBusProperties;

class DBusPropertiesSkeleton;

namespace base {


#define GI_XDGDBUS_DBUSPROPERTIESSKELETON_BASE base::DBusPropertiesSkeletonBase
class DBusPropertiesSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgDBusDBusPropertiesSkeleton BaseObjectType;

DBusPropertiesSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_dbus_dbus_properties_skeleton_get_type(); } 

GI_INLINE_DECL XdgDBus::DBusProperties interface_ (gi::interface_tag<XdgDBus::DBusProperties>);

GI_INLINE_DECL operator XdgDBus::DBusProperties ();

// XdgDBusDBusProperties* /*full*/ xdg_dbus_dbus_properties_skeleton_new ();
// ::XdgDBusDBusPropertiesSkeleton* /*full*/ xdg_dbus_dbus_properties_skeleton_new ();
static GI_INLINE_DECL XdgDBus::DBusPropertiesSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgDBus

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspropertiesskeleton_extra_def.hpp>)
#include <xdgdbus/dbuspropertiesskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgdbus/dbuspropertiesskeleton_extra.hpp>)
#include <xdgdbus/dbuspropertiesskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgDBus {

class DBusPropertiesSkeleton : public GI_XDGDBUS_DBUSPROPERTIESSKELETON_BASE
{ typedef GI_XDGDBUS_DBUSPROPERTIESSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgDBus

template<> struct declare_cpptype_of<::XdgDBusDBusPropertiesSkeleton>
{ typedef XdgDBus::DBusPropertiesSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusproperties.hpp"

namespace gi {

namespace repository {

namespace XdgDBus {

namespace impl {

namespace internal {


class DBusPropertiesSkeletonClassDef
{
typedef DBusPropertiesSkeletonClassDef self;
public:
typedef XdgDBus::DBusPropertiesSkeleton instance_type;
typedef ::XdgDBusDBusPropertiesSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~DBusPropertiesSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DBusPropertiesSkeletonClass: public detail::ClassTemplate<XdgDBus::impl::internal::DBusPropertiesSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusPropertiesIfaceClassImpl>
{
friend class internal::DBusPropertiesSkeletonClassDef;
typedef DBusPropertiesSkeletonClass self;
typedef detail::ClassTemplate<XdgDBus::impl::internal::DBusPropertiesSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgDBus::impl::internal::DBusPropertiesIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgDBus::impl::internal::DBusPropertiesIfaceClassImpl XdgDBusDBusPropertiesIface_type;



};


struct DBusPropertiesSkeletonClassDef::TypeInitData
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

using DBusPropertiesSkeletonImpl = detail::ObjectImpl<DBusPropertiesSkeleton, internal::DBusPropertiesSkeletonClass>;

} // namespace impl

} // namespace XdgDBus

} // namespace repository

} // namespace gi

#endif
