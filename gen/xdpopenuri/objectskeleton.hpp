// AUTO-GENERATED

#ifndef _GI_XDPOPENURI_OBJECTSKELETON_HPP_
#define _GI_XDPOPENURI_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpOpenURI {

class Object;
class OpenURI;

class ObjectSkeleton;

namespace base {


#define GI_XDPOPENURI_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::XdpOpenURIObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_open_uri_object_skeleton_get_type(); } 

GI_INLINE_DECL XdpOpenURI::Object interface_ (gi::interface_tag<XdpOpenURI::Object>);

GI_INLINE_DECL operator XdpOpenURI::Object ();

// XdpOpenURIObjectSkeleton* /*full*/ xdp_open_uri_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdpOpenURIObjectSkeleton* /*full*/ xdp_open_uri_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL XdpOpenURI::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void xdp_open_uri_object_skeleton_set_open_uri (XdpOpenURIObjectSkeleton* object /*none*/, XdpOpenURIOpenURI* interface_ /*none,nullable*/);
// void xdp_open_uri_object_skeleton_set_open_uri (::XdpOpenURIObjectSkeleton* object /*none*/, ::XdpOpenURIOpenURI* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_open_uri (XdpOpenURI::OpenURI interface_) noexcept;
GI_INLINE_DECL void set_open_uri () noexcept;

}; // class

} // namespace base

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdpopenuri/objectskeleton_extra_def.hpp>)
#include <xdpopenuri/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdpopenuri/objectskeleton_extra.hpp>)
#include <xdpopenuri/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpOpenURI {

class ObjectSkeleton : public GI_XDPOPENURI_OBJECTSKELETON_BASE
{ typedef GI_XDPOPENURI_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpOpenURI

template<> struct declare_cpptype_of<::XdpOpenURIObjectSkeleton>
{ typedef XdpOpenURI::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdpOpenURI {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef XdpOpenURI::ObjectSkeleton instance_type;
typedef ::XdpOpenURIObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<XdpOpenURI::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpOpenURI::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<XdpOpenURI::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpOpenURI::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpOpenURI::impl::internal::ObjectIfaceClassImpl XdpOpenURIObjectIface_type;



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

} // namespace XdpOpenURI

} // namespace repository

} // namespace gi

#endif
