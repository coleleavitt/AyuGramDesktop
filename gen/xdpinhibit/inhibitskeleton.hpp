// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_INHIBITSKELETON_HPP_
#define _GI_XDPINHIBIT_INHIBITSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpInhibit {

class Inhibit;

class InhibitSkeleton;

namespace base {


#define GI_XDPINHIBIT_INHIBITSKELETON_BASE base::InhibitSkeletonBase
class InhibitSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdpInhibitInhibitSkeleton BaseObjectType;

InhibitSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_inhibit_inhibit_skeleton_get_type(); } 

GI_INLINE_DECL XdpInhibit::Inhibit interface_ (gi::interface_tag<XdpInhibit::Inhibit>);

GI_INLINE_DECL operator XdpInhibit::Inhibit ();

// XdpInhibitInhibit* /*full*/ xdp_inhibit_inhibit_skeleton_new ();
// ::XdpInhibitInhibitSkeleton* /*full*/ xdp_inhibit_inhibit_skeleton_new ();
static GI_INLINE_DECL XdpInhibit::InhibitSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibitskeleton_extra_def.hpp>)
#include <xdpinhibit/inhibitskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/inhibitskeleton_extra.hpp>)
#include <xdpinhibit/inhibitskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

class InhibitSkeleton : public GI_XDPINHIBIT_INHIBITSKELETON_BASE
{ typedef GI_XDPINHIBIT_INHIBITSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpInhibit

template<> struct declare_cpptype_of<::XdpInhibitInhibitSkeleton>
{ typedef XdpInhibit::InhibitSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "inhibit.hpp"

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {


class InhibitSkeletonClassDef
{
typedef InhibitSkeletonClassDef self;
public:
typedef XdpInhibit::InhibitSkeleton instance_type;
typedef ::XdpInhibitInhibitSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~InhibitSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class InhibitSkeletonClass: public detail::ClassTemplate<XdpInhibit::impl::internal::InhibitSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpInhibit::impl::internal::InhibitIfaceClassImpl>
{
friend class internal::InhibitSkeletonClassDef;
typedef InhibitSkeletonClass self;
typedef detail::ClassTemplate<XdpInhibit::impl::internal::InhibitSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpInhibit::impl::internal::InhibitIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpInhibit::impl::internal::InhibitIfaceClassImpl XdpInhibitInhibitIface_type;



};


struct InhibitSkeletonClassDef::TypeInitData
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

using InhibitSkeletonImpl = detail::ObjectImpl<InhibitSkeleton, internal::InhibitSkeletonClass>;

} // namespace impl

} // namespace XdpInhibit

} // namespace repository

} // namespace gi

#endif
