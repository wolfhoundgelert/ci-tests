#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
namespace massive{
namespace munit{


static ::String sMemberFields[] = {
	HX_HCSTRING("setCurrentTestClass","\xcf","\x86","\x4e","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAdvancedTestResultClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAdvancedTestResultClient_obj::__mClass,"__mClass");
};

#endif

hx::Class IAdvancedTestResultClient_obj::__mClass;

void IAdvancedTestResultClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.IAdvancedTestResultClient","\x5e","\xa3","\xf5","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IAdvancedTestResultClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
