// AUTO-GENERATED

#ifndef _GI_WEBVIEW_OBJECTSKELETON_HPP_
#define _GI_WEBVIEW_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace Webview {

class Helper;
class Master;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_WEBVIEW_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::WebviewObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_object_skeleton_get_type(); } 

GI_INLINE_DECL Webview::Object interface_ (gi::interface_tag<Webview::Object>);

GI_INLINE_DECL operator Webview::Object ();

// WebviewObjectSkeleton* /*full*/ webview_object_skeleton_new (const gchar* object_path /*none*/);
// ::WebviewObjectSkeleton* /*full*/ webview_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL Webview::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void webview_object_skeleton_set_helper (WebviewObjectSkeleton* object /*none*/, WebviewHelper* interface_ /*none,nullable*/);
// void webview_object_skeleton_set_helper (::WebviewObjectSkeleton* object /*none*/, ::WebviewHelper* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_helper (Webview::Helper interface_) noexcept;
GI_INLINE_DECL void set_helper () noexcept;

// void webview_object_skeleton_set_master (WebviewObjectSkeleton* object /*none*/, WebviewMaster* interface_ /*none,nullable*/);
// void webview_object_skeleton_set_master (::WebviewObjectSkeleton* object /*none*/, ::WebviewMaster* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_master (Webview::Master interface_) noexcept;
GI_INLINE_DECL void set_master () noexcept;

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/objectskeleton_extra_def.hpp>)
#include <webview/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/objectskeleton_extra.hpp>)
#include <webview/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class ObjectSkeleton : public GI_WEBVIEW_OBJECTSKELETON_BASE
{ typedef GI_WEBVIEW_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewObjectSkeleton>
{ typedef Webview::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef Webview::ObjectSkeleton instance_type;
typedef ::WebviewObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<Webview::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, Webview::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<Webview::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, Webview::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Webview::impl::internal::ObjectIfaceClassImpl WebviewObjectIface_type;



};


struct ObjectSkeletonClassDef::TypeInitData
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

using ObjectSkeletonImpl = detail::ObjectImpl<ObjectSkeleton, internal::ObjectSkeletonClass>;

} // namespace impl

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
