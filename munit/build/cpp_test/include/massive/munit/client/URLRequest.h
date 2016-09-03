#ifndef INCLUDED_massive_munit_client_URLRequest
#define INCLUDED_massive_munit_client_URLRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Http)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(massive,munit,client,URLRequest)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  URLRequest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequest_obj OBJ_;
		URLRequest_obj();
		Void __construct(::String url);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.client.URLRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLRequest_obj > __new(::String url);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLRequest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLRequest","\xc0","\x57","\xdd","\x76"); }

		Dynamic onData;
		Dynamic &onData_dyn() { return onData;}
		Dynamic onError;
		Dynamic &onError_dyn() { return onError;}
		Dynamic data;
		::String url;
		::haxe::ds::StringMap headers;
		::haxe::Http client;
		virtual Void createClient( ::String url);
		Dynamic createClient_dyn();

		virtual Void setHeader( ::String name,::String value);
		Dynamic setHeader_dyn();

		virtual Void send( );
		Dynamic send_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_URLRequest */ 
