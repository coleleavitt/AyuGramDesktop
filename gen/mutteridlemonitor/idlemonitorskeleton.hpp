// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_IDLEMONITORSKELETON_HPP_
#define _GI_MUTTERIDLEMONITOR_IDLEMONITORSKELETON_HPP_


namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class IdleMonitor;

class IdleMonitorSkeleton;

namespace base {


#define GI_MUTTERIDLEMONITOR_IDLEMONITORSKELETON_BASE base::IdleMonitorSkeletonBase
class IdleMonitorSkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::MutterIdleMonitorIdleMonitorSkeleton BaseObjectType;

IdleMonitorSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mutter_idle_monitor_idle_monitor_skeleton_get_type(); } 

GI_INLINE_DECL MutterIdleMonitor::IdleMonitor interface_ (gi::interface_tag<MutterIdleMonitor::IdleMonitor>);

GI_INLINE_DECL operator MutterIdleMonitor::IdleMonitor ();

// MutterIdleMonitorIdleMonitor* /*full*/ mutter_idle_monitor_idle_monitor_skeleton_new ();
// ::MutterIdleMonitorIdleMonitorSkeleton* /*full*/ mutter_idle_monitor_idle_monitor_skeleton_new ();
static GI_INLINE_DECL MutterIdleMonitor::IdleMonitorSkeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitorskeleton_extra_def.hpp>)
#include <mutteridlemonitor/idlemonitorskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/idlemonitorskeleton_extra.hpp>)
#include <mutteridlemonitor/idlemonitorskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class IdleMonitorSkeleton : public GI_MUTTERIDLEMONITOR_IDLEMONITORSKELETON_BASE
{ typedef GI_MUTTERIDLEMONITOR_IDLEMONITORSKELETON_BASE super_type; using super_type::super_type; };

} // namespace MutterIdleMonitor

template<> struct declare_cpptype_of<::MutterIdleMonitorIdleMonitorSkeleton>
{ typedef MutterIdleMonitor::IdleMonitorSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "idlemonitor.hpp"

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {


class IdleMonitorSkeletonClassDef
{
typedef IdleMonitorSkeletonClassDef self;
public:
typedef MutterIdleMonitor::IdleMonitorSkeleton instance_type;
typedef ::MutterIdleMonitorIdleMonitorSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~IdleMonitorSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IdleMonitorSkeletonClass: public detail::ClassTemplate<MutterIdleMonitor::impl::internal::IdleMonitorSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, MutterIdleMonitor::impl::internal::IdleMonitorIfaceClassImpl>
{
friend class internal::IdleMonitorSkeletonClassDef;
typedef IdleMonitorSkeletonClass self;
typedef detail::ClassTemplate<MutterIdleMonitor::impl::internal::IdleMonitorSkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, MutterIdleMonitor::impl::internal::IdleMonitorIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef MutterIdleMonitor::impl::internal::IdleMonitorIfaceClassImpl MutterIdleMonitorIdleMonitorIface_type;



};


struct IdleMonitorSkeletonClassDef::TypeInitData
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

using IdleMonitorSkeletonImpl = detail::ObjectImpl<IdleMonitorSkeleton, internal::IdleMonitorSkeletonClass>;

} // namespace impl

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
