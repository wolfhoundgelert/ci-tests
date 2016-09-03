#ifndef INCLUDED_test_some_AnotherOneTest
#define INCLUDED_test_some_AnotherOneTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(test,some,AnotherOneTest)
namespace test{
namespace some{


class HXCPP_CLASS_ATTRIBUTES  AnotherOneTest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnotherOneTest_obj OBJ_;
		AnotherOneTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="test.some.AnotherOneTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnotherOneTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnotherOneTest_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AnotherOneTest","\x75","\x0d","\x24","\x4d"); }

};

} // end namespace test
} // end namespace some

#endif /* INCLUDED_test_some_AnotherOneTest */ 
