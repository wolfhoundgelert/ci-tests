#ifndef INCLUDED_massive_munit_async_AsyncFactory
#define INCLUDED_massive_munit_async_AsyncFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,munit,async,AsyncFactory)
HX_DECLARE_CLASS3(massive,munit,async,IAsyncDelegateObserver)
namespace massive{
namespace munit{
namespace async{


class HXCPP_CLASS_ATTRIBUTES  AsyncFactory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AsyncFactory_obj OBJ_;
		AsyncFactory_obj();
		Void __construct(::massive::munit::async::IAsyncDelegateObserver observer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.async.AsyncFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AsyncFactory_obj > __new(::massive::munit::async::IAsyncDelegateObserver observer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AsyncFactory_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AsyncFactory","\x0e","\x31","\x1e","\xb0"); }

		::massive::munit::async::IAsyncDelegateObserver observer;
		int asyncDelegateCount;
		virtual Dynamic createHandler( Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info);
		Dynamic createHandler_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace async

#endif /* INCLUDED_massive_munit_async_AsyncFactory */ 
