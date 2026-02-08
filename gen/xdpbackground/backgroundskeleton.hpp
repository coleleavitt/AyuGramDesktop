// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_BACKGROUNDSKELETON_HPP_
#define _GI_XDPBACKGROUND_BACKGROUNDSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpBackground {

class Background;

class BackgroundSkeleton;

namespace base {


#define GI_XDPBACKGROUND_BACKGROUNDSKELETON_BASE base::BackgroundSkeletonBase
class BackgroundSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdpBackgroundBackgroundSkeleton BaseObjectType;

BackgroundSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_background_background_skeleton_get_type(); } 

GI_INLINE_DECL XdpBackground::Background interface_ (gi::interface_tag<XdpBackground::Background>);

GI_INLINE_DECL operator XdpBackground::Background ();

// XdpBackgroundBackground* /*full*/ xdp_background_background_skeleton_new ();
// ::XdpBackgroundBackgroundSkeleton* /*full*/ xdp_background_background_skeleton_new ();
static GI_INLINE_DECL XdpBackground::BackgroundSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/backgroundskeleton_extra_def.hpp>)
#include <xdpbackground/backgroundskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/backgroundskeleton_extra.hpp>)
#include <xdpbackground/backgroundskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

class BackgroundSkeleton : public GI_XDPBACKGROUND_BACKGROUNDSKELETON_BASE
{ typedef GI_XDPBACKGROUND_BACKGROUNDSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpBackground

template<> struct declare_cpptype_of<::XdpBackgroundBackgroundSkeleton>
{ typedef XdpBackground::BackgroundSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "background.hpp"

namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {


class BackgroundSkeletonClassDef
{
typedef BackgroundSkeletonClassDef self;
public:
typedef XdpBackground::BackgroundSkeleton instance_type;
typedef ::XdpBackgroundBackgroundSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BackgroundSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BackgroundSkeletonClass: public detail::ClassTemplate<XdpBackground::impl::internal::BackgroundSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpBackground::impl::internal::BackgroundIfaceClassImpl>
{
friend class internal::BackgroundSkeletonClassDef;
typedef BackgroundSkeletonClass self;
typedef detail::ClassTemplate<XdpBackground::impl::internal::BackgroundSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpBackground::impl::internal::BackgroundIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpBackground::impl::internal::BackgroundIfaceClassImpl XdpBackgroundBackgroundIface_type;



};


struct BackgroundSkeletonClassDef::TypeInitData
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

using BackgroundSkeletonImpl = detail::ObjectImpl<BackgroundSkeleton, internal::BackgroundSkeletonClass>;

} // namespace impl

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
