#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
#endif
#ifndef INCLUDED_some_Another
#include <some/Another.h>
#endif
#ifndef INCLUDED_test_some_AnotherTest
#include <test/some/AnotherTest.h>
#endif
namespace test{
namespace some{

Void AnotherTest_obj::__construct()
{
	return null();
}

//AnotherTest_obj::~AnotherTest_obj() { }

Dynamic AnotherTest_obj::__CreateEmpty() { return  new AnotherTest_obj; }
hx::ObjectPtr< AnotherTest_obj > AnotherTest_obj::__new()
{  hx::ObjectPtr< AnotherTest_obj > _result_ = new AnotherTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic AnotherTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnotherTest_obj > _result_ = new AnotherTest_obj();
	_result_->__construct();
	return _result_;}

Void AnotherTest_obj::triple( ){
{
		HX_STACK_FRAME("test.some.AnotherTest","triple",0x20195e75,"test.some.AnotherTest.triple","test/some/AnotherTest.hx",12,0x3598c7c7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13)
		::some::Another tmp = ::some::Another_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		Float tmp1 = tmp->triple((int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("AnotherTest.hx","\x49","\x4d","\x72","\xa8"),13,HX_HCSTRING("test.some.AnotherTest","\xb7","\xab","\x7d","\x32"),HX_HCSTRING("triple","\x9e","\xbe","\xd0","\x4a"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		::massive::munit::Assert_obj::areEqual((int)9,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnotherTest_obj,triple,(void))


AnotherTest_obj::AnotherTest_obj()
{
}

Dynamic AnotherTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"triple") ) { return triple_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("triple","\x9e","\xbe","\xd0","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnotherTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnotherTest_obj::__mClass,"__mClass");
};

#endif

hx::Class AnotherTest_obj::__mClass;

void AnotherTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("test.some.AnotherTest","\xb7","\xab","\x7d","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnotherTest_obj >;
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

void AnotherTest_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","test/some/AnotherTest.hx",9,0x3598c7c7)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","test/some/AnotherTest.hx",9,0x3598c7c7)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","test/some/AnotherTest.hx",9,0x3598c7c7)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("triple","\x9e","\xbe","\xd0","\x4a") , _Function_2_1::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace test
} // end namespace some
