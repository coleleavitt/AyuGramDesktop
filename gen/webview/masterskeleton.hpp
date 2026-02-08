// AUTO-GENERATED

#ifndef _GI_WEBVIEW_MASTERSKELETON_HPP_
#define _GI_WEBVIEW_MASTERSKELETON_HPP_


namespace gi {

namespace repository {

namespace Webview {

class Master;

class MasterSkeleton;

namespace base {


#define GI_WEBVIEW_MASTERSKELETON_BASE base::MasterSkeletonBase
class MasterSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::WebviewMasterSkeleton BaseObjectType;

MasterSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_master_skeleton_get_type(); } 

GI_INLINE_DECL Webview::Master interface_ (gi::interface_tag<Webview::Master>);

GI_INLINE_DECL operator Webview::Master ();

// WebviewMaster* /*full*/ webview_master_skeleton_new ();
// ::WebviewMasterSkeleton* /*full*/ webview_master_skeleton_new ();
static GI_INLINE_DECL Webview::MasterSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/masterskeleton_extra_def.hpp>)
#include <webview/masterskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/masterskeleton_extra.hpp>)
#include <webview/masterskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class MasterSkeleton : public GI_WEBVIEW_MASTERSKELETON_BASE
{ typedef GI_WEBVIEW_MASTERSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewMasterSkeleton>
{ typedef Webview::MasterSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "master.hpp"

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class MasterSkeletonClassDef
{
typedef MasterSkeletonClassDef self;
public:
typedef Webview::MasterSkeleton instance_type;
typedef ::WebviewMasterSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~MasterSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MasterSkeletonClass: public detail::ClassTemplate<Webview::impl::internal::MasterSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Webview::impl::internal::MasterIfaceClassImpl>
{
friend class internal::MasterSkeletonClassDef;
typedef MasterSkeletonClass self;
typedef detail::ClassTemplate<Webview::impl::internal::MasterSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, Webview::impl::internal::MasterIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Webview::impl::internal::MasterIfaceClassImpl WebviewMasterIface_type;



};


struct MasterSkeletonClassDef::TypeInitData
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

using MasterSkeletonImpl = detail::ObjectImpl<MasterSkeleton, internal::MasterSkeletonClass>;

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
