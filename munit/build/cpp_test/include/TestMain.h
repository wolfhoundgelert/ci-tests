#ifndef INCLUDED_TestMain
#define INCLUDED_TestMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TestMain)


class HXCPP_CLASS_ATTRIBUTES  TestMain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestMain_obj OBJ_;
		TestMain_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="TestMain")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestMain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestMain_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TestMain","\xcb","\x79","\x3a","\x25"); }

		static Void main( );
		static Dynamic main_dyn();

		virtual Void completionHandler( bool successful);
		Dynamic completionHandler_dyn();

};


#endif /* INCLUDED_TestMain */ 
