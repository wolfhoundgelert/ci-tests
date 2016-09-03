#ifndef INCLUDED_test_some_SomeTest
#define INCLUDED_test_some_SomeTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(test,some,SomeTest)
namespace test{
namespace some{


class HXCPP_CLASS_ATTRIBUTES  SomeTest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SomeTest_obj OBJ_;
		SomeTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="test.some.SomeTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SomeTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SomeTest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SomeTest","\x86","\x5d","\x5b","\x87"); }

		static void __boot();
		static Dynamic __meta__;
		virtual Void _double( );
		Dynamic _double_dyn();

};

} // end namespace test
} // end namespace some

#endif /* INCLUDED_test_some_SomeTest */ 
