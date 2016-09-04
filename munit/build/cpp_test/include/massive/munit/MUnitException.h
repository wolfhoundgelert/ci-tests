#ifndef INCLUDED_massive_munit_MUnitException
#define INCLUDED_massive_munit_MUnitException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
HX_DECLARE_CLASS2(massive,haxe,Exception)
HX_DECLARE_CLASS2(massive,munit,MUnitException)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  MUnitException_obj : public ::massive::haxe::Exception_obj{
	public:
		typedef ::massive::haxe::Exception_obj super;
		typedef MUnitException_obj OBJ_;
		MUnitException_obj();
		Void __construct(::String message,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.MUnitException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MUnitException_obj > __new(::String message,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MUnitException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MUnitException","\x9e","\x18","\xb2","\xdf"); }

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_MUnitException */ 
