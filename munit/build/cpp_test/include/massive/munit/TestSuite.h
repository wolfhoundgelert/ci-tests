#ifndef INCLUDED_massive_munit_TestSuite
#define INCLUDED_massive_munit_TestSuite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,munit,TestSuite)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  TestSuite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestSuite_obj OBJ_;
		TestSuite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.TestSuite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestSuite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestSuite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestSuite","\xe6","\xdc","\x8f","\xef"); }

		cpp::ArrayBase tests;
		int index;
		virtual Void add( ::hx::Class test);
		Dynamic add_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::hx::Class next( );
		Dynamic next_dyn();

		virtual Void repeat( );
		Dynamic repeat_dyn();

		virtual Void sortTests( );
		Dynamic sortTests_dyn();

		virtual int sortByName( ::hx::Class x,::hx::Class y);
		Dynamic sortByName_dyn();

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_TestSuite */ 
