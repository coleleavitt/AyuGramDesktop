// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_OBJECTSKELETON_HPP_
#define _GI_XDGFILEMANAGER1_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgFileManager1 {

class FileManager1;
class Object;

class ObjectSkeleton;

namespace base {


#define GI_XDGFILEMANAGER1_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::XdgFileManager1ObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_file_manager1_object_skeleton_get_type(); } 

GI_INLINE_DECL XdgFileManager1::Object interface_ (gi::interface_tag<XdgFileManager1::Object>);

GI_INLINE_DECL operator XdgFileManager1::Object ();

// XdgFileManager1ObjectSkeleton* /*full*/ xdg_file_manager1_object_skeleton_new (const gchar* object_path /*none*/);
// ::XdgFileManager1ObjectSkeleton* /*full*/ xdg_file_manager1_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL XdgFileManager1::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void xdg_file_manager1_object_skeleton_set_file_manager1 (XdgFileManager1ObjectSkeleton* object /*none*/, XdgFileManager1FileManager1* interface_ /*none,nullable*/);
// void xdg_file_manager1_object_skeleton_set_file_manager1 (::XdgFileManager1ObjectSkeleton* object /*none*/, ::XdgFileManager1FileManager1* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_file_manager1 (XdgFileManager1::FileManager1 interface_) noexcept;
GI_INLINE_DECL void set_file_manager1 () noexcept;

}; // class

} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectskeleton_extra_def.hpp>)
#include <xdgfilemanager1/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/objectskeleton_extra.hpp>)
#include <xdgfilemanager1/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

class ObjectSkeleton : public GI_XDGFILEMANAGER1_OBJECTSKELETON_BASE
{ typedef GI_XDGFILEMANAGER1_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgFileManager1

template<> struct declare_cpptype_of<::XdgFileManager1ObjectSkeleton>
{ typedef XdgFileManager1::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef XdgFileManager1::ObjectSkeleton instance_type;
typedef ::XdgFileManager1ObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<XdgFileManager1::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdgFileManager1::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<XdgFileManager1::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, XdgFileManager1::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgFileManager1::impl::internal::ObjectIfaceClassImpl XdgFileManager1ObjectIface_type;



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

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
