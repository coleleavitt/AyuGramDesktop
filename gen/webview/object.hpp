// AUTO-GENERATED

#ifndef _GI_WEBVIEW_OBJECT_HPP_
#define _GI_WEBVIEW_OBJECT_HPP_


namespace gi {

namespace repository {

namespace Webview {

class Helper;
class Master;

class Object;

namespace base {


#define GI_WEBVIEW_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::WebviewObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webview_object_get_type(); } 

// WebviewHelper* /*full,nullable*/ webview_object_get_helper (WebviewObject* object /*none*/);
// ::WebviewHelper* /*full,nullable*/ webview_object_get_helper (::WebviewObject* object /*none*/);
GI_INLINE_DECL Webview::Helper get_helper () noexcept;

// WebviewMaster* /*full,nullable*/ webview_object_get_master (WebviewObject* object /*none*/);
// ::WebviewMaster* /*full,nullable*/ webview_object_get_master (::WebviewObject* object /*none*/);
GI_INLINE_DECL Webview::Master get_master () noexcept;

// WebviewHelper* /*none,nullable*/ webview_object_peek_helper (WebviewObject* object /*none*/);
// ::WebviewHelper* /*none,nullable*/ webview_object_peek_helper (::WebviewObject* object /*none*/);
GI_INLINE_DECL Webview::Helper peek_helper () noexcept;

// WebviewMaster* /*none,nullable*/ webview_object_peek_master (WebviewObject* object /*none*/);
// ::WebviewMaster* /*none,nullable*/ webview_object_peek_master (::WebviewObject* object /*none*/);
GI_INLINE_DECL Webview::Master peek_master () noexcept;

gi::property_proxy<Webview::Helper, base::ObjectBase> property_helper()
{ return gi::property_proxy<Webview::Helper, base::ObjectBase> (*this, "helper"); }
const gi::property_proxy<Webview::Helper, base::ObjectBase> property_helper() const
{ return gi::property_proxy<Webview::Helper, base::ObjectBase> (*this, "helper"); }

gi::property_proxy<Webview::Master, base::ObjectBase> property_master()
{ return gi::property_proxy<Webview::Master, base::ObjectBase> (*this, "master"); }
const gi::property_proxy<Webview::Master, base::ObjectBase> property_master() const
{ return gi::property_proxy<Webview::Master, base::ObjectBase> (*this, "master"); }

}; // class

} // namespace base

} // namespace Webview

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webview/object_extra_def.hpp>)
#include <webview/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webview/object_extra.hpp>)
#include <webview/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Webview {

class Object : public GI_WEBVIEW_OBJECT_BASE
{ typedef GI_WEBVIEW_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace Webview

template<> struct declare_cpptype_of<::WebviewObject>
{ typedef Webview::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Webview {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef Webview::Object instance_type;
typedef ::WebviewObjectIface interface_type;


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

} // namespace Webview

} // namespace repository

} // namespace gi

#endif
