// AUTO-GENERATED

#ifndef _GI_SIGXCPUFEEDBACK_OBJECTSKELETON_HPP_
#define _GI_SIGXCPUFEEDBACK_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class Haptic;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_SIGXCPUFEEDBACK_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::SigxcpuFeedbackObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return sigxcpu_feedback_object_skeleton_get_type(); } 

GI_INLINE_DECL SigxcpuFeedback::Object interface_ (gi::interface_tag<SigxcpuFeedback::Object>);

GI_INLINE_DECL operator SigxcpuFeedback::Object ();

// SigxcpuFeedbackObjectSkeleton* /*full*/ sigxcpu_feedback_object_skeleton_new (const gchar* object_path /*none*/);
// ::SigxcpuFeedbackObjectSkeleton* /*full*/ sigxcpu_feedback_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL SigxcpuFeedback::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void sigxcpu_feedback_object_skeleton_set_haptic (SigxcpuFeedbackObjectSkeleton* object /*none*/, SigxcpuFeedbackHaptic* interface_ /*none,nullable*/);
// void sigxcpu_feedback_object_skeleton_set_haptic (::SigxcpuFeedbackObjectSkeleton* object /*none*/, ::SigxcpuFeedbackHaptic* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_haptic (SigxcpuFeedback::Haptic interface_) noexcept;
GI_INLINE_DECL void set_haptic () noexcept;

}; // class

} // namespace base

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/objectskeleton_extra_def.hpp>)
#include <sigxcpufeedback/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<sigxcpufeedback/objectskeleton_extra.hpp>)
#include <sigxcpufeedback/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

class ObjectSkeleton : public GI_SIGXCPUFEEDBACK_OBJECTSKELETON_BASE
{ typedef GI_SIGXCPUFEEDBACK_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace SigxcpuFeedback

template<> struct declare_cpptype_of<::SigxcpuFeedbackObjectSkeleton>
{ typedef SigxcpuFeedback::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace SigxcpuFeedback {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef SigxcpuFeedback::ObjectSkeleton instance_type;
typedef ::SigxcpuFeedbackObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<SigxcpuFeedback::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, SigxcpuFeedback::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<SigxcpuFeedback::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, SigxcpuFeedback::impl::internal::ObjectIfaceClassImpl> super;

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

} // namespace SigxcpuFeedback

} // namespace repository

} // namespace gi

#endif
