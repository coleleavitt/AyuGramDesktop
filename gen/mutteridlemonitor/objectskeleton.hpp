// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_OBJECTSKELETON_HPP_
#define _GI_MUTTERIDLEMONITOR_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class IdleMonitor;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_MUTTERIDLEMONITOR_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::MutterIdleMonitorObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mutter_idle_monitor_object_skeleton_get_type(); } 

GI_INLINE_DECL MutterIdleMonitor::Object interface_ (gi::interface_tag<MutterIdleMonitor::Object>);

GI_INLINE_DECL operator MutterIdleMonitor::Object ();

// MutterIdleMonitorObjectSkeleton* /*full*/ mutter_idle_monitor_object_skeleton_new (const gchar* object_path /*none*/);
// ::MutterIdleMonitorObjectSkeleton* /*full*/ mutter_idle_monitor_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL MutterIdleMonitor::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void mutter_idle_monitor_object_skeleton_set_idle_monitor (MutterIdleMonitorObjectSkeleton* object /*none*/, MutterIdleMonitorIdleMonitor* interface_ /*none,nullable*/);
// void mutter_idle_monitor_object_skeleton_set_idle_monitor (::MutterIdleMonitorObjectSkeleton* object /*none*/, ::MutterIdleMonitorIdleMonitor* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_idle_monitor (MutterIdleMonitor::IdleMonitor interface_) noexcept;
GI_INLINE_DECL void set_idle_monitor () noexcept;

}; // class

} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/objectskeleton_extra_def.hpp>)
#include <mutteridlemonitor/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/objectskeleton_extra.hpp>)
#include <mutteridlemonitor/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class ObjectSkeleton : public GI_MUTTERIDLEMONITOR_OBJECTSKELETON_BASE
{ typedef GI_MUTTERIDLEMONITOR_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace MutterIdleMonitor

template<> struct declare_cpptype_of<::MutterIdleMonitorObjectSkeleton>
{ typedef MutterIdleMonitor::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef MutterIdleMonitor::ObjectSkeleton instance_type;
typedef ::MutterIdleMonitorObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<MutterIdleMonitor::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, MutterIdleMonitor::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<MutterIdleMonitor::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, MutterIdleMonitor::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef MutterIdleMonitor::impl::internal::ObjectIfaceClassImpl MutterIdleMonitorObjectIface_type;



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

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
