// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_OBJECT_HPP_
#define _GI_MUTTERIDLEMONITOR_OBJECT_HPP_


namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class IdleMonitor;

class Object;

namespace base {


#define GI_MUTTERIDLEMONITOR_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::MutterIdleMonitorObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mutter_idle_monitor_object_get_type(); } 

// MutterIdleMonitorIdleMonitor* /*full,nullable*/ mutter_idle_monitor_object_get_idle_monitor (MutterIdleMonitorObject* object /*none*/);
// ::MutterIdleMonitorIdleMonitor* /*full,nullable*/ mutter_idle_monitor_object_get_idle_monitor (::MutterIdleMonitorObject* object /*none*/);
GI_INLINE_DECL MutterIdleMonitor::IdleMonitor get_idle_monitor () noexcept;

// MutterIdleMonitorIdleMonitor* /*none,nullable*/ mutter_idle_monitor_object_peek_idle_monitor (MutterIdleMonitorObject* object /*none*/);
// ::MutterIdleMonitorIdleMonitor* /*none,nullable*/ mutter_idle_monitor_object_peek_idle_monitor (::MutterIdleMonitorObject* object /*none*/);
GI_INLINE_DECL MutterIdleMonitor::IdleMonitor peek_idle_monitor () noexcept;

gi::property_proxy<MutterIdleMonitor::IdleMonitor, base::ObjectBase> property_idle_monitor()
{ return gi::property_proxy<MutterIdleMonitor::IdleMonitor, base::ObjectBase> (*this, "idle-monitor"); }
const gi::property_proxy<MutterIdleMonitor::IdleMonitor, base::ObjectBase> property_idle_monitor() const
{ return gi::property_proxy<MutterIdleMonitor::IdleMonitor, base::ObjectBase> (*this, "idle-monitor"); }

}; // class

} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/object_extra_def.hpp>)
#include <mutteridlemonitor/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/object_extra.hpp>)
#include <mutteridlemonitor/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class Object : public GI_MUTTERIDLEMONITOR_OBJECT_BASE
{ typedef GI_MUTTERIDLEMONITOR_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace MutterIdleMonitor

template<> struct declare_cpptype_of<::MutterIdleMonitorObject>
{ typedef MutterIdleMonitor::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef MutterIdleMonitor::Object instance_type;
typedef ::MutterIdleMonitorObjectIface interface_type;


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

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
