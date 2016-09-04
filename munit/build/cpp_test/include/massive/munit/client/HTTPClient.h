#ifndef INCLUDED_massive_munit_client_HTTPClient
#define INCLUDED_massive_munit_client_HTTPClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS3(massive,munit,client,HTTPClient)
HX_DECLARE_CLASS3(massive,munit,client,URLRequest)
namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES  HTTPClient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HTTPClient_obj OBJ_;
		HTTPClient_obj();
		Void __construct(::massive::munit::ITestResultClient client,::String __o_url,Dynamic __o_queueRequest);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.client.HTTPClient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTTPClient_obj > __new(::massive::munit::ITestResultClient client,::String __o_url,Dynamic __o_queueRequest);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPClient_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::massive::munit::ITestResultClient_obj *();
		operator ::massive::munit::IAdvancedTestResultClient_obj *();
		::String __ToString() const { return HX_HCSTRING("HTTPClient","\xf3","\xf7","\x4e","\x4e"); }

		static void __boot();
		static Array< ::Dynamic > queue;
		static bool responsePending;
		static Void dispatchNextRequest( );
		static Dynamic dispatchNextRequest_dyn();

		::String id;
		Dynamic completionHandler;
		Dynamic &completionHandler_dyn() { return completionHandler;}
		virtual Dynamic get_completionHandler( );
		Dynamic get_completionHandler_dyn();

		virtual Dynamic set_completionHandler( Dynamic value);
		Dynamic set_completionHandler_dyn();

		::massive::munit::ITestResultClient client;
		::String url;
		::massive::munit::client::URLRequest request;
		bool queueRequest;
		virtual Void setCurrentTestClass( ::String className);
		Dynamic setCurrentTestClass_dyn();

		virtual Void addPass( ::massive::munit::TestResult result);
		Dynamic addPass_dyn();

		virtual Void addFail( ::massive::munit::TestResult result);
		Dynamic addFail_dyn();

		virtual Void addError( ::massive::munit::TestResult result);
		Dynamic addError_dyn();

		virtual Void addIgnore( ::massive::munit::TestResult result);
		Dynamic addIgnore_dyn();

		virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);
		Dynamic reportFinalStatistics_dyn();

		virtual Void sendResult( Dynamic result);
		Dynamic sendResult_dyn();

		virtual ::String platform( );
		Dynamic platform_dyn();

		virtual Void onData( ::String data);
		Dynamic onData_dyn();

		virtual Void onError( ::String msg);
		Dynamic onError_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_HTTPClient */ 
