#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#define INCLUDED_massive_haxe_util_ReflectUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,haxe,util,ReflectUtil)
namespace massive{
namespace haxe{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ReflectUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ReflectUtil_obj OBJ_;
		ReflectUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="massive.haxe.util.ReflectUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ReflectUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ReflectUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ReflectUtil","\xbf","\x02","\x67","\x52"); }

		static Dynamic here( Dynamic info);
		static Dynamic here_dyn();

};

} // end namespace massive
} // end namespace haxe
} // end namespace util

#endif /* INCLUDED_massive_haxe_util_ReflectUtil */ 
