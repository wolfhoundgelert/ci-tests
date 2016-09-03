#ifndef INCLUDED_test_some_AnotherTest
#define INCLUDED_test_some_AnotherTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(test,some,AnotherTest)
namespace test{
namespace some{


class HXCPP_CLASS_ATTRIBUTES  AnotherTest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnotherTest_obj OBJ_;
		AnotherTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="test.some.AnotherTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnotherTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnotherTest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AnotherTest","\x95","\xc0","\x45","\xdc"); }

		static void __boot();
		static Dynamic __meta__;
		virtual Void triple( );
		Dynamic triple_dyn();

};

} // end namespace test
} // end namespace some

#endif /* INCLUDED_test_some_AnotherTest */ 
