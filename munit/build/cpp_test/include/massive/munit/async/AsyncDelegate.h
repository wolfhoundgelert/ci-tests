#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#define INCLUDED_massive_munit_async_AsyncDelegate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,munit,async,AsyncDelegate)
HX_DECLARE_CLASS3(massive,munit,async,IAsyncDelegateObserver)
HX_DECLARE_CLASS3(massive,munit,util,Timer)
namespace massive{
namespace munit{
namespace async{


class HXCPP_CLASS_ATTRIBUTES  AsyncDelegate_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AsyncDelegate_obj OBJ_;
		AsyncDelegate_obj();
		Void __construct(Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.async.AsyncDelegate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AsyncDelegate_obj > __new(Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AsyncDelegate_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AsyncDelegate","\x81","\x9e","\x1a","\x8f"); }

		static void __boot();
		static int DEFAULT_TIMEOUT;
		::massive::munit::async::IAsyncDelegateObserver observer;
		Dynamic info;
		Dynamic delegateHandler;
		int timeoutDelay;
		bool timedOut;
		Dynamic testCase;
		Dynamic handler;
		::massive::munit::util::Timer timer;
		bool canceled;
		::massive::munit::util::Timer deferredTimer;
		cpp::ArrayBase params;
		virtual Void runTest( );
		Dynamic runTest_dyn();

		virtual Void cancelTest( );
		Dynamic cancelTest_dyn();

		virtual Dynamic responseHandler( cpp::ArrayBase params);
		Dynamic responseHandler_dyn();

		virtual Void delayActualResponseHandler( );
		Dynamic delayActualResponseHandler_dyn();

		virtual Void timeoutHandler( );
		Dynamic timeoutHandler_dyn();

		virtual Void actualTimeoutHandler( );
		Dynamic actualTimeoutHandler_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace async

#endif /* INCLUDED_massive_munit_async_AsyncDelegate */ 
