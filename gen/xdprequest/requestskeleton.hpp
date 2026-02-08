// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_REQUESTSKELETON_HPP_
#define _GI_XDPREQUEST_REQUESTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdpRequest {

class Request;

class RequestSkeleton;

namespace base {


#define GI_XDPREQUEST_REQUESTSKELETON_BASE base::RequestSkeletonBase
class RequestSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdpRequestRequestSkeleton BaseObjectType;

RequestSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_request_request_skeleton_get_type(); } 

GI_INLINE_DECL XdpRequest::Request interface_ (gi::interface_tag<XdpRequest::Request>);

GI_INLINE_DECL operator XdpRequest::Request ();

// XdpRequestRequest* /*full*/ xdp_request_request_skeleton_new ();
// ::XdpRequestRequestSkeleton* /*full*/ xdp_request_request_skeleton_new ();
static GI_INLINE_DECL XdpRequest::RequestSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/requestskeleton_extra_def.hpp>)
#include <xdprequest/requestskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/requestskeleton_extra.hpp>)
#include <xdprequest/requestskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

class RequestSkeleton : public GI_XDPREQUEST_REQUESTSKELETON_BASE
{ typedef GI_XDPREQUEST_REQUESTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdpRequest

template<> struct declare_cpptype_of<::XdpRequestRequestSkeleton>
{ typedef XdpRequest::RequestSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "request.hpp"

namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {


class RequestSkeletonClassDef
{
typedef RequestSkeletonClassDef self;
public:
typedef XdpRequest::RequestSkeleton instance_type;
typedef ::XdpRequestRequestSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~RequestSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RequestSkeletonClass: public detail::ClassTemplate<XdpRequest::impl::internal::RequestSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpRequest::impl::internal::RequestIfaceClassImpl>
{
friend class internal::RequestSkeletonClassDef;
typedef RequestSkeletonClass self;
typedef detail::ClassTemplate<XdpRequest::impl::internal::RequestSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdpRequest::impl::internal::RequestIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdpRequest::impl::internal::RequestIfaceClassImpl XdpRequestRequestIface_type;



};


struct RequestSkeletonClassDef::TypeInitData
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

using RequestSkeletonImpl = detail::ObjectImpl<RequestSkeleton, internal::RequestSkeletonClass>;

} // namespace impl

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
