#ifndef INCLUDED_massive_munit_TestResult
#define INCLUDED_massive_munit_TestResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,haxe,Exception)
HX_DECLARE_CLASS2(massive,munit,AssertionException)
HX_DECLARE_CLASS2(massive,munit,MUnitException)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS2(massive,munit,TestResultType)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  TestResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestResult_obj OBJ_;
		TestResult_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.TestResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestResult_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestResult","\xef","\xb2","\x29","\x18"); }

		bool passed;
		Float executionTime;
		::String name;
		::String className;
		::String description;
		::String location;
		virtual ::String get_location( );
		Dynamic get_location_dyn();

		bool async;
		bool ignore;
		::massive::munit::AssertionException failure;
		Dynamic error;
		::massive::munit::TestResultType type;
		virtual ::massive::munit::TestResultType get_type( );
		Dynamic get_type_dyn();

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_TestResult */ 
