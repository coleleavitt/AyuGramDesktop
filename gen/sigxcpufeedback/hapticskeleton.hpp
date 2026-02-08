// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_HAPTICSKELETON_HPP_
#define _GI_SIGXCPUFEEDBACK_HAPTICSKELETON_HPP_


namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class Haptic;

class HapticSkeleton;

namespace base {


#define GI_SIGXCPUFEEDBACK_HAPTICSKELETON_BASE base::HapticSkeletonBase
class HapticSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::SigxcpuFeedbackHapticSkeleton BaseObjectType;

HapticSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return sigxcpu_feedback_haptic_skeleton_get_type(); } 

GI_INLINE_DECL SigxcpuFeedback::Haptic interface_ (gi::interface_tag<SigxcpuFeedback::Haptic>);

GI_INLINE_DECL operator SigxcpuFeedback::Haptic ();

// SigxcpuFeedbackHaptic* /*full*/ sigxcpu_feedback_haptic_skeleton_new ();
// ::SigxcpuFeedbackHapticSkeleton* /*full*/ sigxcpu_feedback_haptic_skeleton_new ();
static GI_INLINE_DECL SigxcpuFeedback::HapticSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/hapticskeleton_extra_def.hpp>)
#include <sigxcpufeedback/hapticskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/hapticskeleton_extra.hpp>)
#include <sigxcpufeedback/hapticskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class HapticSkeleton : public GI_SIGXCPUFEEDBACK_HAPTICSKELETON_BASE
{ typedef GI_SIGXCPUFEEDBACK_HAPTICSKELETON_BASE super_type; using super_type::super_type; };

} // namespace SigxcpuFeedback

template<> struct declare_cpptype_of<::SigxcpuFeedbackHapticSkeleton>
{ typedef SigxcpuFeedback::HapticSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "haptic.hpp"

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {


class HapticSkeletonClassDef
{
typedef HapticSkeletonClassDef self;
public:
typedef SigxcpuFeedback::HapticSkeleton instance_type;
typedef ::SigxcpuFeedbackHapticSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~HapticSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HapticSkeletonClass: public detail::ClassTemplate<SigxcpuFeedback::impl::internal::HapticSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, SigxcpuFeedback::impl::internal::HapticIfaceClassImpl>
{
friend class internal::HapticSkeletonClassDef;
typedef HapticSkeletonClass self;
typedef detail::ClassTemplate<SigxcpuFeedback::impl::internal::HapticSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, SigxcpuFeedback::impl::internal::HapticIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef SigxcpuFeedback::impl::internal::HapticIfaceClassImpl SigxcpuFeedbackHapticIface_type;



};


struct HapticSkeletonClassDef::TypeInitData
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

using HapticSkeletonImpl = detail::ObjectImpl<HapticSkeleton, internal::HapticSkeletonClass>;

} // namespace impl

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi

#endif
