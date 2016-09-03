#ifndef INCLUDED_org_hamcrest_Exception
#define INCLUDED_org_hamcrest_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,hamcrest,Exception)
namespace org{
namespace hamcrest{


class HXCPP_CLASS_ATTRIBUTES  Exception_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();
		Void __construct(::String __o_message,Dynamic cause,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.hamcrest.Exception")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Exception_obj > __new(::String __o_message,Dynamic cause,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Exception_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Exception","\x2f","\xf0","\x6c","\xeb"); }

		::String name;
		virtual ::String get_name( );
		Dynamic get_name_dyn();

		::String message;
		virtual ::String get_message( );
		Dynamic get_message_dyn();

		Dynamic cause;
		virtual Dynamic get_cause( );
		Dynamic get_cause_dyn();

		Dynamic info;
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace org
} // end namespace hamcrest

#endif /* INCLUDED_org_hamcrest_Exception */ 
