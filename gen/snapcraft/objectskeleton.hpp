// AUTO-GENERATED

#ifndef _GI_SNAPCRAFT_OBJECTSKELETON_HPP_
#define _GI_SNAPCRAFT_OBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace Snapcraft {

class Object;
class Settings;

class ObjectSkeleton;

namespace base {


#define GI_SNAPCRAFT_OBJECTSKELETON_BASE base::ObjectSkeletonBase
class ObjectSkeletonBase : public Gio::DBusObjectSkeleton
{
typedef Gio::DBusObjectSkeleton super_type;
public:
typedef ::SnapcraftObjectSkeleton BaseObjectType;

ObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return snapcraft_object_skeleton_get_type(); } 

GI_INLINE_DECL Snapcraft::Object interface_ (gi::interface_tag<Snapcraft::Object>);

GI_INLINE_DECL operator Snapcraft::Object ();

// SnapcraftObjectSkeleton* /*full*/ snapcraft_object_skeleton_new (const gchar* object_path /*none*/);
// ::SnapcraftObjectSkeleton* /*full*/ snapcraft_object_skeleton_new (const char* object_path /*none*/);
static GI_INLINE_DECL Snapcraft::ObjectSkeleton new_ (const gi::cstring_v object_path) noexcept;

// void snapcraft_object_skeleton_set_settings (SnapcraftObjectSkeleton* object /*none*/, SnapcraftSettings* interface_ /*none,nullable*/);
// void snapcraft_object_skeleton_set_settings (::SnapcraftObjectSkeleton* object /*none*/, ::SnapcraftSettings* interface_ /*none,nullable*/);
GI_INLINE_DECL void set_settings (Snapcraft::Settings interface_) noexcept;
GI_INLINE_DECL void set_settings () noexcept;

}; // class

} // namespace base

} // namespace Snapcraft

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<snapcraft/objectskeleton_extra_def.hpp>)
#include <snapcraft/objectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<snapcraft/objectskeleton_extra.hpp>)
#include <snapcraft/objectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Snapcraft {

class ObjectSkeleton : public GI_SNAPCRAFT_OBJECTSKELETON_BASE
{ typedef GI_SNAPCRAFT_OBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Snapcraft

template<> struct declare_cpptype_of<::SnapcraftObjectSkeleton>
{ typedef Snapcraft::ObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "object.hpp"

namespace gi {

namespace repository {

namespace Snapcraft {

namespace impl {

namespace internal {


class ObjectSkeletonClassDef
{
typedef ObjectSkeletonClassDef self;
public:
typedef Snapcraft::ObjectSkeleton instance_type;
typedef ::SnapcraftObjectSkeletonClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~ObjectSkeletonClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ObjectSkeletonClass: public detail::ClassTemplate<Snapcraft::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, Snapcraft::impl::internal::ObjectIfaceClassImpl>
{
friend class internal::ObjectSkeletonClassDef;
typedef ObjectSkeletonClass self;
typedef detail::ClassTemplate<Snapcraft::impl::internal::ObjectSkeletonClassDef, Gio::impl::internal::DBusObjectSkeletonClass, Snapcraft::impl::internal::ObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Snapcraft::impl::internal::ObjectIfaceClassImpl SnapcraftObjectIface_type;



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

} // namespace Snapcraft

} // namespace repository

} // namespace gi

#endif
