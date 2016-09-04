#ifndef INCLUDED_some_Another
#define INCLUDED_some_Another

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(some,Another)
namespace some{


class HXCPP_CLASS_ATTRIBUTES  Another_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Another_obj OBJ_;
		Another_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="some.Another")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Another_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Another_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Another","\xa3","\x3e","\xab","\xc0"); }

		virtual Float triple( Float value);
		Dynamic triple_dyn();

};

} // end namespace some

#endif /* INCLUDED_some_Another */ 
