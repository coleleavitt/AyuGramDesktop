// AUTO-GENERATED

#ifndef _GI_WEBVIEW_HELPERSKELETON_HPP_
#define _GI_WEBVIEW_HELPERSKELETON_HPP_


namespace gi {

namespace repository {

namespace Webview {

class Helper;

class HelperSkeleton;

namespace base {


#define GI_WEBVIEW_HELPERSKELETON_BASE base::HelperSkeletonBase
class HelperSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::WebviewHelperSkeleton BaseObjectType;

HelperSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_helper_skeleton_get_type(); } 

GI_INLINE_DECL Webview::Helper interface_ (gi::interface_tag<Webview::Helper>);

GI_INLINE_DECL operator Webview::Helper ();

// WebviewHelper* /*full*/ webview_helper_skeleton_new ();
// ::WebviewHelperSkeleton* /*full*/ webview_helper_skeleton_new ();
static GI_INLINE_DECL Webview::HelperSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/helperskeleton_extra_def.hpp>)
#include <webview/helperskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/helperskeleton_extra.hpp>)
#include <webview/helperskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class HelperSkeleton : public GI_WEBVIEW_HELPERSKELETON_BASE
{ typedef GI_WEBVIEW_HELPERSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewHelperSkeleton>
{ typedef Webview::HelperSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "helper.hpp"

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class HelperSkeletonClassDef
{
typedef HelperSkeletonClassDef self;
public:
typedef Webview::HelperSkeleton instance_type;
typedef ::WebviewHelperSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~HelperSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HelperSkeletonClass: public detail::ClassTemplate<Webview::impl::internal::HelperSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Webview::impl::internal::HelperIfaceClassImpl>
{
friend class internal::HelperSkeletonClassDef;
typedef HelperSkeletonClass self;
typedef detail::ClassTemplate<Webview::impl::internal::HelperSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Webview::impl::internal::HelperIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Webview::impl::internal::HelperIfaceClassImpl WebviewHelperIface_type;



};


struct HelperSkeletonClassDef::TypeInitData
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

using HelperSkeletonImpl = detail::ObjectImpl<HelperSkeleton, internal::HelperSkeletonClass>;

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
