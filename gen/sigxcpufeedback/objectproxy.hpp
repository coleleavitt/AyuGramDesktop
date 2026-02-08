// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_OBJECTPROXY_HPP_
#define _GI_SIGXCPUFEEDBACK_OBJECTPROXY_HPP_


namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class Object;

class ObjectProxy;

namespace base {


#define GI_SIGXCPUFEEDBACK_OBJECTPROXY_BASE base::ObjectProxyBase
class ObjectProxyBase : public Gio::DBusObjectProxy
{
typedef Gio::DBusObjectProxy super_type;
public:
typedef ::SigxcpuFeedbackObjectProxy BaseObjectType;

ObjectProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return sigxcpu_feedback_object_proxy_get_type(); } 

GI_INLINE_DECL SigxcpuFeedback::Object interface_ (gi::interface_tag<SigxcpuFeedback::Object>);

GI_INLINE_DECL operator SigxcpuFeedback::Object ();

// SigxcpuFeedbackObjectProxy* /*full*/ sigxcpu_feedback_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::SigxcpuFeedbackObjectProxy* /*full*/ sigxcpu_feedback_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
static GI_INLINE_DECL SigxcpuFeedback::ObjectProxy new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept;

}; // class

} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/objectproxy_extra_def.hpp>)
#include <sigxcpufeedback/objectproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/objectproxy_extra.hpp>)
#include <sigxcpufeedback/objectproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class ObjectProxy : public GI_SIGXCPUFEEDBACK_OBJECTPROXY_BASE
{ typedef GI_SIGXCPUFEEDBACK_OBJECTPROXY_BASE super_type; using super_type::super_type; };

} // namespace SigxcpuFeedback

template<> struct declare_cpptype_of<::SigxcpuFeedbackObjectProxy>
{ typedef SigxcpuFeedback::ObjectProxy type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {


class ObjectProxyClassDef
{
typedef ObjectProxyClassDef self;
public:
typedef SigxcpuFeedback::ObjectProxy instance_type;
typedef ::SigxcpuFeedbackObjectProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectProxyClass: public detail::ClassTemplate<SigxcpuFeedback::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, SigxcpuFeedback::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectProxyClassDef;
typedef ObjectProxyClass self;
typedef detail::ClassTemplate<SigxcpuFeedback::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, SigxcpuFeedback::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef SigxcpuFeedback::impl::internal::ObjectIfaceClassImpl SigxcpuFeedbackObjectIface_type;



};


struct ObjectProxyClassDef::TypeInitData
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

using ObjectProxyImpl = detail::ObjectImpl<ObjectProxy, internal::ObjectProxyClass>;

} // namespace impl

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi

#endif
