// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_OBJECT_HPP_
#define _GI_XDGFILEMANAGER1_OBJECT_HPP_


namespace gi {

namespace repository {

namespace XdgFileManager1 {

class FileManager1;

class Object;

namespace base {


#define GI_XDGFILEMANAGER1_OBJECT_BASE base::ObjectBase
class ObjectBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::XdgFileManager1Object BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_file_manager1_object_get_type(); } 

// XdgFileManager1FileManager1* /*full,nullable*/ xdg_file_manager1_object_get_file_manager1 (XdgFileManager1Object* object /*none*/);
// ::XdgFileManager1FileManager1* /*full,nullable*/ xdg_file_manager1_object_get_file_manager1 (::XdgFileManager1Object* object /*none*/);
GI_INLINE_DECL XdgFileManager1::FileManager1 get_file_manager1 () noexcept;

// XdgFileManager1FileManager1* /*none,nullable*/ xdg_file_manager1_object_peek_file_manager1 (XdgFileManager1Object* object /*none*/);
// ::XdgFileManager1FileManager1* /*none,nullable*/ xdg_file_manager1_object_peek_file_manager1 (::XdgFileManager1Object* object /*none*/);
GI_INLINE_DECL XdgFileManager1::FileManager1 peek_file_manager1 () noexcept;

gi::property_proxy<XdgFileManager1::FileManager1, base::ObjectBase> property_file_manager1()
{ return gi::property_proxy<XdgFileManager1::FileManager1, base::ObjectBase> (*this, "file-manager1"); }
const gi::property_proxy<XdgFileManager1::FileManager1, base::ObjectBase> property_file_manager1() const
{ return gi::property_proxy<XdgFileManager1::FileManager1, base::ObjectBase> (*this, "file-manager1"); }

}; // class

} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/object_extra_def.hpp>)
#include <xdgfilemanager1/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/object_extra.hpp>)
#include <xdgfilemanager1/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

class Object : public GI_XDGFILEMANAGER1_OBJECT_BASE
{ typedef GI_XDGFILEMANAGER1_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace XdgFileManager1

template<> struct declare_cpptype_of<::XdgFileManager1Object>
{ typedef XdgFileManager1::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {


class ObjectIfaceDef
{
typedef ObjectIfaceDef self;
public:
typedef XdgFileManager1::Object instance_type;
typedef ::XdgFileManager1ObjectIface interface_type;


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

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
