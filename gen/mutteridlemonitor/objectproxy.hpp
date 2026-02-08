// AUTO-GENERATED

#ifndef _GI_MUTTERIDLEMONITOR_OBJECTPROXY_HPP_
#define _GI_MUTTERIDLEMONITOR_OBJECTPROXY_HPP_


namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class Object;

class ObjectProxy;

namespace base {


#define GI_MUTTERIDLEMONITOR_OBJECTPROXY_BASE base::ObjectProxyBase
class ObjectProxyBase : public Gio::DBusObjectProxy
{
typedef Gio::DBusObjectProxy super_type;
public:
typedef ::MutterIdleMonitorObjectProxy BaseObjectType;

ObjectProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return mutter_idle_monitor_object_proxy_get_type(); } 

GI_INLINE_DECL MutterIdleMonitor::Object interface_ (gi::interface_tag<MutterIdleMonitor::Object>);

GI_INLINE_DECL operator MutterIdleMonitor::Object ();

// MutterIdleMonitorObjectProxy* /*full*/ mutter_idle_monitor_object_proxy_new (GDBusConnection* connection /*none*/, const gchar* object_path /*none*/);
// ::MutterIdleMonitorObjectProxy* /*full*/ mutter_idle_monitor_object_proxy_new (::GDBusConnection* connection /*none*/, const char* object_path /*none*/);
static GI_INLINE_DECL MutterIdleMonitor::ObjectProxy new_ (Gio::DBusConnection connection, const gi::cstring_v object_path) noexcept;

}; // class

} // namespace base

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/objectproxy_extra_def.hpp>)
#include <mutteridlemonitor/objectproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<mutteridlemonitor/objectproxy_extra.hpp>)
#include <mutteridlemonitor/objectproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

class ObjectProxy : public GI_MUTTERIDLEMONITOR_OBJECTPROXY_BASE
{ typedef GI_MUTTERIDLEMONITOR_OBJECTPROXY_BASE super_type; using super_type::super_type; };

} // namespace MutterIdleMonitor

template<> struct declare_cpptype_of<::MutterIdleMonitorObjectProxy>
{ typedef MutterIdleMonitor::ObjectProxy type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace MutterIdleMonitor {

namespace impl {

namespace internal {


class ObjectProxyClassDef
{
typedef ObjectProxyClassDef self;
public:
typedef MutterIdleMonitor::ObjectProxy instance_type;
typedef ::MutterIdleMonitorObjectProxyClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectProxyClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectProxyClass: public detail::ClassTemplate<MutterIdleMonitor::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, MutterIdleMonitor::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectProxyClassDef;
typedef ObjectProxyClass self;
typedef detail::ClassTemplate<MutterIdleMonitor::impl::internal::ObjectProxyClassDef, Gio::impl::internal::DBusObjectProxyClass, MutterIdleMonitor::impl::internal::ObjectIfaceClassImpl> super;

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

} // namespace MutterIdleMonitor

} // namespace repository

} // namespace gi

#endif
