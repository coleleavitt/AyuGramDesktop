// AUTO-GENERATED

#ifndef _GI_XDPBACKGROUND_OBJECTSKELETON_HPP_
#define _GI_XDPBACKGROUND_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpBackground {

class Background;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_XDPBACKGROUND_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::XdpBackgroundObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_background_object_skeleton_get_type(); } 

GI_INLINE_DECL XdpBackground::Object interface_ (gi::interface_tag<XdpBackground::Object>);

GI_INLINE_DECL operator XdpBackground::Object ();

// XdpBackgroundObjectSkeleton* /*full*/ xdp_background_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdpBackgroundObjectSkeleton* /*full*/ xdp_background_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL XdpBackground::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void xdp_background_object_skeleton_set_background (XdpBackgroundObjectSkeleton* object /*none*/, XdpBackgroundBackground* interface_ /*none,nullable*/);
// void xdp_background_object_skeleton_set_background (::XdpBackgroundObjectSkeleton* object /*none*/, ::XdpBackgroundBackground* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_background (XdpBackground::Background interface_) noexcept;
GI_INLINE_DECL void set_background () noexcept;

}; // class

} // namespace base

} // namespace XdpBackground

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpbackground/objectskeleton_extra_def.hpp>)
#include <xdpbackground/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpbackground/objectskeleton_extra.hpp>)
#include <xdpbackground/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpBackground {

class ObjectSkeleton : public GI_XDPBACKGROUND_OBJECTSKELETON_BASE
{ typedef GI_XDPBACKGROUND_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpBackground

template<> struct declare_cpptype_of<::XdpBackgroundObjectSkeleton>
{ typedef XdpBackground::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdpBackground {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef XdpBackground::ObjectSkeleton instance_type;
typedef ::XdpBackgroundObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<XdpBackground::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpBackground::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<XdpBackground::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpBackground::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpBackground::impl::internal::ObjectIfaceClassImpl XdpBackgroundObjectIface_type;



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

} // namespace XdpBackground

} // namespace repository

} // namespace gi

#endif
