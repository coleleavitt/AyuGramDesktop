// AUTO-GENERATED

#ifndef _GI_XDPINHIBIT_OBJECTSKELETON_HPP_
#define _GI_XDPINHIBIT_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpInhibit {

class Inhibit;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_XDPINHIBIT_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::XdpInhibitObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_inhibit_object_skeleton_get_type(); } 

GI_INLINE_DECL XdpInhibit::Object interface_ (gi::interface_tag<XdpInhibit::Object>);

GI_INLINE_DECL operator XdpInhibit::Object ();

// XdpInhibitObjectSkeleton* /*full*/ xdp_inhibit_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdpInhibitObjectSkeleton* /*full*/ xdp_inhibit_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL XdpInhibit::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void xdp_inhibit_object_skeleton_set_inhibit (XdpInhibitObjectSkeleton* object /*none*/, XdpInhibitInhibit* interface_ /*none,nullable*/);
// void xdp_inhibit_object_skeleton_set_inhibit (::XdpInhibitObjectSkeleton* object /*none*/, ::XdpInhibitInhibit* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_inhibit (XdpInhibit::Inhibit interface_) noexcept;
GI_INLINE_DECL void set_inhibit () noexcept;

}; // class

} // namespace base

} // namespace XdpInhibit

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpinhibit/objectskeleton_extra_def.hpp>)
#include <xdpinhibit/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpinhibit/objectskeleton_extra.hpp>)
#include <xdpinhibit/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpInhibit {

class ObjectSkeleton : public GI_XDPINHIBIT_OBJECTSKELETON_BASE
{ typedef GI_XDPINHIBIT_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpInhibit

template<> struct declare_cpptype_of<::XdpInhibitObjectSkeleton>
{ typedef XdpInhibit::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdpInhibit {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef XdpInhibit::ObjectSkeleton instance_type;
typedef ::XdpInhibitObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<XdpInhibit::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpInhibit::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<XdpInhibit::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpInhibit::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpInhibit::impl::internal::ObjectIfaceClassImpl XdpInhibitObjectIface_type;



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

} // namespace XdpInhibit

} // namespace repository

} // namespace gi

#endif
