#ifndef INCLUDED_massive_munit_TestRunner
#define INCLUDED_massive_munit_TestRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestClassHelper)
HX_DECLARE_CLASS2(massive,munit,TestRunner)
HX_DECLARE_CLASS2(massive,munit,TestSuite)
HX_DECLARE_CLASS3(massive,munit,async,AsyncDelegate)
HX_DECLARE_CLASS3(massive,munit,async,AsyncFactory)
HX_DECLARE_CLASS3(massive,munit,async,IAsyncDelegateObserver)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  TestRunner_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestRunner_obj OBJ_;
		TestRunner_obj();
		Void __construct(::massive::munit::ITestResultClient resultClient);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.TestRunner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestRunner_obj > __new(::massive::munit::ITestResultClient resultClient);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestRunner_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::massive::munit::async::IAsyncDelegateObserver_obj *();
		::String __ToString() const { return HX_HCSTRING("TestRunner","\x02","\x94","\x3f","\x4b"); }

		Dynamic completionHandler;
		Dynamic &completionHandler_dyn() { return completionHandler;}
		int clientCount;
		virtual int get_clientCount( );
		Dynamic get_clientCount_dyn();

		bool running;
		int testCount;
		int failCount;
		int errorCount;
		int passCount;
		int ignoreCount;
		int clientCompleteCount;
		Array< ::massive::munit::ITestResultClient > clients;
		::massive::munit::TestClassHelper activeHelper;
		Array< ::Dynamic > testSuites;
		bool asyncPending;
		::massive::munit::async::AsyncDelegate asyncDelegate;
		int suiteIndex;
		::massive::munit::async::AsyncFactory asyncFactory;
		virtual ::massive::munit::async::AsyncFactory set_asyncFactory( ::massive::munit::async::AsyncFactory value);
		Dynamic set_asyncFactory_dyn();

		cpp::ArrayBase emptyParams;
		Float startTime;
		Float testStartTime;
		bool isDebug;
		virtual Void addResultClient( ::massive::munit::ITestResultClient resultClient);
		Dynamic addResultClient_dyn();

		virtual Void debug( Array< ::Dynamic > testSuiteClasses);
		Dynamic debug_dyn();

		virtual Void run( Array< ::Dynamic > testSuiteClasses);
		Dynamic run_dyn();

		virtual Void execute( );
		Dynamic execute_dyn();

		virtual Void executeTestCases( );
		Dynamic executeTestCases_dyn();

		virtual Void executeTestCase( Dynamic testCaseData,bool async);
		Dynamic executeTestCase_dyn();

		virtual Void clientCompletionHandler( ::massive::munit::ITestResultClient resultClient);
		Dynamic clientCompletionHandler_dyn();

		virtual Void asyncResponseHandler( ::massive::munit::async::AsyncDelegate delegate);
		Dynamic asyncResponseHandler_dyn();

		virtual Void asyncTimeoutHandler( ::massive::munit::async::AsyncDelegate delegate);
		Dynamic asyncTimeoutHandler_dyn();

		virtual Void asyncDelegateCreatedHandler( ::massive::munit::async::AsyncDelegate delegate);
		Dynamic asyncDelegateCreatedHandler_dyn();

		virtual ::massive::munit::async::AsyncFactory createAsyncFactory( );
		Dynamic createAsyncFactory_dyn();

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_TestRunner */ 
