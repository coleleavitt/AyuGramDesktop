// AUTO-GENERATED

#ifndef _GI_XDGFILEMANAGER1_FILEMANAGER1SKELETON_HPP_
#define _GI_XDGFILEMANAGER1_FILEMANAGER1SKELETON_HPP_


namespace gi {

namespace repository {

namespace XdgFileManager1 {

class FileManager1;

class FileManager1Skeleton;

namespace base {


#define GI_XDGFILEMANAGER1_FILEMANAGER1SKELETON_BASE base::FileManager1SkeletonBase
class FileManager1SkeletonBase : public Gio::DBusInterfaceSkeleton
{
typedef Gio::DBusInterfaceSkeleton super_type;
public:
typedef ::XdgFileManager1FileManager1Skeleton BaseObjectType;

FileManager1SkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return xdg_file_manager1_file_manager1_skeleton_get_type(); } 

GI_INLINE_DECL XdgFileManager1::FileManager1 interface_ (gi::interface_tag<XdgFileManager1::FileManager1>);

GI_INLINE_DECL operator XdgFileManager1::FileManager1 ();

// XdgFileManager1FileManager1* /*full*/ xdg_file_manager1_file_manager1_skeleton_new ();
// ::XdgFileManager1FileManager1Skeleton* /*full*/ xdg_file_manager1_file_manager1_skeleton_new ();
static GI_INLINE_DECL XdgFileManager1::FileManager1Skeleton new_ () noexcept;

}; // class

} // namespace base

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1skeleton_extra_def.hpp>)
#include <xdgfilemanager1/filemanager1skeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<xdgfilemanager1/filemanager1skeleton_extra.hpp>)
#include <xdgfilemanager1/filemanager1skeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace XdgFileManager1 {

class FileManager1Skeleton : public GI_XDGFILEMANAGER1_FILEMANAGER1SKELETON_BASE
{ typedef GI_XDGFILEMANAGER1_FILEMANAGER1SKELETON_BASE super_type; using super_type::super_type; };

} // namespace XdgFileManager1

template<> struct declare_cpptype_of<::XdgFileManager1FileManager1Skeleton>
{ typedef XdgFileManager1::FileManager1Skeleton type; }; 

} // namespace repository

} // namespace gi

#include "filemanager1.hpp"

namespace gi {

namespace repository {

namespace XdgFileManager1 {

namespace impl {

namespace internal {


class FileManager1SkeletonClassDef
{
typedef FileManager1SkeletonClassDef self;
public:
typedef XdgFileManager1::FileManager1Skeleton instance_type;
typedef ::XdgFileManager1FileManager1SkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~FileManager1SkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileManager1SkeletonClass: public detail::ClassTemplate<XdgFileManager1::impl::internal::FileManager1SkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgFileManager1::impl::internal::FileManager1IfaceClassImpl>
{
friend class internal::FileManager1SkeletonClassDef;
typedef FileManager1SkeletonClass self;
typedef detail::ClassTemplate<XdgFileManager1::impl::internal::FileManager1SkeletonClassDef, Gio::impl::internal::DBusInterfaceSkeletonClass, XdgFileManager1::impl::internal::FileManager1IfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef XdgFileManager1::impl::internal::FileManager1IfaceClassImpl XdgFileManager1FileManager1Iface_type;



};


struct FileManager1SkeletonClassDef::TypeInitData
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

using FileManager1SkeletonImpl = detail::ObjectImpl<FileManager1Skeleton, internal::FileManager1SkeletonClass>;

} // namespace impl

} // namespace XdgFileManager1

} // namespace repository

} // namespace gi

#endif
