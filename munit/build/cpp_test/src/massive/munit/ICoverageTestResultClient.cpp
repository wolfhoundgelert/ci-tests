#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
namespace massive{
namespace munit{


static ::String sMemberFields[] = {
	HX_HCSTRING("setCurrentTestClassCoverage","\xd7","\x3b","\xb4","\x88"),
	HX_HCSTRING("reportFinalCoverage","\x2a","\xc6","\x68","\x9d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ICoverageTestResultClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ICoverageTestResultClient_obj::__mClass,"__mClass");
};

#endif

hx::Class ICoverageTestResultClient_obj::__mClass;

void ICoverageTestResultClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.ICoverageTestResultClient","\xa4","\xb7","\x7f","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ICoverageTestResultClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
