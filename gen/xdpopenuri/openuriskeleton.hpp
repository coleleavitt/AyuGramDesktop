// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OPENURISKELETON_HPP_
#define _GI_XDPOPENURI_OPENURISKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpOpenURI {

class OpenURI;

class OpenURISkeleton;

namespace base {


#define GI_XDPOPENURI_OPENURISKELETON_BASE base::OpenURISkeletonBase
class OpenURISkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdpOpenURIOpenURISkeleton BaseObjectType;

OpenURISkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_open_uri_open_uri_skeleton_get_type(); } 

GI_INLINE_DECL XdpOpenURI::OpenURI interface_ (gi::interface_tag<XdpOpenURI::OpenURI>);

GI_INLINE_DECL operator XdpOpenURI::OpenURI ();

// XdpOpenURIOpenURI* /*full*/ xdp_open_uri_open_uri_skeleton_new ();
// ::XdpOpenURIOpenURISkeleton* /*full*/ xdp_open_uri_open_uri_skeleton_new ();
static GI_INLINE_DECL XdpOpenURI::OpenURISkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuriskeleton_extra_def.hpp>)
#include <xdpopenuri/openuriskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/openuriskeleton_extra.hpp>)
#include <xdpopenuri/openuriskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

class OpenURISkeleton : public GI_XDPOPENURI_OPENURISKELETON_BASE
{ typedef GI_XDPOPENURI_OPENURISKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpOpenURI

template<> struct declare_cpptype_of<::XdpOpenURIOpenURISkeleton>
{ typedef XdpOpenURI::OpenURISkeleton type; }; 

} // namespace repository

} // namespace gi

#include "openuri.hpp"

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {


class OpenURISkeletonClassDef
{
typedef OpenURISkeletonClassDef self;
public:
typedef XdpOpenURI::OpenURISkeleton instance_type;
typedef ::XdpOpenURIOpenURISkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~OpenURISkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class OpenURISkeletonClass: public detail::ClassTemplate<XdpOpenURI::impl::internal::OpenURISkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpOpenURI::impl::internal::OpenURIIfaceClassImpl>
{
friend class internal::OpenURISkeletonClassDef;
typedef OpenURISkeletonClass self;
typedef detail::ClassTemplate<XdpOpenURI::impl::internal::OpenURISkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpOpenURI::impl::internal::OpenURIIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpOpenURI::impl::internal::OpenURIIfaceClassImpl XdpOpenURIOpenURIIface_type;



};


struct OpenURISkeletonClassDef::TypeInitData
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

using OpenURISkeletonImpl = detail::ObjectImpl<OpenURISkeleton, internal::OpenURISkeletonClass>;

} // namespace impl

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
