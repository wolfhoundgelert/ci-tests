#ifndef INCLUDED_haxe_Http
#define INCLUDED_haxe_Http

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,Http)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Http_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Http_obj OBJ_;
		Http_obj();
		Void __construct(::String url);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.Http")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Http_obj > __new(::String url);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Http_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Http","\xa8","\xc7","\xef","\x2f"); }

		static void __boot();
		static Dynamic PROXY;
		::String url;
		::String responseData;
		bool noShutdown;
		Float cnxTimeout;
		::haxe::ds::StringMap responseHeaders;
		Dynamic chunk_size;
		::haxe::io::Bytes chunk_buf;
		Dynamic file;
		::String postData;
		::List headers;
		::List params;
		virtual ::haxe::Http setHeader( ::String header,::String value);
		Dynamic setHeader_dyn();

		virtual ::haxe::Http setParameter( ::String param,::String value);
		Dynamic setParameter_dyn();

		virtual Void request( Dynamic post);
		Dynamic request_dyn();

		virtual Void customRequest( bool post,::haxe::io::Output api,Dynamic sock,::String method);
		Dynamic customRequest_dyn();

		virtual Void readHttpResponse( ::haxe::io::Output api,Dynamic sock);
		Dynamic readHttpResponse_dyn();

		virtual bool readChunk( ::EReg chunk_re,::haxe::io::Output api,::haxe::io::Bytes buf,int len);
		Dynamic readChunk_dyn();

		Dynamic onData;
		inline Dynamic &onData_dyn() {return onData; }

		Dynamic onError;
		inline Dynamic &onError_dyn() {return onError; }

		Dynamic onStatus;
		inline Dynamic &onStatus_dyn() {return onStatus; }

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Http */ 
