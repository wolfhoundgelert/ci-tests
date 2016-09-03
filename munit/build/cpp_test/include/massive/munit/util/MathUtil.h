#ifndef INCLUDED_massive_munit_util_MathUtil
#define INCLUDED_massive_munit_util_MathUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,munit,util,MathUtil)
namespace massive{
namespace munit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  MathUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MathUtil_obj OBJ_;
		MathUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="massive.munit.util.MathUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MathUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MathUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MathUtil","\x0a","\x06","\x68","\x71"); }

		static Float round( Float value,int precision);
		static Dynamic round_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace util

#endif /* INCLUDED_massive_munit_util_MathUtil */ 
