#ifndef INCLUDED_org_hamcrest_AssertionException
#define INCLUDED_org_hamcrest_AssertionException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
HX_DECLARE_CLASS2(org,hamcrest,AssertionException)
HX_DECLARE_CLASS2(org,hamcrest,Exception)
namespace org{
namespace hamcrest{


class HXCPP_CLASS_ATTRIBUTES  AssertionException_obj : public ::org::hamcrest::Exception_obj{
	public:
		typedef ::org::hamcrest::Exception_obj super;
		typedef AssertionException_obj OBJ_;
		AssertionException_obj();
		Void __construct(::String __o_message,Dynamic cause,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.hamcrest.AssertionException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssertionException_obj > __new(::String __o_message,Dynamic cause,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssertionException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssertionException","\x4d","\x65","\x98","\x70"); }

};

} // end namespace org
} // end namespace hamcrest

#endif /* INCLUDED_org_hamcrest_AssertionException */ 
