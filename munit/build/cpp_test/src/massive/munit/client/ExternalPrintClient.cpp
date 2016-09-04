#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
namespace massive{
namespace munit{
namespace client{


static ::String sMemberFields[] = {
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("setResult","\x1f","\xde","\x2b","\x68"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	HX_HCSTRING("setResultBackground","\xed","\xf2","\xaa","\x04"),
	HX_HCSTRING("createTestClass","\xea","\x6f","\x4f","\xb2"),
	HX_HCSTRING("printToTestClassSummary","\x68","\x2c","\xb5","\x5d"),
	HX_HCSTRING("setTestClassResult","\x81","\x0e","\x11","\x64"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	HX_HCSTRING("addTestPass","\x84","\xa1","\xe0","\x7e"),
	HX_HCSTRING("addTestFail","\x91","\x76","\x44","\x78"),
	HX_HCSTRING("addTestError","\xb5","\x2b","\x80","\x3b"),
	HX_HCSTRING("addTestIgnore","\x85","\x48","\x06","\x16"),
	HX_HCSTRING("addTestClassCoverage","\x2d","\xd3","\x66","\x3d"),
	HX_HCSTRING("addTestClassCoverageItem","\xe0","\x5e","\x6d","\x8e"),
	HX_HCSTRING("createCoverageReport","\xd8","\xdc","\x75","\x4e"),
	HX_HCSTRING("addMissingCoverageClass","\xab","\xea","\x0b","\x44"),
	HX_HCSTRING("addCoverageReportSection","\xa8","\x70","\x2f","\x99"),
	HX_HCSTRING("addCoverageSummary","\xfd","\x50","\xb3","\x69"),
	HX_HCSTRING("printSummary","\x79","\xea","\x27","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalPrintClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalPrintClient_obj::__mClass,"__mClass");
};

#endif

hx::Class ExternalPrintClient_obj::__mClass;

void ExternalPrintClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.ExternalPrintClient","\x31","\x92","\x8a","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExternalPrintClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
} // end namespace client
