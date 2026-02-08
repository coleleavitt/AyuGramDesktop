// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_OBJECT_HPP_
#define _GI_SIGXCPUFEEDBACK_OBJECT_HPP_


namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class Haptic;

class Object;

namespace base {


#define GI_SIGXCPUFEEDBACK_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SigxcpuFeedbackObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return sigxcpu_feedback_object_get_type(); } 

// SigxcpuFeedbackHaptic* /*full,nullable*/ sigxcpu_feedback_object_get_haptic (SigxcpuFeedbackObject* object /*none*/);
// ::SigxcpuFeedbackHaptic* /*full,nullable*/ sigxcpu_feedback_object_get_haptic (::SigxcpuFeedbackObject* object /*none*/);
GI_INLINE_DECL SigxcpuFeedback::Haptic get_haptic () noexcept;

// SigxcpuFeedbackHaptic* /*none,nullable*/ sigxcpu_feedback_object_peek_haptic (SigxcpuFeedbackObject* object /*none*/);
// ::SigxcpuFeedbackHaptic* /*none,nullable*/ sigxcpu_feedback_object_peek_haptic (::SigxcpuFeedbackObject* object /*none*/);
GI_INLINE_DECL SigxcpuFeedback::Haptic peek_haptic () noexcept;

gi::property_proxy<SigxcpuFeedback::Haptic, base::ObjectBase> property_haptic()
{ return gi::property_proxy<SigxcpuFeedback::Haptic, base::ObjectBase> (*this, "haptic"); }
const gi::property_proxy<SigxcpuFeedback::Haptic, base::ObjectBase> property_haptic() const
{ return gi::property_proxy<SigxcpuFeedback::Haptic, base::ObjectBase> (*this, "haptic"); }

}; // class

} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/object_extra_def.hpp>)
#include <sigxcpufeedback/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/object_extra.hpp>)
#include <sigxcpufeedback/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class Object : public GI_SIGXCPUFEEDBACK_OBJECT_BASE
{ typedef GI_SIGXCPUFEEDBACK_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace SigxcpuFeedback

template<> struct declare_cpptype_of<::SigxcpuFeedbackObject>
{ typedef SigxcpuFeedback::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef SigxcpuFeedback::Object instance_type;
typedef ::SigxcpuFeedbackObjectIface interface_type;


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

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi

#endif
