// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_OBJECTSKELETON_HPP_
#define _GI_XDPREQUEST_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpRequest {

class Object;
class Request;

class ObjectSkeleton;

namespace base {


#define GI_XDPREQUEST_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::XdpRequestObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_request_object_skeleton_get_type(); } 

GI_INLINE_DECL XdpRequest::Object interface_ (gi::interface_tag<XdpRequest::Object>);

GI_INLINE_DECL operator XdpRequest::Object ();

// XdpRequestObjectSkeleton* /*full*/ xdp_request_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdpRequestObjectSkeleton* /*full*/ xdp_request_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL XdpRequest::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void xdp_request_object_skeleton_set_request (XdpRequestObjectSkeleton* object /*none*/, XdpRequestRequest* interface_ /*none,nullable*/);
// void xdp_request_object_skeleton_set_request (::XdpRequestObjectSkeleton* object /*none*/, ::XdpRequestRequest* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_request (XdpRequest::Request interface_) noexcept;
GI_INLINE_DECL void set_request () noexcept;

}; // class

} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/objectskeleton_extra_def.hpp>)
#include <xdprequest/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/objectskeleton_extra.hpp>)
#include <xdprequest/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

class ObjectSkeleton : public GI_XDPREQUEST_OBJECTSKELETON_BASE
{ typedef GI_XDPREQUEST_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpRequest

template<> struct declare_cpptype_of<::XdpRequestObjectSkeleton>
{ typedef XdpRequest::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef XdpRequest::ObjectSkeleton instance_type;
typedef ::XdpRequestObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<XdpRequest::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpRequest::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<XdpRequest::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdpRequest::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpRequest::impl::internal::ObjectIfaceClassImpl XdpRequestObjectIface_type;



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

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
