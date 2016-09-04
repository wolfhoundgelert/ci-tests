#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#define INCLUDED_massive_munit_async_IAsyncDelegateObserver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,munit,async,AsyncDelegate)
HX_DECLARE_CLASS3(massive,munit,async,IAsyncDelegateObserver)
namespace massive{
namespace munit{
namespace async{


class HXCPP_CLASS_ATTRIBUTES  IAsyncDelegateObserver_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAsyncDelegateObserver_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void asyncResponseHandler( ::massive::munit::async::AsyncDelegate delegate)=0;
virtual Dynamic asyncResponseHandler_dyn()=0;
		virtual Void asyncTimeoutHandler( ::massive::munit::async::AsyncDelegate delegate)=0;
virtual Dynamic asyncTimeoutHandler_dyn()=0;
		virtual Void asyncDelegateCreatedHandler( ::massive::munit::async::AsyncDelegate delegate)=0;
virtual Dynamic asyncDelegateCreatedHandler_dyn()=0;
};



template<typename IMPL>
class IAsyncDelegateObserver_delegate_ : public IAsyncDelegateObserver_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAsyncDelegateObserver_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void asyncResponseHandler( ::massive::munit::async::AsyncDelegate delegate) { return mDelegate->asyncResponseHandler(delegate);}
		Dynamic asyncResponseHandler_dyn() { return mDelegate->asyncResponseHandler_dyn();}
		Void asyncTimeoutHandler( ::massive::munit::async::AsyncDelegate delegate) { return mDelegate->asyncTimeoutHandler(delegate);}
		Dynamic asyncTimeoutHandler_dyn() { return mDelegate->asyncTimeoutHandler_dyn();}
		Void asyncDelegateCreatedHandler( ::massive::munit::async::AsyncDelegate delegate) { return mDelegate->asyncDelegateCreatedHandler(delegate);}
		Dynamic asyncDelegateCreatedHandler_dyn() { return mDelegate->asyncDelegateCreatedHandler_dyn();}
};

} // end namespace massive
} // end namespace munit
} // end namespace async

#endif /* INCLUDED_massive_munit_async_IAsyncDelegateObserver */ 
