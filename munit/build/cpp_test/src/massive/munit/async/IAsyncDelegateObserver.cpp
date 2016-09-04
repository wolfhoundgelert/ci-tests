#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
namespace massive{
namespace munit{
namespace async{


static ::String sMemberFields[] = {
	HX_HCSTRING("asyncResponseHandler","\x6d","\xf7","\xc5","\x95"),
	HX_HCSTRING("asyncTimeoutHandler","\x85","\x07","\xce","\x5f"),
	HX_HCSTRING("asyncDelegateCreatedHandler","\x43","\x09","\x50","\xa7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAsyncDelegateObserver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAsyncDelegateObserver_obj::__mClass,"__mClass");
};

#endif

hx::Class IAsyncDelegateObserver_obj::__mClass;

void IAsyncDelegateObserver_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.async.IAsyncDelegateObserver","\xa7","\xd1","\x3c","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IAsyncDelegateObserver_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
} // end namespace async
