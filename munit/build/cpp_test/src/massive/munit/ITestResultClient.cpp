#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
namespace massive{
namespace munit{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_completionHandler","\xe5","\xea","\x60","\xda"),
	HX_HCSTRING("set_completionHandler","\xf1","\xb8","\x69","\x2e"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("addPass","\x92","\x27","\x8f","\x86"),
	HX_HCSTRING("addFail","\x9f","\xfc","\xf2","\x7f"),
	HX_HCSTRING("addError","\xe7","\xf1","\x86","\xec"),
	HX_HCSTRING("addIgnore","\x13","\xee","\xec","\x4a"),
	HX_HCSTRING("reportFinalStatistics","\xe5","\x9f","\x5e","\x0c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ITestResultClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ITestResultClient_obj::__mClass,"__mClass");
};

#endif

hx::Class ITestResultClient_obj::__mClass;

void ITestResultClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.ITestResultClient","\x9c","\x87","\x65","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ITestResultClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
