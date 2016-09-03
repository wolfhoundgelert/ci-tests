#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
namespace massive{
namespace munit{

::massive::munit::TestResultType TestResultType_obj::ERROR;

::massive::munit::TestResultType TestResultType_obj::FAIL;

::massive::munit::TestResultType TestResultType_obj::IGNORE;

::massive::munit::TestResultType TestResultType_obj::PASS;

::massive::munit::TestResultType TestResultType_obj::UNKNOWN;

HX_DEFINE_CREATE_ENUM(TestResultType_obj)

int TestResultType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return 3;
	if (inName==HX_HCSTRING("FAIL","\xde","\x81","\x76","\x2e")) return 2;
	if (inName==HX_HCSTRING("IGNORE","\x12","\x65","\x4b","\x45")) return 4;
	if (inName==HX_HCSTRING("PASS","\xd1","\xac","\x12","\x35")) return 1;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 0;
	return super::__FindIndex(inName);
}

int TestResultType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return 0;
	if (inName==HX_HCSTRING("FAIL","\xde","\x81","\x76","\x2e")) return 0;
	if (inName==HX_HCSTRING("IGNORE","\x12","\x65","\x4b","\x45")) return 0;
	if (inName==HX_HCSTRING("PASS","\xd1","\xac","\x12","\x35")) return 0;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TestResultType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return ERROR;
	if (inName==HX_HCSTRING("FAIL","\xde","\x81","\x76","\x2e")) return FAIL;
	if (inName==HX_HCSTRING("IGNORE","\x12","\x65","\x4b","\x45")) return IGNORE;
	if (inName==HX_HCSTRING("PASS","\xd1","\xac","\x12","\x35")) return PASS;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),
	HX_HCSTRING("PASS","\xd1","\xac","\x12","\x35"),
	HX_HCSTRING("FAIL","\xde","\x81","\x76","\x2e"),
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	HX_HCSTRING("IGNORE","\x12","\x65","\x4b","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestResultType_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(TestResultType_obj::FAIL,"FAIL");
	HX_MARK_MEMBER_NAME(TestResultType_obj::IGNORE,"IGNORE");
	HX_MARK_MEMBER_NAME(TestResultType_obj::PASS,"PASS");
	HX_MARK_MEMBER_NAME(TestResultType_obj::UNKNOWN,"UNKNOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestResultType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::FAIL,"FAIL");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::IGNORE,"IGNORE");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::PASS,"PASS");
	HX_VISIT_MEMBER_NAME(TestResultType_obj::UNKNOWN,"UNKNOWN");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TestResultType_obj::__mClass;

Dynamic __Create_TestResultType_obj() { return new TestResultType_obj; }

void TestResultType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("massive.munit.TestResultType","\xf0","\xa0","\x6b","\xb4"), hx::TCanCast< TestResultType_obj >,sStaticFields,sMemberFields,
	&__Create_TestResultType_obj, &__Create,
	&super::__SGetClass(), &CreateTestResultType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TestResultType_obj::__boot()
{
hx::Static(ERROR) = hx::CreateEnum< TestResultType_obj >(HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),3);
hx::Static(FAIL) = hx::CreateEnum< TestResultType_obj >(HX_HCSTRING("FAIL","\xde","\x81","\x76","\x2e"),2);
hx::Static(IGNORE) = hx::CreateEnum< TestResultType_obj >(HX_HCSTRING("IGNORE","\x12","\x65","\x4b","\x45"),4);
hx::Static(PASS) = hx::CreateEnum< TestResultType_obj >(HX_HCSTRING("PASS","\xd1","\xac","\x12","\x35"),1);
hx::Static(UNKNOWN) = hx::CreateEnum< TestResultType_obj >(HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),0);
}


} // end namespace massive
} // end namespace munit
