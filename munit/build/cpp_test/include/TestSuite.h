#ifndef INCLUDED_TestSuite
#define INCLUDED_TestSuite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
HX_DECLARE_CLASS0(TestSuite)
HX_DECLARE_CLASS2(massive,munit,TestSuite)


class HXCPP_CLASS_ATTRIBUTES  TestSuite_obj : public ::massive::munit::TestSuite_obj{
	public:
		typedef ::massive::munit::TestSuite_obj super;
		typedef TestSuite_obj OBJ_;
		TestSuite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="TestSuite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestSuite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestSuite_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TestSuite","\xe6","\xdc","\x8f","\xef"); }

};


#endif /* INCLUDED_TestSuite */ 
