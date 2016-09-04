#ifndef INCLUDED_ExampleTest
#define INCLUDED_ExampleTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ExampleTest)
HX_DECLARE_CLASS3(massive,munit,async,AsyncFactory)
HX_DECLARE_CLASS3(massive,munit,util,Timer)


class HXCPP_CLASS_ATTRIBUTES  ExampleTest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExampleTest_obj OBJ_;
		ExampleTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ExampleTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExampleTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExampleTest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ExampleTest","\x7c","\xf1","\x08","\xe6"); }

		static void __boot();
		static Dynamic __meta__;
		::massive::munit::util::Timer timer;
		virtual Void beforeClass( );
		Dynamic beforeClass_dyn();

		virtual Void afterClass( );
		Dynamic afterClass_dyn();

		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void tearDown( );
		Dynamic tearDown_dyn();

		virtual Void testExample( );
		Dynamic testExample_dyn();

		virtual Void testAsyncExample( ::massive::munit::async::AsyncFactory factory);
		Dynamic testAsyncExample_dyn();

		virtual Void onTestAsyncExampleComplete( );
		Dynamic onTestAsyncExampleComplete_dyn();

		virtual Void testExampleThatOnlyRunsWithDebugFlag( );
		Dynamic testExampleThatOnlyRunsWithDebugFlag_dyn();

};


#endif /* INCLUDED_ExampleTest */ 
