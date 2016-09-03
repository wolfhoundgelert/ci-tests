#include <hxcpp.h>

#ifndef INCLUDED_test_some_AnotherOneTest
#include <test/some/AnotherOneTest.h>
#endif
namespace test{
namespace some{

Void AnotherOneTest_obj::__construct()
{
HX_STACK_FRAME("test.some.AnotherOneTest","new",0x376aaa05,"test.some.AnotherOneTest.new","test/some/AnotherOneTest.hx",9,0x0c85f4ab)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//AnotherOneTest_obj::~AnotherOneTest_obj() { }

Dynamic AnotherOneTest_obj::__CreateEmpty() { return  new AnotherOneTest_obj; }
hx::ObjectPtr< AnotherOneTest_obj > AnotherOneTest_obj::__new()
{  hx::ObjectPtr< AnotherOneTest_obj > _result_ = new AnotherOneTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic AnotherOneTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnotherOneTest_obj > _result_ = new AnotherOneTest_obj();
	_result_->__construct();
	return _result_;}


AnotherOneTest_obj::AnotherOneTest_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnotherOneTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnotherOneTest_obj::__mClass,"__mClass");
};

#endif

hx::Class AnotherOneTest_obj::__mClass;

void AnotherOneTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("test.some.AnotherOneTest","\x93","\x43","\xea","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AnotherOneTest_obj >;
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

} // end namespace test
} // end namespace some
