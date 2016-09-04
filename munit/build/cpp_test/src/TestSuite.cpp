#include <hxcpp.h>

#ifndef INCLUDED_ExampleTest
#include <ExampleTest.h>
#endif
#ifndef INCLUDED_TestSuite
#include <TestSuite.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
#ifndef INCLUDED_test_some_AnotherOneTest
#include <test/some/AnotherOneTest.h>
#endif
#ifndef INCLUDED_test_some_AnotherTest
#include <test/some/AnotherTest.h>
#endif
#ifndef INCLUDED_test_some_SomeTest
#include <test/some/SomeTest.h>
#endif

Void TestSuite_obj::__construct()
{
HX_STACK_FRAME("TestSuite","new",0x1792e8d8,"TestSuite.new","TestSuite.hx",17,0xf6ebf998)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->add(hx::ClassOf< ::ExampleTest >());
	HX_STACK_LINE(21)
	this->add(hx::ClassOf< ::test::some::AnotherOneTest >());
	HX_STACK_LINE(22)
	this->add(hx::ClassOf< ::test::some::AnotherTest >());
	HX_STACK_LINE(23)
	this->add(hx::ClassOf< ::test::some::SomeTest >());
}
;
	return null();
}

//TestSuite_obj::~TestSuite_obj() { }

Dynamic TestSuite_obj::__CreateEmpty() { return  new TestSuite_obj; }
hx::ObjectPtr< TestSuite_obj > TestSuite_obj::__new()
{  hx::ObjectPtr< TestSuite_obj > _result_ = new TestSuite_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestSuite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestSuite_obj > _result_ = new TestSuite_obj();
	_result_->__construct();
	return _result_;}


TestSuite_obj::TestSuite_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#endif

hx::Class TestSuite_obj::__mClass;

void TestSuite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TestSuite","\xe6","\xdc","\x8f","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TestSuite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

