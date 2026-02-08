// AUTO-GENERATED

#ifndef _GI_XDPREQUEST_OBJECT_HPP_
#define _GI_XDPREQUEST_OBJECT_HPP_


namespace gi {

namespace repository {

namespace XdpRequest {

class Request;

class Object;

namespace base {


#define GI_XDPREQUEST_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdpRequestObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdp_request_object_get_type(); } 

// XdpRequestRequest* /*full,nullable*/ xdp_request_object_get_request (XdpRequestObject* object /*none*/);
// ::XdpRequestRequest* /*full,nullable*/ xdp_request_object_get_request (::XdpRequestObject* object /*none*/);
GI_INLINE_DECL XdpRequest::Request get_request () noexcept;

// XdpRequestRequest* /*none,nullable*/ xdp_request_object_peek_request (XdpRequestObject* object /*none*/);
// ::XdpRequestRequest* /*none,nullable*/ xdp_request_object_peek_request (::XdpRequestObject* object /*none*/);
GI_INLINE_DECL XdpRequest::Request peek_request () noexcept;

gi::property_proxy<XdpRequest::Request, base::ObjectBase> property_request()
{ return gi::property_proxy<XdpRequest::Request, base::ObjectBase> (*this, "request"); }
const gi::property_proxy<XdpRequest::Request, base::ObjectBase> property_request() const
{ return gi::property_proxy<XdpRequest::Request, base::ObjectBase> (*this, "request"); }

}; // class

} // namespace base

} // namespace XdpRequest

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdprequest/object_extra_def.hpp>)
#include <xdprequest/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdprequest/object_extra.hpp>)
#include <xdprequest/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdpRequest {

class Object : public GI_XDPREQUEST_OBJECT_BASE
{ typedef GI_XDPREQUEST_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdpRequest

template<> struct declare_cpptype_of<::XdpRequestObject>
{ typedef XdpRequest::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdpRequest {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdpRequest::Object instance_type;
typedef ::XdpRequestObjectIface interface_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectIfaceDef() = default;
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using ObjectImpl = detail::InterfaceImpl<ObjectIfaceDef>;

class ObjectIfaceClassImpl: public detail::InterfaceClassImpl<ObjectImpl>
{
friend class internal::ObjectIfaceDef;
typedef ObjectIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ObjectImpl> super;

protected:
using super::super;


};


struct ObjectIfaceDef::TypeInitData
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

} // namespace impl

} // namespace XdpRequest

} // namespace repository

} // namespace gi

#endif
