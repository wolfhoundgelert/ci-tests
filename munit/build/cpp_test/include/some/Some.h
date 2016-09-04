#ifndef INCLUDED_some_Some
#define INCLUDED_some_Some

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(some,Some)
namespace some{


class HXCPP_CLASS_ATTRIBUTES  Some_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Some_obj OBJ_;
		Some_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="some.Some")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Some_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Some_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Some","\x14","\x4f","\x31","\x37"); }

		static Float _double( Float value);
		static Dynamic _double_dyn();

};

} // end namespace some

#endif /* INCLUDED_some_Some */ 
